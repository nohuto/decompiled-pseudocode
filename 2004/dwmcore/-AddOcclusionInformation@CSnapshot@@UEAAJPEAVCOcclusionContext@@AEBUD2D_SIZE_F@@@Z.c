/*
 * XREFs of ?AddOcclusionInformation@CSnapshot@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801F5E6C
 * Callers:
 *     ?AddOcclusionInformation@CSnapshot@@$4PPPPPPPM@A@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800EEF70 (-AddOcclusionInformation@CSnapshot@@$4PPPPPPPM@A@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x1800621D0 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?GetBounds@CSnapshot@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F6034 (-GetBounds@CSnapshot@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAnd.c)
 */

__int64 __fastcall CSnapshot::AddOcclusionInformation(
        CSnapshot *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  __int64 v4; // r8
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_BYTE *)this - 32) )
  {
    v6 = 0LL;
    CSnapshot::GetBounds(this);
    COcclusionContext::CollectRectangleForOcclusion((__int64)a2, (float *)&v6, v4, 0LL);
  }
  return 0LL;
}
