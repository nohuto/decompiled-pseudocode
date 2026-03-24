/*
 * XREFs of ?_PnpQueryCapabilities@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0016170
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleQueryCapabilitiesCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C00162D0 (-HandleQueryCapabilitiesCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_ @ 0x1C00325D4 (WPP_IFR_SF_.c)
 */

__int64 __fastcall FxPkgFdo::_PnpQueryCapabilities(FxPkgFdo *This, FxIrp *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _IO_SECURITY_CONTEXT *SecurityContext; // rdx
  FxPnpCaps v6; // eax
  _FX_DRIVER_GLOBALS *v7; // rcx
  int v8; // ebp
  _IRP *m_Irp; // rbx

  m_Globals = This->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0xFu, WPP_fxpkgfdo_cpp_Traceguids);
  SecurityContext = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( LOWORD(SecurityContext->SecurityQos) >= 0x40u && WORD1(SecurityContext->SecurityQos) == 1 )
  {
    v6.ByEnum = (FxPnpCaps::<unnamed_type_ByEnum>)This->m_PnpCaps;
    if ( (*(_BYTE *)&v6.ByEnum & 3) == 1 )
      HIDWORD(SecurityContext->SecurityQos) |= 4u;
    if ( (*(_BYTE *)&v6.ByEnum & 0xC) == 4 )
      HIDWORD(SecurityContext->SecurityQos) |= 8u;
    if ( (*(_BYTE *)&v6.ByEnum & 0x30) == 0x10 )
      HIDWORD(SecurityContext->SecurityQos) |= 0x10u;
    if ( (*(_BYTE *)&v6.ByEnum & 0xC0) == 0x40 )
      HIDWORD(SecurityContext->SecurityQos) |= 0x20u;
    if ( (*(_WORD *)&v6.ByEnum & 0x3000) == 0x1000 )
      HIDWORD(SecurityContext->SecurityQos) |= 0x200u;
    if ( (v6.Value & 0x30000) == 0x10000 )
      HIDWORD(SecurityContext->SecurityQos) |= 0x20000u;
    if ( This->m_WakeInterruptCount )
      HIDWORD(SecurityContext->SecurityQos) |= 0x80000u;
  }
  v7 = This->m_Globals;
  if ( v7->FxVerboseOn )
    WPP_IFR_SF_(v7, 5u, 0xCu, 0x10u, WPP_fxpkgfdo_cpp_Traceguids);
  v8 = This->SendIrpSynchronously(This, Irp);
  if ( v8 >= 0 )
    FxPkgFdo::HandleQueryCapabilitiesCompletion(This, Irp);
  m_Irp = Irp->m_Irp;
  Irp->m_Irp->IoStatus.Status = v8;
  IofCompleteRequest(Irp->m_Irp, 0);
  Irp->m_Irp = 0LL;
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&This->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], m_Irp, 0x20u);
  return (unsigned int)v8;
}
