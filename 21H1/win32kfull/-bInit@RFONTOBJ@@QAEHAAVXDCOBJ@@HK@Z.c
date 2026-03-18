/*
 * XREFs of ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130
 * Callers:
 *     ?GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z @ 0x61F50 (-GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z.c)
 *     _GreGetTextCharsetInfo@12 @ 0x83EE0 (_GreGetTextCharsetInfo@12.c)
 *     _GreGetFontUnicodeRanges@8 @ 0x840D4 (_GreGetFontUnicodeRanges@8.c)
 *     _GreGetTextMetricsW@8 @ 0x84442 (_GreGetTextMetricsW@8.c)
 *     _NtGdiQueryFontAssocInfo@4 @ 0x84476 (_NtGdiQueryFontAssocInfo@4.c)
 *     _GreFontIsLinked@4 @ 0x84558 (_GreFontIsLinked@4.c)
 *     _GreGetGlyphIndicesW@24 @ 0x8564C (_GreGetGlyphIndicesW@24.c)
 *     _NtGdiGetWidthTable@28 @ 0x85948 (_NtGdiGetWidthTable@28.c)
 *     _GreGetGlyphOutlineInternal@32 @ 0x85B86 (_GreGetGlyphOutlineInternal@32.c)
 *     _GreGetOutlineTextMetricsInternalW@16 @ 0x85F6E (_GreGetOutlineTextMetricsInternalW@16.c)
 *     _GreGetCharABCWidthsW@24 @ 0x866BE (_GreGetCharABCWidthsW@24.c)
 *     ?ulGetFontData2@@YGKAAVDCOBJ@@KKPAXK@Z @ 0x86B04 (-ulGetFontData2@@YGKAAVDCOBJ@@KKPAXK@Z.c)
 *     _GreGetCharWidthW@24 @ 0xC0C72 (_GreGetCharWidthW@24.c)
 *     _GreGetCharWidthInfo@8 @ 0xC3E8C (_GreGetCharWidthInfo@8.c)
 *     _GreGetTextExtentW@20 @ 0xE26D8 (_GreGetTextExtentW@20.c)
 *     _GreGetRealizationInfo@8 @ 0xF6E26 (_GreGetRealizationInfo@8.c)
 *     _GreGetTextExtentExW@32 @ 0xF83A4 (_GreGetTextExtentExW@32.c)
 *     ?DoFontManagement@@YGKAAVDCOBJ@@KKPAXK1@Z @ 0x1D700B (-DoFontManagement@@YGKAAVDCOBJ@@KKPAXK1@Z.c)
 *     _GreGetUFI@28 @ 0x1D8D94 (_GreGetUFI@28.c)
 *     _NtGdiGetLinkedUFIs@12 @ 0x1D9578 (_NtGdiGetLinkedUFIs@12.c)
 *     _GreGetKerningPairs@12 @ 0x1EBB0B (_GreGetKerningPairs@12.c)
 *     ?GreGetStringBitmapW@@YGIPAUHDC__@@PAGIPAUSTRINGBITMAP@@I@Z @ 0x1F7DA3 (-GreGetStringBitmapW@@YGIPAUHDC__@@PAGIPAUSTRINGBITMAP@@I@Z.c)
 *     _NtGdiGetETM@8 @ 0x22132A (_NtGdiGetETM@8.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SG_NXZ @ 0x46590 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SG_NXZ.c)
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?ppfeMapFont@LFONTOBJ@@QAEPAVPFE@@AAVXDCOBJ@@PAKPAU_POINTL@@1H@Z @ 0x49B40 (-ppfeMapFont@LFONTOBJ@@QAEPAVPFE@@AAVXDCOBJ@@PAKPAU_POINTL@@1H@Z.c)
 *     ?bGetNtoD_Win31@@YGHPAU_FD_XFORM@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@KQAU_POINTL@@H@Z @ 0x67D4A (-bGetNtoD_Win31@@YGHPAU_FD_XFORM@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@KQAU_POINTL@@H@Z.c)
 *     ?prfntActive@PDEVOBJ@@QAEPAVRFONT@@PAV2@@Z @ 0x846A8 (-prfntActive@PDEVOBJ@@QAEPAVRFONT@@PAV2@@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@@QAU_POINTL@@KKHHK@Z @ 0x84984 (-bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@.c)
 *     ?vInsert@RFONTOBJ@@QAEXPAPAVRFONT@@W4_RFL_TYPE@@@Z @ 0x851B6 (-vInsert@RFONTOBJ@@QAEXPAPAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?vMakeInactive@RFONTOBJ@@QAEXXZ @ 0x8D42A (-vMakeInactive@RFONTOBJ@@QAEXXZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QAEHPAPAVRFONT@@@Z @ 0x8D4E8 (-bMakeInactiveHelper@RFONTOBJ@@QAEHPAPAVRFONT@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?vRemove@RFONTOBJ@@QAEXPAPAVRFONT@@W4_RFL_TYPE@@@Z @ 0xA3954 (-vRemove@RFONTOBJ@@QAEXPAPAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?bSetFontXform@PFEOBJ@@QAEHAAVXDCOBJ@@PAUtagLOGFONTW@@PAU_FD_XFORM@@KKQAU_POINTL@@AAVIFIOBJ@@H@Z @ 0xCC820 (-bSetFontXform@PFEOBJ@@QAEHAAVXDCOBJ@@PAUtagLOGFONTW@@PAU_FD_XFORM@@KKQAU_POINTL@@AAVIFIOBJ@@H@Z.c)
 *     ?vCleanupFontFile@@YGXPAVPFFCLEANUP@@@Z @ 0xCDEB6 (-vCleanupFontFile@@YGXPAVPFFCLEANUP@@@Z.c)
 *     ?vPFFC_Delete@PFFOBJ@@QAEXPAVPFFCLEANUP@@@Z @ 0xCE01C (-vPFFC_Delete@PFFOBJ@@QAEXPAVPFFCLEANUP@@@Z.c)
 *     ??0UmfdClientSideFileViewMapper@@QAE@AAVPFFOBJ@@@Z @ 0xD3126 (--0UmfdClientSideFileViewMapper@@QAE@AAVPFFOBJ@@@Z.c)
 *     ?UnmapMappedViews@UmfdClientSideFileViewMapper@@AAEXXZ @ 0xD47CC (-UnmapMappedViews@UmfdClientSideFileViewMapper@@AAEXXZ.c)
 *     ?IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SG_NXZ @ 0xDBA9E (-IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SG_NXZ.c)
 *     _Win32FileInfo@12 @ 0xDEF22 (_Win32FileInfo@12.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QAEHXZ @ 0xEC81A (-bGetDeviceFonts@PDEVOBJ@@QAEHXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ??1SEMOBJ@@QAE@XZ @ 0x1CCD37 (--1SEMOBJ@@QAE@XZ.c)
 *     _vRemoveAllInactiveRFONTs@4 @ 0x209F01 (_vRemoveAllInactiveRFONTs@4.c)
 *     ?bAttemptReload@PFFOBJ@@QAEHXZ @ 0x221621 (-bAttemptReload@PFFOBJ@@QAEHXZ.c)
 *     ?bGetNtoD@@YGHPAU_FD_XFORM@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@QAU_POINTL@@@Z @ 0x247772 (-bGetNtoD@@YGHPAU_FD_XFORM@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@QAU_POINTL@@@Z.c)
 */

