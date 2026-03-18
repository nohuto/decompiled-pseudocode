/*
 * XREFs of ?vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z @ 0x1C02864F8
 * Callers:
 *     GreClientRgnUpdated @ 0x1C00456A8 (GreClientRgnUpdated.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C0286094 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z @ 0x1C028654C (-vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z.c)
 *     EngCreateWnd @ 0x1C0286790 (EngCreateWnd.c)
 *     GreSetClientRgn @ 0x1C0286F4C (GreSetClientRgn.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C009ECF8 (-bEmpty@ERECTL@@QEBAHXZ.c)
 */

_BOOL8 __fastcall EWNDOBJ::vSetClip(__int64 a1, struct REGION *a2, _OWORD *a3)
{
  _BOOL8 result; // rax

  XCLIPOBJ::vSetup((XCLIPOBJ *)a1, a2, (struct ERECTL *)&grclMax, 0);
  *(_OWORD *)(a1 + 32) = *a3;
  result = ERECTL::bEmpty((ERECTL *)(a1 + 4));
  if ( result )
    *(_BYTE *)(a1 + 20) = 1;
  return result;
}
