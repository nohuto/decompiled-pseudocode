/*
 * XREFs of ??$_Insert@AEBGUActiveKeyProperties@ControllerProcessor@@@?$list@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBG$$QEAUActiveKeyProperties@ControllerProcessor@@@Z @ 0x18011EC6C
 * Callers:
 *     ??$_Insert_or_assign@AEBGUActiveKeyProperties@ControllerProcessor@@@?$unordered_map@GUActiveKeyProperties@ControllerProcessor@@U?$hash@G@std@@U?$equal_to@G@4@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@std@@@std@@@std@@_N@1@AEBG$$QEAUActiveKeyProperties@ControllerProcessor@@@Z @ 0x18011ED24 (--$_Insert_or_assign@AEBGUActiveKeyProperties@ControllerProcessor@@@-$unordered_map@GUActiveKeyP.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x180013120 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 */

_QWORD *__fastcall std::list<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>::_Insert<unsigned short const &,ControllerProcessor::ActiveKeyProperties>(
        __int64 a1,
        __int64 a2,
        _WORD *a3,
        _BYTE *a4)
{
  _QWORD *v8; // rdi
  size_t size_of; // rax
  _QWORD *result; // rax

  if ( *(_QWORD *)(a1 + 8) == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("list<T> too long");
  v8 = *(_QWORD **)(a2 + 8);
  size_of = std::_Get_size_of_n<24>(1uLL);
  result = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *((_WORD *)result + 8) = *a3;
  *((_BYTE *)result + 18) = *a4;
  *result = a2;
  result[1] = v8;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = result;
  *v8 = result;
  return result;
}
