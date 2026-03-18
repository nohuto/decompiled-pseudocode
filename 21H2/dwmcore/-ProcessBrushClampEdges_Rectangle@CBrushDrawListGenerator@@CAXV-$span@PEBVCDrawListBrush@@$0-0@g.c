/*
 * XREFs of ?ProcessBrushClampEdges_Rectangle@CBrushDrawListGenerator@@CAXV?$span@PEBVCDrawListBrush@@$0?0@gsl@@AEBUD2D_RECT_F@@PEAW4D2D1_EDGE_FLAGS@@@Z @ 0x180057784
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800A8F20 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ?TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800578F0 (-TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180057A54 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x180057E64 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 */

char __fastcall CBrushDrawListGenerator::ProcessBrushClampEdges_Rectangle(
        __int64 *a1,
        const struct D2D_MATRIX_3X2_F *a2,
        _DWORD *a3)
{
  __int64 *v3; // rbx
  int v4; // edi
  __int64 v6; // rax
  float *p_m11; // r12
  __int64 *i; // r14
  __int64 v9; // rsi
  const struct D2D_MATRIX_3X2_F *v10; // r8
  int v11; // r9d
  unsigned int v12; // ecx
  float v13; // xmm0_4
  unsigned int v14; // ecx
  struct D2D_MATRIX_3X2_F v16; // [rsp+20h] [rbp-38h] BYREF

  v3 = (__int64 *)a1[1];
  v4 = 0;
  v6 = *a1;
  p_m11 = &a2->m11;
  for ( i = &v3[*a1]; v3 != i; ++v3 )
  {
    v9 = *v3;
    if ( *v3 )
    {
      if ( *(_BYTE *)(v9 + 52) )
      {
        LOBYTE(v6) = D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)(v9 + 8), a2);
        if ( (_BYTE)v6 )
        {
          LODWORD(v6) = D2DMatrixHelper::TransformEdgeFlags_AxisAlignedPreserving(
                          (D2DMatrixHelper *)*(unsigned int *)(v9 + 48),
                          v9 + 8,
                          v10);
          if ( (_DWORD)v6 != v4 )
          {
            D2DMatrixHelper::TransformRect_AxisAlignedPreserving(
              (D2DMatrixHelper *)(v9 + 32),
              (const struct D2D_RECT_F *)(v9 + 8),
              &v16,
              (struct D2D_RECT_F *)(unsigned int)v6);
            v12 = (COERCE_FLOAT(COERCE_UNSIGNED_INT(*p_m11 - v16.m11) & _xmm) <= 0.0000011920929 ? 0x3000000 : 0) | 0x300;
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(p_m11[2] - v16.m21) & _xmm) > 0.0000011920929 )
              v12 = COERCE_FLOAT(COERCE_UNSIGNED_INT(*p_m11 - v16.m11) & _xmm) <= 0.0000011920929 ? 0x3000000 : 0;
            a2 = (const struct D2D_MATRIX_3X2_F *)(v12 | 3);
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(p_m11[1] - v16.m12) & _xmm) > 0.0000011920929 )
              a2 = (const struct D2D_MATRIX_3X2_F *)v12;
            LODWORD(v13) = COERCE_UNSIGNED_INT(p_m11[3] - v16.m22) & _xmm;
            LOBYTE(v6) = v13 <= 0.0000011920929;
            v14 = (unsigned int)a2 | 0x30000;
            if ( v13 > 0.0000011920929 )
              v14 = (unsigned int)a2;
            if ( v14 )
            {
              v4 |= v11 & v14;
              if ( v4 == 50529027 )
                break;
            }
          }
        }
      }
    }
  }
  *a3 = v4;
  return v6;
}
