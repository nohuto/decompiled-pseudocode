/*
 * XREFs of ??$emplace_front@_KAEAPEAVDataProviderProxy@@@?$list@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@2@@std@@QEAAAEAU?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@1@$$QEA_KAEAPEAVDataProviderProxy@@@Z @ 0x1800D7644
 * Callers:
 *     ?RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataProviderProxy@@@Z @ 0x1800D73BC (-RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataP.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18005D888 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::list<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>::emplace_front<unsigned __int64,DataProviderProxy * &>(
        __int64 **a1,
        _QWORD *a2,
        void (__fastcall ****a3)(_QWORD))
{
  __int64 v6; // rbx
  _QWORD *v7; // r14
  _QWORD *v8; // rsi
  void (__fastcall ***v9)(_QWORD); // rcx

  v6 = **a1;
  if ( a1[1] == (__int64 *)0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("list<T> too long");
  v7 = *(_QWORD **)(v6 + 8);
  v8 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  v8[2] = *a2;
  v9 = *a3;
  v8[3] = *a3;
  if ( v9 )
    (**v9)(v9);
  *v8 = v6;
  v8[1] = v7;
  a1[1] = (__int64 *)((char *)a1[1] + 1);
  *(_QWORD *)(v6 + 8) = v8;
  *v7 = v8;
  return **a1 + 16;
}
