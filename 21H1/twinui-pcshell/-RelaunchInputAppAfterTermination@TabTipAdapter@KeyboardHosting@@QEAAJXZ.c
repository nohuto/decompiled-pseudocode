/*
 * XREFs of ?RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x1803412B8
 * Callers:
 *     _lambda_4072c03f0563dda202850bcb805fe733_::operator() @ 0x1800A12A0 (_lambda_4072c03f0563dda202850bcb805fe733_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_31afa5824dc70ccdddd77b05669783b6___::Run @ 0x1800A4520 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_31afa5824dc70ccdddd77b05669783b6___--Run.c)
 *     ?OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z @ 0x18032BBD0 (-OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z.c)
 * Callees:
 *     ?IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ @ 0x18032AE14 (-IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::RelaunchInputAppAfterTermination(RTL_SRWLOCK **this)
{
  if ( TouchKeyboardExperienceManager::IsSessionShuttingDown() )
    return 0LL;
  else
    return KeyboardHosting::TabTipAdapter::RefreshHardwareKeyboardUIState(this);
}
