/*
 * XREFs of _GreGetGlyphOutlineInternal@32 @ 0x85B86
 * Callers:
 *     _NtGdiGetGlyphOutline@32 @ 0x841CA (_NtGdiGetGlyphOutline@32.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     ??0RESETFCOBJ@@QAE@AAVDCOBJ@@AAVRFONTOBJ@@PAU_MAT2@@HK@Z @ 0x842BE (--0RESETFCOBJ@@QAE@AAVDCOBJ@@AAVRFONTOBJ@@PAU_MAT2@@HK@Z.c)
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?vReleaseCache@RFONTOBJ@@QAEXXZ @ 0x86BAC (-vReleaseCache@RFONTOBJ@@QAEXXZ.c)
 *     ?QueryFontData@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAU_GLYPHDATA@@PAXK@Z @ 0x872CA (-QueryFontData@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAU_GLYPHDATA@@PAXK@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QAEXPBGIPAKKH@Z @ 0x877DE (-vXlatGlyphArray@RFONTOBJ@@QAEXPBGIPAKKH@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QAEXXZ @ 0x8D42A (-vMakeInactive@RFONTOBJ@@QAEXXZ.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QAEHG@Z @ 0xC1064 (-bIsLinkedGlyph@RFONTOBJ@@QAEHG@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?bSkipCHSFontSegUISymFallback@RFONTOBJ@@QAEHGPAVPFF@@0@Z @ 0x207A4F (-bSkipCHSFontSegUISymFallback@RFONTOBJ@@QAEHGPAVPFF@@0@Z.c)
 *     ?dtorHelper@RFONTOBJ@@QAEXXZ @ 0x207AAB (-dtorHelper@RFONTOBJ@@QAEXXZ.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QAEPAU_GLYPHDATA@@GPAV1@@Z @ 0x207B5A (-pgdGetEudcMetrics@RFONTOBJ@@QAEPAU_GLYPHDATA@@GPAV1@@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x208150 (-vInitEUDC@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z.c)
 *     ?vLockEUDCFontsGlyphCache@RFONTOBJ@@QAEXH@Z @ 0x209BCE (-vLockEUDCFontsGlyphCache@RFONTOBJ@@QAEXH@Z.c)
 *     ?QueryTrueTypeOutline@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KHPAU_GLYPHDATA@@KPAUtagTTPOLYGONHEADER@@@Z @ 0x22933A (-QueryTrueTypeOutline@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KHPAU_GLYPHDATA@@KPAUtagTTPOLYGONHEA.c)
 */

