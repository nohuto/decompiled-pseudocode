/*
 * XREFs of ?SetPolicy@FxInterrupt@@QEAAXW4_WDF_INTERRUPT_POLICY@@W4_WDF_INTERRUPT_PRIORITY@@PEAU_GROUP_AFFINITY@@@Z @ 0x1C0089B4C
 * Callers:
 *     imp_WdfInterruptSetExtendedPolicy @ 0x1C00787A0 (imp_WdfInterruptSetExtendedPolicy.c)
 *     imp_WdfInterruptSetPolicy @ 0x1C00788C0 (imp_WdfInterruptSetPolicy.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E5DC (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxInterrupt::SetPolicy(
        FxInterrupt *this,
        _WDF_INTERRUPT_POLICY Policy,
        _WDF_INTERRUPT_PRIORITY Priority,
        _GROUP_AFFINITY *TargetProcessorSet)
{
  const void *_a1; // rax

  if ( this->m_CreatedInPrepareHardware )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qL(this->m_Globals, 2u, 0xCu, 0x16u, WPP_InterruptObject_cpp_Traceguids, _a1, 0xC0000010);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  this->m_Policy = Policy;
  this->m_Priority = Priority;
  this->m_Processors = *TargetProcessorSet;
  if ( !FxLibraryGlobals.ProcessorGroupSupport )
    this->m_Processors.Group = 0;
  this->m_SetPolicy = 1;
}
