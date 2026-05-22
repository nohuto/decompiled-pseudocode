/*
 * XREFs of ??$_Move_unchecked@PEAUInputSample@ContextualProcessorBuffer@@PEAU12@@std@@YAPEAUInputSample@ContextualProcessorBuffer@@PEAU12@00@Z @ 0x18014A318
 * Callers:
 *     ?OnDeferredContextualProcessorResponse@ContextualProcessorBuffer@@UEAAJPEAUIContextualProcessor@@AEAUContextualProcessorResponse@@@Z @ 0x18014C780 (-OnDeferredContextualProcessorResponse@ContextualProcessorBuffer@@UEAAJPEAUIContextualProcessor@.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Move_assign@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@AEAAXAEAV12@U_Equal_allocators@2@@Z @ 0x18014D8F8 (-_Move_assign@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uhash_compar.c)
 *     ?_Move_assign@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@AEAAXAEAV12@U_Equal_allocators@2@@Z @ 0x18014D9E0 (-_Move_assign@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V.c)
 */

void **__fastcall std::_Move_unchecked<ContextualProcessorBuffer::InputSample *,ContextualProcessorBuffer::InputSample *>(
        const struct std::nothrow_t *a1,
        const struct std::nothrow_t *a2,
        void **a3)
{
  void **v3; // rbx
  const struct std::nothrow_t *v4; // r14
  void **v5; // rbp
  __int64 v6; // rsi
  void **v7; // rdi
  void **v8; // rcx
  void *v9; // rax
  void *v10; // rcx

  v3 = a3;
  v4 = a2;
  if ( a1 != a2 )
  {
    v5 = (void **)((char *)a1 + 72);
    v6 = a1 - (const struct std::nothrow_t *)a3 - 72;
    v7 = a3 + 9;
    do
    {
      v8 = (void **)((char *)v7 + v6);
      if ( v3 != (void **)((char *)v7 + v6) )
      {
        v9 = *v8;
        *v8 = 0LL;
        v10 = *v3;
        *v3 = v9;
        if ( v10 )
          operator delete(v10, a2);
      }
      if ( v7 - 8 != v5 - 8 )
        ((void (*)(void))std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Move_assign)();
      if ( v7 != v5 )
        std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Move_assign(
          v7,
          v5);
      a2 = (const struct std::nothrow_t *)(v5 + 8);
      if ( v7 + 8 != v5 + 8 )
        std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::_Move_assign();
      v7 += 25;
      v3 += 25;
      v5 += 25;
    }
    while ( (const struct std::nothrow_t *)((char *)v7 + v6) != v4 );
  }
  return v3;
}
