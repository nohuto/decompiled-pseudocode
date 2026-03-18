/*
 * XREFs of ?HandleQueryCapabilitiesCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C0016370
 * Callers:
 *     ?_PnpQueryCapabilities@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0016210 (-_PnpQueryCapabilities@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C0032554 (WPP_IFR_SF_.c)
 */

void __fastcall FxPkgFdo::HandleQueryCapabilitiesCompletion(FxPkgFdo *this, FxIrp *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxPnpCaps v5; // eax
  _IO_SECURITY_CONTEXT *SecurityContext; // rdx
  int v7; // eax
  unsigned int States; // eax
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  signed int SystemWake; // eax
  int DeviceWake; // eax
  unsigned int D1Latency; // eax
  unsigned int D2Latency; // eax
  unsigned int D3Latency; // eax
  unsigned int m_PnpCapsAddress; // eax
  unsigned int m_PnpCapsUINumber; // eax
  _FX_DRIVER_GLOBALS *v22; // rcx

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x11u, WPP_fxpkgfdo_cpp_Traceguids);
  v5.ByEnum = (FxPnpCaps::<unnamed_type_ByEnum>)this->m_PnpCaps;
  SecurityContext = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( LOWORD(SecurityContext->SecurityQos) >= 0x40u && WORD1(SecurityContext->SecurityQos) == 1 )
  {
    if ( (*(_BYTE *)&v5.ByEnum & 3) == 0 )
      HIDWORD(SecurityContext->SecurityQos) &= ~4u;
    if ( (*(_BYTE *)&v5.ByEnum & 0xC) == 0 )
      HIDWORD(SecurityContext->SecurityQos) &= ~8u;
    if ( (*(_BYTE *)&v5.ByEnum & 0xC0) == 0 )
      HIDWORD(SecurityContext->SecurityQos) &= ~0x20u;
    if ( (*(_BYTE *)&v5.ByEnum & 0x30) != 0 )
    {
      if ( (*(_BYTE *)&v5.ByEnum & 0x30) == 0x10 )
        HIDWORD(SecurityContext->SecurityQos) |= 0x10u;
    }
    else
    {
      HIDWORD(SecurityContext->SecurityQos) &= ~0x10u;
    }
    v7 = *(_WORD *)&v5.ByEnum & 0x3000;
    if ( v7 )
    {
      if ( v7 == 4096 )
        HIDWORD(SecurityContext->SecurityQos) |= 0x200u;
    }
    else
    {
      HIDWORD(SecurityContext->SecurityQos) &= ~0x200u;
    }
    States = this->m_PowerCaps.States;
    v9 = (unsigned __int8)States >> 4;
    if ( v9 != 5 && v9 > (signed int)SecurityContext->FullCreateOptions )
      SecurityContext->FullCreateOptions = v9;
    v10 = (States >> 8) & 0xF;
    if ( v10 != 5 && v10 > SLODWORD(SecurityContext[1].SecurityQos) )
      LODWORD(SecurityContext[1].SecurityQos) = v10;
    v11 = (unsigned __int16)States >> 12;
    if ( v11 != 5 && v11 > SHIDWORD(SecurityContext[1].SecurityQos) )
      HIDWORD(SecurityContext[1].SecurityQos) = v11;
    v12 = HIWORD(States) & 0xF;
    if ( v12 != 5 && v12 > SLODWORD(SecurityContext[1].AccessState) )
      LODWORD(SecurityContext[1].AccessState) = v12;
    v13 = (States >> 20) & 0xF;
    if ( v13 != 5 && v13 > SHIDWORD(SecurityContext[1].AccessState) )
      HIDWORD(SecurityContext[1].AccessState) = v13;
    v14 = HIBYTE(States) & 0xF;
    if ( v14 != 5 && v14 > (signed int)SecurityContext[1].DesiredAccess )
      SecurityContext[1].DesiredAccess = v14;
    SystemWake = this->m_PowerCaps.SystemWake;
    if ( (_BYTE)SystemWake != 7 && SystemWake < (signed int)SecurityContext[1].FullCreateOptions )
      SecurityContext[1].FullCreateOptions = SystemWake;
    DeviceWake = this->m_PowerCaps.DeviceWake;
    if ( (_BYTE)DeviceWake != 5 && DeviceWake < SLODWORD(SecurityContext[2].SecurityQos) )
      LODWORD(SecurityContext[2].SecurityQos) = DeviceWake;
    D1Latency = this->m_PowerCaps.D1Latency;
    if ( D1Latency != -1 && D1Latency > HIDWORD(SecurityContext[2].SecurityQos) )
      HIDWORD(SecurityContext[2].SecurityQos) = D1Latency;
    D2Latency = this->m_PowerCaps.D2Latency;
    if ( D2Latency != -1 && D2Latency > LODWORD(SecurityContext[2].AccessState) )
      LODWORD(SecurityContext[2].AccessState) = D2Latency;
    D3Latency = this->m_PowerCaps.D3Latency;
    if ( D3Latency != -1 && D3Latency > HIDWORD(SecurityContext[2].AccessState) )
      HIDWORD(SecurityContext[2].AccessState) = D3Latency;
    m_PnpCapsAddress = this->m_PnpCapsAddress;
    if ( m_PnpCapsAddress != -1 )
      LODWORD(SecurityContext->AccessState) = m_PnpCapsAddress;
    m_PnpCapsUINumber = this->m_PnpCapsUINumber;
    if ( m_PnpCapsUINumber != -1 )
      HIDWORD(SecurityContext->AccessState) = m_PnpCapsUINumber;
  }
  v22 = this->m_Globals;
  if ( v22->FxVerboseOn )
    WPP_IFR_SF_(v22, 5u, 0xCu, 0x12u, WPP_fxpkgfdo_cpp_Traceguids);
}
