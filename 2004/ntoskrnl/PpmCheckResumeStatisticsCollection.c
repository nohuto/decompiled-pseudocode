/*
 * XREFs of PpmCheckResumeStatisticsCollection @ 0x14038B250
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmReleaseLock @ 0x14021F630 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402DF294 (PpmAcquireLock.c)
 *     PpmPerfUpdateQosDisableReasons @ 0x14035F194 (PpmPerfUpdateQosDisableReasons.c)
 */

LONG PpmCheckResumeStatisticsCollection()
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmPerfUpdateQosDisableReasons(0LL);
  byte_140CFCDC8 = 0;
  return PpmReleaseLock(&PpmPerfPolicyLock);
}
