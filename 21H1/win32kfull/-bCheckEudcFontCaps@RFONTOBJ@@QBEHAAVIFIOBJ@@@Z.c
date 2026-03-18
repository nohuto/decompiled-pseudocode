/*
 * XREFs of ?bCheckEudcFontCaps@RFONTOBJ@@QBEHAAVIFIOBJ@@@Z @ 0x207859
 * Callers:
 *     ?AddUFIToBuffer@RFONTOBJ@@AAEXPAVPFE@@AAPAU_UNIVERSAL_FONT_ID@@AAHH@Z @ 0x206D67 (-AddUFIToBuffer@RFONTOBJ@@AAEXPAVPFE@@AAPAU_UNIVERSAL_FONT_ID@@AAHH@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x208150 (-vInitEUDC@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall RFONTOBJ::bCheckEudcFontCaps(RFONTOBJ *this, struct IFIOBJ *a2)
{
  int v3; // edx
  int v4; // ecx

  if ( (ulFontLinkControl & 0xF0) != 0 )
  {
    v3 = *(_DWORD *)this;
    if ( *(_DWORD *)(*(_DWORD *)this + 64) )
    {
      if ( (ulFontLinkControl & 0x80u) != 0 )
        return 0;
    }
    else if ( (ulFontLinkControl & 0x40) != 0 && (*(_BYTE *)(v3 + 712) & 1) != 0
           || (ulFontLinkControl & 0x20) != 0 && (*(_BYTE *)(v3 + 712) & 4) != 0
           || (ulFontLinkControl & 0x10) != 0 && (*(_BYTE *)(v3 + 712) & 2) != 0 )
    {
      return 0;
    }
  }
  v4 = *(_DWORD *)(*(_DWORD *)a2 + 48);
  return (v4 & 0x10) != 0 || (v4 & 0x200000) != 0 && !(*(_DWORD *)(*(_DWORD *)this + 396) % 0x384u);
}
