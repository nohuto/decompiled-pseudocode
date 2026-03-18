/*
 * XREFs of PiUEventNotifyClientPendingEvent @ 0x14078BD64
 * Callers:
 *     PiUEventNotifyClient @ 0x14078BC74 (PiUEventNotifyClient.c)
 *     PiUEventHandleGetEvent @ 0x14078C678 (PiUEventHandleGetEvent.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     PiUEventEstimateRequiredClientBufferSize @ 0x1402E0880 (PiUEventEstimateRequiredClientBufferSize.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall PiUEventNotifyClientPendingEvent(__int64 a1)
{
  int v2; // eax
  struct _FAST_MUTEX *v3; // rcx
  int v5; // [rsp+50h] [rbp+8h] BYREF

  ExAcquireFastMutex(*(PFAST_MUTEX *)(a1 + 16));
  v2 = PiUEventEstimateRequiredClientBufferSize(a1);
  v3 = *(struct _FAST_MUTEX **)(a1 + 16);
  v5 = v2;
  KeReleaseGuardedMutex(v3);
  return ZwUpdateWnfStateData(a1 + 88, (__int64)&v5);
}
