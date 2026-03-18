/*
 * XREFs of ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1802368A0
 * Callers:
 *     ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x180114AC6 (-UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z.c)
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180236944 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 *     ?UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z @ 0x180237684 (-UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z.c)
 * Callees:
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x1800491BC (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004AFB8 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x1800D5AC8 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z.c)
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x180261478 (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
 */

bool __fastcall CProjectedShadowScene::IsValidVisual(const struct CVisualTree *a1, struct CVisual *a2)
{
  const struct Windows::Foundation::Numerics::float4x4 *v4; // rdx
  float v5; // xmm0_4
  bool result; // al
  _BYTE v7[64]; // [rsp+30h] [rbp-58h] BYREF
  int v8; // [rsp+70h] [rbp-18h]

  result = 0;
  if ( CVisualTree::_IsInTree((__int64)a1, (__int64)a2, 1) )
  {
    v8 = 0;
    if ( (int)CVisual::GetWorldTransform(a2, a1, 3, (__int64)v7, 0LL, 0LL) >= 0 )
    {
      v5 = Windows::Foundation::Numerics::determinant((Windows::Foundation::Numerics *)v7, v4);
      if ( CMILMatrix::IsInvertibleDeterminant(v5) )
        return 1;
    }
  }
  return result;
}
