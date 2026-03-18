/*
 * XREFs of ?FindLinkedGlyphDataPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@GKKPAHHH@Z @ 0x2071D7
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@PBG2KPAHH@Z @ 0xC0F30 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@PBG2KPAHH@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?pgdDefault@RFONTOBJ@@QAEPAU_GLYPHDATA@@XZ @ 0xC100E (-pgdDefault@RFONTOBJ@@QAEPAU_GLYPHDATA@@XZ.c)
 *     ?bIsSystemTTGlyph@RFONTOBJ@@QBEHG@Z @ 0xC1144 (-bIsSystemTTGlyph@RFONTOBJ@@QBEHG@Z.c)
 *     ?bPartitionInit@ESTROBJ@@QAEHKIH@Z @ 0x207982 (-bPartitionInit@ESTROBJ@@QAEHKIH@Z.c)
 *     ?bSkipCHSFontSegUISymFallback@RFONTOBJ@@QAEHGPAVPFF@@0@Z @ 0x207A4F (-bSkipCHSFontSegUISymFallback@RFONTOBJ@@QAEHGPAVPFF@@0@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QAEPAU_GLYPHDATA@@GPAV1@@Z @ 0x207B5A (-pgdGetEudcMetrics@RFONTOBJ@@QAEPAU_GLYPHDATA@@GPAV1@@Z.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@GPAV1@@Z @ 0x207BE7 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@GPAV1@@Z.c)
 */

struct _GLYPHDATA *__thiscall RFONTOBJ::FindLinkedGlyphDataPlus(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        struct ESTROBJ *a3,
        struct _GLYPHDATA *a4,
        unsigned int a5,
        unsigned int a6,
        int *a7,
        struct _GLYPHDATA *a8,
        int a9)
{
  struct ESTROBJ *v9; // esi
  unsigned __int16 v11; // di
  int v12; // eax
  struct RFONTOBJ *v13; // ecx
  struct _GLYPHDATA *EudcMetrics; // eax
  struct _GLYPHDATA *v16; // edi
  unsigned int v17; // eax
  int v18; // eax
  struct RFONTOBJ *v19; // ecx
  struct ESTROBJ *v20; // eax
  struct _GLYPHDATA *v21; // eax
  struct ESTROBJ *v22; // eax
  struct _GLYPHDATA *EudcMetricsPlus; // eax
  RFONTOBJ *v24; // ecx
  int v25; // edx
  struct PFF **v26; // eax
  struct RFONTOBJ *v27; // ecx
  struct _GLYPHDATA *v28; // eax
  struct _GLYPHDATA *v29; // eax
  struct _GLYPHDATA *v30; // edx
  struct RFONTOBJ *v31; // [esp-4h] [ebp-14h]
  int v32; // [esp+Ch] [ebp-4h]
  struct XDCOBJ *v33; // [esp+18h] [ebp+8h]

  v9 = a3;
  if ( a3 )
    v32 = *((_DWORD *)a3 + 45);
  else
    v32 = 0;
  v11 = (unsigned __int16)a4;
  if ( !*(_DWORD *)(*(_DWORD *)a2 + 224) && a8 && RFONTOBJ::bIsSystemTTGlyph(this, (unsigned __int16)a4) )
  {
    v12 = *(_DWORD *)this;
    v13 = 0;
    if ( !*(_DWORD *)(*(_DWORD *)this + 716) )
      return RFONTOBJ::pgdDefault(this);
    if ( v9 && (*((_DWORD *)v9 + 48) & 0x1000) == 0 )
    {
      ESTROBJ::bPartitionInit(v9, a6, 0, 0);
      v12 = *(_DWORD *)this;
    }
    a3 = *(struct ESTROBJ **)(v12 + 716);
    if ( !a3
      || (!a9
        ? (EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&a3, v11, v13))
        : (EudcMetrics = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&a3, v11, v13)),
          (v16 = EudcMetrics) == 0) )
    {
      v16 = RFONTOBJ::pgdDefault(this);
      goto LABEL_21;
    }
    if ( !v9 )
    {
LABEL_21:
      a3 = 0;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a3);
      return v16;
    }
    v17 = a5;
    ++*((_DWORD *)v9 + 52);
    *(_DWORD *)(v32 + 4 * v17) = 1;
