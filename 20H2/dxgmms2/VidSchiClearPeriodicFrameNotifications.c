/*
 * XREFs of VidSchiClearPeriodicFrameNotifications @ 0x1C002EFF8
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C0001924 (VidSchiSetFlipDevice.c)
 *     VidSchTerminateAdapter @ 0x1C00D3950 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchDestroyPeriodicFrameNotification @ 0x1C0033E30 (VidSchDestroyPeriodicFrameNotification.c)
 */

void __fastcall VidSchiClearPeriodicFrameNotifications(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rsi
  void *v6; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 8LL * a2 + 3104);
  if ( *(_QWORD *)(v3 + 66448) )
  {
    v4 = 0LL;
    v5 = 8LL;
    do
    {
      v6 = *(void **)(v4 + *(_QWORD *)(v3 + 66448));
      if ( v6 )
        VidSchDestroyPeriodicFrameNotification(v6);
      v4 += 8LL;
      --v5;
    }
    while ( v5 );
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1712), &LockHandle);
    ExFreePoolWithTag(*(PVOID *)(v3 + 66448), 0x62616956u);
    *(_QWORD *)(v3 + 66448) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
