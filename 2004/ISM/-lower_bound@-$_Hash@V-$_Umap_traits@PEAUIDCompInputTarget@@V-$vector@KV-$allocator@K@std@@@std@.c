/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@V?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@3@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@2@AEBQEAUIDCompInputTarget@@@Z @ 0x1800B3FC8
 * Callers:
 *     ??$_Insert_or_assign@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@?$unordered_map@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@UDCompTargetHash@@UDCompTargetEqual@@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAPEAUIDCompInputTarget@@$$QEAV?$vector@KV?$allocator@K@std@@@1@@Z @ 0x1800ACEAC (--$_Insert_or_assign@PEAUIDCompInputTarget@@V-$vector@KV-$allocator@K@std@@@std@@@-$unordered_ma.c)
 *     ?DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@@Z @ 0x1800AF300 (-DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$ComPtr@UIIn.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x180045248 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??R?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@std@@QEBA_NAEBQEAUIDCompInputTarget@@0@Z @ 0x1800AED20 (--R-$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@std@@QEBA_NAEBQ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Hash<std::_Umap_traits<IDCompInputTarget *,std::vector<unsigned long>,std::_Uhash_compare<IDCompInputTarget *,DCompTargetHash,DCompTargetEqual>,std::allocator<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>,0>>::lower_bound(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 appended; // rbx
  __int64 v9; // rdi
  _QWORD *i; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-88h] BYREF
  char v15[40]; // [rsp+28h] [rbp-80h] BYREF
  char v16[40]; // [rsp+50h] [rbp-58h] BYREF

  v6 = *a3;
  LODWORD(v14) = *(_DWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)*a3 + 72LL))(*a3, v15);
  appended = std::_Fnv1a_append_bytes(v7, (const unsigned __int8 *const)&v14, 4uLL);
  LODWORD(v14) = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 72LL))(v6, v16) + 4);
  v9 = (appended ^ (2 * std::_Fnv1a_append_bytes((unsigned int)v14, (const unsigned __int8 *const)&v14, 4uLL))) & a1[6];
  for ( i = *(_QWORD **)(a1[3] + 16 * v9); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)*std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
                           (__int64)a1,
                           &v14,
                           v9) )
    {
      *a2 = a1[1];
      return a2;
    }
    if ( !std::_Uhash_compare<IDCompInputTarget *,DCompTargetHash,DCompTargetEqual>::operator()(v11, i + 2, a3) )
      break;
  }
  if ( std::_Uhash_compare<IDCompInputTarget *,DCompTargetHash,DCompTargetEqual>::operator()(v12, a3, i + 2) )
    i = (_QWORD *)a1[1];
  *a2 = i;
  return a2;
}
