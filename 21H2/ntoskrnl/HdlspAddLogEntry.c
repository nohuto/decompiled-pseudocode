/*
 * XREFs of HdlspAddLogEntry @ 0x1409EFAE0
 * Callers:
 *     HdlspDispatch @ 0x1409EFE80 (HdlspDispatch.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     wcscmp @ 0x1403D40B0 (wcscmp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwQuerySystemInformation @ 0x1403FAC40 (ZwQuerySystemInformation.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall HdlspAddLogEntry(_WORD *Src)
{
  __int64 v2; // rax
  void *v3; // r12
  SIZE_T v4; // rbx
  PVOID PoolWithTag; // rax
  PVOID v6; // r14
  KIRQL v7; // di
  PKSPIN_LOCK v8; // rsi
  __int16 v9; // bp
  __int64 v10; // r15
  unsigned __int16 v11; // bp
  const wchar_t *v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  KSPIN_LOCK v15; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v19; // eax
  bool v20; // zf
  __int128 SystemInformation; // [rsp+20h] [rbp-68h] BYREF
  __int128 v22; // [rsp+30h] [rbp-58h]
  __int128 v23; // [rsp+40h] [rbp-48h]

  v2 = -1LL;
  v3 = 0LL;
  SystemInformation = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  do
    ++v2;
  while ( Src[v2] );
  v4 = 2 * v2 + 2;
  if ( KeGetCurrentIrql() < 2u )
  {
    if ( ZwQuerySystemInformation(SystemTimeOfDayInformation, &SystemInformation, 0x30u, 0LL) < 0 )
    {
      SystemInformation = 0LL;
      v22 = 0LL;
      v23 = 0LL;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x736C6448u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
      memmove(PoolWithTag, Src, v4);
    if ( (HeadlessGlobals[6] & 2) != 0 )
      v7 = -1;
    else
      v7 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
    v8 = HeadlessGlobals;
    v9 = *((_WORD *)HeadlessGlobals + 48);
    *((_DWORD *)HeadlessGlobals + 12) |= 4u;
    v10 = *((unsigned __int16 *)v8 + 49);
    v11 = (unsigned __int8)(v9 + 1);
    *((_WORD *)v8 + 48) = v11;
    if ( v11 == (_WORD)v10 )
    {
      v12 = *(const wchar_t **)(56 * v10 + v8[2] + 48);
      v13 = wcscmp(v12, L"Entry could not be recorded due to lack of memory.\n");
      *((_WORD *)v8 + 49) = (unsigned __int8)(v10 + 1);
      v3 = (void *)((unsigned __int64)v12 & -(__int64)(v13 != 0));
    }
    else if ( (_WORD)v10 == 0xFFFF )
    {
      *((_WORD *)v8 + 49) = 0;
    }
    v14 = 56LL * v11;
    v15 = v8[2];
    *(_OWORD *)(v14 + v15) = SystemInformation;
    *(_OWORD *)(v14 + v15 + 16) = v22;
    *(_OWORD *)(v14 + v15 + 32) = v23;
    if ( v6 )
      *(_QWORD *)(56LL * *((unsigned __int16 *)HeadlessGlobals + 48) + HeadlessGlobals[2] + 48) = v6;
    else
      *(_QWORD *)(56LL * *((unsigned __int16 *)HeadlessGlobals + 48) + HeadlessGlobals[2] + 48) = L"Entry could not be rec"
                                                                                                   "orded due to lack of memory.\n";
    if ( v7 != 0xFF )
    {
      KxReleaseSpinLock(HeadlessGlobals);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v7 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v19 = ~(unsigned __int16)(-1LL << (v7 + 1));
            v20 = (v19 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v19;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v7);
    }
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
  }
}
