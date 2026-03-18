/*
 * XREFs of ?SetError@PowerOnFailureStage@DxgMonitor@@QEAAXW4Stage@12@@Z @ 0x1C006B8CC
 * Callers:
 *     ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x1C03B62E0 (-_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgMonitor::PowerOnFailureStage::SetError(_DWORD *a1, int a2)
{
  if ( !*a1 )
    *a1 = a2;
}