int __thiscall RFONTOBJ::bInit(RFONTOBJ *this, struct XDCOBJ *a2, int a3, unsigned int a4)
{
  int v5; // edx
  bool v6; // bl
  int v7; // esi
  int v8; // esi
  int v9; // edi
  int v10; // eax
  struct PDEV *v11; // edi
  int v12; // eax
  int v13; // esi
  int v14; // eax
  int v15; // esi
  struct XDCOBJ *v16; // esi
  int v17; // ecx
  int v18; // ebx
  int v19; // eax
  int v20; // edi
  int v21; // esi
  int v22; // edx
  int v23; // esi
  int v24; // esi
  struct PFE *v25; // eax
  int v26; // edx
  struct PFE *v27; // ebx
  int v28; // eax
  _DWORD *v29; // edx
  int v30; // esi
  RFONTOBJ *v31; // esi
  int v32; // eax
  unsigned int v33; // ecx
  struct RFONT **v34; // ebx
  int v35; // ecx
  int v36; // ebx
  int v37; // ecx
  int v38; // edx
  int v39; // ecx
  int v40; // eax
  int v41; // ebx
  int InactiveHelper; // eax
  struct RFONT *v43; // ecx
  int v44; // esi
  void (__fastcall *v45)(_DWORD); // ebx
  int v46; // ecx
  bool v47; // zf
  struct PFE *v48; // eax
  _DWORD *v49; // ebx
  int v50; // edx
  unsigned int v51; // ecx
  int v52; // eax
  int v53; // ecx
  const WCHAR *v54; // ecx
  _DWORD *v55; // edx
  struct tagLOGFONTW *v56; // edx
  int v57; // ecx
  FLOATL eYX; // eax
  FLOATL eYY; // ecx
  unsigned int v61; // ebx
  int v62; // eax
  _DWORD *v63; // eax
  int v64; // ecx
  RFONTOBJ *v65; // edx
  RFONTOBJ *v66; // eax
  struct PFE *v67; // edx
  int v68; // edx
  int v69; // eax
  _DWORD *v70; // ebx
  struct _FD_XFORM *v71; // edx
  bool v72; // cf
  int v73; // eax
  int v74; // ebx
  int v75; // ecx
  int v76; // eax
  _DWORD *v77; // edx
  struct _FD_XFORM *v78; // ecx
  _DWORD *v79; // ebx
  struct PFE *v80; // ebx
  RFONTOBJ *v81; // esi
  bool v82; // bl
  int v83; // eax
  RFONTOBJ *v84; // esi
  _DWORD *v85; // eax
  struct RFONT *v86; // ecx
  int v87; // edx
  struct RFONT *v88; // ecx
  _DWORD *v89; // esi
  int v90; // eax
  int v91; // ecx
  int v92; // ecx
  _DWORD *v93; // eax
  int v94; // esi
  _DWORD *v95; // edx
  _DWORD *v96; // ebx
  _DWORD *v97; // eax
  size_t v98; // ebx
  struct tagLOGFONTW *v99; // esi
  PFEOBJ *v100; // ecx
  int v101; // edx
  int v102; // eax
  _DWORD *v103; // ecx
  struct _POINTL *v105; // [esp+18h] [ebp-E0h]
  struct _POINTL *v106; // [esp+1Ch] [ebp-DCh]
  int v108; // [esp+30h] [ebp-C8h] BYREF
  struct RFONT *v109; // [esp+34h] [ebp-C4h] BYREF
  int i; // [esp+38h] [ebp-C0h] BYREF
  unsigned int v111; // [esp+3Ch] [ebp-BCh] BYREF
  struct PFE *v112; // [esp+40h] [ebp-B8h]
  unsigned int v113; // [esp+44h] [ebp-B4h] BYREF
  unsigned int v114; // [esp+48h] [ebp-B0h]
  int v115; // [esp+4Ch] [ebp-ACh]
  struct IFIOBJ *v116; // [esp+50h] [ebp-A8h]
  int v117; // [esp+54h] [ebp-A4h] BYREF
  _DWORD *v118; // [esp+58h] [ebp-A0h] BYREF
  int v119; // [esp+5Ch] [ebp-9Ch]
  int v120; // [esp+60h] [ebp-98h]
  struct _POINTL v121; // [esp+64h] [ebp-94h] BYREF
  int v122; // [esp+6Ch] [ebp-8Ch]
  unsigned int v123; // [esp+70h] [ebp-88h] BYREF
  _DWORD v124[2]; // [esp+74h] [ebp-84h] BYREF
  int v125; // [esp+7Ch] [ebp-7Ch]
  struct _FD_XFORM v126; // [esp+80h] [ebp-78h] BYREF
  _DWORD v127[3]; // [esp+94h] [ebp-64h] BYREF
  int v128; // [esp+A0h] [ebp-58h]
  int v129; // [esp+A4h] [ebp-54h]
  struct _FD_XFORM v130; // [esp+ACh] [ebp-4Ch] BYREF
  _BYTE v131[56]; // [esp+BCh] [ebp-3Ch] BYREF

  v114 = a4;
  if ( !UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent
    || !UmfdHostLifeTimeManager::s_InitialFontsAddedEvent )
  {
    return 0;
  }
  if ( !KeReadStateEvent((PRKEVENT)UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent)
    || !UmfdHostLifeTimeManager::s_SessionRasterizerInitialized
    || !KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent) )
  {
    v6 = KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent) != 0;
    if ( !UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost()
      && !UmfdHostLifeTimeManager::IsCurrentThreadAddInitialFontsThread() )
    {
      if ( (v6 || !UserIsUserCritSecIn())
        && KeWaitForSingleObject(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent, Executive, 0, 0, 0) >= 0
        && UmfdHostLifeTimeManager::s_SessionRasterizerInitialized )
      {
        KeWaitForSingleObject(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, Executive, 0, 0, 0);
        goto LABEL_13;
      }
      return 0;
    }
  }
