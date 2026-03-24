/*
 * XREFs of ?TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180007E3C
 * Callers:
 *     ?ProcessBrushClampEdges_Rectangle@CBrushDrawListGenerator@@CAXV?$span@PEBVCDrawListBrush@@$0?0@gsl@@AEBUD2D_RECT_F@@PEAW4D2D1_EDGE_FLAGS@@@Z @ 0x180007CC4 (-ProcessBrushClampEdges_Rectangle@CBrushDrawListGenerator@@CAXV-$span@PEBVCDrawListBrush@@$0-0@g.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18019CEBC (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ApplyEdgeFlags @ 0x1801A1CB8 (ApplyEdgeFlags.c)
 * Callees:
 *     ?IsCloseRealZero@@YA_NMM@Z @ 0x180094488 (-IsCloseRealZero@@YA_NMM@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 */

__int64 __fastcall D2DMatrixHelper::TransformEdgeFlags_AxisAlignedPreserving(
        D2DMatrixHelper *this,
        __int64 a2,
        const struct D2D_MATRIX_3X2_F *a3)
{
  float v3; // xmm2_4
  float *v4; // rdx
  int v5; // ecx
  bool v6; // cc
  int v7; // eax
  float v8; // xmm0_4
  int v9; // eax
  int v10; // eax
  int v11; // eax
  float v12; // xmm0_4
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int *v16; // r9
  unsigned int v17; // edx
  __int64 v18; // r8
  __int64 v19; // rbx
  __int64 v20; // r10
  __int64 v21; // rdi
  _DWORD *v22; // r11
  int v24; // [rsp+20h] [rbp-40h] BYREF
  int v25; // [rsp+24h] [rbp-3Ch]
  int v26; // [rsp+28h] [rbp-38h]
  int v27; // [rsp+2Ch] [rbp-34h]
  _DWORD v28[8]; // [rsp+30h] [rbp-30h] BYREF

  if ( (_DWORD)this == 50529027 || !(_DWORD)this )
  {
    return (unsigned int)this;
  }
  else
  {
    v3 = *(float *)(a2 + 4);
    v28[0] = 0x1000000;
    v28[1] = 0x2000000;
    v28[2] = 1;
    v28[3] = 2;
    v28[4] = 256;
    v28[5] = 512;
    v28[6] = 0x10000;
    v28[7] = 0x20000;
    if ( IsCloseRealZero(v3, 0.000081380211) && IsCloseRealZero(v4[2], 0.000081380211) )
    {
      v6 = *v4 <= 0.0;
      v7 = 2;
      v8 = v4[3];
      if ( *v4 > 0.0 )
        v7 = 0;
      v24 = v7;
      v9 = 0;
      if ( !v6 )
        v9 = 2;
      v26 = v9;
      v10 = 3;
      if ( v8 > 0.0 )
        v10 = 1;
      v25 = v10;
      v11 = 1;
      if ( v8 > 0.0 )
        v11 = 3;
    }
    else
    {
      v12 = v4[2];
      v13 = 3;
      if ( v12 > 0.0 )
        v13 = 1;
      v24 = v13;
      v14 = 1;
      if ( v12 > 0.0 )
        v14 = 3;
      v26 = v14;
      v15 = 2;
      if ( v3 > 0.0 )
        v15 = 0;
      v25 = v15;
      v11 = 0;
      if ( v3 > 0.0 )
        v11 = 2;
    }
    v27 = v11;
    v16 = &v24;
    v17 = 0;
    v18 = 0LL;
    v19 = 4LL;
    do
    {
      v20 = 0LL;
      v21 = 2LL;
      v22 = &v28[2 * *v16];
      do
      {
        if ( (v5 & *v22) != 0 )
          v17 |= v28[v18 + v20];
        ++v20;
        ++v22;
        --v21;
      }
      while ( v21 );
      ++v16;
      v18 += 2LL;
      --v19;
    }
    while ( v19 );
  }
  return v17;
}
