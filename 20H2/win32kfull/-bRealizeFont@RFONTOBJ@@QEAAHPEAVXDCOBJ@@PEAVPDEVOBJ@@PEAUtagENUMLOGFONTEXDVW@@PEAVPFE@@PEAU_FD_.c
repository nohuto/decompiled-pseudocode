/*
 * XREFs of ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0062FD8
 * Callers:
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C0025A70 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00A9250 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C02A757C (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002120C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C005D5F4 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C005D630 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C0060F30 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z @ 0x1C0062AD8 (-bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z.c)
 *     ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1C0062D9C (-bInitCache@RFONTOBJ@@QEAAHK@Z.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C006395C (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C00639CC (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00639F4 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     UmfdQueryFontCapsEx @ 0x1C0063A14 (UmfdQueryFontCapsEx.c)
 *     ?bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z @ 0x1C0063A54 (-bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z.c)
 *     ?bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C0063D48 (-bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 *     ?vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C0063F8C (-vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C006405C (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     ??$AllocateIsolatedType@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C00640B4 (--$AllocateIsolatedType@V-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAPEAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C00640E0 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C0064200 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C00645EC (--$FreeIsolatedType@V-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?ulSimpleOrientation@RFONTOBJ@@QEAAKPEAVXDCOBJ@@@Z @ 0x1C0066878 (-ulSimpleOrientation@RFONTOBJ@@QEAAKPEAVXDCOBJ@@@Z.c)
 *     bFToL @ 0x1C00F05F8 (bFToL.c)
 *     ?ulSimpleDeviceOrientation@@YAKAEAVRFONTOBJ@@@Z @ 0x1C0124360 (-ulSimpleDeviceOrientation@@YAKAEAVRFONTOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C02A7C84 (-vDestroyFont@RFONTOBJ@@QEAAXH@Z.c)
 */

