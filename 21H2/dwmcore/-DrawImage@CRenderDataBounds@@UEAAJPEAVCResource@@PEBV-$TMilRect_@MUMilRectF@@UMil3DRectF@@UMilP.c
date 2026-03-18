/*
 * XREFs of ?DrawImage@CRenderDataBounds@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UtagMILCMD_RECTRESOURCE@@$0IL@@@@Z @ 0x1800E29C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddBounds@CRenderDataBounds@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800E2B78 (-AddBounds@CRenderDataBounds@@IEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall CRenderDataBounds::DrawImage(__int64 a1, __int64 a2, __int128 *a3, __int64 a4)
{
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 )
  {
    if ( a4 )
    {
      a3 = &v6;
      v6 = *(_OWORD *)(a4 + 64);
    }
    CRenderDataBounds::AddBounds(a1, a3);
  }
  return 0LL;
}
