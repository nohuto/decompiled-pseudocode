/*
 * XREFs of ?CalcMode@CCpuClippingData@@CA?AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z @ 0x1800857D4
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x1800896C0 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x1800859E8 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x18008CAB0 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180092390 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x1800AA8E8 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x1800C1A0C (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C463C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?IsRectangles@CShapePtr@@QEBA_NPEAI@Z @ 0x1800CE754 (-IsRectangles@CShapePtr@@QEBA_NPEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCpuClippingData::CalcMode(__int64 a1, int a2, char a3)
{
  __int64 result; // rax
  const struct D2D_SIZE_F *v7; // r14
  CGeometry *v8; // rcx
  unsigned int v9; // edi
  float v10; // xmm2_4
  CTransform3D *v11; // rbx
  const struct CMILMatrix *v12; // rax
  float *v13; // rax
  int ShapeData; // eax
  __int64 v15; // rcx
  CTransform3D *EffectInternal; // rdi
  const struct CMILMatrix *Matrix; // rax
  float *v19; // rax
  __int64 v20; // [rsp+30h] [rbp-28h] BYREF
  char v21; // [rsp+38h] [rbp-20h]
  unsigned int v22; // [rsp+68h] [rbp+10h] BYREF

  result = 5LL;
  if ( a2 == 5 || !CCommonRegistryData::EnableCpuClipping )
    return result;
  if ( a2 == 4 )
    return 4LL;
  if ( (**(_DWORD **)(a1 + 224) & 0x400000) == 0 )
  {
LABEL_5:
    v7 = (const struct D2D_SIZE_F *)(a1 + 132);
    goto LABEL_6;
  }
  EffectInternal = CVisual::GetEffectInternal((CVisual *)a1);
  if ( !(*(unsigned __int8 (__fastcall **)(CTransform3D *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
          EffectInternal,
          186LL) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(CTransform3D *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
            EffectInternal,
            56LL) )
      goto LABEL_5;
    EffectInternal = (CTransform3D *)*((_QWORD *)EffectInternal + 10);
  }
  if ( !EffectInternal )
    goto LABEL_5;
  v7 = (const struct D2D_SIZE_F *)(a1 + 132);
  Matrix = CTransform3D::GetMatrix(EffectInternal, (const struct D2D_SIZE_F *)(a1 + 132));
  if ( !(unsigned __int8)CMILMatrix::Is2DAffine<0>(Matrix) )
    return 4LL;
  v19 = (float *)CTransform3D::GetMatrix(EffectInternal, (const struct D2D_SIZE_F *)(a1 + 132));
  if ( !CMILMatrix::IsInvertibleDeterminant((float)(v19[5] * *v19) - (float)(v19[4] * v19[1])) )
    return 4LL;
LABEL_6:
  if ( a2 != 2 )
  {
    v8 = *(CGeometry **)(a1 + 240);
    if ( !v8 )
      goto LABEL_8;
    v20 = 0LL;
    v21 = 0;
    ShapeData = CGeometry::GetShapeData(v8, v7, (struct CShapePtr *)&v20);
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, ShapeData, 0x120u, 0LL);
    }
    else if ( CShapePtr::IsRectangles((CShapePtr *)&v20, &v22) && v22 <= 1 )
    {
      goto LABEL_28;
    }
    a3 = 1;
LABEL_28:
    CShapePtr::Release((CShapePtr *)&v20);
    goto LABEL_8;
  }
  a3 = 1;
LABEL_8:
  v9 = 3;
  if ( !*(_QWORD *)(a1 + 240) || a3 )
    v9 = 4;
  if ( a2 == 3 )
    return v9;
  v10 = *(float *)(a1 + 112);
  if ( (*(float *)(a1 + 116) != 0.0 || *(float *)(a1 + 120) != 0.0 || v10 != 0.0) && v10 != 0.0 )
    return v9;
  v11 = *(CTransform3D **)(a1 + 232);
  if ( v11 )
  {
    v12 = CTransform3D::GetMatrix(v11, v7);
    if ( !(unsigned __int8)CMILMatrix::Is2DAffine<0>(v12) )
      return v9;
    v13 = (float *)CTransform3D::GetMatrix(v11, v7);
    if ( !CMILMatrix::IsInvertibleDeterminant((float)(v13[5] * *v13) - (float)(v13[4] * v13[1])) )
      return v9;
  }
  if ( a2 == 2 || a3 )
    return 2LL;
  return 1LL;
}
