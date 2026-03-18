/*
 * XREFs of KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x14056E3D0
 * Callers:
 *     DifKeAcquireInStackQueuedSpinLockRaiseToSynchWrapper @ 0x140612160 (DifKeAcquireInStackQueuedSpinLockRaiseToSynchWrapper.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x1403119F0 (KxAcquireQueuedSpinLock.c)
 */

__int64 __fastcall KeAcquireInStackQueuedSpinLockRaiseToSynch(volatile __int64 *a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // r11
  _DWORD *SchedulerAssist; // r9

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ~((unsigned __int16)(1LL << (CurrentIrql + 1)) - 1) & 0x1FFC;
  }
  *(_BYTE *)(a2 + 16) = CurrentIrql;
  return KxAcquireQueuedSpinLock(a2, a1);
}