LABEL_13:
  v7 = *(_DWORD *)(*(_DWORD *)a2 + 1564);
  *(_DWORD *)this = v7;
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 + 548);
    v9 = 0;
    if ( v8 )
    {
      GreAcquireSemaphore(v8);
      v10 = *(_DWORD *)(*(_DWORD *)this + 56);
      if ( (v10 & 8) != 0 )
      {
        v9 = 1;
        *(_DWORD *)(*(_DWORD *)this + 56) = v10 & 0xFFFFFFF7;
      }
      EtwTraceGreLockReleaseSemaphore(L"hsem", v8);
      GreReleaseSemaphoreInternal(v8);
      if ( v9 == 1 )
      {
        GreAcquireSemaphore(_ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive(&stru_100BA6, _ghsemDriverMgmt, 13);
        v11 = gppdevList;
        if ( gppdevList )
        {
          while ( 1 )
          {
            v12 = *((_DWORD *)v11 + 6);
            if ( (v12 & 0x2000) == 0 )
            {
              if ( (v12 & 0x8000) == 0 )
                break;
              v13 = *(_DWORD *)(*((_DWORD *)v11 + 276) + 28);
              if ( v13 == PsGetCurrentProcessWin32Process() )
                break;
            }
            v11 = *(struct PDEV **)v11;
            if ( !v11 )
              goto LABEL_25;
          }
          PDEV::IncrementClientReferenceCount(v11);
        }
LABEL_25:
        EtwTraceGreLockReleaseSemaphore(&stru_100BA6, _ghsemDriverMgmt);
        GreReleaseSemaphoreInternal(_ghsemDriverMgmt);
        while ( v11 )
        {
          i = (int)v11;
          vRemoveAllInactiveRFONTs(v11);
          GreAcquireSemaphore(_ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(&stru_100BA6, _ghsemDriverMgmt, 13);
          v11 = *(struct PDEV **)v11;
          if ( v11 )
          {
            while ( 1 )
            {
              v14 = *((_DWORD *)v11 + 6);
              if ( (v14 & 0x2000) == 0 )
              {
                if ( (v14 & 0x8000) == 0 )
                  break;
                v15 = *(_DWORD *)(*((_DWORD *)v11 + 276) + 28);
                if ( v15 == PsGetCurrentProcessWin32Process() )
                  break;
              }
              v11 = *(struct PDEV **)v11;
              if ( !v11 )
                goto LABEL_33;
            }
            PDEV::IncrementClientReferenceCount(v11);
          }
LABEL_33:
          EtwTraceGreLockReleaseSemaphore(&stru_100BA6, _ghsemDriverMgmt);
          GreReleaseSemaphoreInternal(_ghsemDriverMgmt);
          PDEVOBJ::vUnreferencePdev(&i, 0);
        }
      }
    }
  }
  v16 = a2;
  LOBYTE(v5) = 10;
  v17 = *(_DWORD *)a2;
  v108 = *(_DWORD *)(*(_DWORD *)a2 + 36);
  v18 = *(_DWORD *)(*(_DWORD *)(v17 + 1020) + 300);
  v19 = HmgShareLock(v18, v5);
  v20 = v19;
  v109 = (struct RFONT *)v19;
  if ( !v19 )
    goto LABEL_256;
  if ( (*(_BYTE *)(v19 + 20) & 1) == 0 )
    goto LABEL_44;
  UserGetHDEV();
  v21 = *(_DWORD *)(v20 + 16);
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v20);
  v20 = 0;
  if ( !v108 )
  {
LABEL_256:
    RFONTOBJ::vMakeInactive(this);
    *(_DWORD *)this = 0;
    v41 = 0;
    *(_DWORD *)(*(_DWORD *)a2 + 1564) = 0;
    goto LABEL_257;
  }
  v23 = v21 - 4;
  if ( v23 )
  {
    v24 = v23 - 1;
    if ( v24 )
    {
      if ( v24 == 1 )
        v18 = *(_DWORD *)(v108 + 904);
    }
    else
    {
      v18 = *(_DWORD *)(v108 + 900);
    }
  }
  else
  {
    v18 = *(_DWORD *)(v108 + 896);
  }
  LOBYTE(v22) = 10;
  v16 = a2;
  v20 = HmgShareLock(v18, v22);
  v109 = (struct RFONT *)v20;
