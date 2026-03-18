/*
 * XREFs of ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1C0050890
 * Callers:
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C004DDE8 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00506C4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0156B10 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x1C0281F20 (-bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C0050854 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 */

void __fastcall vSpDeleteShape(struct SPRITE *a1)
{
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)a1 + 18) )
  {
    v3 = *((_QWORD *)a1 + 18);
    XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v3);
    *((_QWORD *)a1 + 18) = 0LL;
  }
  v2 = *((_QWORD *)a1 + 16);
  if ( v2 && (*(_DWORD *)a1 & 0x40) == 0 )
  {
    if ( (unsigned int)HmgQueryAltLock(*(_QWORD *)(v2 - 24)) == 1 )
      vSpDeleteSurface(*((struct _SURFOBJ **)a1 + 16));
    *((_QWORD *)a1 + 16) = 0LL;
  }
}
