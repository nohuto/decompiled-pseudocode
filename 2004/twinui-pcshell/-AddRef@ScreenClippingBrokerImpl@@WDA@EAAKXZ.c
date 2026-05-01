/*
 * XREFs of ?AddRef@ScreenClippingBrokerImpl@@WDA@EAAKXZ @ 0x1800F15B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ScreenClippingBrokerImpl::AddRef(__int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::AddRef(a1 - 48);
}
