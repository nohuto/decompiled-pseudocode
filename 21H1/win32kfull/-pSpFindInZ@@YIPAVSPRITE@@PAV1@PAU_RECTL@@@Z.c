/*
 * XREFs of ?pSpFindInZ@@YIPAVSPRITE@@PAV1@PAU_RECTL@@@Z @ 0xEA5B4
 * Callers:
 *     ?bEnum@ENUMUNDERLAYS@@QAEHPAPAU_SURFOBJ@@PAU_POINTL@@PAPAU_CLIPOBJ@@@Z @ 0x66A00 (-bEnum@ENUMUNDERLAYS@@QAEHPAPAU_SURFOBJ@@PAU_POINTL@@PAPAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z @ 0x66EB0 (--0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z.c)
 *     ?vSpRedrawSprite@@YGXPAVSPRITE@@@Z @ 0x9FD10 (-vSpRedrawSprite@@YGXPAVSPRITE@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YGXPAVSPRITE@@PAU_RECTL@@@Z @ 0x1E22F2 (-vSpRedrawUncoveredArea@@YGXPAVSPRITE@@PAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@12JJPAU_RECTL@@3@Z @ 0x1E262E (-vSpSmallUnderlayCopy@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@12JJPAU_RECTL@@3@Z.c)
 * Callees:
 *     ?bIsCursorSprite@@YGHPAVSPRITE@@@Z @ 0x1DCEC2 (-bIsCursorSprite@@YGHPAVSPRITE@@@Z.c)
 *     ?vLock@SINGLEREADERLOCK@@QAEXXZ @ 0x1DFBCD (-vLock@SINGLEREADERLOCK@@QAEXXZ.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QAEXXZ @ 0x1E34D8 (-vUnlock@SINGLEREADERLOCK@@QAEXXZ.c)
 */

struct SPRITE *__fastcall pSpFindInZ(struct SPRITE *a1, struct _RECTL *a2)
{
  LONG left; // ebx
  struct SPRITE *v3; // esi
  LONG v5; // edx
  int IsCursorSprite; // edi
  struct SPRITE *v7; // [esp+0h] [ebp-18h]
  LONG top; // [esp+Ch] [ebp-Ch]
  LONG right; // [esp+10h] [ebp-8h]
  LONG i; // [esp+14h] [ebp-4h]

  left = a2->left;
  v3 = a1;
  top = a2->top;
  right = a2->right;
  for ( i = a2->bottom; v3; v3 = (struct SPRITE *)*((_DWORD *)v3 + 4) )
  {
    IsCursorSprite = bIsCursorSprite(v7);
    if ( IsCursorSprite == 1 )
    {
      SINGLEREADERLOCK::vLock((struct SPRITE *)((char *)v3 + 180));
      v5 = i;
    }
    if ( (*(_DWORD *)v3 & 0x400) == 0
      && *((_DWORD *)v3 + 11) <= right
      && *((_DWORD *)v3 + 12) <= v5
      && *((_DWORD *)v3 + 13) >= left
      && *((_DWORD *)v3 + 14) >= top )
    {
      break;
    }
    if ( IsCursorSprite == 1 )
      SINGLEREADERLOCK::vUnlock((struct SPRITE *)((char *)v3 + 180));
  }
  return v3;
}
