/*
 * XREFs of _TryGetCertSubjectName_::_1_::dtor$1 @ 0x18043CCDC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall TryGetCertSubjectName_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,int (*)(void *),&int CryptMsgClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,int (*)(void *),&int CryptMsgClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>((void **)(a2 + 96));
}
