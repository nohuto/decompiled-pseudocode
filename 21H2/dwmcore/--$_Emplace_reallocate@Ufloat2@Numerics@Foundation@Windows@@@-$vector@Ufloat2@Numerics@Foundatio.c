/*
 * XREFs of ??$_Emplace_reallocate@Ufloat2@Numerics@Foundation@Windows@@@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat2@Numerics@Foundation@Windows@@QEAU2345@$$QEAU2345@@Z @ 0x18022BE40
 * Callers:
 *     ?SpawnParticles@CParticleEmitterVisual@@IEAAJHAEBUD2D_SIZE_F@@@Z @ 0x180230098 (-SpawnParticles@CParticleEmitterVisual@@IEAAJHAEBUD2D_SIZE_F@@@Z.c)
 *     ?BeginFigure@CPathEmitterEdge@EmitterShapes@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x1802590F0 (-BeginFigure@CPathEmitterEdge@EmitterShapes@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 * Callees:
 *     ?_Calculate_growth@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEBA_K_K@Z @ 0x180005590 (-_Calculate_growth@-$vector@VCMilPoint2F@@V-$allocator@VCMilPoint2F@@@std@@@std@@AEBA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800B7030 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 *     ?_Xlength@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@CAXXZ @ 0x18019180C (-_Xlength@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@CAXXZ.c)
 *     ?_Change_array@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@AEAAXQEAUfloat2@Numerics@Foundation@Windows@@_K1@Z @ 0x1801A667C (-_Change_array@-$vector@Ufloat2@Numerics@Foundation@Windows@@V-$allocator@Ufloat2@Numerics@Found.c)
 */

char *__fastcall std::vector<Windows::Foundation::Numerics::float2>::_Emplace_reallocate<Windows::Foundation::Numerics::float2>(
        _QWORD *a1,
        _BYTE *a2,
        _QWORD *a3)
{
  _BYTE *v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r14
  __int64 v9; // r15
  SIZE_T size_of; // rax
  char *v11; // rsi
  char *v12; // rbp
  void *v13; // rcx
  _BYTE *v14; // r8
  _BYTE *v15; // rdx
  size_t v16; // r8

  v3 = (_BYTE *)*a1;
  v6 = (__int64)(a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<KernelTap>::_Xlength();
  v8 = v6 + 1;
  v9 = std::vector<CMilPoint2F>::_Calculate_growth(a1, v6 + 1);
  size_of = std::_Get_size_of_n<8>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = &v11[8 * ((a2 - v3) >> 3)];
  v13 = v11;
  *(_QWORD *)v12 = *a3;
  v14 = (_BYTE *)a1[1];
  v15 = (_BYTE *)*a1;
  if ( a2 == v14 )
  {
    v16 = v14 - v15;
  }
  else
  {
    memmove_0(v11, v15, (size_t)&a2[-*a1]);
    v13 = v12 + 8;
    v16 = a1[1] - (_QWORD)a2;
    v15 = a2;
  }
  memmove_0(v13, v15, v16);
  std::vector<Windows::Foundation::Numerics::float2>::_Change_array((__int64)a1, (__int64)v11, v8, v9);
  return v12;
}
