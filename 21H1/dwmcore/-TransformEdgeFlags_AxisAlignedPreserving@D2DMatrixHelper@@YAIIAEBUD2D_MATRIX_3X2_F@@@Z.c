/*
 * XREFs of ?TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180012928
 * Callers:
 *     ?ProcessBrushClampEdges_Rectangle@CBrushDrawListGenerator@@CAXV?$span@PEBVCDrawListBrush@@$0?0@gsl@@AEBUD2D_RECT_F@@PEAW4D2D1_EDGE_FLAGS@@@Z @ 0x1800127B0 (-ProcessBrushClampEdges_Rectangle@CBrushDrawListGenerator@@CAXV-$span@PEBVCDrawListBrush@@$0-0@g.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801A0CFC (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ApplyEdgeFlags @ 0x1801A5C78 (ApplyEdgeFlags.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

__int64 __fastcall D2DMatrixHelper::TransformEdgeFlags_AxisAlignedPreserving(
        D2DMatrixHelper *this,
        float *a2,
        const struct D2D_MATRIX_3X2_F *a3)
{
  int v3; // r8d
  float v4; // xmm4_4
  float v5; // xmm1_4
  int v6; // ecx
  int v7; // eax
  bool v8; // cc
  float v9; // xmm0_4
  int v10; // eax
  int v11; // eax
  int *v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // r10
  __int64 v16; // rdi
  _DWORD *v17; // r11
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // [rsp+0h] [rbp-40h] BYREF
  int v24; // [rsp+4h] [rbp-3Ch]
  int v25; // [rsp+8h] [rbp-38h]
  int v26; // [rsp+Ch] [rbp-34h]
  _DWORD v27[8]; // [rsp+10h] [rbp-30h] BYREF

  v3 = (int)this;
  if ( (_DWORD)this != 50529027 && (_DWORD)this )
  {
    v4 = a2[1];
    v5 = a2[2];
    v27[0] = 0x1000000;
    v27[1] = 0x2000000;
    v27[2] = 1;
    v27[3] = 2;
    v27[4] = 256;
    v27[5] = 512;
    v27[6] = 0x10000;
    v27[7] = 0x20000;
    if ( COERCE_FLOAT(LODWORD(v4) & _xmm) >= 0.000081380211 || COERCE_FLOAT(LODWORD(v5) & _xmm) >= 0.000081380211 )
    {
      v19 = 3;
      v20 = 3;
      if ( v5 <= 0.0 )
        v19 = 1;
      else
        v20 = 1;
      v23 = v20;
      v21 = 0;
      v25 = v19;
      if ( v4 <= 0.0 )
        v21 = 2;
      v24 = v21;
      v22 = 2;
      if ( v4 <= 0.0 )
        v22 = 0;
      v26 = v22;
    }
    else
    {
      v6 = 3;
      v7 = 2;
      v8 = *a2 <= 0.0;
      v9 = a2[3];
      if ( *a2 > 0.0 )
        v7 = 0;
      v23 = v7;
      v10 = 2;
      if ( v8 )
        v10 = 0;
      v25 = v10;
      v11 = 1;
      if ( v9 <= 0.0 )
      {
        v11 = 3;
        v6 = 1;
      }
      v26 = v6;
      v24 = v11;
    }
    LODWORD(this) = 0;
    v12 = &v23;
    v13 = 0LL;
    v14 = 4LL;
    do
    {
      v15 = 0LL;
      v16 = 2LL;
      v17 = &v27[2 * *v12];
      do
      {
        if ( (v3 & *v17) != 0 )
          LODWORD(this) = v27[v13 + v15] | (unsigned int)this;
        ++v15;
        ++v17;
        --v16;
      }
      while ( v16 );
      ++v12;
      v13 += 2LL;
      --v14;
    }
    while ( v14 );
  }
  return (unsigned int)this;
}
