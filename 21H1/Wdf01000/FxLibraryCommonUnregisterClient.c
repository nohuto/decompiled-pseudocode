/*
 * XREFs of FxLibraryCommonUnregisterClient @ 0x1C0041E1C
 * Callers:
 *     LibraryUnregisterClient @ 0x1C002E290 (LibraryUnregisterClient.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     ?FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0039A80 (-FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxDestroy @ 0x1C0056D1C (FxDestroy.c)
 *     FxFreeDriverGlobals @ 0x1C0056EE4 (FxFreeDriverGlobals.c)
 *     UnlockVerifierSection @ 0x1C0058844 (UnlockVerifierSection.c)
 */

__int64 __fastcall FxLibraryCommonUnregisterClient(_WDF_BIND_INFO *Info, _WDF_DRIVER_GLOBALS *WdfDriverGlobals)
{
  unsigned int v4; // edi
  __int64 v5; // rcx

  if ( WdfLdrDbgPrintOn )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryUnregisterClient: enter\n");
  }
  if ( Info && WdfDriverGlobals )
  {
    v4 = 0;
    v5 = *(_QWORD *)&WdfDriverGlobals[-7].DriverName[16];
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 48LL))(v5);
      FxDestroy((_FX_DRIVER_GLOBALS *)WdfDriverGlobals[-8].DriverName);
    }
    FxIFRStop((_FX_DRIVER_GLOBALS *)WdfDriverGlobals[-8].DriverName);
    if ( *(_WORD *)&WdfDriverGlobals[-1].DriverName[12] )
      UnlockVerifierSection((_FX_DRIVER_GLOBALS *)WdfDriverGlobals[-8].DriverName);
    FxFreeDriverGlobals(WdfDriverGlobals);
  }
  else
  {
    v4 = -1073741823;
  }
  if ( WdfLdrDbgPrintOn )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryUnregisterClient: exit: status %X\n", v4);
  }
  return v4;
}
