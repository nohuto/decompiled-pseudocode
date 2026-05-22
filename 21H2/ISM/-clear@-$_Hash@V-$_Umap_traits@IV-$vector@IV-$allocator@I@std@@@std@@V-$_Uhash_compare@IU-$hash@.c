/*
 * XREFs of ?clear@?$_Hash@V?$_Umap_traits@IV?$vector@IV?$allocator@I@std@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x1800B3E1C
 * Callers:
 *     ?UpdateGestureTargetingDecisions@Win32kInterop@@SAXIIPEAI@Z @ 0x1800B2C94 (-UpdateGestureTargetingDecisions@Win32kInterop@@SAXIIPEAI@Z.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800ACDC4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIV-$vector@IV-$allocator@I@std@@@std@@@.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,std::vector<unsigned int>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::vector<unsigned int>>>,0>>::clear(
        __int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rcx

  std::_List_node<std::pair<unsigned int const,std::vector<unsigned int>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,std::vector<unsigned int>>,void *>>>(
    a1,
    (_QWORD **)qword_180209B98);
  *(_QWORD *)qword_180209B98 = qword_180209B98;
  result = qword_180209B98;
  *(_QWORD *)(qword_180209B98 + 8) = qword_180209B98;
  qword_180209BA0 = 0LL;
  v2 = (unsigned __int64)(xmmword_180209BB0 - qword_180209BA8 + 7) >> 3;
  if ( qword_180209BA8 > (unsigned __int64)xmmword_180209BB0 )
    v2 = 0LL;
  if ( v2 )
  {
    result = qword_180209B98;
    memset64((void *)qword_180209BA8, qword_180209B98, v2);
  }
  return result;
}
