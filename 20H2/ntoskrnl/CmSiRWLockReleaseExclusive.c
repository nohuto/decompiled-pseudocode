/*
 * XREFs of CmSiRWLockReleaseExclusive @ 0x1407CF134
 * Callers:
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140880364 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A3B7B8 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 */

char __fastcall CmSiRWLockReleaseExclusive(volatile signed __int64 *BugCheckParameter2)
{
  char v2; // al

  v2 = _InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock(BugCheckParameter2);
  return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
}
