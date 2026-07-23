/*
 * XREFs of MiUnlockWorkingSetCoreExclusive @ 0x14054FB2C
 * Callers:
 *     MiAllocateWsle @ 0x1402B65C0 (MiAllocateWsle.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 */

void __fastcall MiUnlockWorkingSetCoreExclusive(struct _KLOCK_QUEUE_HANDLE *a1)
{
  KeReleaseInStackQueuedSpinLockFromDpcLevel(a1);
}
