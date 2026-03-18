/*
 * XREFs of PopEsExitSleep @ 0x1407675C8
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     PopEsStartTelemetry @ 0x14077C3A4 (PopEsStartTelemetry.c)
 */

void PopEsExitSleep()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
  PopEsStartTelemetry();
  PopReleaseRwLock((ULONG_PTR)&PopEsLock);
}
