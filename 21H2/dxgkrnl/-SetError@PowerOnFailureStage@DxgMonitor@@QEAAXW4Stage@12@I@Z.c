/*
 * XREFs of ?SetError@PowerOnFailureStage@DxgMonitor@@QEAAXW4Stage@12@I@Z @ 0x1C006B8DC
 * Callers:
 *     ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x1C03B62E0 (-_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgMonitor::PowerOnFailureStage::SetError(_DWORD *a1, int a2, int a3)
{
  if ( !*a1 )
  {
    a1[1] = a3;
    *a1 = a2;
  }
}
