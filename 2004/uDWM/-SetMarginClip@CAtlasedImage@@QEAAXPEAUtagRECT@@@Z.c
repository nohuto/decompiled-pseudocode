/*
 * XREFs of ?SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z @ 0x180006998
 * Callers:
 *     ?InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180018350 (-InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x1800285A8 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 */

void __fastcall CAtlasedImage::SetMarginClip(CAtlasedImage *this, struct tagRECT *a2)
{
  char v2; // al

  v2 = *((_BYTE *)this + 116);
  if ( a2 )
  {
    if ( !v2 || !EqualRect((const RECT *)((char *)this + 100), a2) )
    {
      *((_BYTE *)this + 116) = 1;
      *(struct tagRECT *)((char *)this + 100) = *a2;
LABEL_4:
      CAtlasedImage::SetDirtyFlags(this, 1u, 0x2000u);
    }
  }
  else if ( v2 )
  {
    *((_BYTE *)this + 116) = 0;
    goto LABEL_4;
  }
}
