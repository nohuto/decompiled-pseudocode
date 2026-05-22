/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@2@AEB_K@Z @ 0x1800099B0
 * Callers:
 *     ??$_Try_emplace@AEB_K$$V@?$unordered_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x180009A90 (--$_Try_emplace@AEB_K$$V@-$unordered_map@_K_KU-$hash@_K@std@@U-$equal_to@_K@2@V-$allocator@U-$pa.c)
 *     ?NotifyInputSinkRemoved@@YAHPEAX@Z @ 0x180014030 (-NotifyInputSinkRemoved@@YAHPEAX@Z.c)
 *     ?NotifyInputSinkParented@@YAHPEAX0@Z @ 0x1800153F0 (-NotifyInputSinkParented@@YAHPEAX0@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::lower_bound(
        _QWORD *a1,
        _QWORD *a2,
        unsigned __int8 *a3)
{
  unsigned __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // r9
  __int64 v13; // r8
  _QWORD *i; // rax
  _QWORD *v15; // rcx

  v6 = a3[6] ^ (0x100000001B3LL
              * (a3[5] ^ (0x100000001B3LL
                        * (a3[4] ^ (0x100000001B3LL
                                  * (a3[3] ^ (0x100000001B3LL
                                            * (a3[2] ^ (0x100000001B3LL
                                                      * (a3[1] ^ (0x100000001B3LL * (*a3 ^ 0xCBF29CE484222325uLL))))))))))));
  v7 = a3[7];
  v8 = a1[6];
  v9 = a1[3];
  v10 = (_QWORD *)a1[1];
  v11 = 16 * ((0x100000001B3LL * (v7 ^ (0x100000001B3LL * v6))) & v8);
  v12 = *(_QWORD **)(v9 + v11);
  v13 = v9 + v11;
  for ( i = v12; ; i = (_QWORD *)*i )
  {
    if ( v12 == v10 )
      v15 = v10;
    else
      v15 = **(_QWORD ***)(v13 + 8);
    if ( i == v15 )
    {
      *a2 = v10;
      return a2;
    }
    if ( i[2] == *(_QWORD *)a3 )
      break;
  }
  *a2 = i;
  return a2;
}
