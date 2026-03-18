/*
 * XREFs of imp_WdfInterruptSetExtendedPolicy @ 0x1C0077EC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002DD0C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0031C84 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qdd @ 0x1C003BFE8 (WPP_IFR_SF_qdd.c)
 *     ?SetPolicy@FxInterrupt@@QEAAXW4_WDF_INTERRUPT_POLICY@@W4_WDF_INTERRUPT_PRIORITY@@PEAU_GROUP_AFFINITY@@@Z @ 0x1C008924C (-SetPolicy@FxInterrupt@@QEAAXW4_WDF_INTERRUPT_POLICY@@W4_WDF_INTERRUPT_PRIORITY@@PEAU_GROUP_AFFI.c)
 */

void __fastcall imp_WdfInterruptSetExtendedPolicy(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFINTERRUPT__ *Interrupt,
        _WDF_INTERRUPT_EXTENDED_POLICY *PolicyAndGroup)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _WDF_INTERRUPT_POLICY Policy; // edx
  _WDF_INTERRUPT_PRIORITY Priority; // r8d
  FxInterrupt *pFxInterrupt; // [rsp+50h] [rbp+8h] BYREF

  pFxInterrupt = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Interrupt,
    0x1027u,
    (void **)&pFxInterrupt);
  m_Globals = pFxInterrupt->m_Globals;
  if ( PolicyAndGroup->Size == 32 )
  {
    Policy = PolicyAndGroup->Policy;
    Priority = PolicyAndGroup->Priority;
    if ( (unsigned int)Policy > WdfIrqPolicySpreadMessagesAcrossAllProcessors )
    {
      WPP_IFR_SF_d(m_Globals, 2u, 0xCu, 0x1Du, WPP_FxInterruptApi_cpp_Traceguids, Policy);
    }
    else if ( (unsigned int)(Priority - 1) > 2 )
    {
      WPP_IFR_SF_d(m_Globals, 2u, 0xCu, 0x1Eu, WPP_FxInterruptApi_cpp_Traceguids, Priority);
    }
    else
    {
      if ( !PolicyAndGroup->TargetProcessorSetAndGroup.Reserved[0]
        && !PolicyAndGroup->TargetProcessorSetAndGroup.Reserved[1]
        && !PolicyAndGroup->TargetProcessorSetAndGroup.Reserved[2] )
      {
        FxInterrupt::SetPolicy(pFxInterrupt, Policy, Priority, &PolicyAndGroup->TargetProcessorSetAndGroup);
        return;
      }
      WPP_IFR_SF_(m_Globals, 2u, 0xCu, 0x1Fu, WPP_FxInterruptApi_cpp_Traceguids);
    }
  }
  else
  {
    WPP_IFR_SF_qdd(
      m_Globals,
      2u,
      0xCu,
      0x1Cu,
      WPP_FxInterruptApi_cpp_Traceguids,
      PolicyAndGroup,
      PolicyAndGroup->Size,
      0x20u);
  }
  FxVerifierDbgBreakPoint(m_Globals);
}
