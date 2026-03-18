/*
 * XREFs of ??$emplace_front@AEAIAEAI@?$list@U?$pair@$$CBII@std@@V?$allocator@U?$pair@$$CBII@std@@@2@@std@@QEAAAEAU?$pair@$$CBII@1@AEAI0@Z @ 0x1801815F8
 * Callers:
 *     ??$emplace@AEAIAEAI@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@_N@1@AEAI0@Z @ 0x1801815A0 (--$emplace@AEAIAEAI@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18004B6F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::list<std::pair<unsigned int const,unsigned int>>::emplace_front<unsigned int &,unsigned int &>(
        __int64 **a1,
        _DWORD *a2,
        _DWORD *a3)
{
  __int64 v6; // rbx
  __int64 *v7; // rdi
  __int64 v8; // rax

  v6 = **a1;
  if ( a1[1] == (__int64 *)0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("list<T> too long");
  v7 = *(__int64 **)(v6 + 8);
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x18uLL);
  *(_DWORD *)(v8 + 16) = *a2;
  *(_DWORD *)(v8 + 20) = *a3;
  *(_QWORD *)v8 = v6;
  *(_QWORD *)(v8 + 8) = v7;
  a1[1] = (__int64 *)((char *)a1[1] + 1);
  *(_QWORD *)(v6 + 8) = v8;
  *v7 = v8;
  return **a1 + 16;
}
