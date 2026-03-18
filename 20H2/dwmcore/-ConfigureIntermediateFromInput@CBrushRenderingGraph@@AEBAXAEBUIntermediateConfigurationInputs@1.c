/*
 * XREFs of ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x18001DCE4
 * Callers:
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18001D978 (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18004C688 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 * Callees:
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004D870 (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 *     RoundIntermediateSize @ 0x18004EDC4 (RoundIntermediateSize.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180062F80 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x180063658 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z @ 0x18019D3EC (-ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z.c)
 */

void __fastcall CBrushRenderingGraph::ConfigureIntermediateFromInput(
        CBrushRenderingGraph *this,
        const struct CBrushRenderingGraph::IntermediateConfigurationInputs *a2,
        struct CBrushRenderingGraph::IntermediateConfigurationOutputs *a3)
{
  __int64 v3; // rsi
  float *v4; // rbx
  bool v7; // zf
  int v8; // xmm1_4
  __int64 v9; // r15
  float v10; // xmm6_4
  float v11; // xmm1_4
  double v12; // xmm0_8
  float v13; // xmm7_4
  float v14; // xmm7_4
  int v15; // xmm1_4
  float v16; // xmm3_4
  float v17; // xmm4_4
  int v18; // [rsp+28h] [rbp-59h]
  int v19; // [rsp+2Ch] [rbp-55h]
  _BYTE v20[40]; // [rsp+30h] [rbp-51h] BYREF
  _DWORD v21[4]; // [rsp+58h] [rbp-29h] BYREF
  float v22[6]; // [rsp+68h] [rbp-19h] BYREF

  v3 = *((_QWORD *)a2 + 3);
  v4 = (float *)((char *)a3 + 32);
  v21[0] = 0;
  v21[1] = 0;
  v7 = *(_BYTE *)(v3 + 68) == 0;
  v8 = *((_DWORD *)a2 + 1);
  v9 = *(_QWORD *)a3;
  v21[2] = *(_DWORD *)a2;
  v21[3] = v8;
  if ( v7 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v3 + 80) + 8LL))(*(_QWORD *)(v3 + 80), 2LL) )
    {
      *(_QWORD *)v4 = *((_QWORD *)a2 + 1);
      goto LABEL_4;
    }
    CSurfaceDrawListBrush::ComputeLocalToSourceTransform(*(CSurfaceDrawListBrush **)(v3 + 80), (struct Matrix3x3 *)v20);
  }
  else
  {
    CDrawListBitmap::GetSize((CDrawListBitmap *)v3);
    v22[1] = 0.0;
    v22[2] = 0.0;
    v22[0] = (float)v18;
    v22[3] = (float)v19;
    v22[4] = 0.0 - (float)((float)v18 * 0.0);
    v22[5] = 0.0 - (float)((float)v19 * 0.0);
    Matrix3x3::operator*(v3 + 72, v20, v22);
  }
  Matrix3x3::Get2DScaleDimensionsWithPerspective(v20, v4, v4 + 1, v21);
LABEL_4:
  v10 = *((float *)a3 + 7);
  v11 = fminf(*((float *)a2 + 3), v4[1]) * *((float *)a2 + 5);
  *((float *)a3 + 6) = fmaxf(*((float *)a3 + 6), fminf(*((float *)a2 + 2), *v4) * *((float *)a2 + 4));
  *((float *)a3 + 7) = fmaxf(v10, v11);
  v12 = ((double (*)(void))RoundIntermediateSize)();
  v13 = *(float *)&v12;
  *(float *)&v12 = RoundIntermediateSize();
  *((_DWORD *)a3 + 3) = LODWORD(v12);
  *((float *)a3 + 2) = v13;
  v14 = v13 / *(float *)a2;
  *((float *)a3 + 5) = *(float *)&v12 / *((float *)a2 + 1);
  *((float *)a3 + 4) = v14;
  LODWORD(v12) = *((_DWORD *)a3 + 2);
  v15 = *((_DWORD *)a3 + 3);
  *(_DWORD *)(v9 + 108) = 0;
  *(_DWORD *)(v9 + 112) = 0;
  *(_DWORD *)(v9 + 116) = LODWORD(v12);
  *(_DWORD *)(v9 + 120) = v15;
  v16 = *((float *)a3 + 6) / *((float *)a3 + 2);
  v17 = *((float *)a3 + 7) / *((float *)a3 + 3);
  *(_DWORD *)(v9 + 76) = 0;
  *(_DWORD *)(v9 + 80) = 0;
  *(_DWORD *)(v9 + 84) = 0;
  *(_DWORD *)(v9 + 92) = 0;
  *(_DWORD *)(v9 + 104) = 1065353216;
  *(float *)(v9 + 72) = v16;
  *(float *)(v9 + 88) = v17;
  *(float *)(v9 + 96) = 0.0 - (float)(v16 * 0.0);
  *(float *)(v9 + 100) = 0.0 - (float)(v17 * 0.0);
}
