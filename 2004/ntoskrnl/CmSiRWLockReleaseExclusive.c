/*
 * XREFs of CmSiRWLockReleaseExclusive @ 0x1407C08A4
 * Callers:
 *     CmFcManagerUpdateFeatureConfigurations @ 0x14087A7F4 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A357B8 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 */

char __fastcall CmSiRWLockReleaseExclusive(volatile signed __int64 *BugCheckParameter2)
{
  char v2; // al

  v2 = _InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock(BugCheckParameter2);
  return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
}
