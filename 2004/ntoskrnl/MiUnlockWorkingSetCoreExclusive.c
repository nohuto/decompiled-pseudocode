/*
 * XREFs of MiUnlockWorkingSetCoreExclusive @ 0x14054A44C
 * Callers:
 *     MiAllocateWsle @ 0x1402A3CA0 (MiAllocateWsle.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 */

void __fastcall MiUnlockWorkingSetCoreExclusive(struct _KLOCK_QUEUE_HANDLE *a1)
{
  KeReleaseInStackQueuedSpinLockFromDpcLevel(a1);
}
