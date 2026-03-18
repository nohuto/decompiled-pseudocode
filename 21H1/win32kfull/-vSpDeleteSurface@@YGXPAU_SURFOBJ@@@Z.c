/*
 * XREFs of ?vSpDeleteSurface@@YGXPAU_SURFOBJ@@@Z @ 0x9EDCC
 * Callers:
 *     ?vSpDisableSprites@@YGXPAUHDEV__@@W4_CLEANUPTYPE@@@Z @ 0x9E570 (-vSpDisableSprites@@YGXPAUHDEV__@@W4_CLEANUPTYPE@@@Z.c)
 *     ?vSpDeleteSprite@@YGXPAVSPRITE@@@Z @ 0x9ECB4 (-vSpDeleteSprite@@YGXPAVSPRITE@@@Z.c)
 *     ?vSpDeleteShape@@YGXPAVSPRITE@@@Z @ 0x9EDE8 (-vSpDeleteShape@@YGXPAVSPRITE@@@Z.c)
 *     ?vSpRedrawSprite@@YGXPAVSPRITE@@@Z @ 0x9FD10 (-vSpRedrawSprite@@YGXPAVSPRITE@@@Z.c)
 *     ?bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z @ 0xA0A28 (-bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z.c)
 *     ?bSpCreateShape@@YGHPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAVPALETTE@@KK4@Z @ 0x1DDCF1 (-bSpCreateShape@@YGHPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAVPALETTE@@KK4.c)
 *     ?psoSpGetComposite@@YGPAU_SURFOBJ@@PAU_SPRITESTATE@@PAU_RECTL@@PAK@Z @ 0x1DFA3C (-psoSpGetComposite@@YGPAU_SURFOBJ@@PAU_SPRITESTATE@@PAU_RECTL@@PAK@Z.c)
 *     ?vSpRedrawArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@H@Z @ 0x1E1DFF (-vSpRedrawArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YGXPAU_SPRITESTATE@@PAU_RECTL@@@Z @ 0x1E1FC9 (-vSpRedrawAreaExMirror@@YGXPAU_SPRITESTATE@@PAU_RECTL@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YGXPAVSPRITE@@PAU_RECTL@@@Z @ 0x1E22F2 (-vSpRedrawUncoveredArea@@YGXPAVSPRITE@@PAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall vSpDeleteSurface(SURFOBJ *this)
{
  HSURF hsurf; // esi

  if ( this )
  {
    this[1].dhpdev = 0;
    hsurf = this->hsurf;
    EngUnlockSurface(this);
    EngDeleteSurface(hsurf);
  }
}
