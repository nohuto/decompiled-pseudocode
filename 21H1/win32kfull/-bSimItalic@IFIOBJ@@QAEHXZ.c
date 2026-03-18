/*
 * XREFs of ?bSimItalic@IFIOBJ@@QAEHXZ @ 0xC52CA
 * Callers:
 *     ?bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z @ 0x4A670 (-bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z.c)
 *     ?ppfeSynthesizeAMatch@MAPPER@@QAEPAVPFE@@PAK0PAU_POINTL@@@Z @ 0xA5444 (-ppfeSynthesizeAMatch@MAPPER@@QAEPAVPFE@@PAK0PAU_POINTL@@@Z.c)
 *     ?bFoundForcedMatch@MAPPER@@QAEHPAU_UNIVERSAL_FONT_ID@@@Z @ 0x1F4BAA (-bFoundForcedMatch@MAPPER@@QAEHPAU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?vInit@RFONTOBJ@@QAEXAAVXDCOBJ@@PAVPFE@@PAU_EUDCLOGFONT@@H@Z @ 0x207D5B (-vInit@RFONTOBJ@@QAEXAAVXDCOBJ@@PAVPFE@@PAU_EUDCLOGFONT@@H@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall IFIOBJ::bSimItalic(IFIOBJ *this)
{
  int v1; // eax
  int v2; // edx
  int v3; // ecx

  v1 = *(_DWORD *)this;
  v2 = 0;
  v3 = *(_DWORD *)(*(_DWORD *)this + 24);
  if ( v3 )
  {
    if ( (*(_BYTE *)(v1 + 52) & 0x20) != 0 )
      return *(_DWORD *)(v3 + v1 + 8);
    else
      return *(_DWORD *)(v3 + v1 + 4);
  }
  return v2;
}
