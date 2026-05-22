/*
 * XREFs of ??0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@AEBU01@@Z @ 0x180012AE0
 * Callers:
 *     ?AddProcessor@ContextualProcessorBuffer@@UEAAXPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x180012D20 (-AddProcessor@ContextualProcessorBuffer@@UEAAXPEAUIContextualProcessor@@UContextualProcessorInit.c)
 *     ??$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU23@AEBU23@@Z @ 0x180013470 (--$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@-$vector@UCon.c)
 *     ?TryAddProcessorAndContact@ContextualProcessorBuffer@@UEAAXKPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x18014D4C0 (-TryAddProcessorAndContact@ContextualProcessorBuffer@@UEAAXKPEAUIContextualProcessor@@UContextua.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Alloc_sentinel_and_proxy@?$list@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@2@@std@@AEAAXXZ @ 0x180013180 (-_Alloc_sentinel_and_proxy@-$list@U-$pair@$$CBKW4ContextualProcessorDecision@@@std@@V-$allocator.c)
 *     ??$_Construct_n_copies_of_ty@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@@std@@@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@@std@@@2@@std@@AEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@@1@@Z @ 0x1800131B0 (--$_Construct_n_copies_of_ty@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$p.c)
 *     ??$insert@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@U_Iterator_base0@2@@1@0@Z @ 0x1800133A0 (--$insert@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBKW4Co.c)
 *     ??$_Insert_unverified@U?$pair@$$CBKW4ContextualProcessorState@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorState@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBKW4ContextualProcessorState@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@std@@@std@@@1@@Z @ 0x180013B10 (--$_Insert_unverified@U-$pair@$$CBKW4ContextualProcessorState@@@std@@V-$_List_unchecked_iterator.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
ContextualProcessorBuffer::ContextualProcessorMetadata *__fastcall ContextualProcessorBuffer::ContextualProcessorMetadata::ContextualProcessorMetadata(
        ContextualProcessorBuffer::ContextualProcessorMetadata *this,
        const struct ContextualProcessorBuffer::ContextualProcessorMetadata *a2)
{
  __int64 v4; // rcx
  __int64 **v5; // r12
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  unsigned __int64 v8; // rdi
  _QWORD *v9; // rax
  _QWORD *v10; // r13
  _QWORD *i; // rbx
  __int64 v12; // rdi
  _QWORD *v13; // rsi
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _BYTE v18[72]; // [rsp+30h] [rbp-48h] BYREF
  char *v19; // [rsp+88h] [rbp+10h] BYREF
  char *v20; // [rsp+90h] [rbp+18h]

  v4 = *(_QWORD *)a2;
  *(_QWORD *)this = *(_QWORD *)a2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v19 = (char *)this + 8;
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  v5 = (__int64 **)((char *)this + 16);
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  v6 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(24LL);
  *v6 = v6;
  v6[1] = v6;
  *((_QWORD *)this + 2) = v6;
  v7 = v6;
  v8 = (__int64)(*((_QWORD *)a2 + 5) - *((_QWORD *)a2 + 4)) >> 3;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  if ( v8 )
  {
    if ( v8 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v9 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(8 * v8);
    *((_QWORD *)this + 4) = v9;
    *((_QWORD *)this + 6) = &v9[v8];
    do
    {
      *v9++ = v7;
      --v8;
    }
    while ( v8 );
    *((_QWORD *)this + 5) = v9;
  }
  *((_QWORD *)this + 7) = *((_QWORD *)a2 + 7);
  *((_QWORD *)this + 8) = *((_QWORD *)a2 + 8);
  v10 = (_QWORD *)*((_QWORD *)a2 + 2);
  for ( i = (_QWORD *)*v10; i != v10; i = (_QWORD *)*i )
  {
    v12 = **v5;
    if ( *((_QWORD *)this + 3) == 0xAAAAAAAAAAAAAAALL )
      std::_Xlength_error("list<T> too long");
    v13 = *(_QWORD **)(v12 + 8);
    v14 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(24LL);
    v14[2] = i[2];
    *v14 = v12;
    v14[1] = v13;
    ++*((_QWORD *)this + 3);
    *(_QWORD *)(v12 + 8) = v14;
    *v13 = v14;
    std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorState>>,0>>::_Insert_unverified<std::pair<unsigned long const,enum ContextualProcessorState>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,enum ContextualProcessorState>>>>>(
      (char *)this + 8,
      v18,
      **v5 + 16);
  }
  *((_DWORD *)this + 18) = *((_DWORD *)a2 + 18);
  v20 = (char *)this + 80;
  *((_DWORD *)this + 20) = *((_DWORD *)a2 + 20);
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  std::list<std::pair<unsigned long const,enum ContextualProcessorDecision>>::_Alloc_sentinel_and_proxy((char *)this + 88);
  v19 = (char *)*((_QWORD *)this + 11);
  v15 = (__int64)(*((_QWORD *)a2 + 14) - *((_QWORD *)a2 + 13)) >> 3;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,enum ContextualProcessorDecision>>>>>::_Construct_n_copies_of_ty<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,enum ContextualProcessorDecision>>>>>(
    (char *)this + 104,
    v15,
    &v19);
  *((_QWORD *)this + 16) = *((_QWORD *)a2 + 16);
  *((_QWORD *)this + 17) = *((_QWORD *)a2 + 17);
  std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::insert<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,enum ContextualProcessorDecision>>>,std::_Iterator_base0>>(
    (char *)this + 80,
    **((_QWORD **)a2 + 11),
    *((_QWORD *)a2 + 11));
  v16 = *((_QWORD *)a2 + 18);
  *((_QWORD *)this + 18) = v16;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  *((_BYTE *)this + 152) = *((_BYTE *)a2 + 152);
  return this;
}
