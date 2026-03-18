/*
 * XREFs of ?pvSimBold@IFIOBJ@@QAEPAXXZ @ 0xC93D0
 * Callers:
 *     ?bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z @ 0x4A670 (-bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z.c)
 *     ?ppfeSynthesizeAMatch@MAPPER@@QAEPAVPFE@@PAK0PAU_POINTL@@@Z @ 0xA5444 (-ppfeSynthesizeAMatch@MAPPER@@QAEPAVPFE@@PAK0PAU_POINTL@@@Z.c)
 *     ?bFoundForcedMatch@MAPPER@@QAEHPAU_UNIVERSAL_FONT_ID@@@Z @ 0x1F4BAA (-bFoundForcedMatch@MAPPER@@QAEHPAU_UNIVERSAL_FONT_ID@@@Z.c)
 * Callees:
 *     <none>
 */

char *__thiscall IFIOBJ::pvSimBold(IFIOBJ *this)
{
  int v1; // eax
  int v2; // edx
  int v3; // ecx
  int *v4; // ecx
  int v5; // eax

  v1 = *(_DWORD *)this;
  v2 = 0;
  v3 = *(_DWORD *)(*(_DWORD *)this + 24);
  if ( v3 )
  {
    v4 = (int *)(v1 + v3);
    if ( (*(_BYTE *)(v1 + 52) & 1) != 0 )
      v5 = v4[2];
    else
      v5 = *v4;
    if ( v5 )
      return (char *)v4 + v5;
  }
  return (char *)v2;
}
