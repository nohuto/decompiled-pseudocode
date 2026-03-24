/*
 * XREFs of PiUEventNotifyClientPendingEvent @ 0x1406E6E60
 * Callers:
 *     PiUEventHandleGetEvent @ 0x1406E1D18 (PiUEventHandleGetEvent.c)
 *     PiUEventNotifyClient @ 0x1406E6D7C (PiUEventNotifyClient.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140265CD0 (KeReleaseGuardedMutex.c)
 *     PiUEventEstimateRequiredClientBufferSize @ 0x1402EE5C0 (PiUEventEstimateRequiredClientBufferSize.c)
 *     ExAcquireFastMutex @ 0x14034A080 (ExAcquireFastMutex.c)
 *     ZwUpdateWnfStateData @ 0x1403FDDA0 (ZwUpdateWnfStateData.c)
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
