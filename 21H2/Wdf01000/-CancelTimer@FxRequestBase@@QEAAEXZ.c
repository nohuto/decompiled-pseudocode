/*
 * XREFs of ?CancelTimer@FxRequestBase@@QEAAEXZ @ 0x1C0005000
 * Callers:
 *     ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0004E70 (-_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0029788 (-DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C00742EC (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     ?Stop@MxTimer@@QEAAEXZ @ 0x1C0011D90 (-Stop@MxTimer@@QEAAEXZ.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 */

unsigned __int8 __fastcall FxRequestBase::CancelTimer(FxRequestBase *this)
{
  unsigned __int8 v3; // al
  _FX_DRIVER_GLOBALS *m_Globals; // rcx

  if ( (this->m_TargetFlags & 4) == 0 )
    return 1;
  v3 = MxTimer::Stop(&this->m_Timer->Timer);
  m_Globals = this->m_Globals;
  if ( v3 )
  {
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x15u, WPP_FxRequestBase_cpp_Traceguids, this);
    this->m_TargetFlags &= ~4u;
    return 1;
  }
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x14u, WPP_FxRequestBase_cpp_Traceguids, this);
  return 0;
}
