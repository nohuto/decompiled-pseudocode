/*
 * XREFs of ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C007DD90
 * Callers:
 *     GreGetTextMetricsW @ 0x1C000C294 (GreGetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x1C000C3CC (GreGetTextExtentW.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C00802E0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     GreGetTextCharsetInfo @ 0x1C00A1AD4 (GreGetTextCharsetInfo.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C00DAC84 (GreGetOutlineTextMetricsInternalW.c)
 *     NtGdiGetWidthTable @ 0x1C00DEA40 (NtGdiGetWidthTable.c)
 *     ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1C00DF72C (-ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z.c)
 *     GreGetCharABCWidthsW @ 0x1C00E1878 (GreGetCharABCWidthsW.c)
 *     GreGetCharWidthW @ 0x1C00E1D38 (GreGetCharWidthW.c)
 *     GreGetGlyphIndicesW @ 0x1C00E2A28 (GreGetGlyphIndicesW.c)
 *     GreGetGlyphOutlineInternal @ 0x1C00E344C (GreGetGlyphOutlineInternal.c)
 *     GreFontIsLinked @ 0x1C01080B8 (GreFontIsLinked.c)
 *     NtGdiQueryFontAssocInfo @ 0x1C0109810 (NtGdiQueryFontAssocInfo.c)
 *     GreGetCharWidthInfo @ 0x1C0113DB4 (GreGetCharWidthInfo.c)
 *     NtGdiGetETM @ 0x1C0132240 (NtGdiGetETM.c)
 *     GreGetKerningPairs @ 0x1C0132834 (GreGetKerningPairs.c)
 *     GreGetUFI @ 0x1C0142710 (GreGetUFI.c)
 *     NtGdiGetLinkedUFIs @ 0x1C0142B70 (NtGdiGetLinkedUFIs.c)
 *     GreGetFontUnicodeRanges @ 0x1C014E4A8 (GreGetFontUnicodeRanges.c)
 *     GreGetRealizationInfo @ 0x1C015A87C (GreGetRealizationInfo.c)
 *     GreGetTextExtentExW @ 0x1C015B7E4 (GreGetTextExtentExW.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C027C2FC (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 *     ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C02989D4 (-GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C000CBFC (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C0013344 (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C00133FC (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 *     Win32FileInfo @ 0x1C0014298 (Win32FileInfo.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008502C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C009D138 (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C009F6C0 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z @ 0x1C00A12B4 (-bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z.c)
 *     PALLOCMEM2 @ 0x1C00D8F8C (PALLOCMEM2.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C00DBE1C (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C00DBF50 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C00DC798 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C00DD304 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C00DDC88 (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C00DDCF8 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00DDD20 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C00FE508 (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOB.c)
 *     EngUnmapFontFileFD @ 0x1C0113EA0 (EngUnmapFontFileFD.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C012526C (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C012C6BC (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ??0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z @ 0x1C029813C (--0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C02A9234 (vRemoveAllInactiveRFONTs.c)
 *     ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x1C02BB3FC (-bAttemptReload@PFFOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall RFONTOBJ::bInit(RFONTOBJ *this, struct XDCOBJ *a2, int a3, unsigned int a4)
{
  unsigned int v5; // esi
  int v8; // r12d
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rbx
  int v12; // edi
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rbx
  int v18; // esi
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // r8
  int v22; // edi
  __int64 v23; // rcx
  BOOL v24; // r10d
  _DWORD *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r9
  __int64 v28; // r8
  int v29; // ecx
  __int64 v30; // rdx
  unsigned int v31; // esi
  __int64 v33; // rax
  unsigned int v34; // ecx
  struct RFONT **v35; // rdi
  int v36; // esi
  int InactiveHelper; // r12d
  struct PFE *v38; // rax
  int v39; // ecx
  __int64 v40; // rax
  __int64 v41; // r13
  unsigned int v42; // esi
  struct PFE *v43; // rax
  struct PFE *v44; // rdx
  __int64 v45; // r13
  int v46; // ecx
  __int64 v47; // rax
  unsigned int v48; // esi
  __int64 v49; // rdx
  __int64 v50; // rax
  struct tagLOGFONTW *v51; // rdx
  FLOATL eYX; // r8d
  FLOATL eYY; // ecx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rdx
  int v58; // esi
  struct PFE *v59; // rax
  __int64 v60; // rdx
  int v61; // edi
  struct PFE *v62; // rsi
  __int64 v63; // rax
  size_t v64; // rsi
  unsigned int v65; // eax
  struct tagLOGFONTW *v66; // rax
  struct tagLOGFONTW *v67; // rdi
  unsigned int v68; // eax
  __int64 v69; // rax
  int v70; // edx
  __int64 v71; // rcx
  int v72; // ecx
  unsigned int v73; // eax
  __int64 v74; // rcx
  __int64 v75; // r9
  __int64 v76; // rax
  __int64 v77; // r11
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r10
  _QWORD *v81; // rdx
  int v82; // r8d
  int v83; // r8d
  __int64 v84; // rax
  __int64 v85; // rdx
  _QWORD *v86; // r8
  _QWORD *v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // rcx
  int v90; // ecx
  unsigned int v91; // eax
  __int64 v92; // rcx
  __int64 v93; // rax
  int v94; // esi
  bool v95; // bl
  __int64 v96; // r12
  __int64 v97; // rcx
  struct PDEV *v98; // rdi
  int v99; // eax
  __int64 v100; // rbx
  __int64 v101; // rcx
  int v102; // eax
  __int64 v103; // rbx
  bool v104; // zf
  unsigned int v105; // eax
  __int64 v106; // rdx
  __int64 v107; // rsi
  __int64 v108; // rcx
  __int64 v109; // rsi
  unsigned int v110; // r13d
  bool v111; // al
  unsigned int v112; // edi
  unsigned int v113; // [rsp+28h] [rbp-D8h]
  bool v114; // [rsp+60h] [rbp-A0h]
  bool v115; // [rsp+61h] [rbp-9Fh]
  __int64 v116; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v117; // [rsp+70h] [rbp-90h] BYREF
  struct PFE *v118; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v119; // [rsp+80h] [rbp-80h]
  struct PDEV *v120; // [rsp+88h] [rbp-78h] BYREF
  struct RFONT *v121; // [rsp+90h] [rbp-70h] BYREF
  int v122; // [rsp+98h] [rbp-68h]
  struct _POINTL v123; // [rsp+A0h] [rbp-60h] BYREF
  int v124[2]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v125; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v126; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v127; // [rsp+C0h] [rbp-40h] BYREF
  int v128; // [rsp+C8h] [rbp-38h]
  int v129; // [rsp+CCh] [rbp-34h]
  __int64 v130; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v131; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v132[2]; // [rsp+E0h] [rbp-20h] BYREF
  int v133; // [rsp+F0h] [rbp-10h]
  __int64 v134; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v135; // [rsp+100h] [rbp+0h] BYREF
  __int64 v136; // [rsp+108h] [rbp+8h] BYREF
  int v137; // [rsp+110h] [rbp+10h]
  int v138; // [rsp+114h] [rbp+14h]
  _QWORD v139[2]; // [rsp+118h] [rbp+18h] BYREF
  __int128 v140; // [rsp+128h] [rbp+28h] BYREF
  __int64 v141; // [rsp+138h] [rbp+38h]
  __int64 v142; // [rsp+140h] [rbp+40h] BYREF
  __int64 v143; // [rsp+150h] [rbp+50h] BYREF
  __int64 v144; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v145; // [rsp+170h] [rbp+70h]
  struct _FD_XFORM v146; // [rsp+178h] [rbp+78h] BYREF
  struct RFONT *v147[14]; // [rsp+190h] [rbp+90h] BYREF

  v119 = a4;
  v5 = a4;
  v122 = a3;
  if ( !UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent
    || !UmfdHostLifeTimeManager::s_InitialFontsAddedEvent )
  {
    return 0LL;
  }
  v8 = 0;
  if ( !KeReadStateEvent(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent)
    || !UmfdHostLifeTimeManager::s_SessionRasterizerInitialized
    || !KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent) )
  {
    v95 = KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent) != 0;
    if ( !UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost()
      && UmfdHostLifeTimeManager::s_CsrssAddInitialFontsThread != KeGetCurrentThread() )
    {
      if ( (v95 || !(unsigned int)UserIsUserCritSecIn())
        && KeWaitForSingleObject(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent, Executive, 0, 0, 0LL) >= 0
        && UmfdHostLifeTimeManager::s_SessionRasterizerInitialized )
      {
        KeWaitForSingleObject(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, Executive, 0, 0, 0LL);
        goto LABEL_6;
      }
      return 0LL;
    }
  }
LABEL_6:
  v10 = *(_QWORD *)(*(_QWORD *)a2 + 1744LL);
  *(_QWORD *)this = v10;
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 504);
    v12 = 0;
    if ( v11 )
    {
      GreAcquireSemaphore(v11);
      v13 = *(_DWORD *)(*(_QWORD *)this + 84LL);
      if ( (v13 & 8) != 0 )
      {
        v12 = 1;
        *(_DWORD *)(*(_QWORD *)this + 84LL) = v13 & 0xFFFFFFF7;
      }
      EtwTraceGreLockReleaseSemaphore(L"hsem", v11);
      GreReleaseSemaphoreInternal(v11);
      if ( v12 == 1 )
      {
        GreAcquireSemaphore(ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
        v98 = gppdevList;
        if ( gppdevList )
        {
          while ( 1 )
          {
            v99 = *((_DWORD *)v98 + 10);
            if ( (v99 & 0x2000) == 0 )
            {
              if ( (v99 & 0x8000) == 0 )
                break;
              v100 = *(_QWORD *)(*((_QWORD *)v98 + 224) + 48LL);
              if ( v100 == PsGetCurrentProcessWin32Process(v97) )
                break;
            }
            v98 = *(struct PDEV **)v98;
            if ( !v98 )
              goto LABEL_229;
          }
          PDEV::IncrementClientReferenceCount(v98);
        }
LABEL_229:
        EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
        GreReleaseSemaphoreInternal(ghsemDriverMgmt);
        while ( v98 )
        {
          v120 = v98;
          vRemoveAllInactiveRFONTs(v98);
          GreAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
          v98 = *(struct PDEV **)v98;
          if ( v98 )
          {
            while ( 1 )
            {
              v102 = *((_DWORD *)v98 + 10);
              if ( (v102 & 0x2000) == 0 )
              {
                if ( (v102 & 0x8000) == 0 )
                  break;
                v103 = *(_QWORD *)(*((_QWORD *)v98 + 224) + 48LL);
                if ( v103 == PsGetCurrentProcessWin32Process(v101) )
                  break;
              }
              v98 = *(struct PDEV **)v98;
              if ( !v98 )
                goto LABEL_237;
            }
            PDEV::IncrementClientReferenceCount(v98);
          }
LABEL_237:
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          GreReleaseSemaphoreInternal(ghsemDriverMgmt);
          PDEVOBJ::vUnreferencePdev(&v120, 0LL);
        }
      }
    }
  }
  v14 = *(_QWORD *)a2;
  LOBYTE(v9) = 10;
  v116 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 976) + 296LL);
  v16 = HmgShareLock(v15, v9);
  v126 = v16;
  v17 = v16;
  if ( !v16 )
    goto LABEL_286;
  if ( (*(_DWORD *)(v16 + 28) & 1) == 0 )
    goto LABEL_17;
  UserGetHDEV();
  v18 = *(_DWORD *)(v17 + 24);
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v17);
  v17 = 0LL;
  if ( !v116 )
  {
LABEL_286:
    RFONTOBJ::vMakeInactive(this);
    *(_QWORD *)this = 0LL;
    v31 = 0;
    *(_QWORD *)(*(_QWORD *)a2 + 1744LL) = 0LL;
    goto LABEL_36;
  }
  if ( v18 == 6 )
  {
    v15 = *(_QWORD *)(v116 + 1448);
  }
  else
  {
    v94 = v18 - 4;
    if ( v94 )
    {
      if ( v94 == 1 )
        v15 = *(_QWORD *)(v116 + 1440);
    }
    else
    {
      v15 = *(_QWORD *)(v116 + 1432);
    }
  }
  LOBYTE(v19) = 10;
  v5 = v119;
  v17 = HmgShareLock(v15, v19);
  v126 = v17;
LABEL_17:
  if ( !v17 )
    goto LABEL_286;
  v20 = lNormAngle((unsigned int)-*(_DWORD *)(v17 + 284));
  v21 = *(_QWORD *)a2;
  v22 = v20;
  LODWORD(v120) = v20;
  v128 = *(_DWORD *)(*(_QWORD *)(v21 + 976) + 208LL);
  v129 = *(_DWORD *)(*(_QWORD *)(v21 + 976) + 108LL) & 1;
  if ( (*(_DWORD *)(*(_QWORD *)(v21 + 976) + 340LL) & 0x1E000) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)&v127, a2, 0x204u, 0);
    v23 = v127;
  }
  else
  {
    v23 = v21 + 320;
    v127 = v21 + 320;
  }
  v24 = !v22 && (*(_DWORD *)(v23 + 32) & 1) != 0 && *(float *)(v23 + 12) >= 0.0 && *(float *)v23 >= 0.0;
  v25 = *(_DWORD **)this;
  v124[0] = v24;
  if ( !v25 )
  {
    v27 = *(_QWORD *)a2;
LABEL_42:
    *(_QWORD *)(v27 + 1728) = *(_QWORD *)(*(_QWORD *)(v27 + 976) + 296LL);
    goto LABEL_43;
  }
  v26 = *(_QWORD *)a2;
  v27 = *(_QWORD *)a2;
  v28 = *(_QWORD *)(*(_QWORD *)a2 + 976LL);
  if ( *(_QWORD *)(v28 + 296) != *(_QWORD *)(*(_QWORD *)a2 + 1728LL) || !v24 && v25[160] )
    goto LABEL_42;
  if ( v25[52] == *(_DWORD *)(v28 + 208) && a3 == v25[164] && v5 == (v25[21] & 6) )
  {
    if ( (*(_DWORD *)(v26 + 36) & 1) == 0 && *(_DWORD *)(v26 + 32) != 1 )
      goto LABEL_33;
    v29 = *(_DWORD *)(*(_QWORD *)(v26 + 1744) + 12LL);
    if ( (v29 & 0x200004) == 0 )
      goto LABEL_33;
    v88 = 0LL;
    if ( (gulFontInformation & 2) != 0 )
    {
      v88 = 0x10000LL;
      if ( (gulFontInformation & 0x10) != 0 )
        v88 = 268500992LL;
    }
    if ( (v29 & 4) != 0 )
    {
      v89 = v29 & 0x10010000;
      if ( (_DWORD)v88 != (_DWORD)v89 )
        goto LABEL_43;
    }
    else
    {
      if ( (((unsigned int)v88 ^ v29) & 0x10000) != 0 )
        goto LABEL_43;
      v89 = v29 & 0x10010000;
    }
    if ( !(_DWORD)v89 || !(unsigned int)UserIsRemoteConnection(v89, v88, gulFontInformation, v27) )
    {
LABEL_33:
      v30 = *(_QWORD *)a2;
      if ( *(float *)(*(_QWORD *)a2 + 452LL) == 0.0 || (unsigned int)EFLOAT::bIsZero((EFLOAT *)(v30 + 456)) )
      {
        if ( (*(_DWORD *)(v30 + 252) & 1) == 0 )
        {
LABEL_35:
          v31 = 1;
          goto LABEL_36;
        }
        if ( EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v127, (struct MATRIX *)(*(_QWORD *)this + 172LL)) )
        {
          *(_DWORD *)(*(_QWORD *)a2 + 252LL) &= ~1u;
          goto LABEL_35;
        }
      }
    }
  }
LABEL_43:
  if ( (*(_DWORD *)(v116 + 40) & 0x40) == 0 )
    PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v116);
  memset(v147, 0, sizeof(v147));
  v33 = *(_QWORD *)this;
  if ( !*(_QWORD *)this || !*(_DWORD *)(v33 + 660) )
    goto LABEL_56;
  v34 = *(_DWORD *)(v33 + 840);
  if ( v34 <= 0xA )
  {
    v35 = v147;
    v36 = 0;
LABEL_49:
    InactiveHelper = RFONTOBJ::bMakeInactiveHelper(this, v35);
    LODWORD(v121) = InactiveHelper;
    v38 = *v35;
    if ( *v35 )
    {
      v96 = 0LL;
      do
      {
        v118 = v38;
        RFONTOBJ::bMakeInactiveHelper((RFONTOBJ *)&v118, 0LL);
        v118 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v118);
        v38 = v35[++v96];
      }
      while ( v38 );
      InactiveHelper = (int)v121;
    }
    if ( v36 )
      Win32FreePool(v35);
    if ( InactiveHelper )
    {
      GreAcquireSemaphore(ghsemEUDC1);
      --gcEUDCCount;
      EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
      GreReleaseSemaphoreInternal(ghsemEUDC1);
    }
    v8 = 0;
    goto LABEL_55;
  }
  v35 = (struct RFONT **)PALLOCMEM2(8 * v34 + 32);
  if ( v35 )
  {
    v36 = 1;
    goto LABEL_49;
  }
LABEL_55:
  v22 = (int)v120;
LABEL_56:
  v39 = *(_BYTE *)(v17 + 297) != 0 ? 0x20 : 0;
  if ( *(_BYTE *)(v17 + 298) )
    v39 |= 0x80u;
  v40 = *(_QWORD *)a2;
  v41 = 0LL;
  v132[0] = 0LL;
  *(_DWORD *)(v40 + 1736) = v39;
  *(_DWORD *)(*(_QWORD *)a2 + 1740LL) = v22;
  v146 = 0LL;
  v117 = 0;
  v123 = 0LL;
  v125 = 0;
  v114 = (*(_DWORD *)(v116 + 40) & 1) == 0 && (*(_DWORD *)(v17 + 28) & 2) != 0;
  v135 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v42 = v119 & 4;
  LODWORD(v121) = v42;
  v43 = LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v126, a2, &v117, &v123, &v125, v42);
  v118 = v43;
  v44 = v43;
  if ( !v43 )
    goto LABEL_279;
  v45 = *(_QWORD *)v43;
  v142 = v45;
  v46 = *(_DWORD *)(v45 + 52);
  if ( (v46 & 0x2000) != 0 )
    goto LABEL_253;
  if ( (v46 & 0x1000) == 0 )
    goto LABEL_63;
  v104 = *(_DWORD *)(v45 + 36) == 0;
  v105 = 0;
  LODWORD(v120) = 0;
  if ( v104 )
    goto LABEL_251;
  v106 = *(_QWORD *)(v45 + 200);
  do
  {
    v107 = v105;
    v131 = 0LL;
    v130 = 0LL;
    Win32FileInfo(*(PCWSTR *)(*(_QWORD *)(v106 + 8LL * v105) + 80LL), &v130, &v131);
    v106 = *(_QWORD *)(v45 + 200);
    v108 = *(_QWORD *)(v106 + 8 * v107);
    if ( *(_QWORD *)v108 != v130 || *(_DWORD *)(v108 + 24) != (_DWORD)v131 )
    {
      *(_DWORD *)(v45 + 52) |= 0x2000u;
      v42 = (unsigned int)v121;
LABEL_253:
      if ( (unsigned int)PFFOBJ::bAttemptReload((PFFOBJ *)&v142) )
      {
        GreAcquireSemaphore(ghsemPublicPFT);
        v44 = LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v126, a2, &v117, &v123, &v125, v42);
        v118 = v44;
        goto LABEL_63;
      }
LABEL_278:
      v41 = 0LL;
LABEL_279:
      *(_QWORD *)this = 0LL;
      *(_QWORD *)(*(_QWORD *)a2 + 1744LL) = 0LL;
      SEMOBJ::vUnlock((SEMOBJ *)&v135);
      goto LABEL_280;
    }
    v105 = (_DWORD)v120 + 1;
    LODWORD(v120) = v105;
  }
  while ( v105 < *(_DWORD *)(v45 + 36) );
  v46 = *(_DWORD *)(v45 + 52);
  v44 = v118;
LABEL_251:
  *(_DWORD *)(v45 + 52) = v46 & 0xFFFFEFFF;
LABEL_63:
  if ( !v44 )
    goto LABEL_278;
  v47 = *((_QWORD *)v44 + 4);
  v48 = 0;
  v49 = *(_QWORD *)a2;
  v139[0] = v47;
  if ( v114 )
    v48 = 2;
  v137 = *(_DWORD *)(*(_QWORD *)(v49 + 976) + 208LL);
  v138 = *(_DWORD *)(*(_QWORD *)(v49 + 976) + 108LL) & 1;
  if ( (*(_DWORD *)(*(_QWORD *)(v49 + 976) + 340LL) & 0x1E000) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)&v136, a2, 0x204u, 0);
    v49 = *(_QWORD *)a2;
  }
  else
  {
    v136 = v49 + 320;
  }
  v50 = *(_QWORD *)(v49 + 976);
  v51 = (struct tagLOGFONTW *)(v17 + 276);
  if ( !(*(_DWORD *)(v50 + 208) == 1
       ? bGetNtoD_Win31(&v146, v51, (struct IFIOBJ *)v139, a2, v48, &v123, 0)
       : bGetNtoD(&v146, v51, (struct IFIOBJ *)v139, a2, &v123)) )
    goto LABEL_278;
  eYX = v146.eYX;
  if ( LODWORD(v146.eYX) )
  {
    LODWORD(eYX) = LODWORD(v146.eYX) ^ 0x80000000;
    LODWORD(v146.eYX) ^= 0x80000000;
  }
  eYY = v146.eYY;
  if ( LODWORD(v146.eYY) )
  {
    LODWORD(eYY) = LODWORD(v146.eYY) ^ 0x80000000;
    LODWORD(v146.eYY) ^= 0x80000000;
  }
  if ( (*(_DWORD *)(v139[0] + 48LL) & 0x1000000) != 0 )
  {
    v146.eXX = eYY;
    v146.eXY = eYX;
    if ( eYX != 0.0 )
      LODWORD(v146.eXY) = LODWORD(eYX) ^ 0x80000000;
  }
  if ( (*(_DWORD *)(v139[0] + 48LL) & 1) != 0 && *(int *)(v17 + 276) <= 0 )
    v117 |= 0x8000u;
  v133 = 0;
  v41 = *(_QWORD *)v118;
  v132[0] = v41;
  ++*(_DWORD *)(v41 + 68);
  if ( ghsemPublicPFT )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPublicPFT);
    GreReleaseSemaphoreInternal(ghsemPublicPFT);
  }
  v55 = *(_QWORD *)(*(_QWORD *)a2 + 976LL);
  v134 = ghsemRFONTList;
  LODWORD(v121) = *(_DWORD *)(v55 + 208);
  LODWORD(v120) = v117;
  GreAcquireSemaphore(ghsemRFONTList);
  v56 = v116;
  if ( (*(_DWORD *)(v116 + 40) & 0x800000) != 0 )
    v57 = *(_QWORD *)(*(_QWORD *)(v116 + 3520) + 1520LL);
  else
    v57 = *(_QWORD *)(v116 + 1520);
  v58 = v124[0];
  *(_QWORD *)this = v57;
  if ( !v57 )
  {
LABEL_88:
    if ( (*(_DWORD *)(v56 + 40) & 0x800000) != 0 )
      v60 = *(_QWORD *)(*(_QWORD *)(v56 + 3520) + 1528LL);
    else
      v60 = *(_QWORD *)(v56 + 1528);
    *(_QWORD *)this = v60;
    if ( v60 )
    {
      while ( 1 )
      {
        if ( *(struct PFE **)(v60 + 120) == v118 && v119 == (*(_DWORD *)(v60 + 84) & 6) )
        {
          v72 = *(_DWORD *)(v60 + 12);
          if ( (((unsigned int)v120 ^ v72) & 0xE000) == 0 )
          {
            v73 = ((unsigned int)v120 ^ v72) & 0x50010000;
            if ( !v73 )
              goto LABEL_290;
            if ( ((unsigned int)v120 & 0x10000) != 0 && (v72 & 0x20000) != 0 )
              v73 = ((unsigned int)v120 ^ v72) & 0x50000000;
            if ( ((unsigned int)v120 & 0x10000000) != 0 && (v72 & 0x10000000) == 0 && (v72 & 0x2000000) != 0 || !v73 )
            {
LABEL_290:
              if ( !*(_DWORD *)(v60 + 40) )
              {
                v74 = *(_QWORD *)&v146.eXX - *(_QWORD *)(v60 + 136);
                if ( *(_QWORD *)&v146.eXX == *(_QWORD *)(v60 + 136) )
                  v74 = *(_QWORD *)&v146.eYX - *(_QWORD *)(v60 + 144);
                if ( !v74 && v122 == *(_DWORD *)(v60 + 656) )
                {
                  if ( EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v127, (struct MATRIX *)(v60 + 172)) )
                  {
                    v75 = *(_QWORD *)this;
                    if ( *(_DWORD *)(*(_QWORD *)this + 208LL) == (_DWORD)v121 && (v58 || !*(_DWORD *)(v75 + 640)) )
                      break;
                  }
                }
              }
            }
          }
        }
        v60 = *(_QWORD *)(*(_QWORD *)this + 672LL);
        *(_QWORD *)this = v60;
        if ( !v60 )
          goto LABEL_93;
      }
      v76 = v116;
      if ( (*(_DWORD *)(v116 + 40) & 0x800000) != 0 )
        v77 = *(_QWORD *)(*(_QWORD *)(v116 + 3520) + 1528LL);
      else
        v77 = *(_QWORD *)(v116 + 1528);
      v78 = *(_QWORD *)(v75 + 664);
      v79 = *(_QWORD *)(v75 + 672);
      v80 = v78 + 664;
      if ( !v78 )
        v80 = 0LL;
      v81 = (_QWORD *)(v79 + 664);
      if ( !v79 )
        v81 = 0LL;
      if ( v78 )
      {
        *(_QWORD *)(v80 + 8) = v79;
        if ( v81 )
          *v81 = *(_QWORD *)(v75 + 664);
      }
      else
      {
        v77 = *(_QWORD *)(v75 + 672);
        if ( !v81 )
        {
LABEL_128:
          if ( (*(_DWORD *)(v76 + 40) & 0x800000) != 0 )
            *(_QWORD *)(*(_QWORD *)(v76 + 3520) + 1528LL) = v77;
          else
            *(_QWORD *)(v76 + 1528) = v77;
          if ( (*(_DWORD *)(v116 + 40) & 0x800000) != 0 )
            v82 = *(_DWORD *)(*(_QWORD *)(v116 + 3520) + 1536LL);
          else
            v82 = *(_DWORD *)(v116 + 1536);
          v83 = v82 - 1;
          if ( (*(_DWORD *)(v116 + 40) & 0x800000) != 0 )
            *(_DWORD *)(*(_QWORD *)(v116 + 3520) + 1536LL) = v83;
          else
            *(_DWORD *)(v116 + 1536) = v83;
          v84 = v116;
          if ( (*(_DWORD *)(v116 + 40) & 0x800000) != 0 )
            v85 = *(_QWORD *)(*(_QWORD *)(v116 + 3520) + 1520LL);
          else
            v85 = *(_QWORD *)(v116 + 1520);
          v86 = (_QWORD *)(v85 + 664);
          if ( !v85 )
            v86 = 0LL;
          v87 = (_QWORD *)(*(_QWORD *)this + 664LL);
          if ( *(_QWORD *)this != -664LL )
          {
            *v87 = 0LL;
            v87[1] = v85;
            if ( v86 )
              *v86 = *(_QWORD *)this;
            v85 = *(_QWORD *)this;
            v84 = v116;
          }
          if ( (*(_DWORD *)(v84 + 40) & 0x800000) != 0 )
            *(_QWORD *)(*(_QWORD *)(v84 + 3520) + 1520LL) = v85;
          else
            *(_QWORD *)(v84 + 1520) = v85;
          *(_DWORD *)(*(_QWORD *)this + 660LL) = 1;
          goto LABEL_145;
        }
        *v81 = 0LL;
      }
      v76 = v116;
      goto LABEL_128;
    }
LABEL_93:
    *(_QWORD *)this = 0LL;
    if ( ghsemRFONTList )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemRFONTList);
      GreReleaseSemaphoreInternal(ghsemRFONTList);
    }
    v61 = v124[0];
    v62 = v118;
    if ( (unsigned int)RFONTOBJ::bRealizeFont(
                         this,
                         a2,
                         (struct PDEVOBJ *)&v116,
                         (struct tagENUMLOGFONTEXDVW *)(v17 + 276),
                         v118,
                         &v146,
                         &v123,
                         v117,
                         0,
                         v122,
                         v124[0],
                         v119) )
    {
LABEL_96:
      if ( *(_DWORD *)(v17 + 280) )
      {
        *(_QWORD *)v124 = ghsemPublicPFT;
        GreAcquireSemaphore(ghsemPublicPFT);
        v63 = *((_QWORD *)v62 + 4);
        v64 = 420LL;
        v143 = v63;
        v65 = *(_DWORD *)(v17 + 272);
        if ( v65 < 0x1A4 )
          v64 = v65;
        v66 = (struct tagLOGFONTW *)AllocFreeTmpBuffer((unsigned int)v64);
        v67 = v66;
        if ( v66 )
        {
          memmove(v66, (const void *)(v17 + 276), v64);
          v67->lfWidth = 0;
          if ( v114 )
            v68 = 2;
          else
            v68 = 0;
          if ( !PFEOBJ::bSetFontXform(
                  (PFEOBJ *)&v123,
                  a2,
                  v67,
                  (struct _FD_XFORM *)(*(_QWORD *)this + 152LL),
                  v68,
                  v113,
                  &v123,
                  (struct IFIOBJ *)&v143,
                  0) )
            *(struct _FD_XFORM *)(*(_QWORD *)this + 152LL) = v146;
          FreeTmpBuffer(v67);
        }
        else
        {
          *(struct _FD_XFORM *)(*(_QWORD *)this + 152LL) = v146;
        }
        SEMOBJ::vUnlock((SEMOBJ *)v124);
      }
      v69 = *(_QWORD *)this;
      v70 = 1;
      v71 = *(_QWORD *)a2;
      v31 = 1;
      v133 = 1;
      *(_QWORD *)(v71 + 1744) = v69;
      *(_DWORD *)(*(_QWORD *)a2 + 252LL) &= ~1u;
      goto LABEL_147;
    }
    v115 = 0;
    UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
      (UmfdClientSideFileViewMapper *)&v144,
      (struct PFFOBJ *)v132);
    v109 = v144;
    v110 = v145;
    if ( v145 == *(_DWORD *)(v144 + 36) )
    {
      v111 = (unsigned int)RFONTOBJ::bRealizeFont(
                             this,
                             a2,
                             (struct PDEVOBJ *)&v116,
                             (struct tagENUMLOGFONTEXDVW *)(v17 + 276),
                             v118,
                             &v146,
                             &v123,
                             v117,
                             0,
                             v122,
                             v61,
                             v119) != 0;
      v115 = v111;
    }
    else
    {
      v111 = 0;
    }
    v112 = 0;
    if ( v110 )
    {
      do
      {
        if ( v112 >= *(_DWORD *)(v109 + 36) )
          break;
        EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(v109 + 200) + 8LL * v112++));
      }
      while ( v112 < v110 );
      v111 = v115;
    }
    v41 = v132[0];
    if ( v111 )
    {
      v62 = v118;
      goto LABEL_96;
    }
    *(_QWORD *)this = 0LL;
    *(_QWORD *)(*(_QWORD *)a2 + 1744LL) = 0LL;
LABEL_280:
    v31 = 0;
    goto LABEL_146;
  }
  v59 = v118;
  while ( *(struct PFE **)(v57 + 120) != v59 )
  {
LABEL_86:
    v57 = *(_QWORD *)(v57 + 672);
    *(_QWORD *)this = v57;
    if ( !v57 )
    {
      v56 = v116;
      goto LABEL_88;
    }
  }
  if ( v119 != (*(_DWORD *)(v57 + 84) & 6) )
  {
LABEL_175:
    v59 = v118;
    goto LABEL_86;
  }
  v90 = *(_DWORD *)(v57 + 12);
  if ( (((unsigned int)v120 ^ v90) & 0xE000) != 0 )
    goto LABEL_174;
  v91 = ((unsigned int)v120 ^ v90) & 0x50010000;
  if ( v91 )
  {
    if ( ((unsigned int)v120 & 0x10000) != 0 && (v90 & 0x20000) != 0 )
      v91 = ((unsigned int)v120 ^ v90) & 0x50000000;
    if ( (((unsigned int)v120 & 0x10000000) == 0 || (v90 & 0x10000000) != 0 || (v90 & 0x2000000) == 0) && v91 )
      goto LABEL_174;
  }
  if ( *(_DWORD *)(v57 + 40) )
    goto LABEL_174;
  v92 = *(_QWORD *)&v146.eXX - *(_QWORD *)(v57 + 136);
  if ( *(_QWORD *)&v146.eXX == *(_QWORD *)(v57 + 136) )
    v92 = *(_QWORD *)&v146.eYX - *(_QWORD *)(v57 + 144);
  if ( v92
    || v122 != *(_DWORD *)(v57 + 656)
    || !EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v127, (struct MATRIX *)(v57 + 172))
    || (v93 = *(_QWORD *)this, *(_DWORD *)(*(_QWORD *)this + 208LL) != (_DWORD)v121)
    || !v58 && *(_DWORD *)(v93 + 640) )
  {
LABEL_174:
    v57 = *(_QWORD *)this;
    goto LABEL_175;
  }
  ++*(_DWORD *)(v93 + 660);
  v121 = PDEVOBJ::prfntActive((PDEVOBJ *)&v116);
  if ( v121 != *(struct RFONT **)this )
  {
    RFONTOBJ::vRemove(this, &v121, 1LL);
    RFONTOBJ::vInsert(this, &v121, 1LL);
    PDEVOBJ::prfntActive((PDEVOBJ *)&v116, v121);
  }
LABEL_145:
  SEMOBJ::vUnlock((SEMOBJ *)&v134);
  v31 = 1;
  *(_QWORD *)(*(_QWORD *)a2 + 1744LL) = *(_QWORD *)this;
  *(_DWORD *)(*(_QWORD *)a2 + 252LL) &= ~1u;
LABEL_146:
  v70 = v133;
LABEL_147:
  if ( v41 && !v70 )
  {
    v140 = 0LL;
    v141 = 0LL;
    GreAcquireSemaphore(ghsemPublicPFT);
    --*(_DWORD *)(v41 + 68);
    if ( !*(_DWORD *)(v41 + 56)
      && !*(_DWORD *)(v41 + 60)
      && !*(_QWORD *)(v41 + 144)
      && !*(_DWORD *)(v41 + 68)
      && !*(_DWORD *)(v41 + 64) )
    {
      PFFOBJ::vPFFC_Delete((PFFOBJ *)v132, (struct PFFCLEANUP *)&v140);
      v8 = 1;
    }
    if ( ghsemPublicPFT )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPublicPFT);
      GreReleaseSemaphoreInternal(ghsemPublicPFT);
    }
    if ( v8 )
      vCleanupFontFile((struct PFFCLEANUP *)&v140);
  }
LABEL_36:
  if ( v17 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v17);
  return v31;
}
