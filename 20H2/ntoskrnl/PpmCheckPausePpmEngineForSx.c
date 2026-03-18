/*
 * XREFs of PpmCheckPausePpmEngineForSx @ 0x14038D60C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmReleaseLock @ 0x140288880 (PpmReleaseLock.c)
 *     PpmPerfUpdateQosDisableReasons @ 0x14032FF94 (PpmPerfUpdateQosDisableReasons.c)
 *     PpmAcquireLock @ 0x14033EE5C (PpmAcquireLock.c)
 *     PpmCheckReInit @ 0x1407B5B84 (PpmCheckReInit.c)
 */

LONG PpmCheckPausePpmEngineForSx()
{
  __int64 v0; // rdx
  __int64 v1; // rcx

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmPerfUpdateQosDisableReasons(0LL);
  byte_140CFCDC8 = 1;
  PpmCheckForceDisarm = 1;
  PpmCheckReInit(v1, v0);
  return PpmReleaseLock(&PpmPerfPolicyLock);
}
