/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?CryptReleaseContextNoParam@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18043C5D0
 * Callers:
 *     _HashAndBase32Encode_::_1_::dtor$0 @ 0x18043C92E (_HashAndBase32Encode_--_1_--dtor$0.c)
 * Callees:
 *     ?CryptReleaseContextNoParam@details@wil@@YAX_K@Z @ 0x18043C710 (-CryptReleaseContextNoParam@details@wil@@YAX_K@Z.c)
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned __int64,void (*)(unsigned __int64),&void wil::details::CryptReleaseContextNoParam(unsigned __int64),wistd::integral_constant<unsigned __int64,0>,unsigned __int64,unsigned __int64,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned __int64,void (*)(unsigned __int64),&void wil::details::CryptReleaseContextNoParam(unsigned __int64),wistd::integral_constant<unsigned __int64,0>,unsigned __int64,unsigned __int64,0,std::nullptr_t>>>(
        wil::details **a1,
        unsigned __int64 a2)
{
  wil::details *v2; // rcx

  v2 = *a1;
  if ( v2 )
    wil::details::CryptReleaseContextNoParam(v2, a2);
}
