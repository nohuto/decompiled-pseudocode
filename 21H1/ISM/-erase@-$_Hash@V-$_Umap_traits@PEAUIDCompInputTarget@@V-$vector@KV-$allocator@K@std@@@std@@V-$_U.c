/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@V?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@3@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1800B419C
 * Callers:
 *     _std::_Hash_std::_Umap_traits_IDCompInputTarget___std::vector_unsigned_long_std::allocator_unsigned_long____std::_Uhash_compare_IDCompInputTarget___DCompTargetHash_DCompTargetEqual__std::allocator_std::pair_IDCompInputTarget___const_std::vector_unsigned_long_std::allocator_unsigned_long________0___::_Insert_unverified_std::pair_IDCompInputTarget___const_std::vector_unsigned_long_std::allocator_unsigned_long______&_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_IDCompInputTarget___const_std::vector_unsigned_long_std::allocator_unsigned_long______________::_1_::catch$54 @ 0x1800ADE00 (_std--_Hash_std--_Umap_traits_IDCompInputTarget___std--vector_unsigned_long_std--al_ea_1800ADE00.c)
 *     _std::_Hash_std::_Umap_traits_IDCompInputTarget___std::vector_unsigned_long_std::allocator_unsigned_long____std::_Uhash_compare_IDCompInputTarget___DCompTargetHash_DCompTargetEqual__std::allocator_std::pair_IDCompInputTarget___const_std::vector_unsigned_long_std::allocator_unsigned_long________0___::_Insert_unverified_std::pair_IDCompInputTarget___const_std::vector_unsigned_long_std::allocator_unsigned_long______std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_IDCompInputTarget___const_std::vector_unsigned_long_std::allocator_unsigned_long______________::_1_::catch$54 @ 0x1800AE1D4 (_std--_Hash_std--_Umap_traits_IDCompInputTarget___std--vector_unsigned_long_std--al_ea_1800AE1D4.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$list@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@V?$allocator@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1800B42B8 (-erase@-$list@U-$pair@$$CBIV-$vector@IV-$allocator@I@std@@@std@@@std@@V-$allocator@U-$pair@$$CBI.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Hash<std::_Umap_traits<IDCompInputTarget *,std::vector<unsigned long>,std::_Uhash_compare<IDCompInputTarget *,DCompTargetHash,DCompTargetEqual>,std::allocator<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>,0>>::erase(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 appended; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int8 v13[4]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v14[40]; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v15[40]; // [rsp+50h] [rbp-48h] BYREF

  v6 = a3[2];
  *(_DWORD *)v13 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v6 + 72LL))(v6, v14);
  appended = std::_Fnv1a_append_bytes(v7, v13, 4uLL);
  *(_DWORD *)v13 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v6 + 72LL))(v6, v15) + 4);
  v9 = appended ^ (2 * std::_Fnv1a_append_bytes(*(unsigned int *)v13, v13, 4uLL));
  v10 = 2 * (v9 & a1[6]);
  v11 = a1[3];
  if ( *(_QWORD **)(v11 + 16 * (v9 & a1[6]) + 8) == a3 )
  {
    if ( *(_QWORD **)(v11 + 16 * (v9 & a1[6])) == a3 )
    {
      *(_QWORD *)(v11 + 16 * (v9 & a1[6])) = a1[1];
      *(_QWORD *)(a1[3] + 8 * v10 + 8) = a1[1];
    }
    else
    {
      *(_QWORD *)(v11 + 16 * (v9 & a1[6]) + 8) = a3[1];
    }
  }
  else if ( *(_QWORD **)(v11 + 16 * (v9 & a1[6])) == a3 )
  {
    *(_QWORD *)(v11 + 16 * (v9 & a1[6])) = *a3;
  }
  std::list<std::pair<unsigned int const,std::vector<unsigned int>>>::erase(a1 + 1, a2, a3);
  return a2;
}
