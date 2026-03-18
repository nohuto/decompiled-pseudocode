/*
 * XREFs of PopClearConnectedStandbyMarker @ 0x140808700
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14039A210 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1403697C8 (PopBsdHandleRequest.c)
 */

void __fastcall PopClearConnectedStandbyMarker(int a1)
{
  if ( !PopBsdSkipLogging )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    *(_QWORD *)&PopBsdPowerTransition = 0LL;
    BYTE8(PopBsdPowerTransition) &= ~2u;
    BYTE11(PopBsdPowerTransition) ^= (a1 ^ BYTE11(PopBsdPowerTransition)) & 0x3F;
    byte_140C548F7 = byte_140C548F7 & 0xF | (16 * HIBYTE(a1));
    PopBsdHandleRequest(3);
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  }
}
