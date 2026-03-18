/*
 * XREFs of PopSetupHighPerfPowerRequest @ 0x1407BEB20
 * Callers:
 *     PoInitSystem @ 0x140A3BEEC (PoInitSystem.c)
 * Callees:
 *     PpmAcquireLock @ 0x14035D3A4 (PpmAcquireLock.c)
 *     PpmEndHighPerfRequest @ 0x1403A3814 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x1403A4590 (PpmBeginHighPerfRequest.c)
 *     PpmReinitializeHeteroEngine @ 0x1407A4748 (PpmReinitializeHeteroEngine.c)
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