__int64 __fastcall RFONTOBJ::bRealizeFont(
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
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rbx
  unsigned int v19; // eax
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  struct RFONT *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  unsigned int v39; // eax
  char v40; // r15
  int v41; // r9d
  __int64 v42; // rbx
  __int64 v43; // rcx
  int v44; // eax
  int v45; // r14d
  unsigned int v46; // ecx
  __int64 v47; // rdx
  __int64 v48; // rbx
  bool v49; // zf
  _DWORD *v50; // rdx
  __int64 v51; // rcx
  int v52; // eax
  unsigned int v53; // ecx
  __int64 v54; // rbx
  int v55; // eax
  unsigned int v56; // eax
  int v57; // ecx
  __int64 v58; // rcx
  char v59; // dl
  __int64 v60; // rcx
  __int64 v61; // rcx
  _BYTE *v62; // rdx
  float v63; // xmm0_4
  const wchar_t *v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 (__fastcall *v68)(__int64, _BYTE *); // rax
  int v69; // eax
  unsigned int v70; // ecx
  unsigned __int8 *v71; // r8
  struct RFONT *v72; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v73; // [rsp+38h] [rbp-C8h] BYREF
  struct PFE *v74; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v75; // [rsp+48h] [rbp-B8h]
  _BYTE v76[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v77; // [rsp+54h] [rbp-ACh]
  __int64 v78; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v79; // [rsp+60h] [rbp-A0h]
  __int128 v80; // [rsp+68h] [rbp-98h] BYREF
  __int128 v81; // [rsp+78h] [rbp-88h]
  _FD_DEVICEMETRICS v82; // [rsp+90h] [rbp-70h] BYREF

  v74 = a5;
  v16 = 0LL;
  v72 = (struct RFONT *)PFEOBJ::pfdg((PFEOBJ *)&v74);
  if ( !v72 )
    goto LABEL_84;
  v17 = AllocateIsolatedType<NSInstrumentation::CTypeIsolation<233472,912>>();
  *(_QWORD *)this = v17;
  if ( !v17 )
  {
    PFEOBJ::vFreepfdg((PFEOBJ *)&v74);
LABEL_84:
    *(_QWORD *)this = 0LL;
    return (unsigned int)v16;
  }
  v75 = *(_QWORD *)a5;
  *(_DWORD *)(v17 + 32) = PDEVOBJ::ulLogPixelsX(a3);
  v18 = *(_QWORD *)this;
  *(_DWORD *)(v18 + 36) = PDEVOBJ::ulLogPixelsY(a3);
  *(_DWORD *)(*(_QWORD *)this + 40LL) = a9;
  v19 = PFEOBJ::flFontType((PFEOBJ *)&v74);
  v20 = v75;
  *(_DWORD *)(*(_QWORD *)this + 12LL) = a8 | v19;
  *(_QWORD *)(*(_QWORD *)this + 48LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 56LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 4LL) = *((_DWORD *)a5 + 2);
  *(_QWORD *)(*(_QWORD *)this + 24LL) = *(_QWORD *)(v20 + 80);
  if ( (*(_DWORD *)(*(_QWORD *)this + 12LL) & 4) != 0 )
    v21 = *((unsigned int *)a5 + 20);
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 16LL) = v21;
  *(struct _FD_XFORM *)(*(_QWORD *)this + 136LL) = *a6;
  *(struct _FD_XFORM *)(*(_QWORD *)this + 152LL) = *a6;
  *(struct _FD_XFORM *)(*(_QWORD *)this + 360LL) = *a6;
  *(struct _POINTL *)(*(_QWORD *)this + 648LL) = *a7;
  *(_QWORD *)(*(_QWORD *)this + 224LL) = *(_QWORD *)this + 240LL;
  RFONTOBJ::vSetNotionalToDevice(this, (struct EXFORMOBJ *)(*(_QWORD *)this + 224LL));
  *(_QWORD *)(*(_QWORD *)this + 120LL) = a5;
  *(_QWORD *)(*(_QWORD *)this + 128LL) = *(_QWORD *)a5;
  *(_QWORD *)(*(_QWORD *)this + 720LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 728LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 736LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 744LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 832LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 712LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 840LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 836LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 844LL) = *((_DWORD *)a5 + 3) & 0x100;
  v22 = *(_QWORD *)this;
  if ( a3 )
  {
    *(_QWORD *)(v22 + 104) = *(_QWORD *)a3;
    *(_QWORD *)(*(_QWORD *)this + 112LL) = *(_QWORD *)(*(_QWORD *)a3 + 1800LL);
  }
  else
  {
    *(_QWORD *)(v22 + 104) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 112LL) = 0LL;
  }
  *(_DWORD *)(*(_QWORD *)this + 168LL) = 1;
  *(_DWORD *)(*(_QWORD *)this + 716LL) = *(_DWORD *)(*((_QWORD *)a5 + 4) + 48LL);
  v23 = v72;
  v24 = *(_QWORD *)this;
  LODWORD(v72) = 0;
  *(_QWORD *)(v24 + 472) = v23;
  v25 = *((_QWORD *)a5 + 4);
  v79 = v25;
  v73 = *(_WORD *)(v25 + 116);
  RFONTOBJ::vXlatGlyphArray(this, &v73, 1, (unsigned int *)&v72, 2u, 0);
  *(_DWORD *)(*(_QWORD *)this + 460LL) = (_DWORD)v72;
  *(_DWORD *)(*(_QWORD *)this + 712LL) &= ~0x40u;
  memset(&v82, 0, sizeof(v82));
  *(_QWORD *)(*(_QWORD *)this + 96LL) = *(_QWORD *)(v20 + 88);
  if ( !(unsigned int)RFONTOBJ::bGetDEVICEMETRICS((POINTL **)this, &v82) )
    goto LABEL_89;
  if ( !a2 )
    goto LABEL_17;
  *(POINTE *)(*(_QWORD *)this + 396LL) = v82.pteBase;
  *(POINTE *)(*(_QWORD *)this + 416LL) = v82.pteSide;
  v27 = *(_QWORD *)a2;
  v28 = *(_QWORD *)this;
  *(_OWORD *)(v28 + 172) = *(_OWORD *)(*(_QWORD *)a2 + 320LL);
  *(_OWORD *)(v28 + 188) = *(_OWORD *)(v27 + 336);
  *(_DWORD *)(v28 + 204) = *(_DWORD *)(v27 + 352);
  if ( !RFONTOBJ::bCalcLayoutUnits(this, a2)
    || !bGetNtoWScales(
          (struct EPOINTFL *)(*(_QWORD *)this + 212LL),
          a2,
          (struct _FD_XFORM *)(*(_QWORD *)this + 360LL),
          (struct PFEOBJ *)&v74,
          (int *)(*(_QWORD *)this + 220LL)) )
  {
LABEL_89:
    v66 = *(_QWORD *)this;
    v80 = 0LL;
    v81 = 0LL;
    PushThreadGuardedObject(&v80, v66, Win32FreePool);
LABEL_92:
    RFONTOBJ::vDestroyFont(this, 1);
    PopThreadGuardedObject(&v80);
    FreeIsolatedType<NSInstrumentation::CTypeIsolation<233472,912>>(*(_QWORD *)this);
    goto LABEL_84;
  }
  v30 = *(_QWORD *)this;
  LODWORD(v72) = 0;
  bFToL(v29, &v72, 0LL);
  *(_DWORD *)(v30 + 328) = (_DWORD)v72;
  v31 = *(_QWORD *)this;
  LODWORD(v72) = 0;
  bFToL(v32, &v72, 0LL);
  *(_DWORD *)(v31 + 332) = (_DWORD)v72;
  v33 = *(_QWORD *)this;
  LODWORD(v72) = 0;
  bFToL(v34, &v72, 0LL);
  *(_DWORD *)(v33 + 336) = (_DWORD)v72;
  v35 = *(_QWORD *)this;
  LODWORD(v72) = 0;
  bFToL(v36, &v72, 0LL);
  *(_DWORD *)(v35 + 340) = (_DWORD)v72;
  *(_DWORD *)(*(_QWORD *)this + 432LL) = -1;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL) == 1 )
  {
    v37 = *(_DWORD *)(v25 + 48);
    if ( (v37 & 4) == 0 )
    {
      if ( (v37 & 0x10) == 0 )
      {
        v39 = ulSimpleDeviceOrientation(this);
        goto LABEL_16;
      }
      v38 = (unsigned int)(3600 - a4->elfEnumLogfontEx.elfLogFont.lfEscapement);
LABEL_15:
      v39 = lNormAngle(v38);
LABEL_16:
      *(_DWORD *)(*(_QWORD *)this + 392LL) = v39;
      goto LABEL_17;
    }
LABEL_88:
    v38 = (unsigned int)(3600 - a4->elfEnumLogfontEx.elfLogFont.lfOrientation);
    goto LABEL_15;
  }
  *(_DWORD *)(*(_QWORD *)this + 392LL) = RFONTOBJ::ulSimpleOrientation(this, a2);
  if ( *(_DWORD *)(*(_QWORD *)this + 392LL) >= 0xE10u && (*(_DWORD *)(*(_QWORD *)this + 716LL) & 0x10) != 0 )
    goto LABEL_88;
