/*
 * XREFs of ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@CAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x180041FEC
 * Callers:
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18001C828 (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18003FAE8 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 * Callees:
 *     RoundIntermediateSize @ 0x180042224 (RoundIntermediateSize.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180056280 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x180056958 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 */

void __fastcall CBrushRenderingGraph::ConfigureIntermediateFromBackdropInput(
        const struct CBrushRenderingGraph::IntermediateConfigurationInputs *a1,
        struct CBrushRenderingGraph::IntermediateConfigurationOutputs *a2)
{
  __int64 v2; // rsi
  __int64 v4; // r14
  float v6; // xmm8_4
  float v7; // xmm7_4
  float v8; // xmm6_4
  float v9; // xmm0_4
  __int64 v10; // rax
  float v11; // xmm1_4
  __int64 v12; // rax
  float v13; // xmm2_4
  __int64 v14; // rax
  int v15; // xmm0_4
  int v16; // xmm1_4
  int v17; // [rsp+28h] [rbp-E0h]
  int v18; // [rsp+2Ch] [rbp-DCh]
  _BYTE v19[36]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v20[36]; // [rsp+54h] [rbp-B4h] BYREF
  _BYTE v21[40]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v22; // [rsp+A0h] [rbp-68h] BYREF
  float v23; // [rsp+B0h] [rbp-58h]
  float v24; // [rsp+B4h] [rbp-54h]

  v2 = *((_QWORD *)a1 + 3);
  v4 = *(_QWORD *)a2;
  CDrawListBitmap::GetSize((CDrawListBitmap *)v2);
  v6 = *(float *)(v2 + 116) - *(float *)(v2 + 108);
  v7 = *(float *)(v2 + 120) - *(float *)(v2 + 112);
  v8 = COERCE_FLOAT(COERCE_UNSIGNED_INT64(((double (*)(void))RoundIntermediateSize)()));
  v9 = RoundIntermediateSize();
  *(_QWORD *)((char *)&v22 + 4) = 0LL;
  *((float *)a2 + 3) = v9;
  *((float *)a2 + 2) = v8;
  *((float *)a2 + 5) = v9 / v7;
  *(float *)&v22 = (float)v17;
  *((float *)a2 + 4) = v8 / v6;
  *((float *)&v22 + 3) = (float)v18;
  v23 = 0.0 - (float)((float)v17 * 0.0);
  v24 = 0.0 - (float)((float)v18 * 0.0);
  v10 = Matrix3x3::operator*(v2 + 72, v19, &v22);
  LODWORD(v11) = *(_DWORD *)(v2 + 108) ^ _xmm;
  v22 = _xmm;
  LODWORD(v24) = *(_DWORD *)(v2 + 112) ^ _xmm;
  v23 = v11;
  v12 = Matrix3x3::operator*(v10, v20, &v22);
  *(_QWORD *)((char *)&v22 + 4) = 0LL;
  v13 = (float)(1.0 / *((float *)a2 + 3)) * *((float *)a1 + 5);
  *(float *)&v22 = (float)(1.0 / *((float *)a2 + 2)) * *((float *)a1 + 4);
  *((float *)&v22 + 3) = v13;
  v23 = 0.0 - (float)(*(float *)&v22 * 0.0);
  v24 = 0.0 - (float)(v13 * 0.0);
  v14 = Matrix3x3::operator*(v12, v21, &v22);
  *(_OWORD *)(v4 + 72) = *(_OWORD *)v14;
  *(_OWORD *)(v4 + 88) = *(_OWORD *)(v14 + 16);
  *(_DWORD *)(v4 + 104) = *(_DWORD *)(v14 + 32);
  v15 = *((_DWORD *)a2 + 2);
  v16 = *((_DWORD *)a2 + 3);
  *(_DWORD *)(v4 + 108) = 0;
  *(_DWORD *)(v4 + 112) = 0;
  *(_DWORD *)(v4 + 116) = v15;
  *(_DWORD *)(v4 + 120) = v16;
  *(_BYTE *)(v4 + 125) = 1;
  *(_BYTE *)(v4 + 126) = *(_BYTE *)(v2 + 126);
}
