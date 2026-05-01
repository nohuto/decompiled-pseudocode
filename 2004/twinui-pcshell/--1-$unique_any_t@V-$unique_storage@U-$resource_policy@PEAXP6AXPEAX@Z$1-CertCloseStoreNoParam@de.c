/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CertCloseStoreNoParam@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180460434
 * Callers:
 *     _TryGetCertSubjectName_::_1_::dtor$0 @ 0x180460B7C (_TryGetCertSubjectName_--_1_--dtor$0.c)
 * Callees:
 *     ?CertCloseStoreNoParam@details@wil@@YAXPEAX@Z @ 0x1804605A8 (-CertCloseStoreNoParam@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CertCloseStoreNoParam(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CertCloseStoreNoParam(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>(
        wil::details **a1,
        void *a2)
{
  wil::details *v2; // rcx

  v2 = *a1;
  if ( v2 )
    wil::details::CertCloseStoreNoParam(v2, a2);
}
