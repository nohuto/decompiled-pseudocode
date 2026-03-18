/*
 * XREFs of _xInsertMetricsPlusRFONTOBJ@12 @ 0x8648A
 * Callers:
 *     ?bInsertMetricsPlus@RFONTOBJ@@QAEHPAPAU_GLYPHDATA@@G@Z @ 0x86460 (-bInsertMetricsPlus@RFONTOBJ@@QAEHPAPAU_GLYPHDATA@@G@Z.c)
 * Callees:
 *     ?bInsertMetrics@RFONTOBJ@@QAEHPAPAU_GLYPHDATA@@G@Z @ 0x87132 (-bInsertMetrics@RFONTOBJ@@QAEHPAPAU_GLYPHDATA@@G@Z.c)
 *     ?QueryFontData@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAU_GLYPHDATA@@PAXK@Z @ 0x872CA (-QueryFontData@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAU_GLYPHDATA@@PAXK@Z.c)
 *     ?bCheckMetricsCache@RFONTOBJ@@QAEHXZ @ 0x87776 (-bCheckMetricsCache@RFONTOBJ@@QAEHXZ.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QAEXPBGIPAKKH@Z @ 0x877DE (-vXlatGlyphArray@RFONTOBJ@@QAEXPBGIPAKKH@Z.c)
 *     ?pgbCheckGlyphCache@RFONTOBJ@@QAEPAXK@Z @ 0xA8B2A (-pgbCheckGlyphCache@RFONTOBJ@@QAEPAXK@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?QueryGlyphMetricsPlusBits@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAPAU_GLYPHDATA@@PAPAU_GLYPHBITS@@@Z @ 0xF86B2 (-QueryGlyphMetricsPlusBits@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAPAU_GLYPHDATA@@PAPAU_GLYPHB.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QAEHPAPAU_GLYPHDATA@@G@Z @ 0x240FBD (-bInsertMetricsPlusPath@RFONTOBJ@@QAEHPAPAU_GLYPHDATA@@G@Z.c)
 */

