/*
 * XREFs of IopInterlockedDecrementUlong @ 0x1403A156C
 * Callers:
 *     IopDecrementDeviceObjectRefCount @ 0x140259288 (IopDecrementDeviceObjectRefCount.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 */

__int64 __fastcall IopInterlockedDecrementUlong(KSPIN_LOCK_QUEUE_NUMBER Number, _DWORD *a2)
{
  KIRQL v4; // al

  v4 = KeAcquireQueuedSpinLock(Number);
  LODWORD(a2) = --*a2;
  KeReleaseQueuedSpinLock(Number, v4);
  return (unsigned int)a2;
}
