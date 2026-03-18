/*
 * XREFs of ?pSpGetSprite@@YGPAVSPRITE@@PAU_SPRITESTATE@@PAUHWND__@@PAX@Z @ 0x9FC28
 * Callers:
 *     ?GdiAdjustSpriteDirtyAccum@@YGHPAUHDEV__@@PAUHWND__@@PAU_RECTL@@2PAU_POINTL@@3@Z @ 0x11E4A (-GdiAdjustSpriteDirtyAccum@@YGHPAUHDEV__@@PAUHWND__@@PAU_RECTL@@2PAU_POINTL@@3@Z.c)
 *     ?GdiDeleteSprite@@YGJPAUHDEV__@@PAUHWND__@@PAX@Z @ 0x9EAA8 (-GdiDeleteSprite@@YGJPAUHDEV__@@PAUHWND__@@PAX@Z.c)
 *     ?GdiGetSpriteAttributes@@YGHPAUHDEV__@@PAUHWND__@@PAXPAKPAU_BLENDFUNCTION@@3@Z @ 0x9F268 (-GdiGetSpriteAttributes@@YGHPAUHDEV__@@PAUHWND__@@PAXPAKPAU_BLENDFUNCTION@@3@Z.c)
 *     ?GdiHintSpriteShape@@YGHPAUHDEV__@@PAUHWND__@@PAUHBITMAP__@@HH@Z @ 0x9F2D8 (-GdiHintSpriteShape@@YGHPAUHDEV__@@PAUHWND__@@PAUHBITMAP__@@HH@Z.c)
 *     ?GdiUpdateSprite@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_BLENDFUNCTION@@KPAUtagRECT@@@Z @ 0x9F558 (-GdiUpdateSprite@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_BLENDFUN.c)
 *     ?GdiZorderSprite@@YGXPAUHDEV__@@PAUHWND__@@1@Z @ 0x9FBC6 (-GdiZorderSprite@@YGXPAUHDEV__@@PAUHWND__@@1@Z.c)
 *     ?GdiPtInSprite@@YGHPAUHDEV__@@PAUHWND__@@HH@Z @ 0x1DB02B (-GdiPtInSprite@@YGHPAUHDEV__@@PAUHWND__@@HH@Z.c)
 *     ?bSpUpdateSpriteDevLockEnd@@YGHPAUHDEV__@@AAVXDCOBJ@@PAU_RECTL@@@Z @ 0x1DEDCA (-bSpUpdateSpriteDevLockEnd@@YGHPAUHDEV__@@AAVXDCOBJ@@PAU_RECTL@@@Z.c)
 *     _GreDisableMirrorRendering@8 @ 0x1E359E (_GreDisableMirrorRendering@8.c)
 *     _GreEnableMirrorRendering@8 @ 0x1E3682 (_GreEnableMirrorRendering@8.c)
 * Callees:
 *     <none>
 */

struct SPRITE *__userpurge pSpGetSprite@<eax>(int a1@<edx>, int a2@<ecx>, struct _SPRITESTATE *a3, HWND a4, void *a5)
{
  struct SPRITE *result; // eax

  result = a3;
  if ( !a3 && a1 )
  {
    for ( result = *(struct SPRITE **)(a2 + 4);
          result && (*((_DWORD *)result + 10) != a1 || (*(_DWORD *)result & 0x400) != 0);
          result = (struct SPRITE *)*((_DWORD *)result + 4) )
    {
      ;
    }
  }
  return result;
}
