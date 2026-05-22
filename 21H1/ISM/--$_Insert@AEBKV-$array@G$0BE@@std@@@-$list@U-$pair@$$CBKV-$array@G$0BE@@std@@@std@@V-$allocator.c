/*
 * XREFs of ??$_Insert@AEBKV?$array@G$0BE@@std@@@?$list@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@V?$allocator@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBK$$QEAV?$array@G$0BE@@1@@Z @ 0x180034A2C
 * Callers:
 *     ??$_Insert_or_assign@AEBKV?$array@G$0BE@@std@@@?$unordered_map@KV?$array@G$0BE@@std@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@std@@@std@@@std@@_N@1@AEBK$$QEAV?$array@G$0BE@@1@@Z @ 0x1800347EC (--$_Insert_or_assign@AEBKV-$array@G$0BE@@std@@@-$unordered_map@KV-$array@G$0BE@@std@@U-$hash@K@2.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::list<std::pair<unsigned long const,std::array<unsigned short,20>>>::_Insert<unsigned long const &,std::array<unsigned short,20>>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4)
{
  _QWORD *v8; // rdi
  _QWORD *result; // rax

  if ( *(_QWORD *)(a1 + 8) == 0x3FFFFFFFFFFFFFFLL )
    std::_Xlength_error("list<T> too long");
  v8 = *(_QWORD **)(a2 + 8);
  result = std::_Allocate<16,std::_Default_allocate_traits,0>(0x40uLL);
  *((_DWORD *)result + 4) = *a3;
  *(_OWORD *)((char *)result + 20) = *(_OWORD *)a4;
  *(_OWORD *)((char *)result + 36) = *(_OWORD *)(a4 + 16);
  *(_QWORD *)((char *)result + 52) = *(_QWORD *)(a4 + 32);
  *result = a2;
  result[1] = v8;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = result;
  *v8 = result;
  return result;
}