int __fastcall GreGetGlyphOutlineInternal(
        HDC a1,
        unsigned __int16 a2,
        int a3,
        _DWORD *a4,
        unsigned int a5,
        struct tagTTPOLYGONHEADER *a6,
        struct _MAT2 *a7,
        int a8)
{
  struct _FONTOBJ *v9; // edi
  unsigned int v10; // ebx
  int v11; // eax
  unsigned int v12; // esi
  unsigned int v13; // edx
  unsigned __int16 v14; // cx
  void (__stdcall *v15)(ULONG); // esi
  int v16; // edi
  LONG cx; // eax
  int v18; // eax
  _DWORD *v19; // ebx
  LONG left; // edx
  LONG top; // ecx
  int v22; // eax
  int v23; // eax
  int v25; // ecx
  unsigned int v26; // edi
  struct RFONTOBJ *v27; // eax
  int v28; // esi
  RFONTOBJ *v29; // eax
  struct _GLYPHDATA *EudcMetrics; // eax
  unsigned int v31; // eax
  int v32; // esi
  RFONTOBJ *v33; // ecx
  int v34; // esi
  int v35; // esi
  unsigned int v36; // eax
  unsigned __int16 v37; // dx
  struct RFONTOBJ *v38; // ecx
  struct _GLYPHDATA *v39; // eax
  int v40; // esi
  struct RFONTOBJ *v41; // ecx
  struct _GLYPHDATA *v42; // eax
  unsigned int v43; // eax
  unsigned int v44; // ebx
  unsigned int v45; // ebx
  unsigned int v46; // ebx
  int v47; // eax
  int v48; // [esp-4h] [ebp-C4h]
  int v49; // [esp-4h] [ebp-C4h]
  struct _FONTOBJ *v50; // [esp+Ch] [ebp-B4h] BYREF
  unsigned __int16 v51[2]; // [esp+10h] [ebp-B0h] BYREF
  RFONTOBJ *v52; // [esp+14h] [ebp-ACh] BYREF
  int v53; // [esp+18h] [ebp-A8h] BYREF
  unsigned int v54; // [esp+1Ch] [ebp-A4h] BYREF
  int v55; // [esp+20h] [ebp-A0h] BYREF
  unsigned int v56; // [esp+24h] [ebp-9Ch]
  unsigned int v57; // [esp+28h] [ebp-98h]
  int *v58; // [esp+2Ch] [ebp-94h]
  int v59; // [esp+30h] [ebp-90h] BYREF
  int v60; // [esp+34h] [ebp-8Ch] BYREF
  struct RFONTOBJ *v61; // [esp+38h] [ebp-88h]
  int v62; // [esp+3Ch] [ebp-84h]
  unsigned __int16 v63[4]; // [esp+40h] [ebp-80h] BYREF
  _DWORD v64[3]; // [esp+48h] [ebp-78h] BYREF
  struct _MAT2 *v65; // [esp+54h] [ebp-6Ch]
  struct tagTTPOLYGONHEADER *v66; // [esp+58h] [ebp-68h]
  _DWORD *v67; // [esp+5Ch] [ebp-64h]
  unsigned int v68; // [esp+60h] [ebp-60h]
  int v69; // [esp+64h] [ebp-5Ch]
  _DWORD v70[2]; // [esp+6Ch] [ebp-54h] BYREF
  RFONTOBJ *v71; // [esp+74h] [ebp-4Ch]
  struct _GLYPHDATA v72; // [esp+78h] [ebp-48h] BYREF

  v50 = (struct _FONTOBJ *)a2;
  v67 = a4;
  v66 = a6;
  v65 = a7;
  v57 = 0;
  memset(&v72, 0, sizeof(v72));
  v62 = -1;
  v9 = 0;
  v69 = a3 & 0x100;
  v10 = a3 & 0xFFFFFE7F;
  *(_DWORD *)v51 = a3 & 0x80;
  memset(v64, 0, sizeof(v64));
  v68 = 2 * (*(_DWORD *)v51 != 0) + 2;
  XDCOBJ::vLock((XDCOBJ *)v64, a1);
  if ( !v67 || !v65 )
  {
    v15 = EngSetLastError;
    EngSetLastError(0x57u);
    goto LABEL_13;
  }
  if ( !v64[0] )
  {
    EngSetLastError(6u);
    goto LABEL_26;
  }
  v53 = 0;
  if ( RFONTOBJ::bInit((RFONTOBJ *)&v53, (struct XDCOBJ *)v64, 0, 2u) )
    GreAcquireSemaphore(*(_DWORD *)(v53 + 548));
  v60 = 0;
  v58 = &v53;
  v11 = v53;
  v59 = 0;
  v55 = 0;
  if ( !v53 )
    goto LABEL_10;
  v12 = *(_DWORD *)v51;
  if ( *(_DWORD *)v51 )
  {
    v14 = (unsigned __int16)v50;
    v13 = (unsigned __int16)v50;
  }
  else
  {
    v52 = (RFONTOBJ *)(unsigned __int16)v50;
    *(_DWORD *)v51 = 0;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v53, (const unsigned __int16 *)&v52, 1u, (unsigned int *)v51, 0, 0);
    v13 = *(_DWORD *)v51;
    v11 = v53;
    v14 = (unsigned __int16)v50;
  }
  v57 = v13;
  if ( v13 != *(_DWORD *)(v11 + 520) )
    goto LABEL_10;
  if ( v12 )
    goto LABEL_10;
  if ( !RFONTOBJ::bIsLinkedGlyph((RFONTOBJ *)&v53, v14) )
    goto LABEL_10;
  *(_DWORD *)v51 = v53;
  v25 = *(_DWORD *)(v53 + 788);
  if ( !v25 )
    goto LABEL_10;
  GreAcquireSemaphore(v25);
  v56 = -1;
  GreAcquireSemaphore(ghsemEUDC1);
  ++gcEUDCCount;
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  RFONTOBJ::vInitEUDC((RFONTOBJ *)&v53, (struct XDCOBJ *)v64);
  RFONTOBJ::vLockEUDCFontsGlyphCache((RFONTOBJ *)&v53, 0);
  v48 = *(_DWORD *)(*(_DWORD *)v51 + 788);
  *(_DWORD *)(*(_DWORD *)v51 + 708) |= 1u;
  EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", v48);
  v26 = *(_DWORD *)v51;
  GreReleaseSemaphoreInternal(*(_DWORD *)(*(_DWORD *)v51 + 788));
  v27 = *(struct RFONTOBJ **)(v26 + 780);
  v61 = v27;
  if ( v27 )
  {
    v28 = *(_DWORD *)(*(_DWORD *)(v26 + 728) + 4 * (_DWORD)v27 - 4);
    *(_DWORD *)v51 = (unsigned __int16)v50;
    v54 = 0;
    v55 = v28;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v55, v51, 1u, &v54, 0, 0);
    if ( v54 != *(_DWORD *)(v28 + 520) )
    {
      v29 = *(RFONTOBJ **)(*(_DWORD *)(v26 + 728) + 4 * (_DWORD)v61 - 4);
      v52 = v29;
      if ( v29 )
      {
        if ( (*(_DWORD *)(*((_DWORD *)v29 + 21) + 32) & 0xA) == 8 )
        {
          v61 = (struct RFONTOBJ *)((char *)v61 - 1);
          EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v52, (unsigned __int16)v50, v61);
          if ( EudcMetrics )
          {
            if ( EudcMetrics->fxD )
            {
              v56 = v54;
              v58 = &v55;
            }
          }
        }
      }
      v52 = 0;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v52);
      v31 = v56;
      if ( v56 != -1 )
        goto LABEL_63;
    }
  }
  v32 = *(_DWORD *)(v26 + 720);
  if ( v32 )
  {
    v52 = (RFONTOBJ *)(unsigned __int16)v50;
    *(_DWORD *)v51 = 0;
    v60 = v32;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v60, (const unsigned __int16 *)&v52, 1u, (unsigned int *)v51, 0, 0);
    v31 = *(_DWORD *)v51;
    if ( *(_DWORD *)v51 != *(_DWORD *)(v32 + 520) )
    {
      v56 = *(_DWORD *)v51;
      v58 = &v60;
      if ( *(_DWORD *)v51 != -1 )
        goto LABEL_63;
    }
  }
  v33 = 0;
  v52 = 0;
  if ( !v61 )
    goto LABEL_56;
  *(_DWORD *)v63 = (unsigned __int16)v50;
  while ( 1 )
  {
    v34 = *(_DWORD *)(v26 + 728);
    *(_DWORD *)v51 = 0;
    v35 = *(_DWORD *)(v34 + 4 * (_DWORD)v33);
    v55 = v35;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v55, v63, 1u, (unsigned int *)v51, 0, 0);
    if ( *(_DWORD *)v51 != *(_DWORD *)(v35 + 520) )
      break;
