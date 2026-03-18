/*
 * XREFs of GreGetGlyphOutlineInternal @ 0x1C00E344C
 * Callers:
 *     NtGdiGetGlyphOutline @ 0x1C00E3260 (NtGdiGetGlyphOutline.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C007DD90 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008502C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C00DB598 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C00DBE1C (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C00E0678 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C00E0F20 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z @ 0x1C00E308C (-bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z.c)
 *     ?dtorHelper@RFONTOBJ@@QEAAXXZ @ 0x1C00E30B8 (-dtorHelper@RFONTOBJ@@QEAAXXZ.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C00E3C2C (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ??0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x1C00E3C88 (--0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00FDA34 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z @ 0x1C011789C (-vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z.c)
 *     ?QueryTrueTypeOutline@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLYGONHEADER@@@Z @ 0x1C01453BC (-QueryTrueTypeOutline@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLYG.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C014AFE0 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?bIsPerFontEUDC@PFFOBJ@@QEBAHXZ @ 0x1C015B54C (-bIsPerFontEUDC@PFFOBJ@@QEBAHXZ.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall GreGetGlyphOutlineInternal(
        HDC a1,
        unsigned __int16 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        struct tagTTPOLYGONHEADER *a6,
        struct _MAT2 *a7,
        int a8)
{
  int v10; // r15d
  unsigned int v11; // r12d
  __int64 v12; // r13
  int v13; // r14d
  __int64 v14; // rsi
  unsigned int v15; // edi
  __int64 v16; // rax
  __int64 *v17; // r13
  __int64 v18; // rsi
  __int64 v19; // rcx
  unsigned int v20; // r14d
  __int64 v21; // rdx
  unsigned int v22; // r12d
  __int64 v23; // rbx
  __int64 v24; // r13
  __int64 v25; // rbx
  __int64 v26; // rax
  struct RFONTOBJ *v27; // r8
  struct _GLYPHDATA *EudcMetrics; // rax
  __int64 v29; // rbx
  unsigned int v30; // r13d
  __int64 v31; // r12
  __int64 v32; // rbx
  __int64 v33; // rbx
  RFONTOBJ *v34; // rcx
  __int64 v35; // r9
  struct RFONTOBJ *v36; // r8
  struct _GLYPHDATA *v37; // rax
  __int64 v38; // rbx
  struct RFONTOBJ *v39; // r8
  unsigned int v40; // r12d
  struct _GLYPHDATA *v41; // rax
  __int64 v42; // rbx
  SIZE sizLogResPpi; // rax
  struct DHPDEV__ *v44; // rdx
  unsigned int v45; // edi
  unsigned int v46; // edi
  unsigned int v47; // edi
  int v48; // eax
  int v49; // ecx
  unsigned int v50; // eax
  LONG top; // ecx
  int v52; // eax
  int v53; // eax
  unsigned __int16 v55; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v56; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v57; // [rsp+50h] [rbp-B0h] BYREF
  struct _FONTOBJ *v58; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v59; // [rsp+60h] [rbp-A0h]
  unsigned int v60; // [rsp+64h] [rbp-9Ch]
  unsigned int v61; // [rsp+68h] [rbp-98h]
  __int64 v62; // [rsp+70h] [rbp-90h] BYREF
  __int64 v63; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v64[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v65; // [rsp+90h] [rbp-70h] BYREF
  __int64 v66; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v67; // [rsp+A0h] [rbp-60h]
  int v68; // [rsp+A4h] [rbp-5Ch]
  __int64 v69; // [rsp+A8h] [rbp-58h] BYREF
  RFONTOBJ *v70; // [rsp+B0h] [rbp-50h]
  _QWORD v71[2]; // [rsp+B8h] [rbp-48h] BYREF
  struct _MAT2 *v72; // [rsp+C8h] [rbp-38h]
  struct tagTTPOLYGONHEADER *v73; // [rsp+D0h] [rbp-30h]
  __int64 v74[3]; // [rsp+D8h] [rbp-28h] BYREF
  _GLYPHDATA v75; // [rsp+F0h] [rbp-10h] BYREF

  v73 = a6;
  v10 = a2;
  v11 = 0;
  v69 = a4;
  v12 = a4;
  v72 = a7;
  memset(&v75, 0, sizeof(v75));
  v60 = 0;
  v61 = -1;
  v68 = a3 & 0x100;
  v13 = a3 & 0x80;
  v14 = 0LL;
  v15 = a3 & 0xFFFFFE7F;
  v67 = v13 != 0 ? 4 : 2;
  DCOBJ::DCOBJ((DCOBJ *)v71, a1);
  if ( !v12 || !v72 )
  {
    EngSetLastError(0x57u);
    goto LABEL_52;
  }
  if ( !v71[0] )
  {
    EngSetLastError(6u);
    goto LABEL_83;
  }
  v57 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v57, (struct XDCOBJ *)v71, 0, 2u) )
    GreAcquireSemaphore(*(_QWORD *)(v57 + 504));
  v16 = v57;
  v17 = &v57;
  v66 = 0LL;
  v65 = 0LL;
  v63 = 0LL;
  v64[0] = &v57;
  if ( !v57 )
    goto LABEL_48;
  if ( v13 )
  {
    v11 = v10;
    LODWORD(v58) = v10;
  }
  else
  {
    v55 = v10;
    v56 = 0;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v57, &v55, 1, &v56, 0, 0);
    v11 = v56;
    v16 = v57;
    LODWORD(v58) = v56;
  }
  if ( v11 != *(_DWORD *)(v16 + 460) )
    goto LABEL_48;
  if ( v13 )
    goto LABEL_48;
  if ( !(unsigned int)RFONTOBJ::bIsLinkedGlyph((RFONTOBJ *)&v57, v10) )
    goto LABEL_48;
  v18 = v57;
  v19 = *(_QWORD *)(v57 + 848);
  if ( !v19 )
    goto LABEL_48;
  GreAcquireSemaphore(v19);
  v20 = -1;
  GreAcquireSemaphore(ghsemEUDC1);
  ++gcEUDCCount;
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  RFONTOBJ::vInitEUDC((RFONTOBJ *)&v57, (struct XDCOBJ *)v71);
  RFONTOBJ::vLockEUDCFontsGlyphCache((RFONTOBJ *)&v57, 0);
  v21 = *(_QWORD *)(v18 + 848);
  *(_DWORD *)(v18 + 712) |= 1u;
  EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", v21);
  GreReleaseSemaphoreInternal(*(_QWORD *)(v18 + 848));
  v22 = *(_DWORD *)(v18 + 840);
  v59 = v22;
  if ( v22 )
  {
    v23 = *(_QWORD *)(v18 + 744);
    v24 = v22 - 1;
    v55 = v10;
    v56 = 0;
    v25 = *(_QWORD *)(v23 + 8 * v24);
    v63 = v25;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v63, &v55, 1, &v56, 0, 0);
    if ( v56 != *(_DWORD *)(v25 + 460) )
    {
      v26 = *(_QWORD *)(*(_QWORD *)(v18 + 744) + 8 * v24);
      v62 = v26;
      if ( v26
        && (v74[0] = *(_QWORD *)(v26 + 128), (unsigned int)PFFOBJ::bIsPerFontEUDC((PFFOBJ *)v74))
        && (v59 = v22 - 1, --v22, (EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v62, v10, v27)) != 0LL)
        && EudcMetrics->fxD )
      {
        v20 = v56;
        v17 = &v63;
        v64[0] = &v63;
      }
      else
      {
        v17 = &v57;
      }
      v62 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v62);
      if ( v20 != -1 )
        goto LABEL_44;
    }
  }
  v29 = *(_QWORD *)(v18 + 728);
  if ( v29 )
  {
    v56 = 0;
    v66 = v29;
    v55 = v10;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v66, &v55, 1, &v56, 0, 0);
    if ( v56 != *(_DWORD *)(v29 + 460) )
    {
      v17 = &v66;
      v20 = v56;
      v64[0] = &v66;
      if ( v56 != -1 )
        goto LABEL_44;
    }
  }
  v30 = 0;
  if ( !v22 )
  {
LABEL_36:
    v17 = (__int64 *)v64[0];
    goto LABEL_37;
  }
  v55 = v10;
  v31 = 0LL;
  while ( 1 )
  {
    v32 = *(_QWORD *)(v18 + 744);
    v56 = 0;
    v33 = *(_QWORD *)(v31 + v32);
    v63 = v33;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v63, &v55, 1, &v56, 0, 0);
    if ( v56 != *(_DWORD *)(v33 + 460) )
      break;
LABEL_35:
    ++v30;
    v31 += 8LL;
    if ( v30 >= v59 )
      goto LABEL_36;
  }
  v35 = *(_QWORD *)(v31 + *(_QWORD *)(v18 + 744));
  v62 = v35;
  if ( !v35
    || RFONTOBJ::bSkipCHSFontSegUISymFallback(v34, v10, *(struct PFF **)(v18 + 128), *(struct PFF **)(v35 + 128))
    || (v37 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v62, v10, v36)) == 0LL
    || !v37->fxD )
  {
    v62 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v62);
    goto LABEL_35;
  }
  v20 = v56;
  v62 = 0LL;
  v17 = &v63;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v62);
  if ( v20 != -1 )
    goto LABEL_44;
LABEL_37:
  v38 = *(_QWORD *)(v18 + 736);
  if ( !v38 )
    goto LABEL_47;
  v56 = 0;
  v65 = v38;
  v55 = v10;
  RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v65, &v55, 1, &v56, 0, 0);
  v40 = v56;
  if ( v56 == *(_DWORD *)(v38 + 460) )
    goto LABEL_47;
  v64[0] = *(_QWORD *)(v18 + 736);
  if ( v64[0] )
  {
    v41 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)v64, v10, v39);
    if ( v41 )
    {
      if ( v41->fxD )
      {
        v20 = v40;
        v17 = &v65;
      }
    }
  }
  v64[0] = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v64);
  if ( v20 == -1 )
  {
LABEL_47:
    RFONTOBJ::dtorHelper((RFONTOBJ *)&v57);
    *(_DWORD *)(v18 + 712) = 0;
    v11 = (unsigned int)v58;
  }
  else
  {
LABEL_44:
    v11 = v20;
  }
LABEL_48:
  v42 = *v17;
  if ( !*v17 )
    EngSetLastError(0x3EBu);
  v63 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v63);
  v65 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v65);
  v66 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v66);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v57);
  v12 = v69;
  v14 = v42 & -(__int64)(v42 != 0);
LABEL_52:
  if ( v14 )
  {
    v58 = (struct _FONTOBJ *)v14;
    GreAcquireSemaphore(*(_QWORD *)(v14 + 504));
    v64[0] = *(_QWORD *)(v14 + 128);
    sizLogResPpi = v58[1].sizLogResPpi;
    if ( *(_QWORD *)&sizLogResPpi
      && *(_QWORD *)(*(_QWORD *)&sizLogResPpi + 3080LL)
      && (RESETFCOBJ::RESETFCOBJ((RESETFCOBJ *)&v69, (struct DCOBJ *)v71, (struct RFONTOBJ *)&v58, v72, a8, v67),
          (_DWORD)v69) )
    {
      if ( !v15 )
      {
        v50 = PFFOBJ::QueryFontData((PFFOBJ *)v64, 0LL, v58, 4u, v11, &v75, 0LL, 0);
        goto LABEL_76;
      }
      if ( v15 == 1 )
        goto LABEL_61;
      if ( v15 <= 3 )
      {
        v48 = 2;
        if ( v15 != 3 )
          v48 = 0;
        v49 = v48 | 4;
        if ( !v68 )
          v49 = v48;
        v50 = PFFOBJ::QueryTrueTypeOutline((PFFOBJ *)v64, v44, v58, v11, v49, &v75, a5, v73);
LABEL_76:
        v61 = v50;
        if ( v50 != -1 )
        {
          top = v75.rclInk.top;
          v52 = v75.rclInk.right - v75.rclInk.left;
          *(_DWORD *)(v12 + 8) = v75.rclInk.left;
          *(_DWORD *)v12 = v52;
          *(_DWORD *)(v12 + 4) = v75.rclInk.bottom - top;
          v53 = (v75.ptqD.x.HighPart >> 3) + 1;
          *(_DWORD *)(v12 + 12) = -top;
          *(_WORD *)(v12 + 16) = v53 >> 1;
          *(_WORD *)(v12 + 18) = ((v75.ptqD.y.HighPart >> 3) + 1) >> 1;
        }
      }
      else if ( v15 <= 6 )
      {
LABEL_61:
        v45 = v15 - 1;
        if ( v45 )
        {
          v46 = v45 - 3;
          if ( v46 )
          {
            v47 = v46 - 1;
            if ( v47 )
            {
              if ( v47 == 1 )
                v60 = 9;
            }
            else
            {
              v60 = 8;
            }
          }
          else
          {
            v60 = 6;
          }
        }
        else
        {
          v60 = 5;
        }
        v50 = PFFOBJ::QueryFontData((PFFOBJ *)v64, 0LL, v58, v60, v11, &v75, v73, a5);
        goto LABEL_76;
      }
      if ( !HIDWORD(v69) )
      {
        RFONTOBJ::vReleaseCache(v70);
        RFONTOBJ::vMakeInactive(v70);
      }
    }
    else
    {
      EngSetLastError(0x3EBu);
    }
    if ( v58 )
      RFONTOBJ::vReleaseCache((RFONTOBJ *)&v58);
    v58 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v58);
  }
LABEL_83:
  if ( v71[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v71);
  return v61;
}
