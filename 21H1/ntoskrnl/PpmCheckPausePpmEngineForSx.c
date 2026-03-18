/*
 * XREFs of PpmCheckPausePpmEngineForSx @ 0x14038A270
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmPerfUpdateQosDisableReasons @ 0x1403217E4 (PpmPerfUpdateQosDisableReasons.c)
 *     PpmAcquireLock @ 0x14035D3A4 (PpmAcquireLock.c)
 */

char PpmCheckPausePpmEngineForSx()
{
  char result; // al

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  result = PpmPerfUpdateQosDisableReasons(0LL);
  byte_140CFCD88 = 1;
  return result;
}
