/*
 * XREFs of ?CertCloseStoreNoParam@details@wil@@YAXPEAX@Z @ 0x18045FDD8
 * Callers:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CertCloseStoreNoParam@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18045FC64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CertCloseStoreNoParam@de.c)
 *     ?TryGetCertSubjectName@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180460028 (-TryGetCertSubjectName@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::CertCloseStoreNoParam(wil::details *this, void *a2)
{
  CertCloseStore(this, 0);
}