LABEL_44:
  if ( !v20 )
    goto LABEL_256;
  v25 = (struct PFE *)lNormAngle(-*(_DWORD *)(v20 + 288));
  v26 = *(_DWORD *)v16;
  v27 = v25;
  v112 = v25;
  v127[1] = *(_DWORD *)(*(_DWORD *)(v26 + 1020) + 228);
  v127[2] = *(_DWORD *)(*(_DWORD *)(v26 + 1020) + 148) & 1;
  if ( (*(_DWORD *)(*(_DWORD *)(v26 + 1020) + 340) & 0x1E000) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)v127, v16, 0x204u, 0);
    v28 = v127[0];
  }
  else
  {
    v28 = v26 + 240;
    v127[0] = v26 + 240;
  }
  if ( v27 || (*(_BYTE *)(v28 + 56) & 1) == 0 || *(int *)(v28 + 24) < 0 || (v115 = 1, *(int *)v28 < 0) )
    v115 = 0;
  v29 = *(_DWORD **)this;
  if ( !*(_DWORD *)this )
  {
    v30 = *(_DWORD *)v16;
LABEL_55:
    *(_DWORD *)(v30 + 1552) = *(_DWORD *)(*(_DWORD *)(v30 + 1020) + 300);
    goto LABEL_56;
  }
  v35 = *(_DWORD *)v16;
  v30 = v35;
  v36 = *(_DWORD *)(v35 + 1020);
  if ( *(_DWORD *)(v36 + 300) != *(_DWORD *)(v35 + 1552) || v115 != 1 && v29[160] )
    goto LABEL_55;
  if ( v29[46] != *(_DWORD *)(v36 + 228) || a3 != v29[164] || v114 != (v29[14] & 6) )
    goto LABEL_56;
  if ( (*(_BYTE *)(v35 + 24) & 1) != 0 || *(_DWORD *)(v35 + 20) == 1 )
  {
    v37 = *(_DWORD *)(*(_DWORD *)(v35 + 1564) + 12);
    if ( ((unsigned int)&loc_200004 & v37) != 0 )
    {
      v38 = 0;
      if ( (_gulFontInformation & 2) != 0 )
      {
        v38 = 0x10000;
        if ( (_gulFontInformation & 0x10) != 0 )
          v38 = 268500992;
      }
      if ( (v37 & 4) != 0 )
      {
        v39 = v37 & 0x10010000;
        if ( v38 != v39 )
          goto LABEL_56;
      }
      else
      {
        if ( ((v38 ^ v37) & 0x10000) != 0 )
          goto LABEL_56;
        v39 = v37 & 0x10010000;
      }
      if ( v39 && UserIsRemoteConnection() )
        goto LABEL_56;
    }
  }
  v40 = *(_DWORD *)a2;
  if ( !*(_DWORD *)(*(_DWORD *)a2 + 468) && !*(_DWORD *)(v40 + 472)
    || !*(_DWORD *)(v40 + 476) && !*(_DWORD *)(v40 + 480) )
  {
    if ( (*(_BYTE *)(v40 + 176) & 1) != 0 )
    {
      v31 = this;
      if ( !EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)v127, (struct MATRIX *)(*(_DWORD *)this + 124)) )
        goto LABEL_57;
      *(_DWORD *)(*(_DWORD *)a2 + 176) &= ~1u;
    }
    v41 = 1;
    goto LABEL_257;
  }
