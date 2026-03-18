/*
 * XREFs of GetForegroundWindow @ 0x1C012D060
 * Callers:
 *     <none>
 * Callees:
 *     ?GetForegroundWindowForGroup@CActivationObjectManager@@QEAAPEAUHWND__@@AEBUACTIVATION_GROUP_ID@@@Z @ 0x1C012CCF0 (-GetForegroundWindowForGroup@CActivationObjectManager@@QEAAPEAUHWND__@@AEBUACTIVATION_GROUP_ID@@.c)
 */

__int64 __fastcall GetForegroundWindow(CActivationObjectManager *a1, const struct ACTIVATION_GROUP_ID *a2)
{
  return CActivationObjectManager::GetForegroundWindowForGroup(a1, a2);
}
