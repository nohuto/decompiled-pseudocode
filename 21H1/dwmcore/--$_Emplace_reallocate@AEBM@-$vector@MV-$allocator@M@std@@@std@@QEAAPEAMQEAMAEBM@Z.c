/*
 * XREFs of ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x1801E0700
 * Callers:
 *     ??$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinearGradientLegacyMilBrush@@PEAVCGradientColorData@@@Z @ 0x1801B9074 (--$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinear.c)
 *     ?SpawnParticles@CParticleEmitterVisual@@IEAAJHAEBUD2D_SIZE_F@@@Z @ 0x1801E4E68 (-SpawnParticles@CParticleEmitterVisual@@IEAAJHAEBUD2D_SIZE_F@@@Z.c)
 *     ?EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ @ 0x1801F1098 (-EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ.c)
 *     ?AddLines@CPathEmitterEdge@EmitterShapes@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x18020A500 (-AddLines@CPathEmitterEdge@EmitterShapes@@EEAAXPEBUD2D_POINT_2F@@I@Z.c)
 *     ?BeginFigure@CPathEmitterEdge@EmitterShapes@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x18020A790 (-BeginFigure@CPathEmitterEdge@EmitterShapes@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 *     ?CalculateFigureLength@Figure@CPathEmitterEdge@EmitterShapes@@QEAAX_N@Z @ 0x18020A86C (-CalculateFigureLength@Figure@CPathEmitterEdge@EmitterShapes@@QEAAX_N@Z.c)
 *     ?AddVisual@CDepthSortingLayer@@QEAAXAEBVCVisualDepthGeometry@@@Z @ 0x18020F3BC (-AddVisual@CDepthSortingLayer@@QEAAXAEBVCVisualDepthGeometry@@@Z.c)
 *     ?MergeWith@CDepthSortingLayer@@QEAAXAEAV1@@Z @ 0x18020F444 (-MergeWith@CDepthSortingLayer@@QEAAXAEAV1@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180044B10 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x1800E4860 (-_Xlength@-$vector@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@@@std@@@std@.c)
 *     memmove_0 @ 0x1800EBD77 (memmove_0.c)
 *     ?_Change_array@?$vector@HV?$allocator@H@std@@@std@@AEAAXQEAH_K1@Z @ 0x18015644C (-_Change_array@-$vector@HV-$allocator@H@std@@@std@@AEAAXQEAH_K1@Z.c)
 *     ?_Calculate_growth@?$vector@MV?$allocator@M@std@@@std@@AEBA_K_K@Z @ 0x1801E5B60 (-_Calculate_growth@-$vector@MV-$allocator@M@std@@@std@@AEBA_K_K@Z.c)
 */

__int64 __fastcall std::vector<float>::_Emplace_reallocate<float const &>(const void **a1, _BYTE *a2, _DWORD *a3)
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

  v4 = (a2 - (_BYTE *)*a1) >> 2;
  v6 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  if ( v6 == 0x3FFFFFFFFFFFFFFFLL )
    std::vector<std::unique_ptr<CCheckMPOCache>>::_Xlength();
  v8 = v6 + 1;
  v9 = std::vector<float>::_Calculate_growth(a1, v6 + 1);
  v10 = 4 * v9;
  if ( v9 > v11 )
    v10 = -1LL;
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
  *(_DWORD *)&v12[4 * v4] = *a3;
  v13 = v12;
  v14 = a1[1];
  v15 = *a1;
  if ( a2 == v14 )
  {
    v16 = v14 - v15;
  }
  else
  {
    memmove_0(v12, v15, a2 - (_BYTE *)*a1);
    v16 = (_BYTE *)a1[1] - a2;
    v13 = &v12[4 * v4 + 4];
    v15 = a2;
  }
  memmove_0(v13, v15, v16);
  std::vector<int>::_Change_array((__int64)a1, (__int64)v12, v8, v9);
  return (__int64)*a1 + 4 * v4;
}
