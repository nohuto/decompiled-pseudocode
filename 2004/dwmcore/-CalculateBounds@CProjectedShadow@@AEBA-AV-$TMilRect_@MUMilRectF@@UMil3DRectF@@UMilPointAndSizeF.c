/*
 * XREFs of ?CalculateBounds@CProjectedShadow@@AEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MPEBVCVisualTree@@@Z @ 0x18000B37C
 * Callers:
 *     ?AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCNineGridBrush@@@Z @ 0x18000B118 (-AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCNineGridBrush@@@Z.c)
 *     ?AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCSurfaceBrush@@@Z @ 0x1801E4F2C (-AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCSurfaceBrush@@@Z.c)
 * Callees:
 *     ?find@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEBA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@@2@AEBQEBVCVisualTree@@@Z @ 0x18000C364 (-find@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$le.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180072960 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x18007EF08 (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 */

_QWORD *__fastcall CProjectedShadow::CalculateBounds(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  int v6; // xmm1_4
  int v7; // xmm0_4
  int v8; // xmm1_4
  int v9; // xmm0_4
  int v10; // xmm0_4
  __int128 v12; // [rsp+20h] [rbp-60h] BYREF
  _DWORD v13[8]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v14; // [rsp+50h] [rbp-30h]
  int v15; // [rsp+60h] [rbp-20h]
  int v16; // [rsp+64h] [rbp-1Ch]
  int v17; // [rsp+68h] [rbp-18h]
  int v18; // [rsp+6Ch] [rbp-14h]
  int v19; // [rsp+70h] [rbp-10h]
  __int64 v20; // [rsp+90h] [rbp+10h] BYREF
  char v21; // [rsp+98h] [rbp+18h] BYREF

  v20 = a4;
  v12 = *(_OWORD *)(*(_QWORD *)std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::find(
                                 *(_QWORD *)(a1 + 72) + 72LL,
                                 &v21,
                                 &v20)
                  + 60LL);
  TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(&v12);
  v13[2] = 0;
  v13[6] = 0;
  v17 = 0;
  *a2 = 0LL;
  a2[1] = 0LL;
  v6 = *(_DWORD *)(a1 + 176);
  v13[0] = *(_DWORD *)(a1 + 172);
  v7 = *(_DWORD *)(a1 + 184);
  v13[1] = v6;
  v13[3] = *(_DWORD *)(a1 + 180);
  v8 = *(_DWORD *)(a1 + 188);
  v13[4] = v7;
  v9 = *(_DWORD *)(a1 + 192);
  v13[5] = v8;
  v13[7] = v9;
  v15 = *(_DWORD *)(a1 + 196);
  v10 = *(_DWORD *)(a1 + 204);
  v14 = _xmm;
  v19 = 0;
  v16 = *(_DWORD *)(a1 + 200);
  v18 = v10;
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v13);
  return a2;
}
