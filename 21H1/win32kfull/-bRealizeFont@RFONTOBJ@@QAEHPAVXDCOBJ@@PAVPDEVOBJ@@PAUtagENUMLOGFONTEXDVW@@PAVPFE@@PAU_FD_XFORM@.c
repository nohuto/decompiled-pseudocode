/*
 * XREFs of ?bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@@QAU_POINTL@@KKHHK@Z @ 0x84984
 * Callers:
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     ?vInit@RFONTOBJ@@QAEXAAVXDCOBJ@@PAVPFE@@PAU_EUDCLOGFONT@@H@Z @ 0x207D5B (-vInit@RFONTOBJ@@QAEXAAVXDCOBJ@@PAVPFE@@PAU_EUDCLOGFONT@@H@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QAEHAAVXDCOBJ@@AAU_FD_XFORM@@K@Z @ 0x209520 (-bSetNewFDX@RFONTOBJ@@QAEHAAVXDCOBJ@@AAU_FD_XFORM@@K@Z.c)
 * Callees:
 *     ?vFreepfdg@PFEOBJ@@QAEXXZ @ 0x8404C (-vFreepfdg@PFEOBJ@@QAEXXZ.c)
 *     _UmfdQueryFontCapsEx@12 @ 0x84678 (_UmfdQueryFontCapsEx@12.c)
 *     ?prfntActive@PDEVOBJ@@QAEPAVRFONT@@PAV2@@Z @ 0x846A8 (-prfntActive@PDEVOBJ@@QAEPAVRFONT@@PAV2@@Z.c)
 *     ?bInitCache@RFONTOBJ@@QAEHK@Z @ 0x846D4 (-bInitCache@RFONTOBJ@@QAEHK@Z.c)
 *     ?flFontType@PFEOBJ@@QAEKXZ @ 0x8487E (-flFontType@PFEOBJ@@QAEKXZ.c)
 *     ?vSetNotionalToDevice@RFONTOBJ@@QAEXAAVEXFORMOBJ@@@Z @ 0x848CE (-vSetNotionalToDevice@RFONTOBJ@@QAEXAAVEXFORMOBJ@@@Z.c)
 *     ?vInsert@RFONTOBJ@@QAEXPAPAVRFONT@@W4_RFL_TYPE@@@Z @ 0x851B6 (-vInsert@RFONTOBJ@@QAEXPAPAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?bGetDEVICEMETRICS@RFONTOBJ@@QAEHPAU_FD_DEVICEMETRICS@@@Z @ 0x8521A (-bGetDEVICEMETRICS@RFONTOBJ@@QAEHPAU_FD_DEVICEMETRICS@@@Z.c)
 *     ?pfdg@PFEOBJ@@QAEPAU_FD_GLYPHSET@@XZ @ 0x857A0 (-pfdg@PFEOBJ@@QAEPAU_FD_GLYPHSET@@XZ.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QAEXPBGIPAKKH@Z @ 0x877DE (-vXlatGlyphArray@RFONTOBJ@@QAEXPBGIPAKKH@Z.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QAEKXZ @ 0x893B2 (-ulLogPixelsY@PDEVOBJ@@QAEKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QAEKXZ @ 0x899BE (-ulLogPixelsX@PDEVOBJ@@QAEKXZ.c)
 *     ?bGetNtoWScales@@YGHPAVEPOINTFL@@AAVXDCOBJ@@PAU_FD_XFORM@@AAVPFEOBJ@@PAH@Z @ 0x8A5F8 (-bGetNtoWScales@@YGHPAVEPOINTFL@@AAVXDCOBJ@@PAU_FD_XFORM@@AAVPFEOBJ@@PAH@Z.c)
 *     ?bCalcLayoutUnits@RFONTOBJ@@QAEHPAVXDCOBJ@@@Z @ 0x8A7A8 (-bCalcLayoutUnits@RFONTOBJ@@QAEHPAVXDCOBJ@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0DFAAA@$0DEI@@NSInstrumentation@@IAEPAXXZ @ 0xA8E6E (-Allocate@-$CTypeIsolation@$0DFAAA@$0DEI@@NSInstrumentation@@IAEPAXXZ.c)
 *     ?ulSimpleDeviceOrientation@@YGKAAVRFONTOBJ@@@Z @ 0xCC924 (-ulSimpleDeviceOrientation@@YGKAAVRFONTOBJ@@@Z.c)
 *     _FLOATOBJ_MulLong@8 @ 0xCC9C8 (_FLOATOBJ_MulLong@8.c)
 *     ?vDestroyFont@RFONTOBJ@@QAEXH@Z @ 0xD08C4 (-vDestroyFont@RFONTOBJ@@QAEXH@Z.c)
 *     ?Free@?$CTypeIsolation@$0DFAAA@$0DEI@@NSInstrumentation@@IAEXPAX@Z @ 0xD1070 (-Free@-$CTypeIsolation@$0DFAAA@$0DEI@@NSInstrumentation@@IAEXPAX@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _lCvt@12 @ 0xEE304 (_lCvt@12.c)
 *     _ftoef_c@8 @ 0xEEEB1 (_ftoef_c@8.c)
 *     _eftol_c@12 @ 0xEEF16 (_eftol_c@12.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?ulSimpleOrientation@RFONTOBJ@@QAEKPAVXDCOBJ@@@Z @ 0x2099B6 (-ulSimpleOrientation@RFONTOBJ@@QAEKPAVXDCOBJ@@@Z.c)
 */

