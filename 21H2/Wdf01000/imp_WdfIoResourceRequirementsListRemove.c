/*
 * XREFs of imp_WdfIoResourceRequirementsListRemove @ 0x1C006FB50
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?RemoveAndDelete@FxResourceCollection@@QEAAEK@Z @ 0x1C0034A84 (-RemoveAndDelete@FxResourceCollection@@QEAAEK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C005CC6C (WPP_IFR_SF_qdd.c)
 */

void __fastcall imp_WdfIoResourceRequirementsListRemove(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        unsigned int Index)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 v6; // r8
  FxIoResReqList *pList; // [rsp+50h] [rbp+8h] BYREF

  pList = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)RequirementsList,
    0x1037u,
    (void **)&pList);
  m_Globals = pList->m_Globals;
  if ( !FxResourceCollection::RemoveAndDelete(pList, Index, v6) )
  {
    WPP_IFR_SF_qdd(m_Globals, 2u, 0xCu, 0xAu, WPP_FxResourceAPI_cpp_Traceguids, RequirementsList, Index, pList->m_Count);
    FxVerifierDbgBreakPoint(m_Globals);
  }
}
