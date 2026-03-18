/*
 * XREFs of ExpCheckTestsigningEnabled @ 0x140951D9C
 * Callers:
 *     ExpSetTimerObject @ 0x1402897E0 (ExpSetTimerObject.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1406B4960 (RtlRunOnceExecuteOnce.c)
 */

char ExpCheckTestsigningEnabled()
{
  RtlRunOnceExecuteOnce(&ExpCheckTestSigningInit, (PRTL_RUN_ONCE_INIT_FN)ExpInitExpCheckTestSigningInfo, 0LL, 0LL);
  return ExpTestSigningEnabled;
}
