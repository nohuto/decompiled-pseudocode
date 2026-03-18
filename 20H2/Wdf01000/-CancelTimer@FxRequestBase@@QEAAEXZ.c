/*
 * XREFs of ?CancelTimer@FxRequestBase@@QEAAEXZ @ 0x1C000C930
 * Callers:
 *     ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C000C770 (-_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0064168 (-DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C006508C (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     ?Stop@MxTimer@@QEAAEXZ @ 0x1C0019040 (-Stop@MxTimer@@QEAAEXZ.c)
 */

unsigned __int8 __fastcall FxRequestBase::CancelTimer(FxRequestBase *this)
{
  unsigned __int8 v3; // al
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int8 FxVerboseOn; // dl

  if ( (this->m_TargetFlags & 4) == 0 )
    return 1;
  v3 = MxTimer::Stop(&this->m_Timer->Timer);
  m_Globals = this->m_Globals;
  FxVerboseOn = m_Globals->FxVerboseOn;
  if ( v3 )
  {
    if ( FxVerboseOn )
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x15u, WPP_FxRequestBase_cpp_Traceguids, this);
    this->m_TargetFlags &= ~4u;
    return 1;
  }
  if ( FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x14u, WPP_FxRequestBase_cpp_Traceguids, this);
  return 0;
}
