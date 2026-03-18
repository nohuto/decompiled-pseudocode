/*
 * XREFs of ??$_Insert@_KAEAPEAVBamoDataSourceProxy@@@?$list@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@U_Iterator_base0@2@@1@$$QEA_KAEAPEAVBamoDataSourceProxy@@@Z @ 0x1801853B4
 * Callers:
 *     ?AddDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z @ 0x1801856C0 (-AddDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180044B10 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::list<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>::_Insert<unsigned __int64,BamoDataSourceProxy * &>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 (__fastcall ****a4)(_QWORD))
{
  _QWORD *v8; // r14
  __int64 result; // rax
  _QWORD *v10; // rdi
  __int64 (__fastcall ***v11)(_QWORD); // rcx

  if ( *(_QWORD *)(a1 + 8) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("list<T> too long");
  v8 = *(_QWORD **)(a2 + 8);
  result = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  v10 = (_QWORD *)result;
  *(_QWORD *)(result + 16) = *a3;
  v11 = *a4;
  *(_QWORD *)(result + 24) = *a4;
  if ( v11 )
    result = (**v11)(v11);
  *v10 = a2;
  v10[1] = v8;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v10;
  *v8 = v10;
  return result;
}
