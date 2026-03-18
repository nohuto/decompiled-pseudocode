/*
 * XREFs of ?PnpEventQueryRemoveAskDriver@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0084290
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0019824 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventQueryRemoveAskDriver(FxPkgPnp *This)
{
  unsigned __int64 ObjectHandleUnchecked; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *); // rax
  int _a1; // eax
  int v5; // ebx
  unsigned int v6; // edx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _FX_DRIVER_GLOBALS *v8; // rcx
  __int64 result; // rax

  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
  m_Method = This->m_DeviceQueryRemove.m_Method;
  if ( !m_Method )
  {
    v5 = 0;
    goto LABEL_10;
  }
  _a1 = m_Method((WDFDEVICE__ *)ObjectHandleUnchecked);
  v5 = _a1;
  if ( _a1 >= 0 )
  {
LABEL_10:
    result = 311LL;
    goto LABEL_11;
  }
  WPP_IFR_SF_d(This->m_Globals, 2u, 0xCu, 0x10u, WPP_PnpStateMachine_cpp_Traceguids, _a1);
  if ( v5 == -1073741637 )
  {
    WPP_IFR_SF_(This->m_Globals, 2u, 0xCu, 0x11u, WPP_PnpStateMachine_cpp_Traceguids);
    m_Globals = This->m_Globals;
    if ( m_Globals->FxVerifierOn )
    {
      if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v6, 0xBu) || v8->FxVerifyDownlevel )
        FxVerifierDbgBreakPoint(v8);
    }
  }
  result = 281LL;
LABEL_11:
  This->m_PendingPnPIrp->IoStatus.Status = v5;
  return result;
}
