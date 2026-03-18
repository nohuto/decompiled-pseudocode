/*
 * XREFs of PpmPerfClearBootOverrides @ 0x1403A2A40
 * Callers:
 *     PopPerfBoostPowerRequest @ 0x140787750 (PopPerfBoostPowerRequest.c)
 * Callees:
 *     PpmAcquireLock @ 0x14033EE5C (PpmAcquireLock.c)
 *     PpmReinitializeHeteroEngine @ 0x1407B4E88 (PpmReinitializeHeteroEngine.c)
 */

__int64 PpmPerfClearBootOverrides()
{
  __int64 result; // rax

  result = 0LL;
  if ( PpmPerfBootHeteroPolicyOverrideEnabled )
  {
    PpmPerfBootHeteroPolicyOverrideEnabled = 0;
    if ( PopHeteroSystem )
    {
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
      return PpmReinitializeHeteroEngine(0LL);
    }
  }
  return result;
}
