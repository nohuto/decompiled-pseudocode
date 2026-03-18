/*
 * XREFs of ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x1800AD4A4
 * Callers:
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@0W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N@Z @ 0x180099090 (-PushCpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@0W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatr.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009CC10 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009FA80 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 * Callees:
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180096590 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800ACAC4 (--$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800AE6D8 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 */

char __fastcall CMILMatrix::IsTranslate<1>(__int64 a1)
{
  char v2; // al
  char v3; // di
  bool v4; // dl
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // xmm5_4
  char v9; // al
  bool v10; // dl
  int v12; // xmm5_4

  v2 = (char)(16 * *(_BYTE *)(a1 + 65)) >> 6;
  if ( v2 )
  {
    v3 = 1;
    v4 = v2 == 1;
  }
  else
  {
    v3 = 1;
    v4 = CMILMatrix::IsAffine<1>(a1, 0)
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 32) - 0.0) & v12) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 36) - 0.0) & v12) < 0.000081380211;
    *(_BYTE *)(a1 + 65) &= 0xF3u;
    *(_BYTE *)(a1 + 65) |= (-4 - 8 * v4) & 0xC;
  }
  if ( !v4 || !CMILMatrix::ProducesUniformZ<1>(a1) )
    return 0;
  v9 = (char)(4 * *(_BYTE *)(a1 + 64)) >> 6;
  if ( v9 )
  {
    v10 = v9 == 1;
  }
  else
  {
    v10 = (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(a1, v5, v6, v7)
       && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a1 - 1.0) & v8) < 0.000081380211
       && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 20) - 1.0) & v8) < 0.000081380211;
    *(_BYTE *)(a1 + 64) &= 0xCFu;
    *(_BYTE *)(a1 + 64) |= (-16 - 32 * v10) & 0x30;
  }
  if ( !v10 || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 40) - 1.0) & v8) >= 0.000081380211 )
    return 0;
  return v3;
}
