/*
 * XREFs of imp_WdfIoResourceListRemove @ 0x1C0034A10
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?RemoveAndDelete@FxResourceCollection@@QEAAEK@Z @ 0x1C0034A84 (-RemoveAndDelete@FxResourceCollection@@QEAAEK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C005CC6C (WPP_IFR_SF_qdd.c)
 */

void __fastcall imp_WdfIoResourceListRemove(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESLIST__ *ResourceList,
        unsigned int Index)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxIoResList *pList; // [rsp+50h] [rbp+8h] BYREF

  pList = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)ResourceList,
    0x1035u,
    (void **)&pList);
  m_Globals = pList->m_Globals;
  if ( FxResourceCollection::RemoveAndDelete(pList, Index) )
  {
    pList->m_OwningList->m_Changed = 1;
  }
  else
  {
    WPP_IFR_SF_qdd(m_Globals, 2u, 0xCu, 0xEu, WPP_FxResourceAPI_cpp_Traceguids, ResourceList, Index, pList->m_Count);
    FxVerifierDbgBreakPoint(m_Globals);
  }
}
