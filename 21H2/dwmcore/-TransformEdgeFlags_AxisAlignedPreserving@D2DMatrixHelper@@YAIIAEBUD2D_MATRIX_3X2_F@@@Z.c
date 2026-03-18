/*
 * XREFs of ?TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800578F0
 * Callers:
 *     ?ProcessBrushClampEdges_Rectangle@CBrushDrawListGenerator@@CAXV?$span@PEBVCDrawListBrush@@$0?0@gsl@@AEBUD2D_RECT_F@@PEAW4D2D1_EDGE_FLAGS@@@Z @ 0x180057784 (-ProcessBrushClampEdges_Rectangle@CBrushDrawListGenerator@@CAXV-$span@PEBVCDrawListBrush@@$0-0@g.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800AC3C0 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 *     ApplyEdgeFlags @ 0x1801E7AC8 (ApplyEdgeFlags.c)
 * Callees:
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall D2DMatrixHelper::TransformEdgeFlags_AxisAlignedPreserving(
        D2DMatrixHelper *this,
        float *a2,
        const struct D2D_MATRIX_3X2_F *a3)
{
  int v3; // r8d
  float v5; // xmm4_4
  float v6; // xmm1_4
  int v7; // eax
  bool v8; // cc
  float v9; // xmm0_4
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int *v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // r10
  __int64 v17; // rdi
  _DWORD *v18; // r11
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // [rsp+0h] [rbp-40h] BYREF
  int v23; // [rsp+4h] [rbp-3Ch]
  int v24; // [rsp+8h] [rbp-38h]
  int v25; // [rsp+Ch] [rbp-34h]
  _DWORD v26[8]; // [rsp+10h] [rbp-30h] BYREF

  v3 = (int)this;
  if ( (_DWORD)this != 50529027 && (_DWORD)this )
  {
    v5 = a2[1];
    v26[0] = 0x1000000;
    v26[3] = 2;
    v26[1] = 0x2000000;
    v26[2] = 1;
    v26[4] = 256;
    v26[5] = 512;
    v26[6] = 0x10000;
    v6 = a2[2];
    v26[7] = 0x20000;
    if ( COERCE_FLOAT(LODWORD(v5) & _xmm) >= 0.000081380211 || COERCE_FLOAT(LODWORD(v6) & _xmm) >= 0.000081380211 )
    {
      v19 = 3;
      if ( v6 > 0.0 )
        v19 = 1;
      v22 = v19;
      v20 = 1;
      if ( v6 > 0.0 )
        v20 = 3;
      v24 = v20;
      v21 = 2;
      if ( v5 > 0.0 )
        v21 = 0;
      v23 = v21;
      v12 = 0;
      if ( v5 > 0.0 )
        v12 = 2;
    }
    else
    {
      v7 = 2;
      v8 = *a2 <= 0.0;
      v9 = a2[3];
      if ( *a2 > 0.0 )
        v7 = 0;
      v22 = v7;
      v10 = 0;
      if ( !v8 )
        v10 = 2;
      v24 = v10;
      v11 = 3;
      if ( v9 > 0.0 )
        v11 = 1;
      v23 = v11;
      v12 = 1;
      if ( v9 > 0.0 )
        v12 = 3;
    }
    v25 = v12;
    v13 = &v22;
    LODWORD(this) = 0;
    v14 = 0LL;
    v15 = 4LL;
    do
    {
      v16 = 0LL;
      v17 = 2LL;
      v18 = &v26[2 * *v13];
      do
      {
        if ( (v3 & *v18) != 0 )
          LODWORD(this) = v26[v14 + v16] | (unsigned int)this;
        ++v16;
        ++v18;
        --v17;
      }
      while ( v17 );
      ++v13;
      v14 += 2LL;
      --v15;
    }
    while ( v15 );
  }
  return (unsigned int)this;
}
