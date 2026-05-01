/*
 * XREFs of ?IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ @ 0x18034BEB0
 * Callers:
 *     _lambda_7701e7176002895e9cf0bc610689a4a2_::operator() @ 0x1800B162C (_lambda_7701e7176002895e9cf0bc610689a4a2_--operator().c)
 *     _lambda_8d7094fcdaf208e2f7ec2dcb3e2d0518_::operator() @ 0x1800B191C (_lambda_8d7094fcdaf208e2f7ec2dcb3e2d0518_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_637c0604b81c4c87768a883b7ac642c1___::Run @ 0x1800B3D10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_637c0604b81c4c87768a883b7ac642c1___--Run.c)
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180348674 (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x180362098 (-RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool TouchKeyboardExperienceManager::IsSessionShuttingDown(void)
{
  return GetSystemMetrics(0x2000) != 0;
}
