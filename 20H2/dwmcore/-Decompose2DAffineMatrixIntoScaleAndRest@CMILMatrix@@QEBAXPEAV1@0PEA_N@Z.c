/*
 * XREFs of ?Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z @ 0x18020E304
 * Callers:
 *     ?RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x180190158 (-RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 *     _anonymous_namespace_::DecomposeMatrix @ 0x18022A7BC (_anonymous_namespace_--DecomposeMatrix.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18004E668 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18004EF4C (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x1800B69BC (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800D1824 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 */

void __fastcall CMILMatrix::Decompose2DAffineMatrixIntoScaleAndRest(
        CMILMatrix *this,
        struct CMILMatrix *a2,
        struct CMILMatrix *a3,
        bool *a4)
{
  float v8; // xmm2_4
  float v9; // xmm1_4
  __int64 v10; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v11; // r8
  bool v12; // al
  CMILMatrix *v13; // rcx
  float v14; // [rsp+48h] [rbp+10h] BYREF
  float v15; // [rsp+50h] [rbp+18h] BYREF

  CMILMatrix::Get2DScaleDimensions(this, &v15, &v14);
  *(_QWORD *)a2 = 1065353216LL;
  *((_QWORD *)a2 + 1) = 0LL;
  *((_DWORD *)a2 + 4) = 0;
  *(_QWORD *)((char *)a2 + 20) = 1065353216LL;
  *(_QWORD *)((char *)a2 + 28) = 0LL;
  *((_DWORD *)a2 + 9) = 0;
  *((_QWORD *)a2 + 5) = 1065353216LL;
  *((_QWORD *)a2 + 6) = 0LL;
  *((_DWORD *)a2 + 14) = 0;
  *((_DWORD *)a2 + 15) = 1065353216;
  v8 = v14;
  v9 = v15;
  *((_WORD *)a2 + 32) = 32085;
  CMILMatrix::Scale(a2, v9, v8, 1.0);
  *(_OWORD *)a3 = *(_OWORD *)a2;
  *((_OWORD *)a3 + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)a3 + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)a3 + 3) = *((_OWORD *)a2 + 3);
  *((_DWORD *)a3 + 16) = *((_DWORD *)a2 + 16);
  v12 = CMILMatrix::Invert(a3, v10, v11);
  *a4 = v12;
  if ( v12 )
    CMILMatrix::Multiply(v13, this);
}
