/*
 * XREFs of ?_Change_array@?$vector@Ufloat3@Numerics@Foundation@Windows@@V?$allocator@Ufloat3@Numerics@Foundation@Windows@@@std@@@std@@AEAAXQEAUfloat3@Numerics@Foundation@Windows@@_K1@Z @ 0x1801754C4
 * Callers:
 *     ?_Reallocate_exactly@?$vector@Ufloat3@Numerics@Foundation@Windows@@V?$allocator@Ufloat3@Numerics@Foundation@Windows@@@std@@@std@@AEAAX_K@Z @ 0x180175628 (-_Reallocate_exactly@-$vector@Ufloat3@Numerics@Foundation@Windows@@V-$allocator@Ufloat3@Numerics.c)
 *     ??$_Emplace_reallocate@AEBUfloat3@Numerics@Foundation@Windows@@@?$vector@Ufloat3@Numerics@Foundation@Windows@@V?$allocator@Ufloat3@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat3@Numerics@Foundation@Windows@@QEAU2345@AEBU2345@@Z @ 0x1801DDF6C (--$_Emplace_reallocate@AEBUfloat3@Numerics@Foundation@Windows@@@-$vector@Ufloat3@Numerics@Founda.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<Windows::Foundation::Numerics::float3>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 12 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v6) / 12LL));
  *(_QWORD *)a1 = a2;
  result = 3 * a4;
  *(_QWORD *)(a1 + 8) = a2 + 12 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 12 * a4;
  return result;
}
