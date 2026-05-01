/*
 * XREFs of ?QueryInterface@CJumpViewExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F2C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CJumpViewExperienceManager::QueryInterface(__int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IJumpViewExperienceManager,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>::QueryInterface(a1 - 16);
}
