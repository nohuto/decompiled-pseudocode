/*
 * XREFs of ??4ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAAAEAU01@AEBU01@@Z @ 0x18014B13C
 * Callers:
 *     ?OnDeferredContextualProcessorResponse@ContextualProcessorBuffer@@UEAAJPEAUIContextualProcessor@@AEAUContextualProcessorResponse@@@Z @ 0x18014C810 (-OnDeferredContextualProcessorResponse@ContextualProcessorBuffer@@UEAAJPEAUIContextualProcessor@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18014B0E4 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_Copy_assign@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@AEAAXAEBV12@U?$integral_constant@_N$0A@@2@@Z @ 0x18014D820 (-_Copy_assign@-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$hash.c)
 */

__int64 __fastcall ContextualProcessorBuffer::ContextualProcessorMetadata::operator=(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)a2;
  if ( *(_QWORD *)a1 != *(_QWORD *)a2 )
  {
    v6 = *(_QWORD *)a2;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v6);
    v6 = *(_QWORD *)a1;
    *(_QWORD *)a1 = v2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v6);
  }
  if ( a1 + 8 != a2 + 8 )
    std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::_Copy_assign();
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 72);
  if ( a1 + 80 != a2 + 80 )
    std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::_Copy_assign();
  Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)(a1 + 144), (__int64 *)(a2 + 144));
  *(_BYTE *)(a1 + 152) = *(_BYTE *)(a2 + 152);
  return a1;
}