LABEL_55:
    v33 = (RFONTOBJ *)((char *)v52 + 1);
    v52 = v33;
    if ( v33 >= v61 )
      goto LABEL_56;
  }
  v36 = *(_DWORD *)(*(_DWORD *)(v26 + 728) + 4 * (_DWORD)v52);
  v54 = v36;
  if ( !v36
    || RFONTOBJ::bSkipCHSFontSegUISymFallback(
         v52,
         (unsigned __int16)v50,
         *(struct PFF **)(v26 + 84),
         *(struct PFF **)(v36 + 84))
    || (v39 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v54, v37, v38)) == 0
    || !v39->fxD )
  {
    v54 = 0;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v54);
    goto LABEL_55;
  }
  v54 = 0;
  v56 = *(_DWORD *)v51;
  v58 = &v55;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v54);
  v31 = v56;
  if ( v56 != -1 )
    goto LABEL_63;
LABEL_56:
  v40 = *(_DWORD *)(v26 + 724);
  if ( !v40 )
    goto LABEL_64;
  *(_DWORD *)v51 = 0;
  *(_DWORD *)v63 = (unsigned __int16)v50;
  v59 = v40;
  RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v59, v63, 1u, (unsigned int *)v51, 0, 0);
  if ( *(_DWORD *)v51 == *(_DWORD *)(v40 + 520) )
    goto LABEL_64;
  v52 = *(RFONTOBJ **)(v26 + 724);
  if ( v52 )
  {
    v42 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v52, (unsigned __int16)v50, v41);
    if ( v42 )
    {
      if ( v42->fxD )
      {
        v56 = *(_DWORD *)v51;
        v58 = &v59;
      }
    }
  }
  v52 = 0;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v52);
  v31 = v56;
  if ( v56 == -1 )
  {
LABEL_64:
    RFONTOBJ::dtorHelper((RFONTOBJ *)&v53);
    *(_DWORD *)(v26 + 708) = 0;
  }
  else
  {
LABEL_63:
    v57 = v31;
  }
