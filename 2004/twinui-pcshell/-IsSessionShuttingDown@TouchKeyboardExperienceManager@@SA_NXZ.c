/*
 * XREFs of ?IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ @ 0x18034C910
 * Callers:
 *     _lambda_da08d54169002be5ece525bde89b0b7d_::operator() @ 0x1800AF8E0 (_lambda_da08d54169002be5ece525bde89b0b7d_--operator().c)
 *     _lambda_fcdff22f78a8ccb3bef514f85cb2b95c_::operator() @ 0x1800B0038 (_lambda_fcdff22f78a8ccb3bef514f85cb2b95c_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b2d628275170c96747651ea7a6282f40___::Run @ 0x1800B25C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b2d628275170c96747651ea7a6282f40___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fcf4a2719b29a7a8fc43af5b15795085___::Run @ 0x1800B26B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fcf4a2719b29a7a8fc43af5b15795085___--Run.c)
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1803490D4 (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x180362958 (-RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool TouchKeyboardExperienceManager::IsSessionShuttingDown(void)
{
  return GetSystemMetrics(0x2000) != 0;
}
