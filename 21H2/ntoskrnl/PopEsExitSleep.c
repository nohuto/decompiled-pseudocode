/*
 * XREFs of PopEsExitSleep @ 0x140808C14
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PopEsStartTelemetry @ 0x14081CC60 (PopEsStartTelemetry.c)
 */

void PopEsExitSleep()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
  PopEsStartTelemetry();
  PopReleaseRwLock((ULONG_PTR)&PopEsLock);
}
