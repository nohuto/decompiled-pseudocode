/*
 * XREFs of RestartCtxtPassive @ 0x1C000D890
 * Callers:
 *     <none>
 * Callees:
 *     InsertReadyQueue @ 0x1C000E2B0 (InsertReadyQueue.c)
 */

void __fastcall RestartCtxtPassive(struct _SLIST_ENTRY *a1)
{
  NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  InsertReadyQueue(a1);
  KeReleaseSpinLock(&SpinLock, NewIrql);
}
