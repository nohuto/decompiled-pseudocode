/*
 * XREFs of ?GetTreeBounds@CRemoteAppRenderTarget@@IEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18018645C
 * Callers:
 *     ?Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800ED7C4 (-Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@@Z @ 0x180186D64 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@@Z.c)
 * Callees:
 *     ?GetRootTransform@CVisual@@QEBAXPEAVCMILMatrix@@@Z @ 0x18006C068 (-GetRootTransform@CVisual@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800869D0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800D6404 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::GetTreeBounds(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v6; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v7; // r8
  _BYTE v9[64]; // [rsp+20h] [rbp-78h] BYREF
  int v10; // [rsp+60h] [rbp-38h]
  float v11[4]; // [rsp+70h] [rbp-28h] BYREF

  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  v10 = 0;
  CVisual::GetRootTransform(*(CVisual **)(v4 + 56), (struct CMILMatrix *)v9);
  CMILMatrix::Invert((CMILMatrix *)v9, v6, v7);
  do
  {
    v11[v3] = (float)*(int *)(a1 + 4 * v3 + 264);
    ++v3;
  }
  while ( v3 < 4 );
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v9, (__int64)v11, (float *)a2);
  return a2;
}
