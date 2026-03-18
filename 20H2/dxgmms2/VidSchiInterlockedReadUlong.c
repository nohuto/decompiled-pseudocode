/*
 * XREFs of VidSchiInterlockedReadUlong @ 0x1C0010ACC
 * Callers:
 *     VidSchFlushHwQueue @ 0x1C0034B30 (VidSchFlushHwQueue.c)
 *     VidSchFlushContext @ 0x1C00692E0 (VidSchFlushContext.c)
 *     VidSchFlushDevice @ 0x1C0069460 (VidSchFlushDevice.c)
 *     VidSchFlushAdapter @ 0x1C00D2340 (VidSchFlushAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiInterlockedReadUlong(KSPIN_LOCK *a1, _DWORD *a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(a1, &LockHandle);
  LODWORD(a2) = *a2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return (unsigned int)a2;
}
