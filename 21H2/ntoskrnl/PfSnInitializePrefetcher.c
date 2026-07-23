/*
 * XREFs of PfSnInitializePrefetcher @ 0x140A6BA00
 * Callers:
 *     PfInitializeSuperfetch @ 0x140A6B76C (PfInitializeSuperfetch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     KiSetTimerEx @ 0x1402814E0 (KiSetTimerEx.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x1407C032C (PfSnPrefetchCacheCtxInitialize.c)
 *     PfpCreateEvent @ 0x1407C036C (PfpCreateEvent.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 PfSnInitializePrefetcher()
{
  _QWORD *PoolWithTag; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  Mutex.Count = 1;
  qword_140C50490 = 0LL;
  qword_140C50488 = (__int64)&PfSnGlobals;
  PfSnGlobals = (__int64)&PfSnGlobals;
  Mutex.Owner = 0LL;
  qword_140C504A0 = &qword_140C50498;
  qword_140C50498 = &qword_140C50498;
  Mutex.Event.Header.WaitListHead.Blink = &Mutex.Event.Header.WaitListHead;
  Mutex.Event.Header.WaitListHead.Flink = &Mutex.Event.Header.WaitListHead;
  DestinationString = 0LL;
  Mutex.Contention = 0;
  LOWORD(Mutex.Event.Header.Lock) = 1;
  Mutex.Event.Header.Size = 6;
  Mutex.Event.Header.SignalState = 0;
  dword_140C504E4 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\PrefetchTracesReady");
  PfpCreateEvent(&DestinationString, SynchronizationEvent, (PVOID *)&qword_140C504E8);
  PfSnPrefetchCacheCtxInitialize((__int64)&unk_140C504F8);
  RegHandle = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xA0uLL, 0x66506343u);
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[2] = PoolWithTag + 1;
    PoolWithTag[1] = PoolWithTag + 1;
    *(_BYTE *)PoolWithTag = 8;
    PoolWithTag[3] = 0LL;
    *((_DWORD *)PoolWithTag + 15) = 0;
    *((_WORD *)PoolWithTag + 28) = 0;
    PoolWithTag[11] = PfSnTracingStateDpcRoutine;
    *((_DWORD *)PoolWithTag + 16) = 275;
    PoolWithTag[12] = PoolWithTag;
    PoolWithTag[15] = 0LL;
    PoolWithTag[10] = 0LL;
    PoolWithTag[18] = PfSnTracingStateExWorkerRoutine;
    PoolWithTag[19] = PoolWithTag;
    PoolWithTag[16] = 0LL;
    KiSetTimerEx((__int64)PoolWithTag, -6000000000LL, 0, 0, (__int64)(PoolWithTag + 8));
  }
  return 0LL;
}
