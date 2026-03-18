/*
 * XREFs of ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B8AB4
 * Callers:
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180045F60 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x180053820 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x180005BBC (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18002FB48 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?RectangleShapeFullyContains@CCpuClip@@SA_NPEBVCShape@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800B8B94 (-RectangleShapeFullyContains@CCpuClip@@SA_NPEBVCShape@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x1800B8C44 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B8CBC (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

char __fastcall CCpuClip::FullyContains(__int64 a1, __int64 a2, const struct D2D_MATRIX_3X2_F *a3)
{
  char v3; // bl
  __int128 *v7; // rsi
  CShape *v8; // r14
  CMILMatrix *v10; // rax
  const struct CMILMatrix *v11; // rdx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  CMILMatrix *v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // [rsp+28h] [rbp-59h] BYREF
  __int128 v20; // [rsp+38h] [rbp-49h]
  __int128 v21; // [rsp+48h] [rbp-39h]
  __int128 v22; // [rsp+58h] [rbp-29h]
  int v23; // [rsp+68h] [rbp-19h]
  _BYTE v24[80]; // [rsp+78h] [rbp-9h] BYREF

  v3 = 0;
  v7 = 0LL;
  v23 = 0;
  if ( *(_BYTE *)(a1 + 32) )
  {
    if ( !CShapePtr::IsAxisAlignedRectangle((CShape **)(a1 + 16)) )
      return v3;
    v8 = *(CShape **)(a1 + 16);
    if ( !a3 )
      goto LABEL_5;
    v15 = CMILMatrix::CMILMatrix((CMILMatrix *)v24, a3);
    v16 = *((_OWORD *)v15 + 1);
    v19 = *(_OWORD *)v15;
    v17 = *((_OWORD *)v15 + 2);
    v20 = v16;
    v18 = *((_OWORD *)v15 + 3);
    LODWORD(v15) = *((_DWORD *)v15 + 16);
    v21 = v17;
    v22 = v18;
    v23 = (int)v15;
  }
  else
  {
    if ( !CShape::IsAxisAlignedRectangle(*(CShape **)a1) )
      return v3;
    v8 = *(CShape **)a1;
    if ( !a3 )
    {
      v7 = *(__int128 **)(a1 + 8);
      goto LABEL_5;
    }
    v10 = CMILMatrix::CMILMatrix((CMILMatrix *)v24, a3);
    v11 = *(const struct CMILMatrix **)(a1 + 8);
    v12 = *((_OWORD *)v10 + 1);
    v19 = *(_OWORD *)v10;
    v20 = v12;
    v13 = *((_OWORD *)v10 + 2);
    v14 = *((_OWORD *)v10 + 3);
    LODWORD(v10) = *((_DWORD *)v10 + 16);
    v21 = v13;
    v22 = v14;
    v23 = (int)v10;
    if ( v11 )
      CMILMatrix::Multiply((CMILMatrix *)&v19, v11);
  }
  v7 = &v19;
LABEL_5:
  if ( v8 )
    return CCpuClip::RectangleShapeFullyContains(v8, a2, v7);
  return v3;
}
