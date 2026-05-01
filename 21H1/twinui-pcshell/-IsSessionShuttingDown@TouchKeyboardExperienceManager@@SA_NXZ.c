/*
 * XREFs of ?IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ @ 0x18032AE14
 * Callers:
 *     _lambda_4072c03f0563dda202850bcb805fe733_::operator() @ 0x1800A12A0 (_lambda_4072c03f0563dda202850bcb805fe733_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_31afa5824dc70ccdddd77b05669783b6___::Run @ 0x1800A4520 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_31afa5824dc70ccdddd77b05669783b6___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_66995413046d601e20b987dec1435df1___::Run @ 0x1800A45D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_66995413046d601e20b987dec1435df1___--Run.c)
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180327584 (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x1803412B8 (-RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool TouchKeyboardExperienceManager::IsSessionShuttingDown(void)
{
  return GetSystemMetrics(0x2000) != 0;
}
