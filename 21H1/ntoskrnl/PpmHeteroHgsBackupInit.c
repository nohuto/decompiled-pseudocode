/*
 * XREFs of PpmHeteroHgsBackupInit @ 0x1403C9804
 * Callers:
 *     NtPowerInformation @ 0x14070B1B0 (NtPowerInformation.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x140204F30 (PopExecuteOnTargetProcessors.c)
 *     PpmReleaseLock @ 0x140278680 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14035D3A4 (PpmAcquireLock.c)
 *     PpmHeteroInitializeHgsSupport @ 0x1403C9844 (PpmHeteroInitializeHgsSupport.c)
 *     PpmReinitializeHeteroEngine @ 0x1407A4748 (PpmReinitializeHeteroEngine.c)
 */

void PpmHeteroHgsBackupInit()
{
  __int64 v0; // rcx

  if ( !PpmHeteroHgsEnabled )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    if ( (int)PpmHeteroInitializeHgsSupport() >= 0 )
    {
      PopExecuteOnTargetProcessors((__int64)PpmCheckRegistered, (__int64)PpmHeteroHgsBackupProcessorInit, 0LL, 0LL);
      LOBYTE(v0) = 1;
      PpmReinitializeHeteroEngine(v0);
    }
    else
    {
      PpmReleaseLock(&PpmPerfPolicyLock);
    }
  }
}
