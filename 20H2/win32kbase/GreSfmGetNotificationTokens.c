/*
 * XREFs of GreSfmGetNotificationTokens @ 0x1C0063E50
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C0060F80 (UserIsCurrentProcessDwm.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00626AC (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00626E0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0063F60 (-GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C008B010 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 __fastcall GreSfmGetNotificationTokens(
        unsigned int a1,
        unsigned int *a2,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int NotificationTokens; // edi
  __int64 v10; // rcx
  unsigned int v12; // [rsp+48h] [rbp+10h] BYREF
  LONG NumberOfWaitingThreads; // [rsp+50h] [rbp+18h] BYREF
  char v14; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v12 = 0;
  if ( ghsemDwmState )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
  if ( UserIsCurrentProcessDwm(v8, v7) )
  {
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v14, (SfmTokenArray *)((char *)gpSfmState + 32));
    NotificationTokens = SfmTokenArray::GetNotificationTokens(gpSfmState, a1, &v12, a3);
    if ( !*((_DWORD *)gpSfmState + 3) )
    {
      NumberOfWaitingThreads = 0;
      ZwResetEvent(*((HANDLE *)gpSfmState + 3), &NumberOfWaitingThreads);
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v14);
    v3 = v12;
  }
  else
  {
    NotificationTokens = -1073741790;
  }
  *a2 = v3;
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  if ( ghsemDwmState )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDwmState);
    PsLeavePriorityRegion(v10);
  }
  return NotificationTokens;
}
