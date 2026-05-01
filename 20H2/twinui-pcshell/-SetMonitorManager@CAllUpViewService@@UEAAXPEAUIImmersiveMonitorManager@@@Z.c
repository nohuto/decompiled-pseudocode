/*
 * XREFs of ?SetMonitorManager@CAllUpViewService@@UEAAXPEAUIImmersiveMonitorManager@@@Z @ 0x1803810E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAllUpViewService::SetMonitorManager(CAllUpViewService *this, struct IImmersiveMonitorManager *a2)
{
  Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=((__int64 *)this + 5, (__int64)a2);
}