int __thiscall RFONTOBJ::bRealizeFont(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        struct PDEVOBJ *a3,
        struct tagENUMLOGFONTEXDVW *a4,
        struct PFE *a5,
        struct _FD_XFORM *a6,
        struct _POINTL *const a7,
        unsigned int a8,
        unsigned int a9,
        int a10,
        int a11,
        unsigned int a12)
{
  struct _FD_GLYPHSET *v13; // ecx
  int result; // eax
  int v15; // esi
  int v16; // eax
  int v17; // esi
  int *v18; // edx
  FLOATL *v19; // edi
  FLOATL *v20; // edi
  FLOATL *v21; // edi
  int *v22; // esi
  PDEVOBJ *v23; // ecx
  int v24; // edi
  int v25; // eax
  struct XDCOBJ *v26; // edi
  ULONG cjThis; // eax
  int v28; // eax
  unsigned int v29; // eax
  int v30; // eax
  int v31; // edi
  int v32; // esi
  int FontCaps; // eax
  int v34; // eax
  int v35; // edi
  int v36; // eax
  unsigned int v37; // edi
  unsigned int v38; // ecx
  int v39; // edx
  int v40; // esi
  bool v41; // zf
  _DWORD *v42; // edx
  int v43; // ecx
  int v44; // eax
  int inited; // eax
  int v46; // ecx
  unsigned int v47; // ecx
  PDEVOBJ *v48; // edi
  int v49; // eax
  int v50; // edi
  int v51; // eax
  unsigned int v52; // eax
  BOOL v53; // edx
  int v54; // eax
  char v55; // dl
  int v56; // eax
  int v57; // esi
  _BYTE *v58; // ecx
  unsigned __int8 *v59; // ecx
  const wchar_t *v60; // esi
  int (__stdcall *v61)(int, PDEVOBJ **); // eax
  unsigned int v62; // eax
  unsigned int v63; // edi
  unsigned int v64; // edx
  int v65; // [esp-8h] [ebp-10Ch]
  _DWORD (__stdcall *v66)(_DWORD); // [esp-4h] [ebp-108h]
  struct PFEOBJ *v67; // [esp+0h] [ebp-104h]
  struct RFONTOBJ *v68; // [esp+0h] [ebp-104h]
  int *v69; // [esp+4h] [ebp-100h]
  PDEVOBJ *v70[2]; // [esp+10h] [ebp-F4h] BYREF
  PDEVOBJ *v71; // [esp+18h] [ebp-ECh]
  int v72; // [esp+1Ch] [ebp-E8h] BYREF
  int v73; // [esp+20h] [ebp-E4h]
  int v74; // [esp+24h] [ebp-E0h]
  int v75; // [esp+28h] [ebp-DCh]
  struct XDCOBJ *v76; // [esp+2Ch] [ebp-D8h]
  unsigned int v77; // [esp+30h] [ebp-D4h] BYREF
  unsigned __int16 v78[2]; // [esp+34h] [ebp-D0h] BYREF
  int v79; // [esp+38h] [ebp-CCh]
  struct _FD_GLYPHSET *v80; // [esp+3Ch] [ebp-C8h] BYREF
  int *v81; // [esp+40h] [ebp-C4h] BYREF
  struct RFONT *v82; // [esp+44h] [ebp-C0h] BYREF
  _FD_DEVICEMETRICS v83; // [esp+48h] [ebp-BCh] BYREF
  struct tagFLOATOBJ_XFORM v84; // [esp+CCh] [ebp-38h] BYREF

  v76 = a2;
  v82 = (struct RFONT *)a4;
  v71 = a3;
  v81 = (int *)a5;
  v13 = PFEOBJ::pfdg((PFEOBJ *)&v81);
  result = 0;
  v80 = v13;
  if ( !v13 )
    goto LABEL_68;
  if ( gpTypeIsolation[5] )
    result = NSInstrumentation::CTypeIsolation<217088,840>::Allocate();
  *(_DWORD *)this = result;
  if ( !result )
  {
    PFEOBJ::vFreepfdg(&v81);
LABEL_67:
    result = 0;
LABEL_68:
    *(_DWORD *)this = 0;
    return result;
  }
  v79 = *v81;
  *(_DWORD *)(result + 24) = PDEVOBJ::ulLogPixelsX(a3);
  v15 = *(_DWORD *)this;
  *(_DWORD *)(v15 + 28) = PDEVOBJ::ulLogPixelsY(a3);
  *(_DWORD *)(*(_DWORD *)this + 32) = a9;
  v16 = PFEOBJ::flFontType((PFEOBJ *)&v81);
  v17 = 0;
  v18 = v81;
  *(_DWORD *)(*(_DWORD *)this + 12) = a8 | v16;
  *(_DWORD *)(*(_DWORD *)this + 36) = 0;
  *(_DWORD *)(*(_DWORD *)this + 40) = 0;
  *(_DWORD *)(*(_DWORD *)this + 4) = v18[1];
  *(_DWORD *)(*(_DWORD *)this + 20) = *(_DWORD *)(v79 + 56);
  if ( (*(_BYTE *)(*(_DWORD *)this + 12) & 4) != 0 )
    v17 = v18[12];
  *(_DWORD *)(*(_DWORD *)this + 16) = v17;
  v19 = (FLOATL *)(*(_DWORD *)this + 88);
  *v19++ = a6->eXX;
  *v19++ = a6->eXY;
  *v19 = a6->eYX;
  v19[1] = a6->eYY;
  v20 = (FLOATL *)(*(_DWORD *)this + 104);
  *v20++ = a6->eXX;
  *v20++ = a6->eXY;
  *v20 = a6->eYX;
  v20[1] = a6->eYY;
  v21 = (FLOATL *)(*(_DWORD *)this + 364);
  *v21++ = a6->eXX;
  *v21++ = a6->eXY;
  *v21 = a6->eYX;
  v21[1] = a6->eYY;
  *(struct _POINTL *)(*(_DWORD *)this + 648) = *a7;
  *(_DWORD *)(*(_DWORD *)this + 208) = *(_DWORD *)this + 220;
  RFONTOBJ::vSetNotionalToDevice(this, (struct EXFORMOBJ *)(*(_DWORD *)this + 208));
  v22 = v81;
  *(_DWORD *)(*(_DWORD *)this + 80) = v81;
  *(_DWORD *)(*(_DWORD *)this + 84) = *v22;
  *(_DWORD *)(*(_DWORD *)this + 716) = 0;
  *(_DWORD *)(*(_DWORD *)this + 720) = 0;
  *(_DWORD *)(*(_DWORD *)this + 724) = 0;
  *(_DWORD *)(*(_DWORD *)this + 728) = 0;
  *(_DWORD *)(*(_DWORD *)this + 772) = 0;
  *(_DWORD *)(*(_DWORD *)this + 708) = 0;
  *(_DWORD *)(*(_DWORD *)this + 780) = 0;
  *(_DWORD *)(*(_DWORD *)this + 776) = 0;
  *(_DWORD *)(*(_DWORD *)this + 784) = v22[2] & 0x100;
  v23 = v71;
  v24 = *(_DWORD *)this;
  if ( v71 )
  {
    *(_DWORD *)(v24 + 72) = *(_DWORD *)v71;
    *(_DWORD *)(*(_DWORD *)this + 76) = *(_DWORD *)(*(_DWORD *)v23 + 1108);
  }
  else
  {
    *(_DWORD *)(v24 + 72) = 0;
    *(_DWORD *)(*(_DWORD *)this + 76) = 0;
  }
  v25 = *(_DWORD *)this;
  v77 = 0;
  *(_DWORD *)(v25 + 120) = 1;
  *(_DWORD *)(*(_DWORD *)this + 712) = *(_DWORD *)(v22[5] + 48);
  *(_DWORD *)(*(_DWORD *)this + 532) = v80;
  v80 = (struct _FD_GLYPHSET *)v22[5];
  *(_DWORD *)v78 = LOWORD(v80[4].awcrun[0].phg);
  RFONTOBJ::vXlatGlyphArray(this, v78, 1u, &v77, 2u, 0);
  *(_DWORD *)(*(_DWORD *)this + 520) = v77;
  *(_DWORD *)(*(_DWORD *)this + 708) &= ~0x40u;
  memset(&v83, 0, sizeof(v83));
  *(_DWORD *)(*(_DWORD *)this + 68) = *(_DWORD *)(v79 + 60);
  if ( !RFONTOBJ::bGetDEVICEMETRICS(this, &v83) )
    goto LABEL_64;
  if ( !v76 )
    goto LABEL_19;
  ftoef_c(v83.pteBase.x, *(_DWORD *)this + 400);
  ftoef_c(v83.pteBase.y, *(_DWORD *)this + 408);
  ftoef_c(v83.pteSide.x, *(_DWORD *)this + 436);
  ftoef_c(v83.pteSide.y, *(_DWORD *)this + 444);
  qmemcpy((void *)(*(_DWORD *)this + 124), (const void *)(*(_DWORD *)v76 + 240), 0x3Cu);
  v26 = v76;
  if ( !RFONTOBJ::bCalcLayoutUnits(this, v76)
    || !bGetNtoWScales(
          (struct EPOINTFL *)(*(_DWORD *)this + 364),
          (struct XDCOBJ *)&v81,
          (struct _FD_XFORM *)(*(_DWORD *)this + 204),
          v67,
          v69) )
  {
LABEL_64:
    v66 = Win32FreePool;
    v65 = *(_DWORD *)this;
    goto LABEL_65;
  }
  *(_DWORD *)(*(_DWORD *)this + 332) = lCvt(
                                         *(_DWORD *)(*(_DWORD *)this + 436),
                                         *(_DWORD *)(*(_DWORD *)this + 440),
                                         *(_DWORD *)(*(_DWORD *)this + 320));
  *(_DWORD *)(*(_DWORD *)this + 336) = lCvt(
                                         *(_DWORD *)(*(_DWORD *)this + 444),
                                         *(_DWORD *)(*(_DWORD *)this + 448),
                                         *(_DWORD *)(*(_DWORD *)this + 320));
  *(_DWORD *)(*(_DWORD *)this + 340) = lCvt(
                                         *(_DWORD *)(*(_DWORD *)this + 436),
                                         *(_DWORD *)(*(_DWORD *)this + 440),
                                         *(_DWORD *)(*(_DWORD *)this + 324));
  *(_DWORD *)(*(_DWORD *)this + 344) = lCvt(
                                         *(_DWORD *)(*(_DWORD *)this + 444),
                                         *(_DWORD *)(*(_DWORD *)this + 448),
                                         *(_DWORD *)(*(_DWORD *)this + 324));
  *(_DWORD *)(*(_DWORD *)this + 468) = -1;
  if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v26 + 1020) + 228) == 1 )
  {
    cjThis = v80[2].cjThis;
    if ( (cjThis & 4) == 0 )
    {
      if ( (cjThis & 0x10) == 0 )
      {
        v29 = ulSimpleDeviceOrientation(v68);
        goto LABEL_18;
      }
      v28 = 3600 - *((_DWORD *)v82 + 2);
LABEL_17:
      v29 = lNormAngle(v28);
LABEL_18:
      *(_DWORD *)(*(_DWORD *)this + 396) = v29;
      goto LABEL_19;
    }
LABEL_89:
    v28 = 3600 - *((_DWORD *)v82 + 3);
    goto LABEL_17;
  }
  *(_DWORD *)(*(_DWORD *)this + 396) = RFONTOBJ::ulSimpleOrientation(this, v26);
  if ( *(_DWORD *)(*(_DWORD *)this + 396) >= 0xE10u && (*(_BYTE *)(*(_DWORD *)this + 712) & 0x10) != 0 )
    goto LABEL_89;
