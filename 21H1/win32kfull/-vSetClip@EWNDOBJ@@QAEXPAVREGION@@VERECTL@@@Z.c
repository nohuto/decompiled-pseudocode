/*
 * XREFs of ?vSetClip@EWNDOBJ@@QAEXPAVREGION@@VERECTL@@@Z @ 0x1E68E5
 * Callers:
 *     _GreClientRgnUpdated@4 @ 0x384C8 (_GreClientRgnUpdated@4.c)
 *     ?vForceClientRgnUpdate@@YGXXZ @ 0x1E6558 (-vForceClientRgnUpdate@@YGXXZ.c)
 *     ?vUpdateClientRgnOnSpriteOverlap@@YGXPAVEWNDOBJ@@AAVRGNOBJ@@@Z @ 0x1E6921 (-vUpdateClientRgnOnSpriteOverlap@@YGXPAVEWNDOBJ@@AAVRGNOBJ@@@Z.c)
 *     _EngCreateWnd@20 @ 0x1E6AA4 (_EngCreateWnd@20.c)
 *     _GreSetClientRgn@12 @ 0x1E7093 (_GreSetClientRgn@12.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 */

BOOL __thiscall EWNDOBJ::vSetClip(int this, struct REGION *a2, int a3, int a4, int a5, int a6)
{
  BOOL result; // eax

  XCLIPOBJ::vSetup((XCLIPOBJ *)this, a2, (struct ERECTL *)&grclMax, 0);
  *(_DWORD *)(this + 28) = a3;
  *(_DWORD *)(this + 32) = a4;
  *(_DWORD *)(this + 36) = a5;
  *(_DWORD *)(this + 40) = a6;
  result = ERECTL::bEmpty((ERECTL *)(this + 4));
  if ( result )
    *(_BYTE *)(this + 20) = 1;
  return result;
}