LABEL_17:
  v40 = 0;
  v41 = a10;
  *(_DWORD *)(*(_QWORD *)this + 656LL) = a10;
  v42 = *(_QWORD *)(*(_QWORD *)this + 96LL);
  if ( (struct PDEV *)v42 == qword_1C0340A10 )
  {
    if ( (unsigned int)UmfdQueryFontCapsEx(*(_QWORD *)(*(_QWORD *)this + 24LL), v26, v76) != -1 )
      v40 = v77;
  }
  else
  {
    v68 = *(__int64 (__fastcall **)(__int64, _BYTE *))(v42 + 3040);
    if ( v68 )
    {
      v69 = v68(2LL, v76);
      v41 = a10;
      if ( v69 != -1 )
        v40 = v77;
    }
  }
  v43 = *(_QWORD *)this;
  if ( (*(_DWORD *)(v42 + 40) & 0x2000) == 0 )
  {
    *(_DWORD *)(v43 + 92) = 1;
    *(_DWORD *)(*(_QWORD *)this + 88LL) = 0;
    goto LABEL_33;
  }
  v44 = *(_DWORD *)(v43 + 12);
  *(_DWORD *)(v43 + 92) = 0;
  v45 = (v44 & 0x10010000) != 0 ? 400 : 800;
  *(_DWORD *)(*(_QWORD *)this + 88LL) = 1;
  v46 = v45;
  v47 = *(_QWORD *)this;
  if ( v41 )
  {
    *(_DWORD *)(v47 + 88) = 2;
  }
  else
  {
    v48 = *(_QWORD *)(v47 + 104);
    if ( v48 )
    {
      v49 = (*(_DWORD *)(v48 + 40) & 0x8000) == 0;
      v72 = *(struct RFONT **)(v47 + 104);
      if ( !v49 )
      {
        if ( KeAreApcsDisabled() )
        {
LABEL_26:
          v46 = v45;
          if ( (*(_DWORD *)(v48 + 1824) & 0x40000000) != 0 )
          {
            v46 = 3 * PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v72);
            if ( v46 <= 0x320 )
              v46 = v45;
            if ( v46 > 0x960 )
              v46 = 2400;
          }
          v41 = a10;
          goto LABEL_28;
        }
        v47 = *(_QWORD *)this;
      }
      if ( *(_QWORD *)(v48 + 2984) )
      {
        v80 = 0LL;
        v81 = 0LL;
        PushThreadGuardedObject(&v80, v47, vRestartbRealizeFont);
        *(_DWORD *)(*(_QWORD *)this + 88LL) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v48 + 2984))(
                                                *(_QWORD *)(*(_QWORD *)this + 112LL),
                                                *(_QWORD *)this);
        PopThreadGuardedObject(&v80);
      }
      goto LABEL_26;
    }
  }
