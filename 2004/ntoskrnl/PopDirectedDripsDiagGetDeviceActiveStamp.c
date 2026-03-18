/*
 * XREFs of PopDirectedDripsDiagGetDeviceActiveStamp @ 0x140577308
 * Callers:
 *     PopDirectedDripsDiagBroadcastTreeBegin @ 0x1408F3748 (PopDirectedDripsDiagBroadcastTreeBegin.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopDirectedDripsDiagGetDeviceActiveStamp(__int64 a1)
{
  __int64 v1; // rsi
  KSPIN_LOCK *v3; // rbp
  unsigned __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // edx
  bool v9; // zf

  v1 = 0LL;
  if ( a1 )
  {
    v3 = (KSPIN_LOCK *)(a1 + 600);
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 600));
    if ( *(_BYTE *)(a1 + 608) )
      v1 = *(_QWORD *)(a1 + 624);
    KxReleaseSpinLock(v3);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v9 = (v8 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v8;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
  }
  return v1;
}
