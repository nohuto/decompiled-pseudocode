/*
 * XREFs of imp_WdfIoTargetPurge @ 0x1C00637F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000CF7C (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_WdfIoTargetPurge(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIOTARGET__ *IoTarget, int Action)
{
  FxIoTarget *v4; // rcx
  FxIoTarget *pTarget; // [rsp+40h] [rbp+8h] BYREF

  pTarget = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)IoTarget,
    0x1200u,
    (void **)&pTarget);
  v4 = pTarget;
  if ( Action && Action <= 2 )
  {
    if ( Action == 1 )
    {
      if ( (int)FxVerifierCheckIrqlLevel(pTarget->m_Globals, 0) < 0 )
        return;
      v4 = pTarget;
    }
    v4->Purge(v4, (_WDF_IO_TARGET_PURGE_IO_ACTION)Action);
  }
  else
  {
    WPP_IFR_SF_d(pTarget->m_Globals, 2u, 0xEu, 0xBu, WPP_FxIoTargetAPI_cpp_Traceguids, Action);
  }
}