LABEL_19:
  v30 = *(_DWORD *)this;
  v31 = a10;
  v82 = 0;
  *(_DWORD *)(v30 + 656) = a10;
  v32 = *(_DWORD *)(*(_DWORD *)this + 68);
  if ( v32 == dword_2785B8 )
  {
    FontCaps = UmfdQueryFontCapsEx(*(_DWORD **)(*(_DWORD *)this + 20), v70);
  }
  else
  {
    v61 = *(int (__stdcall **)(int, PDEVOBJ **))(v32 + 2076);
    if ( !v61 )
      goto LABEL_23;
    FontCaps = v61(2, v70);
  }
  if ( FontCaps != -1 )
    v82 = v70[1];
LABEL_23:
  v34 = *(_DWORD *)this;
  if ( (*(_DWORD *)(v32 + 24) & 0x2000) == 0 )
  {
    *(_DWORD *)(v34 + 64) = 1;
    *(_DWORD *)(*(_DWORD *)this + 60) = 0;
    goto LABEL_36;
  }
  v35 = -((*(_DWORD *)(v34 + 12) & 0x10010000) != 0);
  *(_DWORD *)(v34 + 64) = 0;
  v36 = *(_DWORD *)this;
  v37 = (v35 & 0xFFFFFE70) + 800;
  *(_DWORD *)v78 = v37;
  v38 = v37;
  *(_DWORD *)(v36 + 60) = 1;
  v39 = *(_DWORD *)this;
  if ( a10 )
  {
    *(_DWORD *)(v39 + 60) = 2;
  }
  else
  {
    v40 = *(_DWORD *)(v39 + 72);
    if ( v40 )
    {
      v41 = (*(_DWORD *)(v40 + 24) & 0x8000) == 0;
      v77 = *(_DWORD *)(v39 + 72);
      if ( !v41 )
      {
        if ( KeAreApcsDisabled() )
        {
LABEL_29:
          v38 = v37;
          if ( (*(_DWORD *)(v40 + 1120) & 0x40000000) != 0 )
          {
            v62 = 3 * PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v77);
            v38 = v37;
            if ( v62 > 0x320 )
              v38 = v62;
            if ( v38 > 0x960 )
              v38 = 2400;
          }
          goto LABEL_30;
        }
        v39 = *(_DWORD *)this;
      }
      if ( *(_DWORD *)(v40 + 2048) )
      {
        v72 = 0;
        v73 = 0;
        v74 = 0;
        v75 = 0;
        PushThreadGuardedObject(&v72, v39, vRestartbRealizeFont);
        *(_DWORD *)(*(_DWORD *)this + 60) = (*(int (__stdcall **)(_DWORD, _DWORD))(v40 + 2048))(
                                              *(_DWORD *)(*(_DWORD *)this + 76),
                                              *(_DWORD *)this);
        PopThreadGuardedObject(&v72);
        v37 = *(_DWORD *)v78;
      }
      goto LABEL_29;
    }
  }