LABEL_56:
  v31 = this;
LABEL_57:
  if ( (*(_BYTE *)(v108 + 24) & 0x40) == 0 )
    PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v108);
  memset(v131, 0, sizeof(v131));
  v32 = *(_DWORD *)v31;
  if ( !*(_DWORD *)v31 || !*(_DWORD *)(v32 + 660) )
    goto LABEL_98;
  v33 = *(_DWORD *)(v32 + 780);
  if ( v33 <= 0xA )
  {
    v34 = (struct RFONT **)v131;
    v116 = 0;
    goto LABEL_92;
  }
  v34 = (struct RFONT **)PALLOCMEM2(4 * v33 + 16, 1718382187, 1);
  if ( !v34 )
  {
LABEL_98:
    v45 = (void (__fastcall *)(_DWORD))GreAcquireSemaphore;
    goto LABEL_99;
  }
  v116 = (struct IFIOBJ *)1;
LABEL_92:
  InactiveHelper = RFONTOBJ::bMakeInactiveHelper(v31, v34);
  v43 = *v34;
  v44 = 0;
  for ( i = InactiveHelper; v43; ++v44 )
  {
    v111 = (unsigned int)v43;
    RFONTOBJ::bMakeInactiveHelper((RFONTOBJ *)&v111, 0);
    v111 = 0;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v111);
    v43 = v34[v44 + 1];
  }
  if ( v116 )
    Win32FreePool(v34);
  v45 = (void (__fastcall *)(_DWORD))GreAcquireSemaphore;
  if ( i )
  {
    GreAcquireSemaphore(ghsemEUDC1);
    --gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
  }
LABEL_99:
  v46 = *(_BYTE *)(v20 + 301) != 0 ? 0x20 : 0;
  if ( *(_BYTE *)(v20 + 302) )
    v46 |= 0x80u;
  *(_DWORD *)(*(_DWORD *)a2 + 1556) = v46;
  *(_DWORD *)(*(_DWORD *)a2 + 1560) = v112;
  memset(&v130, 0, sizeof(v130));
  v113 = 0;
  v121.x = 0;
  v121.y = 0;
  v123 = 0;
  v124[0] = 0;
  if ( (*(_BYTE *)(v108 + 24) & 1) != 0 || (v47 = (*(_BYTE *)(v20 + 20) & 2) == 0, v116 = (struct IFIOBJ *)2, v47) )
    v116 = 0;
  v117 = _ghsemPublicPFT;
  v45(_ghsemPublicPFT);
  v122 = v114 & 4;
  v48 = LFONTOBJ::ppfeMapFont(
          (LFONTOBJ *)&v109,
          a2,
          (struct tagENUMLOGFONTEXDVW *)&v113,
          &v121,
          &v123,
          (struct _POINTL *)v122);
  v112 = v48;
  if ( !v48 )
  {
LABEL_241:
    *(_DWORD *)this = 0;
    *(_DWORD *)(*(_DWORD *)a2 + 1564) = 0;
    SEMOBJ::vUnlock((SEMOBJ *)&v117);
    goto LABEL_242;
  }
  v49 = *(_DWORD **)v48;
  v118 = v49;
  v50 = v49[8];
  if ( (v50 & 0x2000) != 0 )
  {
LABEL_116:
    if ( PFFOBJ::bAttemptReload((PFFOBJ *)&v118) )
    {
      GreAcquireSemaphore(_ghsemPublicPFT);
      v48 = LFONTOBJ::ppfeMapFont(
              (LFONTOBJ *)&v109,
              a2,
              (struct tagENUMLOGFONTEXDVW *)&v113,
              &v121,
              &v123,
              (struct _POINTL *)v122);
      v112 = v48;
      goto LABEL_118;
    }
    goto LABEL_241;
  }
  if ( (v50 & 0x1000) == 0 )
    goto LABEL_118;
  v51 = 0;
  v111 = 0;
  if ( !v49[5] )
    goto LABEL_114;
  v52 = v49[30];
  do
  {
    v53 = *(_DWORD *)(v52 + 4 * v51);
    v126.eXX = 0;
    v126.eXY = 0;
    v54 = *(const WCHAR **)(v53 + 48);
    v128 = 0;
    v129 = 0;
    Win32FileInfo(v54, (int)&v126);
    i = v49[30];
    v55 = *(_DWORD **)(i + 4 * v111);
    if ( *v55 != v128 || v55[1] != v129 || v55[4] != v126.eXX )
    {
      v49[8] |= 0x2000u;
      goto LABEL_116;
    }
    v52 = i;
    v51 = v111 + 1;
    v111 = v51;
  }
  while ( v51 < v49[5] );
  v50 = v49[8];
  v48 = v112;