LABEL_10:
  v15 = EngSetLastError;
  v16 = *v58;
  *(_DWORD *)v63 = v16;
  if ( !v16 )
    EngSetLastError(0x3EBu);
  v55 = 0;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v55);
  v59 = 0;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v59);
  v60 = 0;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v60);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v53);
  v9 = v16 != 0 ? *(struct _FONTOBJ **)v63 : 0;
LABEL_13:
  if ( !v9 )
    goto LABEL_26;
  v50 = v9;
  GreAcquireSemaphore(v9[12].iFile);
  *(_DWORD *)v63 = v9[1].pvProducer;
  cx = v9[1].sizLogResPpi.cx;
  if ( !cx )
  {
    v15(0x3EBu);
    goto LABEL_23;
  }
  if ( !*(_DWORD *)(cx + 2096)
    || (RESETFCOBJ::RESETFCOBJ(
          (RESETFCOBJ *)v70,
          (struct DCOBJ *)v64,
          (struct RFONTOBJ *)&v50,
          v65,
          a8,
          (struct RFONT *)v68),
        !v70[0]) )
  {
    v15(0x3EBu);
    goto LABEL_23;
  }
  if ( !v10 )
  {
    v18 = PFFOBJ::QueryFontData((PFFOBJ *)v63, 0, v50, 4u, v57, &v72, 0, 0);
    goto LABEL_19;
  }
  v43 = 6;
  if ( v10 == 1 )
  {
LABEL_71:
    v44 = v10 - 1;
    if ( v44 )
    {
      v45 = v44 - 3;
      if ( !v45 )
      {
LABEL_85:
        v18 = PFFOBJ::QueryFontData((PFFOBJ *)v63, 0, v50, v43, v57, &v72, v66, a5);
        goto LABEL_19;
      }
      v46 = v45 - 1;
      if ( v46 )
      {
        if ( v46 != 1 )
        {
          v43 = 0;
          goto LABEL_85;
        }
        v49 = 9;
      }
      else
      {
        v49 = 8;
      }
    }
    else
    {
      v49 = 5;
    }
    v43 = v49;
    goto LABEL_85;
  }
  if ( v10 <= 3 )
  {
    v47 = 0;
    if ( v10 == 3 )
      v47 = 2;
    if ( v69 )
      v47 |= 4u;
    v18 = PFFOBJ::QueryTrueTypeOutline((PFFOBJ *)v63, (struct DHPDEV__ *)&v72, v50, v57, v47, &v72, a5, v66);
LABEL_19:
    v62 = v18;
    if ( v18 != -1 )
    {
      v19 = v67;
      left = v72.rclInk.left;
      top = v72.rclInk.top;
      *v67 = v72.rclInk.right - v72.rclInk.left;
      v22 = v72.rclInk.bottom - top;
      v19[2] = left;
      v19[1] = v22;
      v23 = (v72.ptqD.x.HighPart >> 3) + 1;
      v19[3] = -top;
      *((_WORD *)v19 + 8) = v23 >> 1;
      *((_WORD *)v19 + 9) = ((v72.ptqD.y.HighPart >> 3) + 1) >> 1;
    }
  }
  else if ( v10 <= 6 )
  {
    goto LABEL_71;
  }
  if ( !v70[1] )
  {
    RFONTOBJ::vReleaseCache(v71);
    RFONTOBJ::vMakeInactive(v71);
  }
LABEL_23:
  if ( v50 )
    RFONTOBJ::vReleaseCache((RFONTOBJ *)&v50);
  v50 = 0;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v50);
LABEL_26:
  if ( v64[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v64);
  return v62;
}
