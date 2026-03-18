/*
 * XREFs of ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00A9250
 * Callers:
 *     GreGetTextMetricsW @ 0x1C0024D94 (GreGetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x1C0024ECC (GreGetTextExtentW.c)
 *     GreGetGlyphOutlineInternal @ 0x1C00264BC (GreGetGlyphOutlineInternal.c)
 *     NtGdiGetWidthTable @ 0x1C005EBE0 (NtGdiGetWidthTable.c)
 *     ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1C005FD4C (-ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C00620D4 (GreGetOutlineTextMetricsInternalW.c)
 *     GreGetTextCharsetInfo @ 0x1C009D574 (GreGetTextCharsetInfo.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C00AC7E0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     GreGetCharABCWidthsW @ 0x1C00F1738 (GreGetCharABCWidthsW.c)
 *     GreGetCharWidthW @ 0x1C00F70D4 (GreGetCharWidthW.c)
 *     GreFontIsLinked @ 0x1C0108F48 (GreFontIsLinked.c)
 *     NtGdiQueryFontAssocInfo @ 0x1C010A630 (NtGdiQueryFontAssocInfo.c)
 *     GreGetGlyphIndicesW @ 0x1C010B4F8 (GreGetGlyphIndicesW.c)
 *     GreGetCharWidthInfo @ 0x1C0114AF4 (GreGetCharWidthInfo.c)
 *     NtGdiGetETM @ 0x1C0134190 (NtGdiGetETM.c)
 *     GreGetKerningPairs @ 0x1C0134784 (GreGetKerningPairs.c)
 *     GreGetUFI @ 0x1C0144D40 (GreGetUFI.c)
 *     NtGdiGetLinkedUFIs @ 0x1C01451A0 (NtGdiGetLinkedUFIs.c)
 *     GreGetFontUnicodeRanges @ 0x1C0150CB8 (GreGetFontUnicodeRanges.c)
 *     GreGetRealizationInfo @ 0x1C015D9E8 (GreGetRealizationInfo.c)
 *     GreGetTextExtentExW @ 0x1C015EFE8 (GreGetTextExtentExW.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C027AD8C (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 *     ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C0297584 (-GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 * Callees:
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C001D6A0 (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C001D700 (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C0021028 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002120C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C002610C (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOB.c)
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C0058E18 (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C005B3A0 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z @ 0x1C005CF60 (-bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0062FD8 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C006395C (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C00639CC (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00639F4 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0064544 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C00650FC (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C0065230 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     PALLOCMEM2 @ 0x1C00673AC (PALLOCMEM2.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C008D09C (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C00AFAAC (--1RFONTOBJ@@QEAA@XZ.c)
 *     Win32FileInfo @ 0x1C00E30A4 (Win32FileInfo.c)
 *     EngUnmapFontFileFD @ 0x1C0114BE0 (EngUnmapFontFileFD.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C012E68C (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     ??0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z @ 0x1C0296CEC (--0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C02A7E54 (vRemoveAllInactiveRFONTs.c)
 *     ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x1C02B9E9C (-bAttemptReload@PFFOBJ@@QEAAHXZ.c)
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
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  struct PDEV *v100; // rdi
  int v101; // eax
  __int64 v102; // rbx
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  int v106; // eax
  __int64 v107; // rbx
  bool v108; // zf
  unsigned int v109; // eax
  __int64 v110; // rdx
  __int64 v111; // rsi
  __int64 v112; // rcx
  __int64 v113; // rsi
  unsigned int v114; // r13d
  bool v115; // al
  unsigned int v116; // edi
  unsigned int v117; // [rsp+28h] [rbp-D8h]
  bool v118; // [rsp+60h] [rbp-A0h]
  bool v119; // [rsp+61h] [rbp-9Fh]
  __int64 v120; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v121; // [rsp+70h] [rbp-90h] BYREF
  struct PFE *v122; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v123; // [rsp+80h] [rbp-80h]
  struct PDEV *v124; // [rsp+88h] [rbp-78h] BYREF
  struct RFONT *v125; // [rsp+90h] [rbp-70h] BYREF
  int v126; // [rsp+98h] [rbp-68h]
  struct _POINTL v127; // [rsp+A0h] [rbp-60h] BYREF
  int v128[2]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v129; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v130; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v131; // [rsp+C0h] [rbp-40h] BYREF
  int v132; // [rsp+C8h] [rbp-38h]
  int v133; // [rsp+CCh] [rbp-34h]
  __int64 v134; // [rsp+D0h] [rbp-30h]
  __int64 v135; // [rsp+D8h] [rbp-28h]
  _QWORD v136[2]; // [rsp+E0h] [rbp-20h] BYREF
  int v137; // [rsp+F0h] [rbp-10h]
  __int64 v138; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v139; // [rsp+100h] [rbp+0h] BYREF
  __int64 v140; // [rsp+108h] [rbp+8h] BYREF
  int v141; // [rsp+110h] [rbp+10h]
  int v142; // [rsp+114h] [rbp+14h]
  _QWORD v143[2]; // [rsp+118h] [rbp+18h] BYREF
  __int128 v144; // [rsp+128h] [rbp+28h] BYREF
  __int64 v145; // [rsp+138h] [rbp+38h]
  __int64 v146; // [rsp+140h] [rbp+40h] BYREF
  __int64 v147; // [rsp+150h] [rbp+50h] BYREF
  __int64 v148; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v149; // [rsp+170h] [rbp+70h]
  struct _FD_XFORM v150; // [rsp+178h] [rbp+78h] BYREF
  struct RFONT *v151[14]; // [rsp+190h] [rbp+90h] BYREF

  v123 = a4;
  v5 = a4;
  v126 = a3;
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
        v100 = gppdevList;
        if ( gppdevList )
        {
          while ( 1 )
          {
            v101 = *((_DWORD *)v100 + 10);
            if ( (v101 & 0x2000) == 0 )
            {
              if ( (v101 & 0x8000) == 0 )
                break;
              v102 = *(_QWORD *)(*((_QWORD *)v100 + 224) + 48LL);
              if ( v102 == PsGetCurrentProcessWin32Process(v98, v97, v99) )
                break;
            }
            v100 = *(struct PDEV **)v100;
            if ( !v100 )
              goto LABEL_229;
          }
          PDEV::IncrementClientReferenceCount(v100);
        }
LABEL_229:
        EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
        GreReleaseSemaphoreInternal(ghsemDriverMgmt);
        while ( v100 )
        {
          v124 = v100;
          vRemoveAllInactiveRFONTs(v100);
          GreAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
          v100 = *(struct PDEV **)v100;
          if ( v100 )
          {
            while ( 1 )
            {
              v106 = *((_DWORD *)v100 + 10);
              if ( (v106 & 0x2000) == 0 )
              {
                if ( (v106 & 0x8000) == 0 )
                  break;
                v107 = *(_QWORD *)(*((_QWORD *)v100 + 224) + 48LL);
                if ( v107 == PsGetCurrentProcessWin32Process(v104, v103, v105) )
                  break;
              }
              v100 = *(struct PDEV **)v100;
              if ( !v100 )
                goto LABEL_237;
            }
            PDEV::IncrementClientReferenceCount(v100);
          }
LABEL_237:
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          GreReleaseSemaphoreInternal(ghsemDriverMgmt);
          PDEVOBJ::vUnreferencePdev(&v124, 0LL);
        }
      }
    }
  }
  v14 = *(_QWORD *)a2;
  LOBYTE(v9) = 10;
  v120 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 976) + 296LL);
  v16 = HmgShareLock(v15, v9);
  v130 = v16;
  v17 = v16;
  if ( !v16 )
    goto LABEL_286;
  if ( (*(_DWORD *)(v16 + 28) & 1) == 0 )
    goto LABEL_17;
  UserGetHDEV();
  v18 = *(_DWORD *)(v17 + 24);
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v17);
  v17 = 0LL;
  if ( !v120 )
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
    v15 = *(_QWORD *)(v120 + 1448);
  }
  else
  {
    v94 = v18 - 4;
    if ( v94 )
    {
      if ( v94 == 1 )
        v15 = *(_QWORD *)(v120 + 1440);
    }
    else
    {
      v15 = *(_QWORD *)(v120 + 1432);
    }
  }
  LOBYTE(v19) = 10;
  v5 = v123;
  v17 = HmgShareLock(v15, v19);
  v130 = v17;
LABEL_17:
  if ( !v17 )
    goto LABEL_286;
  v20 = lNormAngle((unsigned int)-*(_DWORD *)(v17 + 284));
  v21 = *(_QWORD *)a2;
  v22 = v20;
  LODWORD(v124) = v20;
  v132 = *(_DWORD *)(*(_QWORD *)(v21 + 976) + 208LL);
  v133 = *(_DWORD *)(*(_QWORD *)(v21 + 976) + 108LL) & 1;
  if ( (*(_DWORD *)(*(_QWORD *)(v21 + 976) + 340LL) & 0x1E000) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)&v131, a2, 0x204u, 0);
    v23 = v131;
  }
  else
  {
    v23 = v21 + 320;
    v131 = v21 + 320;
  }
  v24 = !v22 && (*(_DWORD *)(v23 + 32) & 1) != 0 && *(float *)(v23 + 12) >= 0.0 && *(float *)v23 >= 0.0;
  v25 = *(_DWORD **)this;
  v128[0] = v24;
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
        if ( EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v131, (struct MATRIX *)(*(_QWORD *)this + 172LL)) )
        {
          *(_DWORD *)(*(_QWORD *)a2 + 252LL) &= ~1u;
          goto LABEL_35;
        }
      }
    }
  }
LABEL_43:
  if ( (*(_DWORD *)(v120 + 40) & 0x40) == 0 )
    PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v120);
  memset(v151, 0, sizeof(v151));
  v33 = *(_QWORD *)this;
  if ( !*(_QWORD *)this || !*(_DWORD *)(v33 + 660) )
    goto LABEL_56;
  v34 = *(_DWORD *)(v33 + 840);
  if ( v34 <= 0xA )
  {
    v35 = v151;
    v36 = 0;
LABEL_49:
    InactiveHelper = RFONTOBJ::bMakeInactiveHelper((struct RFONT **)this, v35);
    LODWORD(v125) = InactiveHelper;
    v38 = *v35;
    if ( *v35 )
    {
      v96 = 0LL;
      do
      {
        v122 = v38;
        RFONTOBJ::bMakeInactiveHelper(&v122, 0LL);
        v122 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v122);
        v38 = v35[++v96];
      }
      while ( v38 );
      InactiveHelper = (int)v125;
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
  v35 = (struct RFONT **)PALLOCMEM2(8 * v34 + 32, 1718382187LL, 1);
  if ( v35 )
  {
    v36 = 1;
    goto LABEL_49;
  }
LABEL_55:
  v22 = (int)v124;
LABEL_56:
  v39 = *(_BYTE *)(v17 + 297) != 0 ? 0x20 : 0;
  if ( *(_BYTE *)(v17 + 298) )
    v39 |= 0x80u;
  v40 = *(_QWORD *)a2;
  v41 = 0LL;
  v136[0] = 0LL;
  *(_DWORD *)(v40 + 1736) = v39;
  *(_DWORD *)(*(_QWORD *)a2 + 1740LL) = v22;
  v150 = 0LL;
  v121 = 0;
  v127 = 0LL;
  v129 = 0;
  v118 = (*(_DWORD *)(v120 + 40) & 1) == 0 && (*(_DWORD *)(v17 + 28) & 2) != 0;
  v139 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v42 = v123 & 4;
  LODWORD(v125) = v42;
  v43 = LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v130, a2, &v121, &v127, &v129, v42);
  v122 = v43;
  v44 = v43;
  if ( !v43 )
    goto LABEL_279;
  v45 = *(_QWORD *)v43;
  v146 = v45;
  v46 = *(_DWORD *)(v45 + 52);
  if ( (v46 & 0x2000) != 0 )
    goto LABEL_253;
  if ( (v46 & 0x1000) == 0 )
    goto LABEL_63;
  v108 = *(_DWORD *)(v45 + 36) == 0;
  v109 = 0;
  LODWORD(v124) = 0;
  if ( v108 )
    goto LABEL_251;
  v110 = *(_QWORD *)(v45 + 200);
  do
  {
    v111 = v109;
    v135 = 0LL;
    v134 = 0LL;
    Win32FileInfo(*(PCWSTR *)(*(_QWORD *)(v110 + 8LL * v109) + 80LL));
    v110 = *(_QWORD *)(v45 + 200);
    v112 = *(_QWORD *)(v110 + 8 * v111);
    if ( *(_QWORD *)v112 != v134 || *(_DWORD *)(v112 + 24) != (_DWORD)v135 )
    {
      *(_DWORD *)(v45 + 52) |= 0x2000u;
      v42 = (unsigned int)v125;
LABEL_253:
      if ( (unsigned int)PFFOBJ::bAttemptReload((PFFOBJ *)&v146) )
      {
        GreAcquireSemaphore(ghsemPublicPFT);
        v44 = LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v130, a2, &v121, &v127, &v129, v42);
        v122 = v44;
        goto LABEL_63;
      }
LABEL_278:
      v41 = 0LL;
LABEL_279:
      *(_QWORD *)this = 0LL;
      *(_QWORD *)(*(_QWORD *)a2 + 1744LL) = 0LL;
      SEMOBJ::vUnlock((SEMOBJ *)&v139);
      goto LABEL_280;
    }
    v109 = (_DWORD)v124 + 1;
    LODWORD(v124) = v109;
  }
  while ( v109 < *(_DWORD *)(v45 + 36) );
  v46 = *(_DWORD *)(v45 + 52);
  v44 = v122;
LABEL_251:
  *(_DWORD *)(v45 + 52) = v46 & 0xFFFFEFFF;
LABEL_63:
  if ( !v44 )
    goto LABEL_278;
  v47 = *((_QWORD *)v44 + 4);
  v48 = 0;
  v49 = *(_QWORD *)a2;
  v143[0] = v47;
  if ( v118 )
    v48 = 2;
  v141 = *(_DWORD *)(*(_QWORD *)(v49 + 976) + 208LL);
  v142 = *(_DWORD *)(*(_QWORD *)(v49 + 976) + 108LL) & 1;
  if ( (*(_DWORD *)(*(_QWORD *)(v49 + 976) + 340LL) & 0x1E000) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)&v140, a2, 0x204u, 0);
    v49 = *(_QWORD *)a2;
  }
  else
  {
    v140 = v49 + 320;
  }
  v50 = *(_QWORD *)(v49 + 976);
  v51 = (struct tagLOGFONTW *)(v17 + 276);
  if ( !(*(_DWORD *)(v50 + 208) == 1
       ? bGetNtoD_Win31(&v150, v51, (struct IFIOBJ *)v143, a2, v48, &v127, 0)
       : (unsigned int)bGetNtoD(&v150, v51, (struct IFIOBJ *)v143, a2, &v127)) )
    goto LABEL_278;
  eYX = v150.eYX;
  if ( LODWORD(v150.eYX) )
  {
    LODWORD(eYX) = LODWORD(v150.eYX) ^ 0x80000000;
    LODWORD(v150.eYX) ^= 0x80000000;
  }
  eYY = v150.eYY;
  if ( LODWORD(v150.eYY) )
  {
    LODWORD(eYY) = LODWORD(v150.eYY) ^ 0x80000000;
    LODWORD(v150.eYY) ^= 0x80000000;
  }
  if ( (*(_DWORD *)(v143[0] + 48LL) & 0x1000000) != 0 )
  {
    v150.eXX = eYY;
    v150.eXY = eYX;
    if ( eYX != 0.0 )
      LODWORD(v150.eXY) = LODWORD(eYX) ^ 0x80000000;
  }
  if ( (*(_DWORD *)(v143[0] + 48LL) & 1) != 0 && *(int *)(v17 + 276) <= 0 )
    v121 |= 0x8000u;
  v137 = 0;
  v41 = *(_QWORD *)v122;
  v136[0] = v41;
  ++*(_DWORD *)(v41 + 68);
  if ( ghsemPublicPFT )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPublicPFT);
    GreReleaseSemaphoreInternal(ghsemPublicPFT);
  }
  v55 = *(_QWORD *)(*(_QWORD *)a2 + 976LL);
  v138 = ghsemRFONTList;
  LODWORD(v125) = *(_DWORD *)(v55 + 208);
  LODWORD(v124) = v121;
  GreAcquireSemaphore(ghsemRFONTList);
  v56 = v120;
  if ( (*(_DWORD *)(v120 + 40) & 0x800000) != 0 )
    v57 = *(_QWORD *)(*(_QWORD *)(v120 + 3520) + 1520LL);
  else
    v57 = *(_QWORD *)(v120 + 1520);
  v58 = v128[0];
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
        if ( *(struct PFE **)(v60 + 120) == v122 && v123 == (*(_DWORD *)(v60 + 84) & 6) )
        {
          v72 = *(_DWORD *)(v60 + 12);
          if ( (((unsigned int)v124 ^ v72) & 0xE000) == 0 )
          {
            v73 = ((unsigned int)v124 ^ v72) & 0x50010000;
            if ( !v73 )
              goto LABEL_290;
            if ( ((unsigned int)v124 & 0x10000) != 0 && (v72 & 0x20000) != 0 )
              v73 = ((unsigned int)v124 ^ v72) & 0x50000000;
            if ( ((unsigned int)v124 & 0x10000000) != 0 && (v72 & 0x10000000) == 0 && (v72 & 0x2000000) != 0 || !v73 )
            {
LABEL_290:
              if ( !*(_DWORD *)(v60 + 40) )
              {
                v74 = *(_QWORD *)&v150.eXX - *(_QWORD *)(v60 + 136);
                if ( *(_QWORD *)&v150.eXX == *(_QWORD *)(v60 + 136) )
                  v74 = *(_QWORD *)&v150.eYX - *(_QWORD *)(v60 + 144);
                if ( !v74 && v126 == *(_DWORD *)(v60 + 656) )
                {
                  if ( EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v131, (struct MATRIX *)(v60 + 172)) )
                  {
                    v75 = *(_QWORD *)this;
                    if ( *(_DWORD *)(*(_QWORD *)this + 208LL) == (_DWORD)v125 && (v58 || !*(_DWORD *)(v75 + 640)) )
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
      v76 = v120;
      if ( (*(_DWORD *)(v120 + 40) & 0x800000) != 0 )
        v77 = *(_QWORD *)(*(_QWORD *)(v120 + 3520) + 1528LL);
      else
        v77 = *(_QWORD *)(v120 + 1528);
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
          if ( (*(_DWORD *)(v120 + 40) & 0x800000) != 0 )
            v82 = *(_DWORD *)(*(_QWORD *)(v120 + 3520) + 1536LL);
          else
            v82 = *(_DWORD *)(v120 + 1536);
          v83 = v82 - 1;
          if ( (*(_DWORD *)(v120 + 40) & 0x800000) != 0 )
            *(_DWORD *)(*(_QWORD *)(v120 + 3520) + 1536LL) = v83;
          else
            *(_DWORD *)(v120 + 1536) = v83;
          v84 = v120;
          if ( (*(_DWORD *)(v120 + 40) & 0x800000) != 0 )
            v85 = *(_QWORD *)(*(_QWORD *)(v120 + 3520) + 1520LL);
          else
            v85 = *(_QWORD *)(v120 + 1520);
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
            v84 = v120;
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
      v76 = v120;
      goto LABEL_128;
    }
LABEL_93:
    *(_QWORD *)this = 0LL;
    if ( ghsemRFONTList )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemRFONTList);
      GreReleaseSemaphoreInternal(ghsemRFONTList);
    }
    v61 = v128[0];
    v62 = v122;
    if ( (unsigned int)RFONTOBJ::bRealizeFont(
                         this,
                         a2,
                         (struct PDEVOBJ *)&v120,
                         (struct tagENUMLOGFONTEXDVW *)(v17 + 276),
                         v122,
                         &v150,
                         &v127,
                         v121,
                         0,
                         v126,
                         v128[0],
                         v123) )
    {
LABEL_96:
      if ( *(_DWORD *)(v17 + 280) )
      {
        *(_QWORD *)v128 = ghsemPublicPFT;
        GreAcquireSemaphore(ghsemPublicPFT);
        v63 = *((_QWORD *)v62 + 4);
        v64 = 420LL;
        v147 = v63;
        v65 = *(_DWORD *)(v17 + 272);
        if ( v65 < 0x1A4 )
          v64 = v65;
        v66 = (struct tagLOGFONTW *)AllocFreeTmpBuffer((unsigned int)v64);
        v67 = v66;
        if ( v66 )
        {
          memmove(v66, (const void *)(v17 + 276), v64);
          v67->lfWidth = 0;
          if ( v118 )
            v68 = 2;
          else
            v68 = 0;
          if ( !(unsigned int)PFEOBJ::bSetFontXform(
                                (PFEOBJ *)&v127,
                                a2,
                                v67,
                                (struct _FD_XFORM *)(*(_QWORD *)this + 152LL),
                                v68,
                                v117,
                                &v127,
                                (struct IFIOBJ *)&v147,
                                0) )
            *(struct _FD_XFORM *)(*(_QWORD *)this + 152LL) = v150;
          FreeTmpBuffer(v67);
        }
        else
        {
          *(struct _FD_XFORM *)(*(_QWORD *)this + 152LL) = v150;
        }
        SEMOBJ::vUnlock((SEMOBJ *)v128);
      }
      v69 = *(_QWORD *)this;
      v70 = 1;
      v71 = *(_QWORD *)a2;
      v31 = 1;
      v137 = 1;
      *(_QWORD *)(v71 + 1744) = v69;
      *(_DWORD *)(*(_QWORD *)a2 + 252LL) &= ~1u;
      goto LABEL_147;
    }
    v119 = 0;
    UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
      (UmfdClientSideFileViewMapper *)&v148,
      (struct PFFOBJ *)v136);
    v113 = v148;
    v114 = v149;
    if ( v149 == *(_DWORD *)(v148 + 36) )
    {
      v115 = (unsigned int)RFONTOBJ::bRealizeFont(
                             this,
                             a2,
                             (struct PDEVOBJ *)&v120,
                             (struct tagENUMLOGFONTEXDVW *)(v17 + 276),
                             v122,
                             &v150,
                             &v127,
                             v121,
                             0,
                             v126,
                             v61,
                             v123) != 0;
      v119 = v115;
    }
    else
    {
      v115 = 0;
    }
    v116 = 0;
    if ( v114 )
    {
      do
      {
        if ( v116 >= *(_DWORD *)(v113 + 36) )
          break;
        EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(v113 + 200) + 8LL * v116++));
      }
      while ( v116 < v114 );
      v115 = v119;
    }
    v41 = v136[0];
    if ( v115 )
    {
      v62 = v122;
      goto LABEL_96;
    }
    *(_QWORD *)this = 0LL;
    *(_QWORD *)(*(_QWORD *)a2 + 1744LL) = 0LL;
LABEL_280:
    v31 = 0;
    goto LABEL_146;
  }
  v59 = v122;
  while ( *(struct PFE **)(v57 + 120) != v59 )
  {
LABEL_86:
    v57 = *(_QWORD *)(v57 + 672);
    *(_QWORD *)this = v57;
    if ( !v57 )
    {
      v56 = v120;
      goto LABEL_88;
    }
  }
  if ( v123 != (*(_DWORD *)(v57 + 84) & 6) )
  {
LABEL_175:
    v59 = v122;
    goto LABEL_86;
  }
  v90 = *(_DWORD *)(v57 + 12);
  if ( (((unsigned int)v124 ^ v90) & 0xE000) != 0 )
    goto LABEL_174;
  v91 = ((unsigned int)v124 ^ v90) & 0x50010000;
  if ( v91 )
  {
    if ( ((unsigned int)v124 & 0x10000) != 0 && (v90 & 0x20000) != 0 )
      v91 = ((unsigned int)v124 ^ v90) & 0x50000000;
    if ( (((unsigned int)v124 & 0x10000000) == 0 || (v90 & 0x10000000) != 0 || (v90 & 0x2000000) == 0) && v91 )
      goto LABEL_174;
  }
  if ( *(_DWORD *)(v57 + 40) )
    goto LABEL_174;
  v92 = *(_QWORD *)&v150.eXX - *(_QWORD *)(v57 + 136);
  if ( *(_QWORD *)&v150.eXX == *(_QWORD *)(v57 + 136) )
    v92 = *(_QWORD *)&v150.eYX - *(_QWORD *)(v57 + 144);
  if ( v92
    || v126 != *(_DWORD *)(v57 + 656)
    || !EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v131, (struct MATRIX *)(v57 + 172))
    || (v93 = *(_QWORD *)this, *(_DWORD *)(*(_QWORD *)this + 208LL) != (_DWORD)v125)
    || !v58 && *(_DWORD *)(v93 + 640) )
  {
LABEL_174:
    v57 = *(_QWORD *)this;
    goto LABEL_175;
  }
  ++*(_DWORD *)(v93 + 660);
  v125 = PDEVOBJ::prfntActive((PDEVOBJ *)&v120);
  if ( v125 != *(struct RFONT **)this )
  {
    RFONTOBJ::vRemove((__int64)this, (unsigned __int64 *)&v125, 1);
    RFONTOBJ::vInsert((unsigned __int64 *)this, (unsigned __int64 *)&v125, 1);
    PDEVOBJ::prfntActive((PDEVOBJ *)&v120, v125);
  }
LABEL_145:
  SEMOBJ::vUnlock((SEMOBJ *)&v138);
  v31 = 1;
  *(_QWORD *)(*(_QWORD *)a2 + 1744LL) = *(_QWORD *)this;
  *(_DWORD *)(*(_QWORD *)a2 + 252LL) &= ~1u;
LABEL_146:
  v70 = v137;
LABEL_147:
  if ( v41 && !v70 )
  {
    v144 = 0LL;
    v145 = 0LL;
    GreAcquireSemaphore(ghsemPublicPFT);
    --*(_DWORD *)(v41 + 68);
    if ( !*(_DWORD *)(v41 + 56)
      && !*(_DWORD *)(v41 + 60)
      && !*(_QWORD *)(v41 + 144)
      && !*(_DWORD *)(v41 + 68)
      && !*(_DWORD *)(v41 + 64) )
    {
      PFFOBJ::vPFFC_Delete((PFFOBJ *)v136, (struct PFFCLEANUP *)&v144);
      v8 = 1;
    }
    if ( ghsemPublicPFT )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPublicPFT);
      GreReleaseSemaphoreInternal(ghsemPublicPFT);
    }
    if ( v8 )
      vCleanupFontFile((struct PFFCLEANUP *)&v144);
  }
LABEL_36:
  if ( v17 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v17);
  return v31;
}
