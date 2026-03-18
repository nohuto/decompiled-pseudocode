/*
 * XREFs of ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C00E0E70
 * Callers:
 *     ?QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z @ 0x1C00DF94C (-QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z.c)
 *     ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1C00DFA2C (-QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C00E0678 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C00E071C (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1C00E142C (-QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     ?QueryTrueTypeOutline@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLYGONHEADER@@@Z @ 0x1C01453BC (-QueryTrueTypeOutline@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLYG.c)
 *     ?FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02C2640 (-FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?GetTrueTypeFile@PFFOBJ@@QEAAPEAX_KPEAK@Z @ 0x1C02C26F4 (-GetTrueTypeFile@PFFOBJ@@QEAAPEAX_KPEAK@Z.c)
 *     ?QueryGlyphAttrs@PFFOBJ@@QEAAPEAU_FD_GLYPHATTR@@PEAU_FONTOBJ@@K@Z @ 0x1C02C276C (-QueryGlyphAttrs@PFFOBJ@@QEAAPEAU_FD_GLYPHATTR@@PEAU_FONTOBJ@@K@Z.c)
 * Callees:
 *     ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C01105F8 (-MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

ATTACHOBJ *__fastcall ATTACHOBJ::ATTACHOBJ(ATTACHOBJ *this, struct PFFOBJ *a2)
{
  __int64 v4; // r8
  unsigned int v5; // r10d
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v9; // rax
  unsigned int v10[2]; // [rsp+20h] [rbp-38h] BYREF
  int v11; // [rsp+28h] [rbp-30h]
  void *v12[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  v4 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 88LL) + 40LL) & 0x2000) != 0 && *(_DWORD *)(v4 + 36) <= 3u )
  {
    if ( (*(_DWORD *)(v4 + 52) & 0x1000) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
      v4 = *(_QWORD *)a2;
    }
    if ( (*(_DWORD *)(v4 + 52) & 0x2000) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
      v4 = *(_QWORD *)a2;
    }
    v5 = *(_DWORD *)(v4 + 36);
    v6 = 0LL;
    if ( v5 )
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)(*(_QWORD *)(v4 + 200) + 8 * v6);
        if ( (*(_DWORD *)(v7 + 40) & 0x18) == 8 && !*(_QWORD *)(v7 + 48) )
          break;
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 >= v5 )
          return this;
      }
      v13 = 0LL;
      *(_QWORD *)v10 = 0LL;
      v11 = 0;
      v9 = *(_QWORD *)a2;
      *(_OWORD *)v12 = 0LL;
      if ( MapFontFiles(v5, *(struct _FONTFILEVIEW ***)(v9 + 200), v12, v10) )
      {
        *(_QWORD *)this = *(_QWORD *)(*(_QWORD *)a2 + 200LL);
        *((_DWORD *)this + 2) = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
      }
    }
  }
  return this;
}
