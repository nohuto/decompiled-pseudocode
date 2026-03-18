/*
 * XREFs of PfSnInitializePrefetcher @ 0x140A662F0
 * Callers:
 *     PfInitializeSuperfetch @ 0x140A6605C (PfInitializeSuperfetch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     KiSetTimerEx @ 0x1402C90A0 (KiSetTimerEx.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x1407ADACC (PfSnPrefetchCacheCtxInitialize.c)
 *     PfpCreateEvent @ 0x1407ADB0C (PfpCreateEvent.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 PfSnInitializePrefetcher()
{
  _QWORD *PoolWithTag; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  FastMutex.Count = 1;
  qword_140C50250 = 0LL;
  qword_140C50248 = (__int64)&PfSnGlobals;
  PfSnGlobals = (__int64)&PfSnGlobals;
  FastMutex.Owner = 0LL;
  qword_140C50260 = &qword_140C50258;
  qword_140C50258 = &qword_140C50258;
  FastMutex.Event.Header.WaitListHead.Blink = &FastMutex.Event.Header.WaitListHead;
  FastMutex.Event.Header.WaitListHead.Flink = &FastMutex.Event.Header.WaitListHead;
  DestinationString = 0LL;
  FastMutex.Contention = 0;
  LOWORD(FastMutex.Event.Header.Lock) = 1;
  FastMutex.Event.Header.Size = 6;
  FastMutex.Event.Header.SignalState = 0;
  dword_140C502A4 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\PrefetchTracesReady");
  PfpCreateEvent(&DestinationString, SynchronizationEvent, (PVOID *)&qword_140C502A8);
  PfSnPrefetchCacheCtxInitialize((__int64)&unk_140C502B8);
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
