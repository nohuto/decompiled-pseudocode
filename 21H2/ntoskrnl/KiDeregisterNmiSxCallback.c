/*
 * XREFs of KiDeregisterNmiSxCallback @ 0x14056A8C4
 * Callers:
 *     KeDeregisterNmiCallback @ 0x14056A170 (KeDeregisterNmiCallback.c)
 *     DifKeDeregisterNmiCallbackWrapper @ 0x140612B20 (DifKeDeregisterNmiCallbackWrapper.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x1403CBB10 (KiSetSystemAffinityThreadToProcessor.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KiDeregisterNmiSxCallback(PVOID a1)
{
  int v2; // esi
  KIRQL v3; // al
  PVOID *v4; // rbx
  PVOID *v5; // rcx
  unsigned __int64 v6; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v10; // eax
  bool v11; // zf
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r10
  _DWORD *v15; // r8
  int v16; // eax
  unsigned int v17; // edi
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  PreviousAffinity = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&KiNmiCallbackListLock);
  v4 = (PVOID *)KiNmiCallbackListHead;
  v5 = &KiNmiCallbackListHead;
  v6 = v3;
  while ( 1 )
  {
    if ( !v4 )
    {
      KxReleaseSpinLock(&KiNmiCallbackListLock);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v11 = (v10 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v10;
            if ( v11 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v6);
      return 3221225480LL;
    }
    if ( v4[3] == a1 )
      break;
    v5 = v4;
    v4 = (PVOID *)*v4;
  }
  *v5 = *v4;
  KxReleaseSpinLock(&KiNmiCallbackListLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v13 = KeGetCurrentIrql();
      if ( v13 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v13 >= 2u )
      {
        v14 = KeGetCurrentPrcb();
        v15 = v14->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v11 = (v16 & v15[5]) == 0;
        v15[5] &= v16;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)v14);
      }
    }
  }
  __writecr8(v6);
  v17 = 0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    do
    {
      if ( v2 )
      {
        KiSetSystemAffinityThreadToProcessor(v17, 0LL);
      }
      else
      {
        KiSetSystemAffinityThreadToProcessor(v17, &PreviousAffinity);
        v2 = 1;
      }
      ++v17;
    }
    while ( v17 < (unsigned int)KeNumberProcessors_0 );
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  }
  ExFreePoolWithTag(v4, 0x494D4E4Bu);
  return 0LL;
}
