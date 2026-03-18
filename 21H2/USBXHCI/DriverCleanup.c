/*
 * XREFs of DriverCleanup @ 0x1C0077510
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     McGenEventUnregister_EtwUnregister @ 0x1C00371C8 (McGenEventUnregister_EtwUnregister.c)
 *     UninitializeTelemetryAssertsKM @ 0x1C005172C (UninitializeTelemetryAssertsKM.c)
 *     wil_UninitializeFeatureStaging @ 0x1C006B008 (wil_UninitializeFeatureStaging.c)
 *     WppCleanupKm @ 0x1C00775CC (WppCleanupKm.c)
 */

__int64 __fastcall DriverCleanup(__int64 a1)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 944))(WdfDriverGlobals, a1);
  WppCleanupKm(v1);
  if ( *(_QWORD *)(g_WdfDriverUsbXhciContext + 32) )
  {
    if ( qword_1C0062AA8 )
      qword_1C0062AA8();
    *(_QWORD *)(g_WdfDriverUsbXhciContext + 32) = 0LL;
  }
  UninitializeTelemetryAssertsKM();
  McGenEventUnregister_EtwUnregister();
  if ( *(_BYTE *)(g_WdfDriverUsbXhciContext + 28) )
  {
    PcwUnregister(Ctr_Interrupter);
    PcwUnregister(Ctr_CommonBuffer);
    PcwUnregister(Ctr_TransferRing);
  }
  return wil_UninitializeFeatureStaging();
}
