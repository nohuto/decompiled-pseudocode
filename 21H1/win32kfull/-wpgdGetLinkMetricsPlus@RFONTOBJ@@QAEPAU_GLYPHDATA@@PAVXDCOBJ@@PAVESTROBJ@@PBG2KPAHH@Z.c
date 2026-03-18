/*
 * XREFs of ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@PBG2KPAHH@Z @ 0xC0F30
 * Callers:
 *     ?vInit@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@AAVEXFORMOBJ@@PAJHJJJJJJK4PAXK@Z @ 0x65290 (-vInit@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@AAVEXFORMOBJ@@PAJHJJJJJJK4PAXK@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJPBJVEFLOAT@@@Z @ 0x65900 (-vCharPos_H1@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJPBJVEFLOAT@@@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAVXDCOBJ@@PAVESTROBJ@@@Z @ 0x8700E (-bGetGlyphMetrics@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAVXDCOBJ@@PAVESTROBJ@@@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAHPAVXDCOBJ@@PAVESTROBJ@@@Z @ 0x87EA2 (-bGetGlyphMetricsPlus@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAHPAVXDCOBJ@@PAVESTROBJ@@@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?pgdDefault@RFONTOBJ@@QAEPAU_GLYPHDATA@@XZ @ 0xC100E (-pgdDefault@RFONTOBJ@@QAEPAU_GLYPHDATA@@XZ.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QAEHG@Z @ 0xC1064 (-bIsLinkedGlyph@RFONTOBJ@@QAEHG@Z.c)
 *     ?bIsSystemTTGlyph@RFONTOBJ@@QBEHG@Z @ 0xC1144 (-bIsSystemTTGlyph@RFONTOBJ@@QBEHG@Z.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@GKKPAHHH@Z @ 0x2071D7 (-FindLinkedGlyphDataPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@GKKPAHHH@Z.c)
 *     ?bInitSystemTT@RFONTOBJ@@QAEHAAVXDCOBJ@@@Z @ 0x2078D5 (-bInitSystemTT@RFONTOBJ@@QAEHAAVXDCOBJ@@@Z.c)
 *     ?bPartitionInit@ESTROBJ@@QAEHKIH@Z @ 0x207982 (-bPartitionInit@ESTROBJ@@QAEHKIH@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QAEPAU_GLYPHDATA@@GPAV1@@Z @ 0x207B5A (-pgdGetEudcMetrics@RFONTOBJ@@QAEPAU_GLYPHDATA@@GPAV1@@Z.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@GPAV1@@Z @ 0x207BE7 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@GPAV1@@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x208150 (-vInitEUDC@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z.c)
 *     ?vLockEUDCFontsGlyphCache@RFONTOBJ@@QAEXH@Z @ 0x209BCE (-vLockEUDCFontsGlyphCache@RFONTOBJ@@QAEXH@Z.c)
 *     ?vLockSystemTTGlyphCache@RFONTOBJ@@AAEXXZ @ 0x209D3E (-vLockSystemTTGlyphCache@RFONTOBJ@@AAEXXZ.c)
 */

