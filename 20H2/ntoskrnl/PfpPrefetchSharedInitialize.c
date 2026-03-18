/*
 * XREFs of PfpPrefetchSharedInitialize @ 0x1406E7458
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1406E75F0 (PfSnAsyncPrefetchWorker.c)
 *     PfpPrefetchRequestPerform @ 0x1406F18F0 (PfpPrefetchRequestPerform.c)
 *     PfpQueryFileExtentsRequest @ 0x1408E254C (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     memset @ 0x140411300 (memset.c)
 */

void __fastcall PfpPrefetchSharedInitialize(__int64 a1)
{
  memset((void *)a1, 0, 0x90uLL);
  *(_QWORD *)(a1 + 48) = a1;
  *(_QWORD *)(a1 + 40) = PfpPrefetchSharedConflictNotifyStart;
  KeInitializeEvent((PRKEVENT)(a1 + 88), NotificationEvent, 0);
  *(_QWORD *)(a1 + 120) = 1LL;
}
