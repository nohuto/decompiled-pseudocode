/*
 * XREFs of ?vSpDeleteShape@@YGXPAVSPRITE@@@Z @ 0x9EDE8
 * Callers:
 *     ?vSpDeleteSprite@@YGXPAVSPRITE@@@Z @ 0x9ECB4 (-vSpDeleteSprite@@YGXPAVSPRITE@@@Z.c)
 *     ?pSpHintSpriteShape@@YGHPAVSPRITE@@PAUHBITMAP__@@H@Z @ 0x9F37A (-pSpHintSpriteShape@@YGHPAVSPRITE@@PAUHBITMAP__@@H@Z.c)
 *     ?bSpUpdateCursor@@YGHPAVSPRITE@@PAU_SURFOBJ@@1PAU_XLATEOBJ@@PAU_RECTL@@@Z @ 0x1DE69D (-bSpUpdateCursor@@YGHPAVSPRITE@@PAU_SURFOBJ@@1PAU_XLATEOBJ@@PAU_RECTL@@@Z.c)
 *     ?bSpUpdateShape@@YGHPAVSPRITE@@KPAUHDC__@@1KPAU_BLENDFUNCTION@@PAU_POINTL@@PAUtagSIZE@@PAU_RECTL@@@Z @ 0x1DE86D (-bSpUpdateShape@@YGHPAVSPRITE@@KPAUHDC__@@1KPAU_BLENDFUNCTION@@PAU_POINTL@@PAUtagSIZE@@PAU_RECTL.c)
 * Callees:
 *     ?vSpDeleteSurface@@YGXPAU_SURFOBJ@@@Z @ 0x9EDCC (-vSpDeleteSurface@@YGXPAU_SURFOBJ@@@Z.c)
 */

void __thiscall vSpDeleteShape(void *this)
{
  int v2; // ecx
  int v3; // [esp+4h] [ebp-4h] BYREF

  if ( *((_DWORD *)this + 25) )
  {
    v3 = *((_DWORD *)this + 25);
    XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v3);
    *((_DWORD *)this + 25) = 0;
  }
  v2 = *((_DWORD *)this + 22);
  if ( v2 && (*(_BYTE *)this & 0x40) == 0 )
  {
    if ( HmgQueryAltLock(*(_DWORD *)(v2 - 16)) == 1 )
      vSpDeleteSurface(*((SURFOBJ **)this + 22));
    *((_DWORD *)this + 22) = 0;
  }
}
