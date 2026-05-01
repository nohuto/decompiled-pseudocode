/*
 * XREFs of ?RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x180362958
 * Callers:
 *     _lambda_fcdff22f78a8ccb3bef514f85cb2b95c_::operator() @ 0x1800B0038 (_lambda_fcdff22f78a8ccb3bef514f85cb2b95c_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fcf4a2719b29a7a8fc43af5b15795085___::Run @ 0x1800B26B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fcf4a2719b29a7a8fc43af5b15795085___--Run.c)
 *     ?OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z @ 0x18034D6D0 (-OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z.c)
 * Callees:
 *     ?IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ @ 0x18034C910 (-IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::RelaunchInputAppAfterTermination(RTL_SRWLOCK **this)
{
  if ( TouchKeyboardExperienceManager::IsSessionShuttingDown() )
    return 0LL;
  else
    return KeyboardHosting::TabTipAdapter::RefreshHardwareKeyboardUIState(this);
}
