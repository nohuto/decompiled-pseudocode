/*
 * XREFs of _TelephonyController::CreateCallInstance_::_1_::dtor$0 @ 0x180141C94
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TelephonyController::CreateCallInstance_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned __int64,void (*)(unsigned __int64),&void ReleaseAudioResourceHandle(unsigned __int64),wistd::integral_constant<unsigned __int64,0>,unsigned __int64,unsigned __int64,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned __int64,void (*)(unsigned __int64),&void ReleaseAudioResourceHandle(unsigned __int64),wistd::integral_constant<unsigned __int64,0>,unsigned __int64,unsigned __int64,0,std::nullptr_t>>>((unsigned __int64 *)(a2 + 72));
}
