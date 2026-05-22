/*
 * XREFs of ??$_Reallocate_for@V_lambda_138c3d7c38c85abb84c7fc7bfe5747b7_@@D@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_138c3d7c38c85abb84c7fc7bfe5747b7_@@D@Z @ 0x1800833A8
 * Callers:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@_KD@Z @ 0x180083608 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@_KD@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18003C460 (memset_0.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAXXZ @ 0x180070F08 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAXXZ.c)
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBA_K_K@Z @ 0x180084FA4 (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEBA_K_K@Z.c)
 */

__int64 __fastcall std::string::_Reallocate_for<_lambda_138c3d7c38c85abb84c7fc7bfe5747b7_,char>(__int64 a1, size_t a2)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  __int64 result; // rax

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    std::wstring::_Xlen();
  v4 = *(_QWORD *)(a1 + 24);
  v5 = std::string::_Calculate_growth();
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(v5 + 1);
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = v5;
  v7 = v6;
  memset_0(v6, 0, a2);
  *((_BYTE *)v7 + a2) = 0;
  if ( v4 >= 0x10 )
    std::_Deallocate<16,0>(*(void **)a1, (const struct std::nothrow_t *)(v4 + 1));
  result = a1;
  *(_QWORD *)a1 = v7;
  return result;
}
