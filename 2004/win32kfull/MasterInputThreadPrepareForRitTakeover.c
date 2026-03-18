/*
 * XREFs of MasterInputThreadPrepareForRitTakeover @ 0x1C0103A54
 * Callers:
 *     EditionDeactivateMitInput @ 0x1C01035F0 (EditionDeactivateMitInput.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C002A128 (WPP_RECORDER_SF_s.c)
 *     ResetPointerDevices @ 0x1C004BEA8 (ResetPointerDevices.c)
 *     ?RITORDIT@@YAPEADXZ @ 0x1C0103AC8 (-RITORDIT@@YAPEADXZ.c)
 */

__int64 MasterInputThreadPrepareForRitTakeover()
{
  char *v0; // rax
  int v1; // edx
  int v2; // ecx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v0 = RITORDIT();
    WPP_RECORDER_SF_s(v2, v1, 16, 10, (__int64)&WPP_0716ad6f75da3c52aa1538117ba3dc10_Traceguids, (__int64)v0);
  }
  ResetPointerDevices();
  gbPendRecreateTouchInjectionDevices = 1;
  CleanupSensorExplicitly(2LL);
  return EtwTraceDitDisEngaged();
}
