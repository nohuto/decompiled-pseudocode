/*
 * XREFs of MiUnlockWorkingSetCoreExclusive @ 0x14054DE1C
 * Callers:
 *     MiAllocateWsle @ 0x140272FE0 (MiAllocateWsle.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 */

void __fastcall MiUnlockWorkingSetCoreExclusive(struct _KLOCK_QUEUE_HANDLE *a1)
{
  KeReleaseInStackQueuedSpinLockFromDpcLevel(a1);
}
