/*
 * XREFs of PopSetupHighPerfPowerRequest @ 0x1407D0610
 * Callers:
 *     PoInitSystem @ 0x140A41DE0 (PoInitSystem.c)
 * Callees:
 *     PpmAcquireLock @ 0x14033EE5C (PpmAcquireLock.c)
 *     PpmEndHighPerfRequest @ 0x1403A63A0 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x1403A7110 (PpmBeginHighPerfRequest.c)
 *     PpmReinitializeHeteroEngine @ 0x1407B4E88 (PpmReinitializeHeteroEngine.c)
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
