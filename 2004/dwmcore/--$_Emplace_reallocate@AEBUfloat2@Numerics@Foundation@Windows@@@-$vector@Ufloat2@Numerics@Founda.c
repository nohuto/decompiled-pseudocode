/*
 * XREFs of ??$_Emplace_reallocate@AEBUfloat2@Numerics@Foundation@Windows@@@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat2@Numerics@Foundation@Windows@@QEAU2345@AEBU2345@@Z @ 0x1801DDE74
 * Callers:
 *     ?SpawnParticles@CParticleEmitterVisual@@IEAAJHAEBUD2D_SIZE_F@@@Z @ 0x1801E24E8 (-SpawnParticles@CParticleEmitterVisual@@IEAAJHAEBUD2D_SIZE_F@@@Z.c)
 *     ?AddLines@CPathEmitterEdge@EmitterShapes@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x180207B40 (-AddLines@CPathEmitterEdge@EmitterShapes@@EEAAXPEBUD2D_POINT_2F@@I@Z.c)
 *     ?BeginFigure@CPathEmitterEdge@EmitterShapes@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x180207DD0 (-BeginFigure@CPathEmitterEdge@EmitterShapes@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 * Callees:
 *     ?_Change_array@?$vector@PEAVCBaseExpression@@V?$allocator@PEAVCBaseExpression@@@std@@@std@@AEAAXQEAPEAVCBaseExpression@@_K1@Z @ 0x18001BB78 (-_Change_array@-$vector@PEAVCBaseExpression@@V-$allocator@PEAVCBaseExpression@@@std@@@std@@AEAAX.c)
 *     ?_Calculate_growth@?$vector@PEAVCSceneNode@@V?$allocator@PEAVCSceneNode@@@std@@@std@@AEBA_K_K@Z @ 0x180048780 (-_Calculate_growth@-$vector@PEAVCSceneNode@@V-$allocator@PEAVCSceneNode@@@std@@@std@@AEBA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18004B6F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x1800E5CF0 (-_Xlength@-$vector@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@@@std@@@std@.c)
 *     memmove_0 @ 0x1800EED27 (memmove_0.c)
 */

__int64 __fastcall std::vector<Windows::Foundation::Numerics::float2>::_Emplace_reallocate<Windows::Foundation::Numerics::float2 const &>(
        __int64 *a1,
        _BYTE *a2,
        _QWORD *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  SIZE_T v10; // rcx
  unsigned __int64 v11; // r9
  char *v12; // rsi
  char *v13; // rcx
  _BYTE *v14; // r8
  _BYTE *v15; // rdx
  size_t v16; // r8

  v4 = (__int64)&a2[-*a1] >> 3;
  v6 = (a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<std::unique_ptr<CCheckMPOCache>>::_Xlength();
  v8 = v6 + 1;
  v9 = std::vector<CSceneNode *>::_Calculate_growth(a1, v6 + 1);
  v10 = 8 * v9;
  if ( v9 > v11 )
    v10 = -1LL;
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
  v13 = v12;
  *(_QWORD *)&v12[8 * v4] = *a3;
  v14 = (_BYTE *)a1[1];
  v15 = (_BYTE *)*a1;
  if ( a2 == v14 )
  {
    v16 = v14 - v15;
  }
  else
  {
    memmove_0(v12, v15, (size_t)&a2[-*a1]);
    v16 = a1[1] - (_QWORD)a2;
    v13 = &v12[8 * v4 + 8];
    v15 = a2;
  }
  memmove_0(v13, v15, v16);
  std::vector<CBaseExpression *>::_Change_array(a1, (__int64)v12, v8, v9);
  return *a1 + 8 * v4;
}
