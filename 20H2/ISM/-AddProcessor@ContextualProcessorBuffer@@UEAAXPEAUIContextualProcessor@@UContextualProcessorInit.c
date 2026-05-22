/*
 * XREFs of ?AddProcessor@ContextualProcessorBuffer@@UEAAXPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x180012D20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ @ 0x18000DC44 (-InternalAddRef@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@AEBU01@@Z @ 0x180012AE0 (--0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@AEBU01@@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x180013120 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180013150 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Try_emplace@K$$V@?$unordered_map@KW4ContextualProcessorDecision@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@@std@@_N@1@$$QEAK@Z @ 0x180013260 (--$_Try_emplace@K$$V@-$unordered_map@KW4ContextualProcessorDecision@@U-$hash@K@std@@U-$equal_to@.c)
 *     ??$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU23@AEBU23@@Z @ 0x180013470 (--$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@-$vector@UCon.c)
 *     ??$_Insert_unverified@U?$pair@$$CBKW4ContextualProcessorState@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorState@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBKW4ContextualProcessorState@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@std@@@std@@@1@@Z @ 0x180013B10 (--$_Insert_unverified@U-$pair@$$CBKW4ContextualProcessorState@@@std@@V-$_List_unchecked_iterator.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180067CA8 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall ContextualProcessorBuffer::AddProcessor(__int64 a1, __int64 a2, int *a3)
{
  __int64 size_of; // r12
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __m128 *v9; // rax
  __m128 v10; // xmm0
  _QWORD *v11; // rbx
  __m128 *v12; // rax
  __m128 v13; // xmm0
  unsigned __int64 v14; // rax
  int v15; // esi
  _DWORD *i; // rax
  _DWORD *v17; // rcx
  __int64 v18; // rbx
  __int64 *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rbx
  void *v22; // rcx
  const struct std::nothrow_t *v23; // rdx
  _QWORD **v24; // rcx
  _QWORD *v25; // rcx
  _QWORD *v26; // rbx
  void *v27; // rcx
  const struct std::nothrow_t *v28; // rdx
  _QWORD **v29; // rcx
  _QWORD *v30; // rcx
  _QWORD *v31; // rbx
  void *v33[2]; // [rsp+20h] [rbp-89h] BYREF
  unsigned __int64 v34; // [rsp+30h] [rbp-79h] BYREF
  int v35; // [rsp+38h] [rbp-71h] BYREF
  void *v36[2]; // [rsp+40h] [rbp-69h] BYREF
  void *v37[2]; // [rsp+50h] [rbp-59h]
  char *v38; // [rsp+60h] [rbp-49h]
  __int64 v39; // [rsp+68h] [rbp-41h]
  __int64 v40; // [rsp+70h] [rbp-39h]
  __int64 v41; // [rsp+78h] [rbp-31h]
  int v42; // [rsp+80h] [rbp-29h] BYREF
  void *v43; // [rsp+88h] [rbp-21h]
  __int64 v44; // [rsp+90h] [rbp-19h]
  void *v45; // [rsp+98h] [rbp-11h]
  __int128 v46; // [rsp+A0h] [rbp-9h]
  __int64 v47; // [rsp+B0h] [rbp+7h]
  __int64 v48; // [rsp+B8h] [rbp+Fh]
  __int128 v49; // [rsp+C0h] [rbp+17h] BYREF
  unsigned __int64 v50; // [rsp+128h] [rbp+7Fh] BYREF

  v34 = 0LL;
  *(_OWORD *)v36 = 0LL;
  size_of = std::_Get_size_of_n<24>(1LL);
  v7 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v7 = v7;
  v7[1] = v7;
  v36[0] = v7;
  v8 = std::_Get_size_of_n<8>(16LL);
  v9 = (__m128 *)std::_Allocate<16,std::_Default_allocate_traits,0>(v8);
  v37[0] = v9;
  v38 = (char *)&v9[8];
  v10 = _mm_movelh_ps((__m128)(unsigned __int64)v7, (__m128)(unsigned __int64)v7);
  *v9 = v10;
  v9[1] = v10;
  v9[2] = v10;
  v9[3] = v10;
  v9[4] = v10;
  v9[5] = v10;
  v9[6] = v10;
  v9[7] = v10;
  v37[1] = &v9[8];
  v39 = 7LL;
  v40 = 8LL;
  v35 = 1065353216;
  v41 = 0LL;
  v44 = 0LL;
  v11 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v11 = v11;
  v11[1] = v11;
  v43 = v11;
  v12 = (__m128 *)std::_Allocate<16,std::_Default_allocate_traits,0>(v8);
  v45 = v12;
  *((_QWORD *)&v46 + 1) = v12 + 8;
  v13 = _mm_movelh_ps((__m128)(unsigned __int64)v11, (__m128)(unsigned __int64)v11);
  *v12 = v13;
  v12[1] = v13;
  v12[2] = v13;
  v12[3] = v13;
  v12[4] = v13;
  v12[5] = v13;
  v12[6] = v13;
  v12[7] = v13;
  *(_QWORD *)&v46 = v12 + 8;
  v47 = 7LL;
  v48 = 8LL;
  v42 = 1065353216;
  v49 = 0LL;
  v14 = v34;
  if ( v34 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v14 = v34;
    }
    v50 = v14;
    v34 = a2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v50);
  }
  v15 = *a3;
  LODWORD(v50) = 0;
  for ( i = (_DWORD *)*((_QWORD *)v37[0] + 2 * (v39 & 0x4D25767F9DCE13F5LL)); ; i = *(_DWORD **)i )
  {
    v17 = *((void **)v37[0] + 2 * (v39 & 0x4D25767F9DCE13F5LL)) == v36[0]
        ? v36[0]
        : (_DWORD *)**((_QWORD **)v37[0] + 2 * (v39 & 0x4D25767F9DCE13F5LL) + 1);
    if ( i == v17 )
      break;
    if ( !i[4] )
    {
      if ( i != v36[0] )
        goto LABEL_11;
      break;
    }
  }
  v18 = *(_QWORD *)v36[0];
  if ( v36[1] == (void *)0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("list<T> too long");
  v19 = *(__int64 **)(v18 + 8);
  v33[0] = v36;
  v33[1] = 0LL;
  v20 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *(_DWORD *)(v20 + 16) = v50;
  *(_DWORD *)(v20 + 20) = 0;
  *(_QWORD *)v20 = v18;
  *(_QWORD *)(v20 + 8) = v19;
  ++v36[1];
  *(_QWORD *)(v18 + 8) = v20;
  *v19 = v20;
  std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorState>>,0>>::_Insert_unverified<std::pair<unsigned long const,enum ContextualProcessorState>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,enum ContextualProcessorState>>>>>(
    &v35,
    v33,
    *(_QWORD *)v36[0] + 16LL);
  i = v33[0];
LABEL_11:
  i[5] = v15;
  LODWORD(v50) = 0;
  std::unordered_map<unsigned long,enum ContextualProcessorDecision>::_Try_emplace<unsigned long,>(&v42, v33, &v50);
  *((_DWORD *)v33[0] + 5) = 0;
  v21 = *((_QWORD *)a3 + 1);
  if ( (_QWORD)v49 != v21 )
  {
    v50 = *((_QWORD *)a3 + 1);
    Microsoft::WRL::ComPtr<IUnknown>::InternalAddRef((__int64 *)&v50);
    v50 = v49;
    *(_QWORD *)&v49 = v21;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v50);
  }
  LODWORD(v41) = 0;
  BYTE8(v49) = 0;
  if ( *(_QWORD *)(a1 + 48) == *(_QWORD *)(a1 + 40) )
  {
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Emplace_reallocate<ContextualProcessorBuffer::ContextualProcessorMetadata const &>(
      a1 + 32,
      *(_QWORD *)(a1 + 40),
      &v34);
  }
  else
  {
    ContextualProcessorBuffer::ContextualProcessorMetadata::ContextualProcessorMetadata(
      *(ContextualProcessorBuffer::ContextualProcessorMetadata **)(a1 + 40),
      (const struct ContextualProcessorBuffer::ContextualProcessorMetadata *)&v34);
    *(_QWORD *)(a1 + 40) += 160LL;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v49);
  v22 = v45;
  if ( v45 )
  {
    v23 = (const struct std::nothrow_t *)(8 * ((__int64)(*((_QWORD *)&v46 + 1) - (_QWORD)v45) >> 3));
    v50 = (unsigned __int64)v23;
    v33[0] = v45;
    if ( (unsigned __int64)v23 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(v33, &v50);
      v23 = (const struct std::nothrow_t *)v50;
      v22 = v33[0];
    }
    operator delete(v22, v23);
    v45 = 0LL;
    v46 = 0LL;
  }
  v24 = (_QWORD **)v43;
  **((_QWORD **)v43 + 1) = 0LL;
  v25 = *v24;
  if ( v25 )
  {
    do
    {
      v26 = (_QWORD *)*v25;
      operator delete(v25, (const struct std::nothrow_t *)0x18);
      v25 = v26;
    }
    while ( v26 );
  }
  operator delete(v43, (const struct std::nothrow_t *)0x18);
  v27 = v37[0];
  if ( v37[0] )
  {
    v28 = (const struct std::nothrow_t *)(8 * ((v38 - (char *)v37[0]) >> 3));
    v50 = (unsigned __int64)v28;
    v33[0] = v37[0];
    if ( (unsigned __int64)v28 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(v33, &v50);
      v28 = (const struct std::nothrow_t *)v50;
      v27 = v33[0];
    }
    operator delete(v27, v28);
    *(_OWORD *)v37 = 0LL;
    v38 = 0LL;
  }
  v29 = (_QWORD **)v36[0];
  **((_QWORD **)v36[0] + 1) = 0LL;
  v30 = *v29;
  if ( v30 )
  {
    do
    {
      v31 = (_QWORD *)*v30;
      operator delete(v30, (const struct std::nothrow_t *)0x18);
      v30 = v31;
    }
    while ( v31 );
  }
  operator delete(v36[0], (const struct std::nothrow_t *)0x18);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v34);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)a3 + 1);
}
