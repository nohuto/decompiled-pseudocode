/*
 * XREFs of VidSchiNeedToForcePreemptNode @ 0x1C0013B98
 * Callers:
 *     VidSchiCheckHwProgress @ 0x1C007F230 (VidSchiCheckHwProgress.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C000AC50 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C000C8B0 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiIncrementContextReference @ 0x1C0010CC0 (VidSchiIncrementContextReference.c)
 */

char __fastcall VidSchiNeedToForcePreemptNode(__int64 a1)
{
  __int64 v1; // rbp
  char v3; // si
  __int64 v4; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v3 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 1712), &LockHandle);
  if ( *(_DWORD *)(a1 + 2880) && !*(_DWORD *)(a1 + 2888) )
  {
    v6 = *(_QWORD *)(a1 + 96);
    if ( v6 == *(_QWORD *)(a1 + 136) )
    {
      v8 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 1552) + 1560);
      *(_QWORD *)(a1 + 232) = v8;
      VidSchiIncrementContextReference(v8, v4);
      v3 = 1;
      VidSchiProfilePerformanceTick(1LL, v1, a1, 0LL, v8, 0LL, 0LL, -18LL);
    }
    else if ( v6 == *(_QWORD *)(a1 + 144) )
    {
      v7 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 1552) + 1560);
      if ( v7 )
        VidSchiUpdateLastCompletedPresentTimestamp(v7, 0LL, 1);
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v3;
}
