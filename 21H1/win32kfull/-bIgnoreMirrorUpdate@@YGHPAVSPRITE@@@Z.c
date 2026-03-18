/*
 * XREFs of ?bIgnoreMirrorUpdate@@YGHPAVSPRITE@@@Z @ 0x1DCE92
 * Callers:
 *     ?vSpRedrawSprite@@YGXPAVSPRITE@@@Z @ 0x9FD10 (-vSpRedrawSprite@@YGXPAVSPRITE@@@Z.c)
 *     ?vSpComposite@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E0318 (-vSpComposite@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall bIgnoreMirrorUpdate(unsigned int *this)
{
  int v1; // eax

  v1 = *(_DWORD *)this[3];
  return v1
      && (*(_DWORD *)(v1 + 1120) & 0x8000000) != 0
      && (*(_DWORD *)(v1 + 1416) & 0x800) != 0
      && (*this & 0x100) != 0;
}
