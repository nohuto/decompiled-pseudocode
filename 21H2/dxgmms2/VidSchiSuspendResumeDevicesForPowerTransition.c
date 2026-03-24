/*
 * XREFs of VidSchiSuspendResumeDevicesForPowerTransition @ 0x1C0012A38
 * Callers:
 *     VidSchResumeAdapter @ 0x1C0086250 (VidSchResumeAdapter.c)
 *     VidSchSuspendAdapter @ 0x1C008B2B0 (VidSchSuspendAdapter.c)
 * Callees:
 *     VidSchiDecrementDeviceReference @ 0x1C0011678 (VidSchiDecrementDeviceReference.c)
 *     VidSchSuspendResumeDevice @ 0x1C0012580 (VidSchSuspendResumeDevice.c)
 */

void __fastcall VidSchiSuspendResumeDevicesForPowerTransition(__int64 a1, bool a2)
{
  KSPIN_LOCK *v2; // r15
  _QWORD *v5; // rsi
  char *v6; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  *(_BYTE *)(a1 + 2912) = a2;
  v2 = (KSPIN_LOCK *)(a1 + 1712);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1712), &LockHandle);
  v5 = *(_QWORD **)(a1 + 288);
  while ( v5 != (_QWORD *)(a1 + 288) )
  {
    v6 = (char *)(v5 - 13);
    _InterlockedIncrement64(v5 - 10);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( (*(_DWORD *)(v5 - 7) & 0x10) == 0 && *(char **)(a1 + 232) != v6 )
      VidSchSuspendResumeDevice((struct _VIDSCH_DEVICE *)(v5 - 13), a2, 1, 0);
    KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
    v5 = (_QWORD *)*v5;
    VidSchiDecrementDeviceReference(v6, 1);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
