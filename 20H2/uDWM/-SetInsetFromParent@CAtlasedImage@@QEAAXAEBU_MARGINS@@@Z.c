/*
 * XREFs of ?SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z @ 0x180013F2C
 * Callers:
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x1800012A0 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 *     ?Initialize@CButton@@MEAAJXZ @ 0x180026B00 (-Initialize@CButton@@MEAAJXZ.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJ_N@Z @ 0x18009A8F0 (-Initialize@CAnimatedGlassSheet@@MEAAJ_N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180013300 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ??8@YA_NAEBU_MARGINS@@0@Z @ 0x1800150EC (--8@YA_NAEBU_MARGINS@@0@Z.c)
 */

void __fastcall CAtlasedImage::SetInsetFromParent(CAtlasedImage *this, const struct _MARGINS *a2)
{
  _OWORD *v2; // rdx
  _OWORD *v3; // rcx
  CAtlasedImage *v4; // r9

  if ( !(unsigned __int8)operator==((char *)this + 32, a2) )
  {
    *v3 = *v2;
    CAtlasedImage::SetDirtyFlags(v4, 1, 0x1000u);
  }
}
