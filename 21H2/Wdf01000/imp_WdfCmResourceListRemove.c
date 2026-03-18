/*
 * XREFs of imp_WdfCmResourceListRemove @ 0x1C006F670
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?RemoveAndDelete@FxResourceCollection@@QEAAEK@Z @ 0x1C0034A84 (-RemoveAndDelete@FxResourceCollection@@QEAAEK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C005CC6C (WPP_IFR_SF_qdd.c)
 */

void __fastcall imp_WdfCmResourceListRemove(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCMRESLIST__ *List,
        unsigned int Index)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 v6; // r8
  FxCmResList *pList; // [rsp+50h] [rbp+8h] BYREF

  pList = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)List, 0x1036u, (void **)&pList);
  m_Globals = pList->m_Globals;
  if ( !FxResourceCollection::RemoveAndDelete(pList, Index, v6) )
  {
    WPP_IFR_SF_qdd(m_Globals, 2u, 0xCu, 0x10u, WPP_FxResourceAPI_cpp_Traceguids, List, Index, pList->m_Count);
    FxVerifierDbgBreakPoint(m_Globals);
  }
}