LABEL_114:
  v49[8] = v50 & 0xFFFFEFFF;
LABEL_118:
  if ( !v48 )
    goto LABEL_241;
  v56 = (struct tagLOGFONTW *)a2;
  v126.eXX = *((_DWORD *)v48 + 5);
  v57 = *(_DWORD *)a2;
  v119 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a2 + 1020) + 228);
  v120 = *(_DWORD *)(*(_DWORD *)(v57 + 1020) + 148) & 1;
  if ( (*(_DWORD *)(*(_DWORD *)(v57 + 1020) + 340) & 0x1E000) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)&v118, a2, 0x204u, 0);
    v56 = (struct tagLOGFONTW *)a2;
    v57 = *(_DWORD *)a2;
  }
  else
  {
    v118 = (_DWORD *)(v57 + 240);
  }
  if ( !(*(_DWORD *)(*(_DWORD *)(v57 + 1020) + 228) == 1
       ? bGetNtoD_Win31(&v126, v56, v116, (struct DCOBJ *)&v121, 0, v105, (int)v106)
       : bGetNtoD(&v126, v56, (struct IFIOBJ *)&v121, (struct DCOBJ *)v105, v106)) )
    goto LABEL_241;
  eYX = v130.eYX;
  if ( v130.eYX )
  {
    eYX = v130.eYX ^ 0x80000000;
    v130.eYX ^= 0x80000000;
  }
  eYY = v130.eYY;
  if ( v130.eYY )
  {
    eYY = v130.eYY ^ 0x80000000;
    v130.eYY ^= 0x80000000;
  }
  if ( (*(_DWORD *)(v126.eXX + 48) & 0x1000000) != 0 )
  {
    v130.eXX = eYY;
    v130.eXY = eYX;
    if ( eYX )
      v130.eXY = eYX ^ 0x80000000;
  }
  if ( (*(_BYTE *)(v126.eXX + 48) & 1) != 0 && *(int *)(v20 + 280) <= 0 )
    v113 |= 0x8000u;
  v125 = 0;
  v124[0] = *(_DWORD *)v112;
  ++*(_DWORD *)(v124[0] + 48);
  if ( _ghsemPublicPFT )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", _ghsemPublicPFT);
    GreReleaseSemaphoreInternal(_ghsemPublicPFT);
  }
  v61 = v113;
  v111 = v113;
  v62 = *(_DWORD *)a2;
  v117 = _ghsemRFONTList;
  i = *(_DWORD *)(*(_DWORD *)(v62 + 1020) + 228);
  GreAcquireSemaphore(_ghsemRFONTList);
  v63 = (_DWORD *)v108;
  if ( (*(_DWORD *)(v108 + 24) & 0x800000) != 0 )
    v64 = *(_DWORD *)(*(_DWORD *)(v108 + 2316) + 940);
  else
    v64 = *(_DWORD *)(v108 + 940);
  v65 = this;
  *(_DWORD *)this = v64;
  if ( !v64 )
  {
LABEL_168:
    if ( (v63[6] & 0x800000) != 0 )
      v63 = (_DWORD *)v63[579];
    v74 = v63[236];
    *(_DWORD *)v65 = v74;
    if ( v74 )
    {
      while ( 1 )
      {
        if ( *(struct PFE **)(v74 + 80) == v112 && v114 == (*(_DWORD *)(v74 + 56) & 6) )
        {
          v75 = *(_DWORD *)(v74 + 12);
          if ( ((v111 ^ v75) & 0xE000) == 0 )
          {
            v76 = (v111 ^ v75) & 0x50010000;
            if ( !v76 )
              goto LABEL_263;
            if ( (v111 & 0x10000) != 0 && ((unsigned int)&loc_20000 & v75) != 0 )
              v76 = (v111 ^ v75) & 0x50000000;
            if ( (v111 & 0x10000000) != 0 && (v75 & 0x10000000) == 0 && (v75 & 0x2000000) != 0 || !v76 )
            {
LABEL_263:
              if ( !*(_DWORD *)(v74 + 32) )
                break;
            }
          }
        }
LABEL_191:
        v74 = *(_DWORD *)(*(_DWORD *)this + 668);
        *(_DWORD *)this = v74;
        if ( !v74 )
          goto LABEL_192;
      }
      v77 = (_DWORD *)(v74 + 88);
      v109 = (struct RFONT *)12;
      v78 = &v130;
      do
      {
        if ( v78->eXX != *v77 )
          goto LABEL_191;
        v78 = (struct _FD_XFORM *)((char *)v78 + 4);
        ++v77;
        v72 = (unsigned int)v109 < 4;
        v109 = (struct RFONT *)((char *)v109 - 4);
      }
      while ( !v72 );
      if ( a3 != *(_DWORD *)(v74 + 656) )
        goto LABEL_191;
      if ( !EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)v127, (struct MATRIX *)(v74 + 124)) )
        goto LABEL_191;
      v79 = *(_DWORD **)this;
      if ( *(_DWORD *)(*(_DWORD *)this + 184) != i || !v115 && v79[160] )
        goto LABEL_191;
      v85 = (_DWORD *)v108;
      if ( (*(_DWORD *)(v108 + 24) & 0x800000) != 0 )
        v86 = *(struct RFONT **)(*(_DWORD *)(v108 + 2316) + 944);
      else
        v86 = *(struct RFONT **)(v108 + 944);
      v87 = v79[166];
      v109 = v86;
      v88 = (struct RFONT *)v79[167];
      v122 = v87 != 0 ? v87 + 664 : 0;
      i = (int)v88;
      v89 = v88 != 0 ? (_DWORD *)((unsigned int)v88 + 664) : 0;
      if ( v87 )
      {
        *(_DWORD *)(v122 + 4) = v88;
        v88 = v109;
        if ( v89 )
          *v89 = v79[166];
      }
      else
      {
        if ( !v89 )
        {
LABEL_212:
          if ( (v85[6] & 0x800000) != 0 )
            v85 = (_DWORD *)v85[579];
          v85[236] = v88;
          v90 = v108;
          if ( (*(_DWORD *)(v108 + 24) & 0x800000) != 0 )
            v91 = *(_DWORD *)(*(_DWORD *)(v108 + 2316) + 948);
          else
            v91 = *(_DWORD *)(v108 + 948);
          v92 = v91 - 1;
          if ( (*(_DWORD *)(v108 + 24) & 0x800000) != 0 )
            v90 = *(_DWORD *)(v108 + 2316);
          *(_DWORD *)(v90 + 948) = v92;
          v93 = (_DWORD *)v108;
          if ( (*(_DWORD *)(v108 + 24) & 0x800000) != 0 )
            v94 = *(_DWORD *)(*(_DWORD *)(v108 + 2316) + 940);
          else
            v94 = *(_DWORD *)(v108 + 940);
          v95 = v94 != 0 ? (_DWORD *)(v94 + 664) : 0;
          v96 = (_DWORD *)(*(_DWORD *)this + 664);
          if ( *(_DWORD *)this != -664 )
          {
            *v96 = 0;
            v96[1] = v94;
            if ( v95 )
              *v95 = *(_DWORD *)this;
            v94 = *(_DWORD *)this;
            v93 = (_DWORD *)v108;
          }
          if ( (v93[6] & 0x800000) != 0 )
            v93 = (_DWORD *)v93[579];
          v93[235] = v94;
          v84 = this;
          *(_DWORD *)(*(_DWORD *)this + 660) = 1;
          goto LABEL_229;
        }
        *v89 = 0;
      }
      v85 = (_DWORD *)v108;
      goto LABEL_212;
    }
