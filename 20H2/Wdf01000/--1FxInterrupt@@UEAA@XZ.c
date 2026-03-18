/*
 * XREFs of ??1FxInterrupt@@UEAA@XZ @ 0x1C00886A0
 * Callers:
 *     ??_EFxInterrupt@@UEAAPEAXI@Z @ 0x1C0088740 (--_EFxInterrupt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C00142D0 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002DD0C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0031C84 (WPP_IFR_SF_.c)
 */

void __fastcall FxInterrupt::~FxInterrupt(FxInterrupt *this, unsigned int a2, unsigned int a3)
{
  bool v3; // zf

  v3 = this->m_Interrupt == 0LL;
  this->__vftable = (FxInterrupt_vtbl *)FxInterrupt::`vftable';
  if ( !v3 )
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
  FxNonPagedObject::~FxNonPagedObject(this, a2, a3);
}
