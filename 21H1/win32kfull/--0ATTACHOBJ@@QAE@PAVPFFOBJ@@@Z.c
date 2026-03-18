/*
 * XREFs of ??0ATTACHOBJ@@QAE@PAVPFFOBJ@@@Z @ 0x8737C
 * Callers:
 *     ?QueryFontTree@PFFOBJ@@QAEPAXPAUDHPDEV__@@KKKPAK@Z @ 0x85878 (-QueryFontTree@PFFOBJ@@QAEPAXPAUDHPDEV__@@KKKPAK@Z.c)
 *     ?QueryTrueTypeTable@PFFOBJ@@QAEJKKKJKPAEPAPAEPAK@Z @ 0x86BE2 (-QueryTrueTypeTable@PFFOBJ@@QAEJKKKJKPAEPAPAEPAK@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QAEHAAVXDCOBJ@@KPAGK1@Z @ 0x86D0C (-bGetWidthTable@RFONTOBJ@@QAEHAAVXDCOBJ@@KPAGK1@Z.c)
 *     ?QueryFontData@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAU_GLYPHDATA@@PAXK@Z @ 0x872CA (-QueryFontData@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAU_GLYPHDATA@@PAXK@Z.c)
 *     ?QueryGlyphMetricsPlusBits@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAPAU_GLYPHDATA@@PAPAU_GLYPHBITS@@@Z @ 0xF86B2 (-QueryGlyphMetricsPlusBits@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAPAU_GLYPHDATA@@PAPAU_GLYPHB.c)
 *     ?FontManagement@PFFOBJ@@QAEHPAU_SURFOBJ@@PAU_FONTOBJ@@KKPAXK2@Z @ 0x229271 (-FontManagement@PFFOBJ@@QAEHPAU_SURFOBJ@@PAU_FONTOBJ@@KKPAXK2@Z.c)
 *     ?GetTrueTypeFile@PFFOBJ@@QAEPAXKPAK@Z @ 0x2292BD (-GetTrueTypeFile@PFFOBJ@@QAEPAXKPAK@Z.c)
 *     ?QueryGlyphAttrs@PFFOBJ@@QAEPAU_FD_GLYPHATTR@@PAU_FONTOBJ@@K@Z @ 0x2292FD (-QueryGlyphAttrs@PFFOBJ@@QAEPAU_FD_GLYPHATTR@@PAU_FONTOBJ@@K@Z.c)
 *     ?QueryTrueTypeOutline@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KHPAU_GLYPHDATA@@KPAUtagTTPOLYGONHEADER@@@Z @ 0x22933A (-QueryTrueTypeOutline@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KHPAU_GLYPHDATA@@KPAUtagTTPOLYGONHEA.c)
 * Callees:
 *     ?MapFontFiles@@YG_NKPAPAU_FONTFILEVIEW@@PAPAXPAK@Z @ 0xDE468 (-MapFontFiles@@YG_NKPAPAU_FONTFILEVIEW@@PAPAXPAK@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

ATTACHOBJ *__thiscall ATTACHOBJ::ATTACHOBJ(ATTACHOBJ *this, struct PFFOBJ *a2)
{
  _DWORD *v3; // ecx
  unsigned int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edi
  int v8; // ecx
  void **v10; // [esp+0h] [ebp-34h]
  unsigned int *v11; // [esp+4h] [ebp-30h]
  int i; // [esp+14h] [ebp-20h]
  unsigned int v13[3]; // [esp+18h] [ebp-1Ch] BYREF
  struct _FONTFILEVIEW *v14[3]; // [esp+24h] [ebp-10h] BYREF

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  v3 = *(_DWORD **)a2;
  if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a2 + 60) + 24) & 0x2000) != 0 && v3[5] <= 3u )
  {
    if ( (v3[8] & 0x1000) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
      v3 = *(_DWORD **)a2;
    }
    if ( (v3[8] & 0x2000) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
      v3 = *(_DWORD **)a2;
    }
    v4 = v3[5];
    v5 = 0;
    if ( v4 )
    {
      v6 = v3[30];
      for ( i = v6; ; v6 = i )
      {
        v7 = *(_DWORD *)(v6 + 4 * v5);
        v8 = *(_DWORD *)(v7 + 24);
        if ( (v8 & 0x10) == 0 && (v8 & 8) != 0 && !*(_DWORD *)(v7 + 28) )
          break;
        if ( ++v5 >= v4 )
          return this;
      }
      memset(v13, 0, sizeof(v13));
      memset(v14, 0, sizeof(v14));
      if ( MapFontFiles((unsigned int)v13, v14, v10, v11) )
      {
        *(_DWORD *)this = *(_DWORD *)(*(_DWORD *)a2 + 120);
        *((_DWORD *)this + 1) = *(_DWORD *)(*(_DWORD *)a2 + 20);
      }
    }
  }
  return this;
}
