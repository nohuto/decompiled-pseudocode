/*
 * XREFs of ??$_Insert_unverified@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@V?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@3@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@1@@Z @ 0x1800ADB24
 * Callers:
 *     ??$_Insert_or_assign@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@?$unordered_map@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@UDCompTargetHash@@UDCompTargetEqual@@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAPEAUIDCompInputTarget@@$$QEAV?$vector@KV?$allocator@K@std@@@1@@Z @ 0x1800ACEAC (--$_Insert_or_assign@PEAUIDCompInputTarget@@V-$vector@KV-$allocator@K@std@@@std@@@-$unordered_ma.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x180045248 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??R?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@std@@QEBA_NAEBQEAUIDCompInputTarget@@0@Z @ 0x1800AED20 (--R-$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@std@@QEBA_NAEBQ.c)
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@V?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@3@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x1800B2C7C (-_Check_size@-$_Hash@V-$_Umap_traits@PEAUIDCompInputTarget@@V-$vector@KV-$allocator@K@std@@@std@.c)
 *     ?erase@?$list@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@V?$allocator@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1800B3DF8 (-erase@-$list@U-$pair@$$CBIV-$vector@IV-$allocator@I@std@@@std@@@std@@V-$allocator@U-$pair@$$CBI.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall std::_Hash<std::_Umap_traits<IDCompInputTarget *,std::vector<unsigned long>,std::_Uhash_compare<IDCompInputTarget *,DCompTargetHash,DCompTargetEqual>,std::allocator<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>,0>>::_Insert_unverified<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>>>>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4)
{
  __int64 v8; // rsi
  __int64 appended; // rdi
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 **v20; // rsi
  __int64 **v21; // rax
  __int64 *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rax
  unsigned __int8 v25[16]; // [rsp+20h] [rbp-B8h] BYREF
  _QWORD *v26; // [rsp+30h] [rbp-A8h]
  _BYTE v27[40]; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v28[40]; // [rsp+68h] [rbp-70h] BYREF

  v26 = a1;
  v8 = *a3;
  *(_DWORD *)v25 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a3 + 72LL))(*a3, v27);
  appended = std::_Fnv1a_append_bytes(*(unsigned int *)v25, v25, 4uLL);
  *(_DWORD *)v25 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v8 + 72LL))(v8, v28) + 4);
  v10 = (appended ^ (2 * std::_Fnv1a_append_bytes(*(unsigned int *)v25, v25, 4uLL))) & a1[6];
  v12 = *std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
           (__int64)a1,
           v25,
           v10);
  while ( 1 )
  {
    v13 = a1[3];
    if ( v12 == *(_QWORD *)(v13 + 16 * v10) )
      break;
    v12 = *(_QWORD *)(v12 + 8);
    if ( !(unsigned __int8)std::_Uhash_compare<IDCompInputTarget *,DCompTargetHash,DCompTargetEqual>::operator()(
                             v11,
                             a3,
                             v12 + 16) )
    {
      std::list<std::pair<unsigned int const,std::vector<unsigned int>>>::erase(a1 + 1, v25, a4);
      *(_QWORD *)a2 = v12;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  v15 = *a4;
  if ( v12 != *a4 )
  {
    *(_QWORD *)a4[1] = v15;
    **(_QWORD **)(v15 + 8) = v12;
    **(_QWORD **)(v12 + 8) = a4;
    v16 = *(_QWORD *)(v12 + 8);
    *(_QWORD *)(v12 + 8) = *(_QWORD *)(v15 + 8);
    *(_QWORD *)(v15 + 8) = a4[1];
    a4[1] = v16;
    v13 = a1[3];
  }
  v17 = 2 * v10;
  v18 = *(_QWORD *)(v13 + 16 * v10);
  if ( v18 == a1[1] )
  {
    *(_QWORD *)(v13 + 16 * v10) = a4;
    v19 = a1[3];
    *(_QWORD *)(v19 + 16 * v10 + 8) = a4;
  }
  else
  {
    v20 = (__int64 **)(v13 + 16 * v10);
    if ( v18 == v12 )
    {
      *v20 = a4;
    }
    else
    {
      v21 = (__int64 **)v20[1];
      v22 = *v21;
      v20[1] = *v21;
      if ( v22 != a4 )
      {
        v23 = a1[3];
        v24 = *(_QWORD *)(v23 + 8 * v17 + 8);
        *(_QWORD *)(v23 + 8 * v17 + 8) = *(_QWORD *)(v24 + 8);
      }
    }
  }
  try
  {
    std::_Hash<std::_Umap_traits<IDCompInputTarget *,std::vector<unsigned long>,std::_Uhash_compare<IDCompInputTarget *,DCompTargetHash,DCompTargetEqual>,std::allocator<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>,0>>::_Check_size(a1);
    *(_QWORD *)a2 = a4;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    std::_Hash<std::_Umap_traits<IDCompInputTarget *,std::vector<unsigned long>,std::_Uhash_compare<IDCompInputTarget *,DCompTargetHash,DCompTargetEqual>,std::allocator<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>,0>>::erase(
      v26,
      v25,
      a4);
    throw;
  }
  return result;
}
