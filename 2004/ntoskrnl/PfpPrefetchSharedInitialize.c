/*
 * XREFs of PfpPrefetchSharedInitialize @ 0x1406D1EA4
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1406BB750 (PfSnAsyncPrefetchWorker.c)
 *     PfpPrefetchRequestPerform @ 0x1406D0DA8 (PfpPrefetchRequestPerform.c)
 *     PfpQueryFileExtentsRequest @ 0x1408DC70C (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     memset @ 0x14040A280 (memset.c)
 */

void __fastcall PfpPrefetchSharedInitialize(__int64 a1)
{
  memset((void *)a1, 0, 0x90uLL);
  *(_QWORD *)(a1 + 48) = a1;
  *(_QWORD *)(a1 + 40) = PfpPrefetchSharedConflictNotifyStart;
  KeInitializeEvent((PRKEVENT)(a1 + 88), NotificationEvent, 0);
  *(_QWORD *)(a1 + 120) = 1LL;
}
