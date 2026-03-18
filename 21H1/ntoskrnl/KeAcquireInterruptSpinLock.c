/*
 * XREFs of KeAcquireInterruptSpinLock @ 0x140316730
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x1402773A0 (KxAcquireSpinLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

KIRQL __stdcall KeAcquireInterruptSpinLock(PKINTERRUPT Interrupt)
{
  unsigned __int64 SynchronizeIrql; // rdx
  KIRQL CurrentIrql; // di
  _DWORD *SchedulerAssist; // r10

  SynchronizeIrql = Interrupt->SynchronizeIrql;
  if ( !(_BYTE)SynchronizeIrql )
    KeBugCheckEx(0x13Bu, 1uLL, (ULONG_PTR)Interrupt, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(SynchronizeIrql);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(SynchronizeIrql - 2) <= 0xDu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ((1LL << ((unsigned __int8)SynchronizeIrql + 1)) - 1) & ~((1LL << (CurrentIrql + 1)) - 1) & 0xFFFFFFFC;
  }
  KxAcquireSpinLock(Interrupt->ActualLock);
  return CurrentIrql;
}
