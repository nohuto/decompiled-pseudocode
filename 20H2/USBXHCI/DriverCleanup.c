/*
 * XREFs of DriverCleanup @ 0x1C00772F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     McGenEventUnregister_EtwUnregister @ 0x1C0037C88 (McGenEventUnregister_EtwUnregister.c)
 *     UninitializeTelemetryAssertsKM @ 0x1C0051774 (UninitializeTelemetryAssertsKM.c)
 *     wil_UninitializeFeatureStaging @ 0x1C006B008 (wil_UninitializeFeatureStaging.c)
 *     WppCleanupKm @ 0x1C00773A4 (WppCleanupKm.c)
 */

__int64 __fastcall DriverCleanup(__int64 a1)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 944))(WdfDriverGlobals, a1);
  WppCleanupKm(v1);
  if ( *(_QWORD *)(g_WdfDriverUsbXhciContext + 32) )
  {
    SleepstudyHelper_Uninitialize();
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
