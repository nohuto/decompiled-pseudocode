/*
 * XREFs of VidSchiInterlockedReadUlong @ 0x1C0011C5C
 * Callers:
 *     VidSchFlushHwQueue @ 0x1C0034D90 (VidSchFlushHwQueue.c)
 *     VidSchFlushContext @ 0x1C0081D80 (VidSchFlushContext.c)
 *     VidSchFlushDevice @ 0x1C0081F00 (VidSchFlushDevice.c)
 *     VidSchFlushAdapter @ 0x1C00D1510 (VidSchFlushAdapter.c)
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
