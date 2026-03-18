/*
 * XREFs of _MasterInputThreadPrepareForRitTakeover@0 @ 0xD3CB8
 * Callers:
 *     _EditionDeactivateMitInput@0 @ 0xD3BD6 (_EditionDeactivateMitInput@0.c)
 * Callees:
 *     _WPP_RECORDER_SF_s@24 @ 0x195D4 (_WPP_RECORDER_SF_s@24.c)
 *     _ResetPointerDevices@0 @ 0xB08AE (_ResetPointerDevices@0.c)
 *     ?RITORDIT@@YGPADXZ @ 0xD3CF8 (-RITORDIT@@YGPADXZ.c)
 */

int __stdcall MasterInputThreadPrepareForRitTakeover()
{
  const char *v0; // eax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v0 = RITORDIT();
    WPP_RECORDER_SF_s(0x10u, 10, (int)&WPP_0716ad6f75da3c52aa1538117ba3dc10_Traceguids, v0);
  }
  ResetPointerDevices();
  gbPendRecreateTouchInjectionDevices = 1;
  CleanupSensorExplicitly(2);
  return EtwTraceDitDisEngaged();
}
