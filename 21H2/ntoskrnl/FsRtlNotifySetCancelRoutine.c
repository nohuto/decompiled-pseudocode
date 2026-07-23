/*
 * XREFs of FsRtlNotifySetCancelRoutine @ 0x140228778
 * Callers:
 *     FsRtlNotifyFilterChangeDirectory @ 0x1405F02F0 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyCompleteIrp @ 0x1405F0C54 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1405F0E60 (FsRtlNotifyFilterChangeDirectoryLite.c)
 * Callees:
 *     FsRtlCancelNotify @ 0x140228890 (FsRtlCancelNotify.c)
 *     KeReleaseQueuedSpinLock @ 0x14031B920 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14031B9C0 (KeAcquireQueuedSpinLock.c)
 */

char __fastcall FsRtlNotifySetCancelRoutine(__int64 a1, __int64 a2)
{
  char v3; // si
  __int64 v6; // rbx
  KIRQL v7; // dl

  v3 = 0;
  *(_BYTE *)(a1 + 69) = KeAcquireQueuedSpinLock(7uLL);
  if ( a2 )
  {
    v6 = _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
    v7 = *(_BYTE *)(a1 + 69);
    *(_QWORD *)(a1 + 56) = 0LL;
    KeReleaseQueuedSpinLock(7uLL, v7);
    if ( v6 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 112));
      return 1;
    }
  }
  else if ( *(_BYTE *)(a1 + 68) )
  {
    FsRtlCancelNotify(0LL, a1);
  }
  else
  {
    _InterlockedExchange64((volatile __int64 *)(a1 + 104), (__int64)FsRtlCancelNotify);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  }
  return v3;
}
