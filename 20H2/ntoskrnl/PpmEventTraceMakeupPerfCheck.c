/*
 * XREFs of PpmEventTraceMakeupPerfCheck @ 0x1405790F4
 * Callers:
 *     PpmCheckMakeupSkippedChecks @ 0x14033DB10 (PpmCheckMakeupSkippedChecks.c)
 * Callees:
 *     EtwWriteEx @ 0x14020E0B0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14027E3D0 (EtwEventEnabled.c)
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
