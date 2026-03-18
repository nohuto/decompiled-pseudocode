/*
 * XREFs of imp_WdfInterruptSetPolicy @ 0x1C00830B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?SetPolicy@FxInterrupt@@QEAAXW4_WDF_INTERRUPT_POLICY@@W4_WDF_INTERRUPT_PRIORITY@@PEAU_GROUP_AFFINITY@@@Z @ 0x1C008D358 (-SetPolicy@FxInterrupt@@QEAAXW4_WDF_INTERRUPT_POLICY@@W4_WDF_INTERRUPT_PRIORITY@@PEAU_GROUP_AFFI.c)
 */

void __fastcall imp_WdfInterruptSetPolicy(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFINTERRUPT__ *Interrupt,
        unsigned int Policy,
        __int32 Priority,
        unsigned __int64 TargetProcessorSet)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _GROUP_AFFINITY processorSet; // [rsp+30h] [rbp-18h] BYREF
  FxInterrupt *pFxInterrupt; // [rsp+50h] [rbp+8h] BYREF

  pFxInterrupt = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Interrupt,
    0x1027u,
    (void **)&pFxInterrupt);
  m_Globals = pFxInterrupt->m_Globals;
  if ( Policy > 5 )
  {
    WPP_IFR_SF_d(m_Globals, 2u, 0xCu, 0x1Au, WPP_FxInterruptApi_cpp_Traceguids, Policy);
  }
  else
  {
    if ( (unsigned int)(Priority - 1) <= 2 )
    {
      *(_QWORD *)&processorSet.Group = 0LL;
      processorSet.Mask = TargetProcessorSet;
      FxInterrupt::SetPolicy(
        pFxInterrupt,
        (_WDF_INTERRUPT_POLICY)Policy,
        (_WDF_INTERRUPT_PRIORITY)Priority,
        &processorSet);
      return;
    }
    WPP_IFR_SF_d(m_Globals, 2u, 0xCu, 0x1Bu, WPP_FxInterruptApi_cpp_Traceguids, Priority);
  }
  FxVerifierDbgBreakPoint(m_Globals);
}
