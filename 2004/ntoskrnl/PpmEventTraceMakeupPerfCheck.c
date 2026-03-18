/*
 * XREFs of PpmEventTraceMakeupPerfCheck @ 0x1405756C4
 * Callers:
 *     PpmCheckMakeupSkippedChecks @ 0x1402E3970 (PpmCheckMakeupSkippedChecks.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x1402934F0 (EtwWriteEx.c)
 */

void PpmEventTraceMakeupPerfCheck()
{
  REGHANDLE v0; // rbx

  if ( PpmEtwRegistered )
  {
    v0 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PERF_CHECK_MAKEUP) )
      EtwWriteEx(v0, &PPM_ETW_PERF_CHECK_MAKEUP, 0LL, 0, 0LL, 0LL, 0, 0LL);
  }
}
