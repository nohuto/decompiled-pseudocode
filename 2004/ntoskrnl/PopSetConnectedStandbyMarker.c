/*
 * XREFs of PopSetConnectedStandbyMarker @ 0x1408DE0F8
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14056B118 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1403F21A4 (PopBsdHandleRequest.c)
 */

void __fastcall PopSetConnectedStandbyMarker(__int64 a1, char a2)
{
  __int64 v3; // rdi

  v3 = PopWnfCsEnterScenarioId;
  if ( !PopBsdSkipLogging )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    BYTE8(PopBsdPowerTransition) |= 2u;
    *((_QWORD *)&xmmword_140C50558 + 1) = v3;
    BYTE10(PopBsdPowerTransition) ^= (a2 ^ BYTE10(PopBsdPowerTransition)) & 0x3F;
    PopBsdHandleRequest(1);
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  }
}
