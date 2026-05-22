/*
 * XREFs of ?equal_range@?$_Hash@V?$_Umap_traits@IV?$vector@IV?$allocator@I@std@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@std@@@std@@@std@@V12@@2@AEBI@Z @ 0x1800B3A2C
 * Callers:
 *     ?UpdateGestureTargetingDecisions@Win32kInterop@@SAXIIPEAI@Z @ 0x1800B2834 (-UpdateGestureTargetingDecisions@Win32kInterop@@SAXIIPEAI@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x1800451F8 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned int,std::vector<unsigned int>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::vector<unsigned int>>>,0>>::equal_range(
        __int64 a1,
        _QWORD *a2,
        const unsigned __int8 *a3)
{
  __int64 v4; // rsi
  __int64 i; // r10
  __int64 v6; // rbp
  __int64 **v7; // rax
  __int64 *v8; // r10
  int *v9; // r11
  int v10; // edi
  _QWORD *v11; // rax
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // rax
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF

  v16 = a1;
  v4 = qword_180208BA0 & std::_Fnv1a_append_bytes(a1, a3, 4uLL);
  for ( i = *(_QWORD *)(qword_180208B88 + 16 * v4); ; i = *v8 )
  {
    v6 = i;
    v7 = (__int64 **)std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
                       (__int64)&Win32kInterop::s_frameIdToPointerIdMap,
                       &v16,
                       v4);
    if ( v8 == *v7 )
      break;
    v10 = *v9;
    if ( *((_DWORD *)v8 + 4) == *v9 )
    {
      do
        v11 = std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
                (__int64)&Win32kInterop::s_frameIdToPointerIdMap,
                &v16,
                v4);
      while ( v12 != *v11 && v10 == *(_DWORD *)(v12 + 16) );
      if ( v6 != v12 )
      {
        *a2 = v13;
        a2[1] = v12;
        return a2;
      }
      break;
    }
  }
  v14 = qword_180208B78;
  *a2 = qword_180208B78;
  a2[1] = v14;
  return a2;
}