LABEL_30:
  v42 = *(_DWORD **)this;
  if ( *(_DWORD *)(*(_DWORD *)this + 60) == 1 )
  {
    if ( ((unsigned __int8)v82 & 2) == 0 || (v42[178] & 0x8000) != 0 && (v42[87] > 2 * v38 || v42[88] > v38) )
      v42[15] = 2;
    goto LABEL_35;
  }
  if ( *(_DWORD *)(*(_DWORD *)this + 60) != 2 )
  {
LABEL_35:
    v31 = a10;
    goto LABEL_36;
  }
  v31 = a10;
  if ( ((unsigned __int8)v82 & 1) == 0 )
    v42[15] = 1;
LABEL_36:
  if ( *(_DWORD *)(*(_DWORD *)this + 60) == 2 )
    *(_DWORD *)(*(_DWORD *)this + 12) &= 0x8FFEFFFF;
  if ( v31 && (v46 = *(_DWORD *)this, *(_DWORD *)(*(_DWORD *)this + 60) != 2)
    || ((v43 = *(_DWORD *)this, !a11) || *(_DWORD *)(v43 + 396) ? (v44 = 0) : (v44 = 1),
        *(_DWORD *)(v43 + 640) = v44,
        inited = RFONTOBJ::bInitCache(this, a12),
        v46 = *(_DWORD *)this,
        !inited) )
  {
    v66 = Win32FreePool;
    v65 = v46;
LABEL_65:
    v72 = 0;
    v73 = 0;
    v74 = 0;
    v75 = 0;
    PushThreadGuardedObject(&v72, v65, v66);
    RFONTOBJ::vDestroyFont(this, 1);
    PopThreadGuardedObject(&v72);
    if ( gpTypeIsolation[5] )
      NSInstrumentation::CTypeIsolation<217088,840>::Free(*(_DWORD *)this);
    goto LABEL_67;
  }
  *(_DWORD *)(v46 + 688) = 0;
  *(_DWORD *)v78 = _ghsemRFONTList;
  GreAcquireSemaphore(_ghsemRFONTList);
  v41 = iUniqueStamp == -1;
  v47 = ++iUniqueStamp;
  if ( v41 )
  {
    v47 = 1;
    iUniqueStamp = 1;
  }
  v48 = v71;
  **(_DWORD **)this = v47;
  if ( v48 )
  {
    *(_DWORD *)(*(_DWORD *)this + 660) = 1;
    v49 = *(_DWORD *)v48;
    if ( (*(_DWORD *)(*(_DWORD *)v48 + 24) & 0x800000) != 0 )
      v49 = *(_DWORD *)(v49 + 2316);
    v82 = *(struct RFONT **)(v49 + 940);
    RFONTOBJ::vInsert(this, &v82, 1);
    PDEVOBJ::prfntActive(v48, v82);
  }
  v50 = v79;
  v82 = *(struct RFONT **)(v79 + 52);
  RFONTOBJ::vInsert(this, &v82, 0);
  *(_DWORD *)(v50 + 52) = v82;
  SEMOBJ::vUnlock((SEMOBJ *)v78);
  v51 = *(_DWORD *)(*(_DWORD *)this + 12);
  if ( *(_DWORD *)(*(_DWORD *)this + 60) == 1 )
    v52 = v51 | 1;
  else
    v52 = v51 & 0xFFFFFFFE;
  *(_DWORD *)(*(_DWORD *)this + 12) = v52;
  if ( v76 )
    *(_DWORD *)(*(_DWORD *)this + 184) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v76 + 1020) + 228);
  else
    *(_DWORD *)(*(_DWORD *)this + 184) = 0;
  v53 = gbSystemDBCSFontEnabled && (v81[2] & 0x10) != 0;
  *(_DWORD *)(*(_DWORD *)this + 704) = v53;
  v54 = *(_DWORD *)this;
  if ( (*(_DWORD *)(*(_DWORD *)this + 12) & 0x10000000) != 0 )
  {
    if ( (*(_BYTE *)(v54 + 180) & 1) == 0 || (v55 = 1, *(_DWORD *)(v54 + 332)) )
      v55 = 0;
    v56 = *(_DWORD *)(*(_DWORD *)(v54 + 80) + 20);
    if ( (*(_DWORD *)(v56 + 48) & 0x401000) != 0 && v55 && *(_WORD *)(v56 + 46) <= 0x190u )
    {
      v60 = (const wchar_t *)(v56 + *(_DWORD *)(v56 + 8));
      if ( !__wcsicmp(v60, L"Courier New")
        || !__wcsicmp(v60, L"Rod")
        || !__wcsicmp(v60, L"Rod Transparent")
        || !__wcsicmp(v60, L"Fixed Miriam Transparent")
        || !__wcsicmp(v60, L"Miriam Fixed")
        || !__wcsicmp(v60, L"Simplified Arabic Fixed") )
      {
        *(_DWORD *)(*(_DWORD *)this + 44) = 1;
      }
      v50 = v79;
    }
    v57 = *(_DWORD *)this;
    if ( (*(_DWORD *)(*(_DWORD *)this + 12) & 0x20000000) != 0 )
    {
      memset(&v84, 0, sizeof(v84));
      EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)(v57 + 208), &v84);
      FLOATOBJ_MulLong(&v84.eM22, SLOWORD(v80[2].cGlyphsSupported));
      v80 = 0;
      eftol_c(&v84.eM22, &v80, 0);
      v58 = *(_BYTE **)(v50 + 116);
      if ( v58 && (v63 = (unsigned __int8)*v58, v64 = 0, *v58) )
      {
        v59 = v58 + 4;
        while ( (struct _FD_GLYPHSET *)*v59 != v80 )
        {
          ++v64;
          v59 += 80;
          if ( v64 >= v63 )
            goto LABEL_62;
        }
      }
      else
      {
LABEL_62:
        v59 = 0;
      }
      *(_DWORD *)(*(_DWORD *)this + 48) = v59;
    }
  }
  return 1;
}
