/*
 * XREFs of PpmCheckResumeStatisticsCollection @ 0x14038A1E0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmReleaseLock @ 0x140278680 (PpmReleaseLock.c)
 *     PpmPerfUpdateQosDisableReasons @ 0x1403217E4 (PpmPerfUpdateQosDisableReasons.c)
 *     PpmAcquireLock @ 0x14035D3A4 (PpmAcquireLock.c)
 */

LONG PpmCheckResumeStatisticsCollection()
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmPerfUpdateQosDisableReasons(0LL);
  byte_140CFCD88 = 0;
  return PpmReleaseLock(&PpmPerfPolicyLock);
}
