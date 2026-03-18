/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002F62C
 * Callers:
 *     ?Create@DiagnosticCallbacksManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x18002F0AC (-Create@DiagnosticCallbacksManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?InitializeServer@DataProviderManager@@AEAAJXZ @ 0x18002F2F0 (-InitializeServer@DataProviderManager@@AEAAJXZ.c)
 *     ?InitializeServer@CMessageConversationHost@@AEAAJPEAI@Z @ 0x18002F4E4 (-InitializeServer@CMessageConversationHost@@AEAAJPEAI@Z.c)
 * Callees:
 *     <none>
 */

HLOCAL __fastcall wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
        void **a1)
{
  void *v1; // rcx
  HLOCAL result; // rax

  v1 = *a1;
  if ( v1 )
    return LocalFree(v1);
  return result;
}
