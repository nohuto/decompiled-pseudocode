/*
 * XREFs of ExpInitSystemPhase0 @ 0x140A6A014
 * Callers:
 *     ExInitSystem @ 0x140A69944 (ExInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1402C1550 (ExInitializeResourceLite.c)
 *     ExGenRandom @ 0x1402D1110 (ExGenRandom.c)
 *     RtlHpGlobalsInitialize @ 0x1403C42A0 (RtlHpGlobalsInitialize.c)
 *     ExGetSuiteMask @ 0x1407BE250 (ExGetSuiteMask.c)
 */

char ExpInitSystemPhase0()
{
  bool v0; // cl
  unsigned __int64 v1; // rbx
  char result; // al
  __int128 v3; // [rsp+20h] [rbp-18h]

  ExpTimeout = -40000000LL;
  MEMORY[0xFFFFF780000002D6] = 10;
  qword_140C16B48 = (__int64)&ExpSystemResourcesList;
  ExpSystemResourcesList = (__int64)&ExpSystemResourcesList;
  ExpEnvironmentLock.Event.Header.WaitListHead.Blink = &ExpEnvironmentLock.Event.Header.WaitListHead;
  ExpEnvironmentLock.Event.Header.WaitListHead.Flink = &ExpEnvironmentLock.Event.Header.WaitListHead;
  qword_140C16B18 = (__int64)&ExNPagedLookasideListHead;
  ExNPagedLookasideListHead = (__int64)&ExNPagedLookasideListHead;
  qword_140C16AD8 = (__int64)&ExPagedLookasideListHead;
  ExPagedLookasideListHead = (__int64)&ExPagedLookasideListHead;
  qword_140C19858 = (__int64)&ExpFirmwareTableProviderListHead;
  ExpFirmwareTableProviderListHead = (__int64)&ExpFirmwareTableProviderListHead;
  ExpEnvironmentLock.Count = 1;
  ExpEnvironmentLock.Owner = 0LL;
  ExpEnvironmentLock.Contention = 0;
  LOWORD(ExpEnvironmentLock.Event.Header.Lock) = 1;
  ExpEnvironmentLock.Event.Header.Size = 6;
  ExpEnvironmentLock.Event.Header.SignalState = 0;
  ExNPagedLookasideLock = 0LL;
  ExPagedLookasideLock = 0LL;
  ExInitializeResourceLite(&ExpFirmwareTableResource);
  v0 = (*(_DWORD *)(KeLoaderBlock_0 + 264) & 4) != 0;
  ExpConDrvLoadLock = 0LL;
  ExpFirmwarePageProtectionSupported = v0;
  if ( CmSuiteBufferType == 7 )
    MEMORY[0xFFFFF780000002D0] = ExGetSuiteMask((__int64)CmSuiteBuffer, ExpMultiUserTS);
  v1 = (unsigned __int64)(unsigned int)ExGenRandom(1) << 32;
  RtlpHeapKey = v1 | (unsigned int)ExGenRandom(1);
  RtlHpGlobalsInitialize();
  result = 1;
  v3 = 0LL;
  LOBYTE(v3) = 2;
  RtlpHpLegacyEnvHandle = v3;
  return result;
}