int __fastcall xInsertMetricsPlusRFONTOBJ(RFONTOBJ *this, struct _GLYPHDATA **a2, unsigned __int16 a3)
{
  RFONTOBJ *v3; // edi
  int v4; // esi
  struct _FONTOBJ *v5; // ebx
  bool v6; // zf
  unsigned __int16 v7; // ax
  unsigned int v8; // ecx
  ULONG iFace; // ecx
  int result; // eax
  struct _FONTOBJ *v11; // eax
  struct _GLYPHDATA *iTTUniq; // ecx
  unsigned int v13; // eax
  struct _FONTOBJ *v14; // eax
  struct _FONTOBJ *v15; // edx
  struct _GLYPHDATA *cx; // ecx
  int FontData; // edx
  struct _FONTOBJ *v18; // eax
  unsigned int iFile; // [esp-Ch] [ebp-84h]
  struct _GLYPHDATA *v20; // [esp+10h] [ebp-68h] BYREF
  struct _FONTOBJ *v21; // [esp+14h] [ebp-64h]
  unsigned int v22; // [esp+18h] [ebp-60h]
  struct _GLYPHDATA **v23; // [esp+1Ch] [ebp-5Ch]
  struct _GLYPHBITS *v24; // [esp+20h] [ebp-58h] BYREF
  RFONTOBJ *v25; // [esp+24h] [ebp-54h]
  _DWORD v26[2]; // [esp+28h] [ebp-50h] BYREF
  struct _GLYPHDATA v27; // [esp+30h] [ebp-48h] BYREF

  v3 = this;
  v23 = a2;
  v4 = 0;
  v25 = this;
  v5 = *(struct _FONTOBJ **)this;
  v6 = (*(_BYTE *)(*(_DWORD *)this + 56) & 2) == 0;
  v21 = *(struct _FONTOBJ **)(*(_DWORD *)this + 536);
  v7 = a3;
  if ( v6 )
  {
    v8 = a3;
  }
  else
  {
    v24 = (struct _GLYPHBITS *)a3;
    v20 = 0;
    RFONTOBJ::vXlatGlyphArray(this, (const unsigned __int16 *)&v24, 1u, (unsigned int *)&v20, 0, 0);
    v8 = (unsigned int)v20;
    v5 = *(struct _FONTOBJ **)v3;
    v7 = a3;
    a2 = v23;
  }
  v22 = v8;
  if ( (PVOID)v8 == v5[11].pvConsumer )
  {
    iFace = v21->iFace;
    if ( iFace )
    {
      *a2 = (struct _GLYPHDATA *)iFace;
      return 1;
    }
  }
  if ( !v5[1].iTTUniq )
    return RFONTOBJ::bInsertMetrics(v3, a2, v7);
  result = RFONTOBJ::bCheckMetricsCache(v3);
  if ( result )
  {
    v11 = *(struct _FONTOBJ **)v3;
    v21 = v11;
    if ( v11[1].iTTUniq == 2 )
      return RFONTOBJ::bInsertMetricsPlusPath(v3, v23, a3);
    v26[0] = v11[1].pvProducer;
    if ( *(_DWORD *)(v26[0] + 60) == dword_2785B8 )
    {
      v5[14].sizLogResPpi.cy = 6;
      v18 = *(struct _FONTOBJ **)v3;
      v20 = 0;
      iFile = v5[14].iFile;
      v24 = 0;
      if ( PFFOBJ::QueryGlyphMetricsPlusBits(
             (PFFOBJ *)v26,
             (struct DHPDEV__ *)v18[1].ulStyleSize,
             v18,
             v22,
             iFile,
             &v20,
             &v24) == -1 )
        return v4;
      v20->gdf.pgb = v24;
      *v23 = v20;
    }
    else
    {
      memset(&v27, 0, sizeof(v27));
      iTTUniq = (struct _GLYPHDATA *)v5[14].iTTUniq;
      v13 = v5[13].ulStyleSize - v5[13].sizLogResPpi.cy;
      v20 = iTTUniq;
      if ( (unsigned int)iTTUniq > v13 )
      {
        iTTUniq = (struct _GLYPHDATA *)PFFOBJ::QueryFontData(
                                         (PFFOBJ *)v26,
                                         (struct DHPDEV__ *)v21[1].ulStyleSize,
                                         v21,
                                         1u,
                                         v22,
                                         &v27,
                                         0,
                                         0);
        v20 = iTTUniq;
        if ( iTTUniq == (struct _GLYPHDATA *)-1 )
          return v4;
      }
      v14 = (struct _FONTOBJ *)RFONTOBJ::pgbCheckGlyphCache(v3, (unsigned int)iTTUniq);
      v15 = *(struct _FONTOBJ **)v3;
      cx = &v27;
      v21 = v14;
      if ( !v15[14].sizLogResPpi.cx )
        cx = (struct _GLYPHDATA *)v5[12].sizLogResPpi.cx;
      FontData = PFFOBJ::QueryFontData(
                   (PFFOBJ *)v26,
                   (struct DHPDEV__ *)v15[1].ulStyleSize,
                   v15,
                   1u,
                   v22,
                   cx,
                   v14,
                   (unsigned int)v20);
      if ( FontData == -1 )
        return v4;
      if ( *(_DWORD *)(*(_DWORD *)v3 + 640) )
      {
        qmemcpy((void *)v5[12].sizLogResPpi.cx, &v27, 0x14u);
        v3 = v25;
      }
      *v23 = (struct _GLYPHDATA *)v5[12].sizLogResPpi.cx;
      v5[12].sizLogResPpi.cx += *(_DWORD *)(*(_DWORD *)v3 + 640) != 0 ? 20 : 64;
      if ( v21 )
        v5[13].sizLogResPpi.cy += FontData;
    }
    return 1;
  }
  return result;
}
