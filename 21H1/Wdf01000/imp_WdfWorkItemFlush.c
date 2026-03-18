/*
 * XREFs of imp_WdfWorkItemFlush @ 0x1C00188F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000CF7C (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 *     ?WaitForSignal@FxWorkItem@@AEAAXXZ @ 0x1C0018960 (-WaitForSignal@FxWorkItem@@AEAAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E5DC (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall imp_WdfWorkItemFlush(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFWORKITEM__ *WorkItem)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  const void *_a1; // rax
  const void *_a2; // rdx
  FxWorkItem *pFxWorkItem; // [rsp+50h] [rbp+8h] BYREF

  pFxWorkItem = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)WorkItem,
    0x1025u,
    (void **)&pFxWorkItem);
  if ( (int)FxVerifierCheckIrqlLevel(pFxWorkItem->m_Globals, 0) >= 0 )
  {
    m_Globals = pFxWorkItem->m_Globals;
    if ( pFxWorkItem->m_WorkItemThread == KeGetCurrentThread() )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(pFxWorkItem);
      WPP_IFR_SF_qq(m_Globals, 2u, 0x12u, 0x10u, WPP_FxWorkItem_cpp_Traceguids, _a1, _a2);
      FxVerifierDbgBreakPoint(m_Globals);
    }
    else
    {
      FxWorkItem::WaitForSignal(pFxWorkItem);
    }
  }
}