LABEL_28:
  v50 = *(_DWORD **)this;
  if ( *(_DWORD *)(*(_QWORD *)this + 88LL) == 1 )
  {
    if ( (v40 & 2) == 0 || (v50[179] & 0x8000) != 0 && (v50[86] > 2 * v46 || v50[87] > v46) )
      v50[22] = 2;
  }
  else if ( *(_DWORD *)(*(_QWORD *)this + 88LL) == 2 && (v40 & 1) == 0 )
  {
    v50[22] = 1;
  }
LABEL_33:
  if ( *(_DWORD *)(*(_QWORD *)this + 88LL) == 2 )
    *(_DWORD *)(*(_QWORD *)this + 12LL) &= 0x8FFEFFFF;
  if ( v41 )
  {
    v67 = *(_QWORD *)this;
    if ( *(_DWORD *)(*(_QWORD *)this + 88LL) != 2 )
      goto LABEL_91;
  }
  v51 = *(_QWORD *)this;
  if ( !a11 || (v52 = 1, *(_DWORD *)(v51 + 392)) )
    v52 = 0;
  *(_DWORD *)(v51 + 640) = v52;
  if ( !(unsigned int)RFONTOBJ::bInitCache(this, a12) )
  {
    v67 = *(_QWORD *)this;
LABEL_91:
    v80 = 0LL;
    v81 = 0LL;
    PushThreadGuardedObject(&v80, v67, Win32FreePool);
    goto LABEL_92;
  }
  *(_QWORD *)(*(_QWORD *)this + 688LL) = 0LL;
  v78 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  v49 = iUniqueStamp == -1;
  v53 = ++iUniqueStamp;
  if ( v49 )
  {
    v53 = 1;
    iUniqueStamp = 1;
  }
  **(_DWORD **)this = v53;
  if ( a3 )
  {
    *(_DWORD *)(*(_QWORD *)this + 660LL) = 1;
    v72 = PDEVOBJ::prfntActive(a3);
    RFONTOBJ::vInsert(this, &v72, 1LL);
    PDEVOBJ::prfntActive(a3, v72);
  }
  v54 = v75;
  v72 = *(struct RFONT **)(v75 + 72);
  RFONTOBJ::vInsert(this, &v72, 0LL);
  *(_QWORD *)(v54 + 72) = v72;
  SEMOBJ::vUnlock((SEMOBJ *)&v78);
  v55 = *(_DWORD *)(*(_QWORD *)this + 12LL);
  if ( *(_DWORD *)(*(_QWORD *)this + 88LL) == 1 )
    v56 = v55 | 1;
  else
    v56 = v55 & 0xFFFFFFFE;
  *(_DWORD *)(*(_QWORD *)this + 12LL) = v56;
  if ( a2 )
    *(_DWORD *)(*(_QWORD *)this + 208LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL);
  else
    *(_DWORD *)(*(_QWORD *)this + 208LL) = 0;
  if ( !gbSystemDBCSFontEnabled || (v57 = 1, (*((_DWORD *)v74 + 3) & 0x10) == 0) )
    v57 = 0;
  *(_DWORD *)(*(_QWORD *)this + 708LL) = v57;
  v58 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 12LL) & 0x10000000) != 0 )
  {
    if ( (*(_DWORD *)(v58 + 204) & 1) == 0 || (v59 = 1, *(_DWORD *)(v58 + 328)) )
      v59 = 0;
    v60 = *(_QWORD *)(*(_QWORD *)(v58 + 120) + 32LL);
    if ( (*(_DWORD *)(v60 + 48) & 0x401000) != 0 && v59 && *(_WORD *)(v60 + 46) <= 0x190u )
    {
      v65 = (const wchar_t *)(v60 + *(int *)(v60 + 8));
      if ( !_wcsicmp(v65, L"Courier New")
        || !_wcsicmp(v65, L"Rod")
        || !_wcsicmp(v65, L"Rod Transparent")
        || !_wcsicmp(v65, L"Fixed Miriam Transparent")
        || !_wcsicmp(v65, L"Miriam Fixed")
        || !_wcsicmp(v65, L"Simplified Arabic Fixed") )
      {
        *(_DWORD *)(*(_QWORD *)this + 64LL) = 1;
      }
      v54 = v75;
    }
    v61 = *(_QWORD *)this;
    if ( (*(_DWORD *)(*(_QWORD *)this + 12LL) & 0x20000000) != 0 )
    {
      v80 = 0LL;
      *(_QWORD *)&v81 = 0LL;
      EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)(v61 + 224), (struct tagFLOATOBJ_XFORM *)&v80);
      v62 = *(_BYTE **)(v54 + 192);
      v63 = (float)*(__int16 *)(v79 + 56) * *((float *)&v80 + 3);
      *((float *)&v80 + 3) = v63;
      if ( v62 )
      {
        v70 = 0;
        if ( *v62 )
        {
          v71 = v62 + 4;
          while ( *v71 != (int)v63 )
          {
            ++v70;
            v71 += 80;
            if ( v70 >= (unsigned __int8)*v62 )
              goto LABEL_55;
          }
          v16 = (__int64)&v62[80 * v70 + 4];
        }
      }
LABEL_55:
      *(_QWORD *)(*(_QWORD *)this + 72LL) = v16;
    }
  }
  LODWORD(v16) = 1;
  return (unsigned int)v16;
}
