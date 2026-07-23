/*
 * XREFs of PiUEventNotifyClientPendingEvent @ 0x1406FE240
 * Callers:
 *     PiUEventHandleGetEvent @ 0x1406B8FF8 (PiUEventHandleGetEvent.c)
 *     PiUEventNotifyClient @ 0x1406FE15C (PiUEventNotifyClient.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     PiUEventEstimateRequiredClientBufferSize @ 0x1402F9310 (PiUEventEstimateRequiredClientBufferSize.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     ZwUpdateWnfStateData @ 0x1403FDF80 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall PiUEventNotifyClientPendingEvent(__int64 a1)
{
  int v2; // eax
  struct _FAST_MUTEX *v3; // rcx
  int Buffer; // [rsp+50h] [rbp+8h] BYREF

  ExAcquireFastMutex(*(PFAST_MUTEX *)(a1 + 16));
  v2 = PiUEventEstimateRequiredClientBufferSize(a1);
  v3 = *(struct _FAST_MUTEX **)(a1 + 16);
  Buffer = v2;
  KeReleaseGuardedMutex(v3);
  return ZwUpdateWnfStateData((PCWNF_STATE_NAME)(a1 + 88), &Buffer, 4u, 0LL, 0LL, 0, 0);
}
