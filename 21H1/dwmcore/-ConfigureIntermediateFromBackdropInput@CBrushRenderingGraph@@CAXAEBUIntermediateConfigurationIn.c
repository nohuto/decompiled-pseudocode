/*
 * XREFs of ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@CAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1800738E0
 * Callers:
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18001E8EC (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180070974 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 * Callees:
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x180046338 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180049D80 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     RoundIntermediateSize @ 0x180073B18 (RoundIntermediateSize.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

void __fastcall CBrushRenderingGraph::ConfigureIntermediateFromBackdropInput(
        const struct CBrushRenderingGraph::IntermediateConfigurationInputs *a1,
        struct CBrushRenderingGraph::IntermediateConfigurationOutputs *a2)
{
  __int64 v2; // rsi
  __int64 v4; // r14
  float v6; // xmm8_4
  float v7; // xmm7_4
  float v8; // xmm9_4
  float v9; // xmm10_4
  float v10; // xmm6_4
  float v11; // xmm0_4
  float *v12; // rax
  float v13; // xmm1_4
  float *v14; // rax
  float v15; // xmm2_4
  float *v16; // rax
  int v17; // xmm0_4
  int v18; // xmm1_4
  __int64 v19; // [rsp+28h] [rbp-E0h] BYREF
  float v20[9]; // [rsp+30h] [rbp-D8h] BYREF
  float v21[9]; // [rsp+54h] [rbp-B4h] BYREF
  float v22[10]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v23; // [rsp+A0h] [rbp-68h] BYREF
  float v24; // [rsp+B0h] [rbp-58h]
  float v25; // [rsp+B4h] [rbp-54h]

  v2 = *((_QWORD *)a1 + 3);
  v4 = *(_QWORD *)a2;
  CDrawListBitmap::GetSize((CDrawListBitmap *)v2, &v19);
  v6 = *(float *)(v2 + 116) - *(float *)(v2 + 108);
  v7 = *(float *)(v2 + 120) - *(float *)(v2 + 112);
  v8 = (float)(int)v19;
  v9 = (float)SHIDWORD(v19);
  v10 = COERCE_FLOAT(COERCE_UNSIGNED_INT64(((double (*)(void))RoundIntermediateSize)()));
  v11 = RoundIntermediateSize();
  *(_QWORD *)((char *)&v23 + 4) = 0LL;
  *((float *)a2 + 3) = v11;
  *((float *)a2 + 2) = v10;
  *((float *)a2 + 5) = v11 / v7;
  *(float *)&v23 = v8;
  *((float *)a2 + 4) = v10 / v6;
  *((float *)&v23 + 3) = v9;
  v24 = 0.0 - (float)(v8 * 0.0);
  v25 = 0.0 - (float)(v9 * 0.0);
  v12 = Matrix3x3::operator*((float *)(v2 + 72), v20, (float *)&v23);
  LODWORD(v13) = *(_DWORD *)(v2 + 108) ^ _xmm;
  v23 = _xmm;
  LODWORD(v25) = *(_DWORD *)(v2 + 112) ^ _xmm;
  v24 = v13;
  v14 = Matrix3x3::operator*(v12, v21, (float *)&v23);
  *(_QWORD *)((char *)&v23 + 4) = 0LL;
  v15 = (float)(1.0 / *((float *)a2 + 3)) * *((float *)a1 + 5);
  *(float *)&v23 = (float)(1.0 / *((float *)a2 + 2)) * *((float *)a1 + 4);
  *((float *)&v23 + 3) = v15;
  v24 = 0.0 - (float)(*(float *)&v23 * 0.0);
  v25 = 0.0 - (float)(v15 * 0.0);
  v16 = Matrix3x3::operator*(v14, v22, (float *)&v23);
  *(_OWORD *)(v4 + 72) = *(_OWORD *)v16;
  *(_OWORD *)(v4 + 88) = *((_OWORD *)v16 + 1);
  *(float *)(v4 + 104) = v16[8];
  v17 = *((_DWORD *)a2 + 2);
  v18 = *((_DWORD *)a2 + 3);
  *(_DWORD *)(v4 + 108) = 0;
  *(_DWORD *)(v4 + 112) = 0;
  *(_DWORD *)(v4 + 116) = v17;
  *(_DWORD *)(v4 + 120) = v18;
  *(_BYTE *)(v4 + 125) = 1;
  *(_BYTE *)(v4 + 126) = *(_BYTE *)(v2 + 126);
}
