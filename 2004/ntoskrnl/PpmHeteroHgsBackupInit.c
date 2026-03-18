/*
 * XREFs of PpmHeteroHgsBackupInit @ 0x1403CA5E4
 * Callers:
 *     NtPowerInformation @ 0x140649BC0 (NtPowerInformation.c)
 * Callees:
 *     PpmReleaseLock @ 0x14021F630 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402DF294 (PpmAcquireLock.c)
 *     PopExecuteOnTargetProcessors @ 0x1402E3AE0 (PopExecuteOnTargetProcessors.c)
 *     PpmHeteroInitializeHgsSupport @ 0x1403CA624 (PpmHeteroInitializeHgsSupport.c)
 *     PpmReinitializeHeteroEngine @ 0x1407A6E98 (PpmReinitializeHeteroEngine.c)
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