struct _GLYPHDATA *__thiscall RFONTOBJ::wpgdGetLinkMetricsPlus(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        struct ESTROBJ *a3,
        const unsigned __int16 *a4,
        const unsigned __int16 *a5,
        unsigned int a6,
        int *a7,
        int a8)
{
  struct XDCOBJ *v8; // ebx
  const unsigned __int16 *v11; // eax
  const unsigned __int16 *v12; // edx
  int v13; // ecx
  struct _GLYPHDATA *result; // eax
  struct RFONTOBJ *v15; // ecx
  struct _GLYPHDATA *EudcMetrics; // eax
  int v17; // eax
  struct _GLYPHDATA *v18; // esi
  int v19; // eax
  struct ESTROBJ *v20; // ecx
  struct RFONTOBJ *v21; // ecx
  unsigned __int16 v22; // [esp-8h] [ebp-1Ch]
  unsigned __int16 v23; // [esp+10h] [ebp-4h]
  struct XDCOBJ *v24; // [esp+1Ch] [ebp+8h]
  const unsigned __int16 *v25; // [esp+24h] [ebp+10h]
  const unsigned __int16 *v26; // [esp+28h] [ebp+14h]

  v8 = a2;
  v11 = a4;
  v12 = &a5[a6];
  if ( !a2 )
    return RFONTOBJ::pgdDefault(this);
  v13 = *(_DWORD *)a2;
  if ( *(_DWORD *)(*(_DWORD *)a2 + 228)
    || !gbAnyLinkedFonts && !gappfeSysEUDC && !dword_27569C && !*(_DWORD *)(v13 + 224) )
  {
    return RFONTOBJ::pgdDefault(this);
  }
  if ( a4 < v12 )
  {
    do
    {
      if ( *v11 < 0x80u )
        break;
      if ( *v11 > 0x9Fu )
        break;
      ++v11;
    }
    while ( v11 < v12 );
    v8 = a2;
  }
  if ( v11 == v12 )
    return RFONTOBJ::pgdDefault(this);
  if ( !*(_DWORD *)(v13 + 224) && *(_DWORD *)(*(_DWORD *)this + 704) && !*(_DWORD *)(*(_DWORD *)this + 716) )
    RFONTOBJ::bInitSystemTT(this, v8);
  v24 = *(struct XDCOBJ **)this;
  v25 = *(const unsigned __int16 **)(*(_DWORD *)this + 788);
  if ( !v25 )
    return RFONTOBJ::pgdDefault(this);
  if ( !*(_DWORD *)(*(_DWORD *)v8 + 224) )
  {
    v23 = *a4;
    if ( RFONTOBJ::bIsSystemTTGlyph(this, *a4) )
    {
      if ( *((_DWORD *)v24 + 179) )
      {
        GreAcquireSemaphore(v25);
        RFONTOBJ::vLockSystemTTGlyphCache(this);
        EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_DWORD *)(*(_DWORD *)this + 788));
        GreReleaseSemaphoreInternal(*(_DWORD *)(*(_DWORD *)this + 788));
        if ( a3 && (*((_DWORD *)a3 + 48) & 0x1000) == 0 )
          ESTROBJ::bPartitionInit(a3, a6, 0, 0);
        a6 = *(_DWORD *)(*(_DWORD *)this + 716);
        if ( a6
          && ((v22 = *a4, !a8)
            ? (EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&a6, v22, v15))
            : (EudcMetrics = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&a6, v22, v15)),
              (a6 = (unsigned int)EudcMetrics) != 0) )
        {
          if ( a3 )
          {
            v17 = *((_DWORD *)a3 + 45);
            ++*((_DWORD *)a3 + 52);
            *(_DWORD *)(v17 + 4 * (a4 - a5)) = 1;
            *a7 = 0;
          }
          v18 = (struct _GLYPHDATA *)a6;
        }
        else
        {
          v18 = RFONTOBJ::pgdDefault(this);
        }
        a6 = 0;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a6);
        return v18;
      }
      return RFONTOBJ::pgdDefault(this);
    }
    if ( !RFONTOBJ::bIsLinkedGlyph(this, v23) )
    {
      if ( *(_DWORD *)(*(_DWORD *)this + 716) )
      {
        GreAcquireSemaphore(*(_DWORD *)(*(_DWORD *)this + 788));
        RFONTOBJ::vLockSystemTTGlyphCache(this);
        EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_DWORD *)(*(_DWORD *)this + 788));
        GreReleaseSemaphoreInternal(*(_DWORD *)(*(_DWORD *)this + 788));
      }
      return RFONTOBJ::pgdDefault(this);
    }
  }
  GreAcquireSemaphore(*(_DWORD *)(*(_DWORD *)this + 788));
  v19 = *(_DWORD *)this;
  if ( (*(_BYTE *)(*(_DWORD *)this + 708) & 1) == 0 )
  {
    GreAcquireSemaphore(ghsemEUDC1);
    ++gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    RFONTOBJ::vInitEUDC(this, v8);
    RFONTOBJ::vLockEUDCFontsGlyphCache(this, 1);
    *(_DWORD *)(*(_DWORD *)this + 708) |= 1u;
    v19 = *(_DWORD *)this;
  }
  EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_DWORD *)(v19 + 788));
  GreReleaseSemaphoreInternal(*(_DWORD *)(*(_DWORD *)this + 788));
  v20 = a3;
  if ( a3 && (*((_DWORD *)a3 + 48) & 0x400) == 0 )
  {
    if ( ESTROBJ::bPartitionInit(a3, a6, *(_DWORD *)(*(_DWORD *)this + 780), 1) )
    {
      v20 = a3;
      goto LABEL_47;
    }
    return RFONTOBJ::pgdDefault(this);
  }
LABEL_47:
  v26 = (const unsigned __int16 *)(a4 - a5);
  result = RFONTOBJ::FindLinkedGlyphDataPlus(this, v8, v20, *a4, (unsigned int)v26, a6, a7, 0, a8);
  if ( !result )
  {
    result = a8
           ? RFONTOBJ::pgdGetEudcMetricsPlus(this, EudcDefaultChar, v21)
           : RFONTOBJ::pgdGetEudcMetrics(this, EudcDefaultChar, v21);
    if ( !result )
    {
      result = RFONTOBJ::FindLinkedGlyphDataPlus(this, v8, a3, EudcDefaultChar, (unsigned int)v26, a6, a7, 1, a8);
      if ( !result )
        return RFONTOBJ::pgdDefault(this);
    }
  }
  return result;
}
