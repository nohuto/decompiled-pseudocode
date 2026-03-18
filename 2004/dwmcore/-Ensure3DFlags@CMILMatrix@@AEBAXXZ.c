/*
 * XREFs of ?Ensure3DFlags@CMILMatrix@@AEBAXXZ @ 0x180072C60
 * Callers:
 *     ?CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV5@4@Z @ 0x18006D3D0 (-CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006FD60 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N3@Z @ 0x1800737F0 (-PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMIL.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800748A0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180082C58 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::Ensure3DFlags(CMILMatrix *this)
{
  char v1; // al
  float v2; // xmm5_4
  char v3; // al
  float v4; // xmm0_4
  char v5; // al
  char v6; // al
  char v7; // al
  float v8; // xmm0_4
  char v9; // dl
  char v10; // al
  char v11; // dl

  v1 = *((_BYTE *)this + 64);
  if ( (v1 & 3) != 0 && (v1 & 0xC) != 0 && (v1 & 0xC0) != 0 && (*((_BYTE *)this + 65) & 0xC) != 0 )
    return;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 2) - 0.0) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 6) - 0.0) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 3) - 0.0) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 7) - 0.0) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 8) - 0.0) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 9) - 0.0) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 11) - 0.0) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 15) - 1.0) & _xmm) >= 0.000081380211 )
  {
    v6 = v1 | 0xCF;
    *((_BYTE *)this + 65) |= 0xCu;
    goto LABEL_24;
  }
  v2 = *(float *)this;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)this - 0.0) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 5) - 0.0) & _xmm) >= 0.000081380211 )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 1) - 0.0) & _xmm) >= 0.000081380211
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 4) - 0.0) & _xmm) >= 0.000081380211 )
    {
      return;
    }
    *((_BYTE *)this + 65) = 125;
    v3 = v1 & 0x3F | 0x40;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v2 - 1.0) & _xmm) >= 0.000081380211
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 5) - 1.0) & _xmm) >= 0.000081380211
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 10) - 1.0) & _xmm) >= 0.000081380211 )
    {
      *((_BYTE *)this + 64) = v3 | 0x3F;
      return;
    }
    v4 = *((float *)this + 12);
    v5 = v3 & 0xC3 | 0x14;
    *((_BYTE *)this + 64) = v5;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v4 - 0.0) & _xmm) >= 0.000081380211
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 13) - 0.0) & _xmm) >= 0.000081380211
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 14) - 0.0) & _xmm) >= 0.000081380211 )
    {
      *((_BYTE *)this + 64) = v5 | 3;
      return;
    }
    v6 = v5 & 0xFC | 1;
LABEL_24:
    *((_BYTE *)this + 64) = v6;
    return;
  }
  *((_BYTE *)this + 65) &= 3u;
  v7 = v1 | 0x3F;
  *((_BYTE *)this + 65) |= 0x54u;
  v8 = *((float *)this + 1);
  v9 = *((_BYTE *)this + 65);
  *((_BYTE *)this + 64) = v7;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v8 - 0.0) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 4) - 0.0) & _xmm) >= 0.000081380211 )
  {
    v11 = v9 | 3;
    v10 = v7 | 0xC0;
  }
  else
  {
    v10 = 127;
    v11 = v9 & 0xFC | 1;
  }
  *((_BYTE *)this + 64) = v10;
  *((_BYTE *)this + 65) = v11;
}
