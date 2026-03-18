/*
 * XREFs of ??1FxInterrupt@@UEAA@XZ @ 0x1C008CD58
 * Callers:
 *     ??_EFxInterrupt@@UEAAPEAXI@Z @ 0x1C008CDF0 (--_EFxInterrupt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0006180 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxInterrupt::~FxInterrupt(FxInterrupt *this, unsigned int a2)
{
  bool v2; // zf

  v2 = this->m_Interrupt == 0LL;
  this->__vftable = (FxInterrupt_vtbl *)FxInterrupt::`vftable';
  if ( !v2 )
  {
    WPP_IFR_SF_(this->m_Globals, 2u, 0xCu, 0xAu, WPP_InterruptObject_cpp_Traceguids);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  if ( this->m_DeviceBase )
  {
    WPP_IFR_SF_(this->m_Globals, 2u, 0xCu, 0xBu, WPP_InterruptObject_cpp_Traceguids);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  this->m_BuiltInSpinLock.m_DbgFlagIsInitialized = 0;
  FxNonPagedObject::~FxNonPagedObject(this, a2);
}
