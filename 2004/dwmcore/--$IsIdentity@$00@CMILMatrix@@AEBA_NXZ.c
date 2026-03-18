/*
 * XREFs of ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x180070C30
 * Callers:
 *     ?CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV5@4@Z @ 0x18006D3D0 (-CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006FD60 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N3@Z @ 0x1800737F0 (-PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMIL.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800748A0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x180078060 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180082C58 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMILMatrix::IsIdentity<1>(__int64 a1)
{
  char v1; // dl
  char v2; // al
  bool v3; // r9
  char v4; // r8

  v1 = *(_BYTE *)(a1 + 64);
  v2 = (char)(v1 << 6) >> 6;
  if ( v2 )
    return v2 == 1;
  v3 = COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a1 - 1.0) & _xmm) < 0.000081380211
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 4) - 0.0) & _xmm) < 0.000081380211
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 8) - 0.0) & _xmm) < 0.000081380211
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 12) - 0.0) & _xmm) < 0.000081380211
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 16) - 0.0) & _xmm) < 0.000081380211
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 20) - 1.0) & _xmm) < 0.000081380211
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 24) - 0.0) & _xmm) < 0.000081380211
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 28) - 0.0) & _xmm) < 0.000081380211
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 32) - 0.0) & _xmm) < 0.000081380211
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 36) - 0.0) & _xmm) < 0.000081380211
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 40) - 1.0) & _xmm) < 0.000081380211
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 44) - 0.0) & _xmm) < 0.000081380211
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 48) - 0.0) & _xmm) < 0.000081380211
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 52) - 0.0) & _xmm) < 0.000081380211
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 56) - 0.0) & _xmm) < 0.000081380211
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 60) - 1.0) & _xmm) < 0.000081380211;
  v4 = v1 ^ (v1 ^ (-1 - 2 * v3)) & 3;
  *(_BYTE *)(a1 + 64) = v4;
  if ( v3 )
  {
    *(_BYTE *)(a1 + 65) = 125;
    *(_BYTE *)(a1 + 64) = v4 & 3 | 0x54;
  }
  return v3;
}
