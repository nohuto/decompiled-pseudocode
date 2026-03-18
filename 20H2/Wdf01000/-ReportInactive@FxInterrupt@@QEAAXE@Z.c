/*
 * XREFs of ?ReportInactive@FxInterrupt@@QEAAXE@Z @ 0x1C0089B70
 * Callers:
 *     ?Disconnect@FxInterrupt@@QEAAJK@Z @ 0x1C00048C0 (-Disconnect@FxInterrupt@@QEAAJK@Z.c)
 *     imp_WdfInterruptReportInactive @ 0x1C0077E80 (imp_WdfInterruptReportInactive.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002DD0C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0031C84 (WPP_IFR_SF_.c)
 */

void __fastcall FxInterrupt::ReportInactive(FxInterrupt *this, unsigned __int8 Internal)
{
  __int64 v3; // r8
  const void *_a1; // rax
  _IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS parameters; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
  if ( !Internal )
  {
    if ( !this->m_Connected || !this->m_Interrupt )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_q(this->m_Globals, 3u, 0xCu, 0xCu, WPP_InterruptObjectKm_cpp_Traceguids, _a1);
      goto LABEL_7;
    }
    if ( !*(_QWORD *)(v3 + 1168) )
    {
      WPP_IFR_SF_(this->m_Globals, 3u, 0xCu, 0xDu, WPP_InterruptObjectKm_cpp_Traceguids);
LABEL_7:
      FxVerifierDbgBreakPoint(this->m_Globals);
      return;
    }
  }
  if ( this->m_Active )
  {
    *(&parameters.Version + 1) = 0;
    parameters.ConnectionContext.Generic = this->m_Interrupt;
    parameters.Version = unk_1C00A9F60 != 0 ? 4 : 1;
    (*(void (__fastcall **)(_IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS *))(v3 + 1168))(&parameters);
    this->m_Active = 0;
  }
}
