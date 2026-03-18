/*
 * XREFs of ?PnpReleaseHardware@FxPkgPnp@@IEAAJXZ @ 0x1C007B72C
 * Callers:
 *     ?PnpEventFailedOwnHardware@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0079B60 (-PnpEventFailedOwnHardware@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRemovingDisableInterfaces@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007A7A0 (-PnpEventRemovingDisableInterfaces@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRestartReleaseHardware@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007A840 (-PnpEventRestartReleaseHardware@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007A9A0 (-PnpEventStopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C0010BF4 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0015188 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002DD0C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0031C84 (WPP_IFR_SF_.c)
 */

__int64 __fastcall FxPkgPnp::PnpReleaseHardware(FxPkgPnp *this)
{
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v3; // r8
  __int64 v4; // rdx
  unsigned int v5; // esi
  unsigned int v6; // edx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _FX_DRIVER_GLOBALS *v8; // rcx
  _LIST_ENTRY *Blink; // rbx
  _LIST_ENTRY *p_m_InterruptListHead; // rdi
  _LIST_ENTRY **p_Blink; // rcx

  FxObject::GetObjectHandleUnchecked(this->m_Resources);
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  *(_QWORD *)(v3 + 32) = ObjectHandleUnchecked;
  *(_QWORD *)(v3 + 40) = v4;
  v5 = FxPrePostCallback::InvokeStateless((FxPrePostCallback *)v3);
  if ( v5 == -1073741637 )
  {
    WPP_IFR_SF_(this->m_Globals, 2u, 0xCu, 0x1Cu, WPP_PnpStateMachine_cpp_Traceguids);
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerifierOn )
    {
      if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v6, 0xBu) || v8->FxVerifyDownlevel )
        FxVerifierDbgBreakPoint(v8);
    }
  }
  Blink = this->m_InterruptListHead.Blink;
  p_m_InterruptListHead = &this->m_InterruptListHead;
  while ( Blink != p_m_InterruptListHead )
  {
    p_Blink = &Blink[-28].Blink;
    Blink = Blink->Blink;
    if ( *((_BYTE *)p_Blink + 264) )
      ((void (__fastcall *)(_LIST_ENTRY **))(*p_Blink)[3].Flink)(p_Blink);
  }
  return v5;
}
