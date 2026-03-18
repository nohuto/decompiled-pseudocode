/*
 * XREFs of PpmPerfClearBootOverrides @ 0x14039FDE0
 * Callers:
 *     PopPerfBoostPowerRequest @ 0x140776D40 (PopPerfBoostPowerRequest.c)
 * Callees:
 *     PpmAcquireLock @ 0x14035D3A4 (PpmAcquireLock.c)
 *     PpmReinitializeHeteroEngine @ 0x1407A4748 (PpmReinitializeHeteroEngine.c)
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
