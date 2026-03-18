/*
 * XREFs of ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180057114
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@PEBVCShape@@PEBVCMILMatrix@@2W4Enum@CpuClippingScopeMode@@@Z @ 0x180095830 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@PEBVCShape@@PEBVCMILMatrix@@2W4Enum.c)
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x1800961B0 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800A81A0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800AC3C0 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 * Callees:
 *     ?RectangleShapeFullyContains@CCpuClip@@SA_NPEBVCShape@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180057234 (-RectangleShapeFullyContains@CCpuClip@@SA_NPEBVCShape@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800572F0 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180057724 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x18006367C (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800AAEA4 (-FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CCpuClip::FullyContains(_BYTE *a1, __int64 a2, const struct D2D_MATRIX_3X2_F *a3)
{
  char v3; // bl
  _OWORD *v7; // r14
  _QWORD *v8; // rdi
  _QWORD *v11; // rdi
  CMILMatrix *v12; // rax
  _OWORD v13[4]; // [rsp+20h] [rbp-69h] BYREF
  int v14; // [rsp+60h] [rbp-29h]
  _BYTE v15[80]; // [rsp+70h] [rbp-19h] BYREF
  int v16; // [rsp+F0h] [rbp+67h] BYREF

  v3 = 0;
  v7 = 0LL;
  v14 = 0;
  if ( a1[100] )
  {
    v11 = a1 + 80;
    if ( !CShapePtr::IsAxisAlignedRectangle((CShapePtr *)(a1 + 80))
      && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v11 + 8LL))(*v11) )
    {
      return v3;
    }
    v8 = (_QWORD *)*v11;
    if ( !a3 )
      goto LABEL_5;
    v12 = CMILMatrix::CMILMatrix((CMILMatrix *)v15, a3);
    v13[0] = *(_OWORD *)v12;
    v13[1] = *((_OWORD *)v12 + 1);
    v13[2] = *((_OWORD *)v12 + 2);
    v13[3] = *((_OWORD *)v12 + 3);
    v14 = *((_DWORD *)v12 + 16);
    goto LABEL_14;
  }
  if ( (!(*(unsigned __int8 (__fastcall **)(_QWORD, int *))(**(_QWORD **)a1 + 64LL))(*(_QWORD *)a1, &v16) || v16 != 1)
    && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)a1 + 8LL))(*(_QWORD *)a1) )
  {
    return v3;
  }
  v8 = *(_QWORD **)a1;
  v7 = a1 + 8;
  if ( a3 )
  {
    CMILMatrix::CMILMatrix((CMILMatrix *)v15, a3);
    CMILMatrix::Multiply((const struct CMILMatrix *)v15, (const struct CMILMatrix *)(a1 + 8), (struct CMILMatrix *)v13);
LABEL_14:
    v7 = v13;
  }
LABEL_5:
  if ( v8 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD *))(*v8 + 8LL))(v8) )
      return CCpuClip::RectangleShapeFullyContains(v8, a2, v7);
    else
      return CRoundedRectangleGeometryData::FillContainsRect(v8[2] + 16LL, a2, v7);
  }
  return v3;
}
