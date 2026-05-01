/*
 * XREFs of ?QueryInterface@CScreenClippingExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CE550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CScreenClippingExperienceManager::QueryInterface(__int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IScreenClippingExperienceManager,Windows::Foundation::IClosable,IImmersiveWindowMessageNotification>::QueryInterface(a1 - 16);
}
