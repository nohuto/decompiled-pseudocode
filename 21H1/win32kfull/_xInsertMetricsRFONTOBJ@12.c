/*
 * XREFs of _xInsertMetricsRFONTOBJ@12 @ 0x8715C
 * Callers:
 *     ?bInsertMetrics@RFONTOBJ@@QAEHPAPAU_GLYPHDATA@@G@Z @ 0x87132 (-bInsertMetrics@RFONTOBJ@@QAEHPAPAU_GLYPHDATA@@G@Z.c)
 * Callees:
 *     ?QueryFontData@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAU_GLYPHDATA@@PAXK@Z @ 0x872CA (-QueryFontData@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAU_GLYPHDATA@@PAXK@Z.c)
 *     ?bCheckMetricsCache@RFONTOBJ@@QAEHXZ @ 0x87776 (-bCheckMetricsCache@RFONTOBJ@@QAEHXZ.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QAEXPBGIPAKKH@Z @ 0x877DE (-vXlatGlyphArray@RFONTOBJ@@QAEXPBGIPAKKH@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall xInsertMetricsRFONTOBJ(RFONTOBJ *this, ULONG *a2, unsigned __int16 a3)
{
  unsigned int v3; // eax
  RFONTOBJ *v4; // esi
  int v5; // ebx
  struct _FONTOBJ *v6; // edi
  bool v7; // zf
  struct _FONTOBJ *cxMax; // ecx
  struct _FONTOBJ *v9; // ecx
  struct _GLYPHDATA *cx; // eax
  LONG *v11; // ecx
  ULONG iFace; // ecx
  unsigned int v14; // [esp+Ch] [ebp-64h] BYREF
  unsigned __int16 v15[2]; // [esp+10h] [ebp-60h] BYREF
  ULONG *v16; // [esp+14h] [ebp-5Ch]
  struct _FONTOBJ *pvProducer; // [esp+18h] [ebp-58h] BYREF
  unsigned int v18; // [esp+20h] [ebp-50h]
  RFONTOBJ *v19; // [esp+24h] [ebp-4Ch]
  struct _GLYPHDATA v20; // [esp+28h] [ebp-48h] BYREF

  v3 = a3;
  v4 = this;
  v16 = a2;
  v5 = 0;
  v19 = this;
  v6 = *(struct _FONTOBJ **)this;
  *(_DWORD *)v15 = v6;
  v7 = (v6[1].flFontType & 2) == 0;
  cxMax = (struct _FONTOBJ *)v6[12].cxMax;
  pvProducer = cxMax;
  if ( !v7 )
  {
    *(_DWORD *)v15 = a3;
    v14 = 0;
    RFONTOBJ::vXlatGlyphArray(v4, v15, 1u, &v14, 0, 0);
    v6 = *(struct _FONTOBJ **)v4;
    v3 = v14;
    cxMax = pvProducer;
    a2 = v16;
    *(_DWORD *)v15 = *(_DWORD *)v4;
  }
  v14 = v3;
  if ( (PVOID)v3 == v6[11].pvConsumer && (iFace = cxMax->iFace) != 0 )
  {
    *a2 = iFace;
    return 1;
  }
  else if ( RFONTOBJ::bCheckMetricsCache(v4) )
  {
    pvProducer = *(struct _FONTOBJ **)v4;
    v18 = (pvProducer[1].iTTUniq == 2) + 1;
    memset(&v20, 0, sizeof(v20));
    v9 = pvProducer;
    pvProducer = (struct _FONTOBJ *)pvProducer[1].pvProducer;
    cx = &v20;
    if ( !v9[14].sizLogResPpi.cx )
      cx = (struct _GLYPHDATA *)v6[12].sizLogResPpi.cx;
    if ( PFFOBJ::QueryFontData((PFFOBJ *)&pvProducer, (struct DHPDEV__ *)v9[1].ulStyleSize, v9, v18, v14, cx, 0, 0) != -1 )
    {
      if ( *(_DWORD *)(*(_DWORD *)v4 + 640) )
      {
        qmemcpy((void *)v6[12].sizLogResPpi.cx, &v20, 0x14u);
        v6 = *(struct _FONTOBJ **)v15;
        v4 = v19;
      }
      v11 = (LONG *)v16;
      *(_DWORD *)v6[12].sizLogResPpi.cx = 0;
      *v11 = v6[12].sizLogResPpi.cx;
      v6[12].sizLogResPpi.cx += *(_DWORD *)(*(_DWORD *)v4 + 640) != 0 ? 20 : 64;
      return 1;
    }
    return v5;
  }
  else
  {
    return 0;
  }
}
