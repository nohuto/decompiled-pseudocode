/*
 * XREFs of PpmCheckResumePpmEngineFromSx @ 0x14038D57C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmReleaseLock @ 0x140288880 (PpmReleaseLock.c)
 *     PpmPerfUpdateQosDisableReasons @ 0x14032FF94 (PpmPerfUpdateQosDisableReasons.c)
 *     PpmAcquireLock @ 0x14033EE5C (PpmAcquireLock.c)
 *     PpmCheckReInit @ 0x1407B5B84 (PpmCheckReInit.c)
 */

LONG PpmCheckResumePpmEngineFromSx()
{
  __int64 v0; // rdx
  __int64 v1; // rcx

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  if ( PpmHeteroHgsEnabled )
  {
    __writemsr(0x17D0u, (*(_QWORD *)(PpmHeteroHgsTableMdl + 48) << 12) | 1LL);
    v1 = 6097LL;
    v0 = 0LL;
    __writemsr(0x17D1u, 1uLL);
  }
  PpmCheckForceDisarm = 0;
  PpmCheckReInit(v1, v0);
  PpmPerfUpdateQosDisableReasons(0LL);
  byte_140CFCDC8 = 0;
  return PpmReleaseLock(&PpmPerfPolicyLock);
}
