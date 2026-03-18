/*
 * XREFs of ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18000D6F0
 * Callers:
 *     ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x18000B848 (-UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z.c)
 *     ?UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z @ 0x18000BB9C (-UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z.c)
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x18000BE38 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800B3B90 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x1800C1A0C (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@_N@Z @ 0x1800C3598 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@_N@Z.c)
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x18020F074 (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
 */

bool __fastcall CProjectedShadowScene::IsValidVisual(const struct CVisualTree *a1, struct CVisual *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r10
  const struct Windows::Foundation::Numerics::float4x4 *v4; // rdx
  float v5; // xmm0_4
  bool result; // al
  _BYTE v7[64]; // [rsp+30h] [rbp-58h] BYREF
  int v8; // [rsp+70h] [rbp-18h]

  result = 0;
  if ( CVisualTree::_IsInTree(a1, a2, 1) )
  {
    v8 = 0;
    if ( (int)CVisual::GetWorldTransform(v3, v2, 3LL, v7, 0LL, 0LL) >= 0 )
    {
      v5 = Windows::Foundation::Numerics::determinant((Windows::Foundation::Numerics *)v7, v4);
      if ( CMILMatrix::IsInvertibleDeterminant(v5) )
        return 1;
    }
  }
  return result;
}