LABEL_19:
    *a7 = 0;
    goto LABEL_21;
  }
  v18 = *(_DWORD *)this;
  v19 = *(struct RFONTOBJ **)(*(_DWORD *)this + 780);
  v33 = v19;
  if ( v19 )
  {
    v20 = *(struct ESTROBJ **)(*(_DWORD *)(v18 + 728) + 4 * (_DWORD)v19 - 4);
    a3 = v20;
    if ( v20 && (*(_DWORD *)(*((_DWORD *)v20 + 21) + 32) & 0xA) == 8 )
    {
      v31 = (struct RFONTOBJ *)((char *)v19 - 1);
      v33 = (struct RFONTOBJ *)((char *)v19 - 1);
      v21 = a9
          ? RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&a3, v11, v31)
          : RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&a3, v11, v31);
      a4 = v21;
      if ( v21 )
      {
        if ( v21->fxD )
        {
          if ( !v9 )
          {
LABEL_33:
            a3 = 0;
            RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a3);
            return a4;
          }
          *(_DWORD *)(v32 + 4 * a5) = (char *)v33 + 4;
          ++*(_DWORD *)(*((_DWORD *)v9 + 56) + 4 * (_DWORD)v33);
LABEL_32:
          *a7 = 0;
          goto LABEL_33;
        }
      }
    }
    a3 = 0;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a3);
    v18 = *(_DWORD *)this;
  }
  v22 = *(struct ESTROBJ **)(v18 + 720);
  if ( v22 )
  {
    a3 = v22;
    if ( a9 )
      EudcMetricsPlus = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&a3, v11, v19);
    else
      EudcMetricsPlus = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&a3, v11, v19);
    a4 = EudcMetricsPlus;
    if ( EudcMetricsPlus && EudcMetricsPlus->fxD )
    {
      if ( !v9 )
        goto LABEL_33;
      *(_DWORD *)(v32 + 4 * a5) = 2;
      ++*((_DWORD *)v9 + 53);
      goto LABEL_32;
    }
    a3 = 0;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a3);
  }
  v24 = 0;
  a4 = 0;
  if ( v33 )
  {
    while ( 1 )
    {
      v25 = *(_DWORD *)this;
      v26 = *(struct PFF ***)(*(_DWORD *)(*(_DWORD *)this + 728) + 4 * (_DWORD)v24);
      a3 = (struct ESTROBJ *)v26;
      if ( v26 )
      {
        if ( !RFONTOBJ::bSkipCHSFontSegUISymFallback(v24, v11, *(struct PFF **)(v25 + 84), v26[21]) )
        {
          v28 = a9
              ? RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&a3, v11, v27)
              : RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&a3, v11, v27);
          a8 = v28;
          if ( v28 )
          {
            if ( v28->fxD )
              break;
          }
        }
      }
      a3 = 0;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a3);
      v24 = (RFONTOBJ *)((char *)&a4->gdf.pgb + 1);
      a4 = (struct _GLYPHDATA *)v24;
      if ( v24 >= v33 )
        goto LABEL_53;
    }
    if ( v9 )
    {
      v30 = a4;
      *(_DWORD *)(v32 + 4 * a5) = &a4->hg;
      ++*(_DWORD *)(*((_DWORD *)v9 + 56) + 4 * (_DWORD)v30);
      *a7 = 0;
    }
    a3 = 0;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a3);
    return a8;
  }
  else
  {
LABEL_53:
    if ( *(_DWORD *)(*(_DWORD *)this + 724) )
    {
      a3 = *(struct ESTROBJ **)(*(_DWORD *)this + 724);
      if ( a9 )
        v29 = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&a3, v11, v24);
      else
        v29 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&a3, v11, v24);
      v16 = v29;
      if ( v29 && v29->fxD )
      {
        if ( !v9 )
          goto LABEL_21;
        *(_DWORD *)(v32 + 4 * a5) = 3;
        ++*((_DWORD *)v9 + 54);
        goto LABEL_19;
      }
      a3 = 0;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a3);
    }
    return 0;
  }
}
