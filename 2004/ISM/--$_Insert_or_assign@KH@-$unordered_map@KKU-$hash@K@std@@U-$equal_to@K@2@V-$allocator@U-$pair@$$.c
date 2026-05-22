/*
 * XREFs of ??$_Insert_or_assign@KH@?$unordered_map@KKU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@std@@_N@1@$$QEAK$$QEAH@Z @ 0x180024000
 * Callers:
 *     ?Initialize@KeyboardModifierState@@AEAAJXZ @ 0x180023EE0 (-Initialize@KeyboardModifierState@@AEAAJXZ.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800130F0 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Insert_unverified@U?$pair@$$CBKK@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KKV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBKK@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@1@@Z @ 0x180024124 (--$_Insert_unverified@U-$pair@$$CBKK@std@@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simp.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::unordered_map<unsigned long,unsigned long>::_Insert_or_assign<unsigned long,int>(
        _QWORD *a1,
        __int64 a2,
        const unsigned __int8 *a3,
        _DWORD *a4)
{
  __int64 appended; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 *v11; // rax
  __int64 *v12; // rbx
  __int64 *v13; // rcx
  __int64 *v14; // rcx
  __int64 v15; // rbx
  _QWORD *v16; // rdi
  size_t size_of; // rax
  _QWORD *v18; // rax

  appended = std::_Fnv1a_append_bytes((__int64)a1, a3, 4uLL);
  v9 = 2 * (appended & a1[6]);
  v10 = a1[3];
  v11 = *(__int64 **)(v10 + 16 * (appended & a1[6]));
  v12 = (__int64 *)a1[1];
  while ( 1 )
  {
    if ( *(__int64 **)(v10 + 8 * v9) == v12 )
      v13 = (__int64 *)a1[1];
    else
      v13 = **(__int64 ***)(v10 + 8 * v9 + 8);
    if ( v11 == v13 )
    {
      v11 = (__int64 *)a1[1];
      v14 = v11;
      goto LABEL_8;
    }
    if ( *((_DWORD *)v11 + 4) == *(_DWORD *)a3 )
      break;
    v11 = (__int64 *)*v11;
  }
  v14 = v11;
LABEL_8:
  if ( v14 == v12 )
  {
    v15 = *v12;
    if ( a1[2] == 0xAAAAAAAAAAAAAAALL )
      std::_Xlength_error("list<T> too long");
    v16 = *(_QWORD **)(v15 + 8);
    size_of = std::_Get_size_of_n<24>(1uLL);
    v18 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *((_DWORD *)v18 + 4) = *(_DWORD *)a3;
    *((_DWORD *)v18 + 5) = *a4;
    *v18 = v15;
    v18[1] = v16;
    ++a1[2];
    *(_QWORD *)(v15 + 8) = v18;
    *v16 = v18;
    std::_Hash<std::_Umap_traits<unsigned long,unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Insert_unverified<std::pair<unsigned long const,unsigned long>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,unsigned long>>>>>(
      a1,
      a2,
      *(_QWORD *)a1[1] + 16LL);
  }
  else
  {
    *((_DWORD *)v11 + 5) = *a4;
    *(_QWORD *)a2 = v11;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
