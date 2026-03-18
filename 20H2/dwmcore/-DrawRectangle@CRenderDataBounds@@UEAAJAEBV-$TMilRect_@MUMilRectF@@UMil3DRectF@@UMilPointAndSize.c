/*
 * XREFs of ?DrawRectangle@CRenderDataBounds@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UtagMILCMD_RECTRESOURCE@@$0IM@@@@Z @ 0x1800C9D80
 * Callers:
 *     <none>
 * Callees:
 *     ?AddBounds@CRenderDataBounds@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C9F68 (-AddBounds@CRenderDataBounds@@IEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 */

__int64 __fastcall CRenderDataBounds::DrawRectangle(__int64 a1, __int128 *a2, __int64 a3, __int64 a4)
{
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  if ( a3 )
  {
    if ( a4 )
    {
      a2 = &v5;
      v5 = *(_OWORD *)(a4 + 56);
    }
    CRenderDataBounds::AddBounds(a1, a2);
  }
  return 0LL;
}
