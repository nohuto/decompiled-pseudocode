/*
 * XREFs of PopSetupHighPerfPowerRequest @ 0x1407C1E10
 * Callers:
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     PpmAcquireLock @ 0x1402DF294 (PpmAcquireLock.c)
 *     PpmEndHighPerfRequest @ 0x1403A3F74 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x1403A4D10 (PpmBeginHighPerfRequest.c)
 *     PpmReinitializeHeteroEngine @ 0x1407A6E98 (PpmReinitializeHeteroEngine.c)
 */

__int64 PopSetupHighPerfPowerRequest()
{
  int v0; // ebx

  if ( PpmHighPerfDuration[0] )
  {
    v0 = PpmBeginHighPerfRequest();
    if ( v0 >= 0 )
    {
      PpmEndHighPerfRequest(0);
      return (unsigned int)v0;
    }
  }
  else
  {
    v0 = 0;
  }
  PpmPerfBootHeteroPolicyOverrideEnabled = 0;
  if ( PopHeteroSystem )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    PpmReinitializeHeteroEngine(0);
  }
  return (unsigned int)v0;
}