LABEL_192:
    *(_DWORD *)this = 0;
    if ( _ghsemRFONTList )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsem", _ghsemRFONTList);
      GreReleaseSemaphoreInternal(_ghsemRFONTList);
    }
    v80 = v112;
    v81 = this;
    if ( !RFONTOBJ::bRealizeFont(
            this,
            a2,
            (struct PDEVOBJ *)&v108,
            (struct tagENUMLOGFONTEXDVW *)(v20 + 280),
            v112,
            &v130,
            &v121,
            v113,
            0,
            a3,
            v115,
            v114) )
    {
      v82 = 0;
      UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
        (UmfdClientSideFileViewMapper *)&v118,
        (struct PFFOBJ *)v124);
      if ( v120 == v118[5] )
        v82 = RFONTOBJ::bRealizeFont(
                this,
                a2,
                (struct PDEVOBJ *)&v108,
                (struct tagENUMLOGFONTEXDVW *)(v20 + 280),
                v112,
                &v130,
                &v121,
                v113,
                0,
                a3,
                v115,
                v114) != 0;
      UmfdClientSideFileViewMapper::UnmapMappedViews((UmfdClientSideFileViewMapper *)&v118);
      if ( !v82 )
      {
        *(_DWORD *)this = 0;
        *(_DWORD *)(*(_DWORD *)a2 + 1564) = 0;
LABEL_242:
        v41 = 0;
        goto LABEL_243;
      }
      v80 = v112;
    }
    if ( *(_DWORD *)(v20 + 284) )
    {
      v117 = _ghsemPublicPFT;
      GreAcquireSemaphore(_ghsemPublicPFT);
      v97 = (_DWORD *)*((_DWORD *)v80 + 5);
      v98 = *(_DWORD *)(v20 + 276);
      v118 = v97;
      if ( v98 >= 0x1A4 )
        v98 = 420;
      v99 = (struct tagLOGFONTW *)AllocFreeTmpBuffer(v98);
      if ( v99 )
      {
        memcpy(v99, (const void *)(v20 + 280), v98);
        v99->lfWidth = 0;
        if ( !PFEOBJ::bSetFontXform(
                v100,
                a2,
                v99,
                (struct _FD_XFORM *)(*(_DWORD *)this + 104),
                (unsigned int)v116,
                (unsigned int)v100,
                &v121,
                (struct IFIOBJ *)&v118,
                0) )
          *(struct _FD_XFORM *)(*(_DWORD *)this + 104) = v130;
        FreeTmpBuffer(v99);
        v81 = this;
      }
      else
      {
        v81 = this;
        *(struct _FD_XFORM *)(*(_DWORD *)this + 104) = v130;
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v117);
    }
    v101 = 1;
    v102 = *(_DWORD *)v81;
    v125 = 1;
    *(_DWORD *)(*(_DWORD *)a2 + 1564) = v102;
    v41 = 1;
    *(_DWORD *)(*(_DWORD *)a2 + 176) &= ~1u;
    goto LABEL_244;
  }
  v66 = this;
  v67 = v112;
  while ( 2 )
  {
    if ( *(struct PFE **)(v64 + 80) != v67 )
    {
LABEL_166:
      v64 = *(_DWORD *)(v64 + 668);
      *(_DWORD *)v66 = v64;
      if ( !v64 )
      {
        v63 = (_DWORD *)v108;
        v65 = this;
        goto LABEL_168;
      }
      continue;
    }
    break;
  }
  if ( v114 != (*(_DWORD *)(v64 + 56) & 6) )
  {
LABEL_165:
    v66 = this;
    goto LABEL_166;
  }
  v68 = *(_DWORD *)(v64 + 12);
  if ( ((v61 ^ v68) & 0xE000) != 0 )
    goto LABEL_164;
  v69 = (v61 ^ v68) & 0x50010000;
  if ( v69 )
  {
    if ( (v61 & 0x10000) != 0 && ((unsigned int)&loc_20000 & v68) != 0 )
      v69 = (v61 ^ v68) & 0x50000000;
    if ( ((v61 & 0x10000000) == 0 || (v68 & 0x10000000) != 0 || (v68 & 0x2000000) == 0) && v69 )
      goto LABEL_164;
  }
  if ( *(_DWORD *)(v64 + 32) )
  {
LABEL_164:
    v67 = v112;
    v64 = *(_DWORD *)this;
    goto LABEL_165;
  }
  v70 = (_DWORD *)(v64 + 88);
  v109 = (struct RFONT *)12;
  v71 = &v130;
  do
  {
    if ( v71->eXX != *v70 )
      goto LABEL_163;
    v71 = (struct _FD_XFORM *)((char *)v71 + 4);
    ++v70;
    v72 = (unsigned int)v109 < 4;
    v109 = (struct RFONT *)((char *)v109 - 4);
  }
  while ( !v72 );
  if ( a3 != *(_DWORD *)(v64 + 656)
    || !EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)v127, (struct MATRIX *)(v64 + 124))
    || (v73 = *(_DWORD *)this, *(_DWORD *)(*(_DWORD *)this + 184) != i)
    || !v115 && *(_DWORD *)(v73 + 640) )
  {
LABEL_163:
    v61 = v111;
    goto LABEL_164;
  }
  ++*(_DWORD *)(v73 + 660);
  v83 = v108;
  if ( (*(_DWORD *)(v108 + 24) & 0x800000) != 0 )
    v83 = *(_DWORD *)(v108 + 2316);
  v84 = this;
  v109 = *(struct RFONT **)(v83 + 940);
  if ( v109 != *(struct RFONT **)this )
  {
    RFONTOBJ::vRemove(this, &v109, 1);
    RFONTOBJ::vInsert(this, &v109, 1);
    PDEVOBJ::prfntActive((PDEVOBJ *)&v108, v109);
  }
LABEL_229:
  SEMOBJ::~SEMOBJ((SEMOBJ *)&v117);
  v41 = 1;
  *(_DWORD *)(*(_DWORD *)a2 + 1564) = *(_DWORD *)v84;
  *(_DWORD *)(*(_DWORD *)a2 + 176) &= ~1u;
LABEL_243:
  v101 = v125;
LABEL_244:
  if ( v124[0] && !v101 )
  {
    v118 = 0;
    v119 = 0;
    v120 = 0;
    i = 0;
    GreAcquireSemaphore(_ghsemPublicPFT);
    v103 = (_DWORD *)v124[0];
    --*(_DWORD *)(v124[0] + 48);
    if ( !v103[9] && !v103[10] && !v103[23] && !v103[12] && !v103[11] )
    {
      PFFOBJ::vPFFC_Delete((PFFOBJ *)v124, (struct PFFCLEANUP *)&v118);
      i = 1;
    }
    if ( _ghsemPublicPFT )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsem", _ghsemPublicPFT);
      GreReleaseSemaphoreInternal(_ghsemPublicPFT);
    }
    if ( i )
      vCleanupFontFile((struct PFFCLEANUP *)v105);
  }
LABEL_257:
  if ( v20 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v20);
  return v41;
}
