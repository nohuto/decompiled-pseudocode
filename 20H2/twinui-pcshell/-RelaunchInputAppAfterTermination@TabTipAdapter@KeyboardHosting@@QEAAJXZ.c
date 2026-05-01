/*
 * XREFs of ?RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x180362098
 * Callers:
 *     _lambda_7701e7176002895e9cf0bc610689a4a2_::operator() @ 0x1800B162C (_lambda_7701e7176002895e9cf0bc610689a4a2_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_637c0604b81c4c87768a883b7ac642c1___::Run @ 0x1800B3D10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_637c0604b81c4c87768a883b7ac642c1___--Run.c)
 *     ?OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z @ 0x18034CC70 (-OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z.c)
 * Callees:
 *     ?IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ @ 0x18034BEB0 (-IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::RelaunchInputAppAfterTermination(RTL_SRWLOCK **this)
{
  if ( TouchKeyboardExperienceManager::IsSessionShuttingDown() )
    return 0LL;
  else
    return KeyboardHosting::TabTipAdapter::RefreshHardwareKeyboardUIState(this);
}
