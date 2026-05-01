/*
 * XREFs of ?QueryInterface@CSplashScreen@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CC320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSplashScreen::QueryInterface(__int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Activation::ISplashScreen,ISplashScreen,Microsoft::WRL::FtmBase>::QueryInterface(a1 - 8);
}
