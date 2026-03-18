/*
 * XREFs of PpmCheckPausePpmEngineForSx @ 0x14038B2E0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmAcquireLock @ 0x1402DF294 (PpmAcquireLock.c)
 *     PpmPerfUpdateQosDisableReasons @ 0x14035F194 (PpmPerfUpdateQosDisableReasons.c)
 */

char PpmCheckPausePpmEngineForSx()
{
  char result; // al

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  result = PpmPerfUpdateQosDisableReasons(0LL);
  byte_140CFCDC8 = 1;
  return result;
}
