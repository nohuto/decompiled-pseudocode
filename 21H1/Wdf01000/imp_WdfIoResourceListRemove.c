/*
 * XREFs of imp_WdfIoResourceListRemove @ 0x1C005CA00
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E5DC (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C003C8B8 (WPP_IFR_SF_qdd.c)
 *     ?RemoveAndDelete@FxResourceCollection@@QEAAEK@Z @ 0x1C0061610 (-RemoveAndDelete@FxResourceCollection@@QEAAEK@Z.c)
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
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
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
