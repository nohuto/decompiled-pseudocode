/*
 * XREFs of MiUnlockWorkingSetCoreExclusive @ 0x140549DFC
 * Callers:
 *     MiAllocateWsle @ 0x140211190 (MiAllocateWsle.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 */

void __fastcall MiUnlockWorkingSetCoreExclusive(struct _KLOCK_QUEUE_HANDLE *a1)
{
  KeReleaseInStackQueuedSpinLockFromDpcLevel(a1);
}
