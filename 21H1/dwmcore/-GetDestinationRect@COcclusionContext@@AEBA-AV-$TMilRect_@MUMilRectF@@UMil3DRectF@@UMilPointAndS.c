/*
 * XREFs of ?GetDestinationRect@COcclusionContext@@AEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV2@@Z @ 0x18002F62C
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180060B20 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Clip@CBaseClipStack@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV2@@Z @ 0x18002F6A8 (-Clip@CBaseClipStack@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18002F788 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005B1B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

__int64 __fastcall COcclusionContext::GetDestinationRect(__int64 a1, __int64 a2)
{
  CMILMatrix *TopByReference; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  v6 = 0LL;
  TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(a1 + 24));
  CMILMatrix::Transform2DBoundsHelper<0>(TopByReference);
  CBaseClipStack::Clip(a1 + 136, a2, &v6);
  return a2;
}
