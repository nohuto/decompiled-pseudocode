/*
 * XREFs of ?IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z @ 0x1801F844C
 * Callers:
 *     ?IsValid@CCompositionDistantLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x1801BDBE0 (-IsValid@CCompositionDistantLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 * Callees:
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800A9060 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x1800B6914 (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@_N@Z @ 0x1800BCFB4 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@_N@Z.c)
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x180213888 (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
 */

char __fastcall CCompositionLight::IsValidCoordinateSpace(
        CCompositionLight *this,
        const struct CVisual **a2,
        const struct CVisual *a3,
        struct CVisual *a4)
{
  CVisual *v5; // r10
  CVisual *v6; // r11
  const struct Windows::Foundation::Numerics::float4x4 *v8; // rdx
  float v9; // xmm0_4
  _BYTE v10[64]; // [rsp+30h] [rbp-58h] BYREF
  int v11; // [rsp+70h] [rbp-18h]

  if ( !CVisualTree::_IsInTree(a2, a4, 1) )
    return 0;
  while ( v5 != v6 )
  {
    if ( !v5 )
      return 0;
    v5 = (CVisual *)*((_QWORD *)v5 + 10);
  }
  v11 = 0;
  if ( (int)CVisual::GetWorldTransform(v6, (const struct CVisualTree *)a2, 3, (__int64)v10, 0LL, 0LL) >= 0
    && (v9 = Windows::Foundation::Numerics::determinant((Windows::Foundation::Numerics *)v10, v8),
        CMILMatrix::IsInvertibleDeterminant(v9)) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
