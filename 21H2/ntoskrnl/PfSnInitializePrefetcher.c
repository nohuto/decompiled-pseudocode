/*
 * XREFs of PfSnInitializePrefetcher @ 0x140B23CDC
 * Callers:
 *     PfInitializeSuperfetch @ 0x140B23A48 (PfInitializeSuperfetch.c)
 * Callees:
 *     KiSetTimerEx @ 0x1402E2D20 (KiSetTimerEx.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x1408506E0 (PfSnPrefetchCacheCtxInitialize.c)
 *     PfpCreateEvent @ 0x14085075C (PfpCreateEvent.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 PfSnInitializePrefetcher()
{
  unsigned __int64 Pool2; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  Mutex.Count = 1;
  qword_140C54690 = 0LL;
  qword_140C54688 = (__int64)&PfSnGlobals;
  PfSnGlobals = (__int64)&PfSnGlobals;
  Mutex.Owner = 0LL;
  qword_140C546A0 = &qword_140C54698;
  qword_140C54698 = &qword_140C54698;
  Mutex.Event.Header.WaitListHead.Blink = &Mutex.Event.Header.WaitListHead;
  Mutex.Event.Header.WaitListHead.Flink = &Mutex.Event.Header.WaitListHead;
  DestinationString = 0LL;
  Mutex.Contention = 0;
  LOWORD(Mutex.Event.Header.Lock) = 1;
  Mutex.Event.Header.Size = 6;
  Mutex.Event.Header.SignalState = 0;
  dword_140C546E4 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\PrefetchTracesReady");
  PfpCreateEvent(&DestinationString, SynchronizationEvent, (PVOID *)&qword_140C546E8);
  PfSnPrefetchCacheCtxInitialize((__int64)&unk_140C546F8);
  qword_140C54788 = 0LL;
  Pool2 = ExAllocatePool2(64LL, 0xA0uLL, 0x66506343u);
  if ( Pool2 )
  {
    *(_QWORD *)Pool2 = 0LL;
    *(_QWORD *)(Pool2 + 16) = Pool2 + 8;
    *(_QWORD *)(Pool2 + 8) = Pool2 + 8;
    *(_BYTE *)Pool2 = 8;
    *(_QWORD *)(Pool2 + 24) = 0LL;
    *(_DWORD *)(Pool2 + 60) = 0;
    *(_WORD *)(Pool2 + 56) = 0;
    *(_QWORD *)(Pool2 + 88) = PfSnTracingStateDpcRoutine;
    *(_DWORD *)(Pool2 + 64) = 275;
    *(_QWORD *)(Pool2 + 96) = Pool2;
    *(_QWORD *)(Pool2 + 120) = 0LL;
    *(_QWORD *)(Pool2 + 80) = 0LL;
    *(_QWORD *)(Pool2 + 144) = PfSnTracingStateExWorkerRoutine;
    *(_QWORD *)(Pool2 + 152) = Pool2;
    *(_QWORD *)(Pool2 + 128) = 0LL;
    KiSetTimerEx(Pool2, -6000000000LL, 0, 0, Pool2 + 64);
  }
  return 0LL;
}
