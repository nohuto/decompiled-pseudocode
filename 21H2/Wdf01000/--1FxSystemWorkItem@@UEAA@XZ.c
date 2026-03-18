/*
 * XREFs of ??1FxSystemWorkItem@@UEAA@XZ @ 0x1C00188A0
 * Callers:
 *     ??_GFxSystemWorkItem@@UEAAPEAXI@Z @ 0x1C001B870 (--_GFxSystemWorkItem@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0006180 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ?Free@MxWorkItem@@QEAAXXZ @ 0x1C001AD70 (-Free@MxWorkItem@@QEAAXXZ.c)
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxSystemWorkItem::~FxSystemWorkItem(FxSystemWorkItem *this, unsigned int a2)
{
  bool v2; // zf
  _FX_DRIVER_GLOBALS *m_Globals; // rbx

  v2 = this->m_RunningDown == 0;
  this->__vftable = (FxSystemWorkItem_vtbl *)FxSystemWorkItem::`vftable';
  if ( v2 && this->m_WorkItem.m_WorkItem )
  {
    m_Globals = this->m_Globals;
    WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0xAu, WPP_FxSystemWorkitem_cpp_Traceguids);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  if ( this->m_WorkItem.m_WorkItem )
    MxWorkItem::Free(&this->m_WorkItem);
  FxNonPagedObject::~FxNonPagedObject(this, a2);
}
