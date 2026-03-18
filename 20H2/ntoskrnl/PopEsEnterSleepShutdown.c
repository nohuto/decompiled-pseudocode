/*
 * XREFs of PopEsEnterSleepShutdown @ 0x14077522C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     PopCurrentPowerState @ 0x1406F8A3C (PopCurrentPowerState.c)
 *     PopEsSnapTelemetry @ 0x140775280 (PopEsSnapTelemetry.c)
 */

void PopEsEnterSleepShutdown()
{
  __int64 v0; // rdx
  _OWORD v1[2]; // [rsp+20h] [rbp-28h] BYREF

  memset(v1, 0, sizeof(v1));
  PopCurrentPowerState(v1);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
  PopEsSnapTelemetry(v1, v0);
  PopEsLastStateChangeTimeStamp = 0LL;
  PopReleaseRwLock((ULONG_PTR)&PopEsLock);
}
