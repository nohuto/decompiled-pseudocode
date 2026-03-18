/*
 * XREFs of ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C0060E84
 * Callers:
 *     ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1C005FD4C (-ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z.c)
 *     ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1C005FFCC (-QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C006068C (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C0060730 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1C0065700 (-QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     ?QueryTrueTypeOutline@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLYGONHEADER@@@Z @ 0x1C01479EC (-QueryTrueTypeOutline@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLYG.c)
 *     ?FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02C10D0 (-FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?GetTrueTypeFile@PFFOBJ@@QEAAPEAX_KPEAK@Z @ 0x1C02C1184 (-GetTrueTypeFile@PFFOBJ@@QEAAPEAX_KPEAK@Z.c)
 *     ?QueryGlyphAttrs@PFFOBJ@@QEAAPEAU_FD_GLYPHATTR@@PEAU_FONTOBJ@@K@Z @ 0x1C02C11FC (-QueryGlyphAttrs@PFFOBJ@@QEAAPEAU_FD_GLYPHATTR@@PEAU_FONTOBJ@@K@Z.c)
 *     ?QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z @ 0x1C02C1274 (-QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z.c)
 * Callees:
 *     ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C00E3318 (-MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

ATTACHOBJ *__fastcall ATTACHOBJ::ATTACHOBJ(ATTACHOBJ *this, struct PFFOBJ *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r8
  unsigned int v7; // r10d
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v11; // rax
  unsigned int v12[2]; // [rsp+20h] [rbp-38h] BYREF
  int v13; // [rsp+28h] [rbp-30h]
  void *v14[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  v6 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 88LL) + 40LL) & 0x2000) != 0 && *(_DWORD *)(v6 + 36) <= 3u )
  {
    if ( (*(_DWORD *)(v6 + 52) & 0x1000) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, v6, a4);
      v6 = *(_QWORD *)a2;
    }
    if ( (*(_DWORD *)(v6 + 52) & 0x2000) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, v6, a4);
      v6 = *(_QWORD *)a2;
    }
    v7 = *(_DWORD *)(v6 + 36);
    v8 = 0LL;
    if ( v7 )
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)(*(_QWORD *)(v6 + 200) + 8 * v8);
        if ( (*(_DWORD *)(v9 + 40) & 0x18) == 8 && !*(_QWORD *)(v9 + 48) )
          break;
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 >= v7 )
          return this;
      }
      v15 = 0LL;
      *(_QWORD *)v12 = 0LL;
      v13 = 0;
      v11 = *(_QWORD *)a2;
      *(_OWORD *)v14 = 0LL;
      if ( MapFontFiles(v7, *(struct _FONTFILEVIEW ***)(v11 + 200), v14, v12) )
      {
        *(_QWORD *)this = *(_QWORD *)(*(_QWORD *)a2 + 200LL);
        *((_DWORD *)this + 2) = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
      }
    }
  }
  return this;
}
