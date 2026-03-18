/*
 * XREFs of ??$SafeDivide@KKK@@YGJKKPAK@Z @ 0xC3054
 * Callers:
 *     ?bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z @ 0x4A670 (-bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z.c)
 *     ?bFoundForcedMatch@MAPPER@@QAEHPAU_UNIVERSAL_FONT_ID@@@Z @ 0x1F4BAA (-bFoundForcedMatch@MAPPER@@QAEHPAU_UNIVERSAL_FONT_ID@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall SafeDivide<unsigned long,unsigned long,unsigned long>(unsigned int a1, unsigned int a2, int *a3)
{
  if ( !a2 )
    return -2147467259;
  *a3 = a1 / a2;
  return 0;
}
