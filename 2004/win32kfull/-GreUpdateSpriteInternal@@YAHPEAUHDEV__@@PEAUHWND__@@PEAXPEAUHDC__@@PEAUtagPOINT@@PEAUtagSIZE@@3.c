/*
 * XREFs of ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C007C1E0
 * Callers:
 *     GreUpdateSprite @ 0x1C002032C (GreUpdateSprite.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C007A780 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?GreUpdateSpriteCallout@@YAXPEAX@Z @ 0x1C026E880 (-GreUpdateSpriteCallout@@YAXPEAX@Z.c)
 * Callees:
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C001EBD4 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C0029AD8 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C0029DD0 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z @ 0x1C002AFF8 (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C002BBB4 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C002D7BC (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     DwmAsyncDirtySprite @ 0x1C002D7E0 (DwmAsyncDirtySprite.c)
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C004DFA8 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C0053220 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     DwmAsyncUpdateSprite @ 0x1C00541BC (DwmAsyncUpdateSprite.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C0054360 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C00543F8 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C0079870 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00FEC0C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C0112EE4 (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0114EA4 (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C0126880 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     ?pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z @ 0x1C01519DC (-pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C026F474 (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 */

__int64 __fastcall GreUpdateSpriteInternal(
        HDEV a1,
        HWND a2,
        void *a3,
        HDC a4,
        struct tagPOINT *a5,
        struct tagSIZE *a6,
        HDC a7,
        struct _POINTL *a8,
        unsigned int a9,
        struct _BLENDFUNCTION *a10,
        void *a11,
        struct tagRECT *a12,
        struct tagMINIWINDOWINFO *a13,
        int a14,
        int a15)
{
  int v15; // r13d
  struct tagPOINT *v16; // r10
  struct tagSIZE *v17; // r12
  __int64 v18; // rbx
  HDC v19; // r11
  HDEV v20; // rdi
  struct _POINTL *v21; // r15
  int v22; // r14d
  unsigned int v23; // esi
  struct _BLENDFUNCTION *v24; // r9
  unsigned int v25; // eax
  struct tagRECT *v26; // rcx
  int v27; // r12d
  __int64 v28; // rdx
  void *v29; // rsi
  char *v30; // rdi
  _QWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  SFMLOGICALSURFACE *v34; // rdi
  struct SFMLOGICALSURFACE *FirstLSurf; // rsi
  char *v36; // rdi
  struct tagRECT v37; // xmm0
  __int64 v38; // r8
  struct tagPOINT *v39; // r9
  unsigned int v40; // eax
  __int64 v41; // r8
  unsigned int v42; // eax
  __int64 v43; // rcx
  _OWORD *v44; // rax
  SFMLOGICALSURFACE *v45; // rdi
  int v46; // eax
  HLSURF v47; // rsi
  struct SFMLOGICALSURFACE *v48; // rsi
  __int64 v49; // rax
  void *v50; // rcx
  unsigned int v51; // edi
  unsigned int v52; // r13d
  LONG x; // ecx
  __int64 ThreadWin32Thread; // rax
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // rcx
  int v60; // esi
  bool v61; // cc
  void *v62; // rax
  __int64 v63; // r8
  __int64 v64; // r9
  LONG y; // edx
  struct _RECTL *v66; // rax
  LONG v67; // ecx
  unsigned int v68; // eax
  LONG v69; // eax
  unsigned int v70; // eax
  int v71; // eax
  SFMLOGICALSURFACE *v72; // rcx
  int v73; // eax
  SURFACE *v74; // rax
  int updated; // eax
  void *v76; // rax
  __int64 v77; // r8
  int v78; // [rsp+20h] [rbp-E0h]
  unsigned int v79; // [rsp+60h] [rbp-A0h]
  char v80; // [rsp+64h] [rbp-9Ch]
  int v81; // [rsp+68h] [rbp-98h] BYREF
  SFMLOGICALSURFACE *v82; // [rsp+70h] [rbp-90h]
  unsigned int v83; // [rsp+78h] [rbp-88h] BYREF
  struct SFMLOGICALSURFACE *v84; // [rsp+80h] [rbp-80h] BYREF
  __int64 v85; // [rsp+88h] [rbp-78h]
  int *v86; // [rsp+90h] [rbp-70h]
  unsigned int v87; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v88; // [rsp+9Ch] [rbp-64h] BYREF
  int v89; // [rsp+A0h] [rbp-60h] BYREF
  int v90; // [rsp+A4h] [rbp-5Ch]
  unsigned int v91; // [rsp+A8h] [rbp-58h]
  int v92; // [rsp+ACh] [rbp-54h]
  struct tagRECT *v93; // [rsp+B0h] [rbp-50h]
  HDEV v94; // [rsp+B8h] [rbp-48h]
  struct tagSIZE *v95; // [rsp+C0h] [rbp-40h]
  void *v96; // [rsp+C8h] [rbp-38h]
  struct tagPOINT *v97; // [rsp+D0h] [rbp-30h]
  HDC v98; // [rsp+D8h] [rbp-28h]
  struct tagPOINT *v99; // [rsp+E0h] [rbp-20h]
  void *v100; // [rsp+E8h] [rbp-18h]
  HDEV v101; // [rsp+F0h] [rbp-10h] BYREF
  SFMLOGICALSURFACE *v102; // [rsp+F8h] [rbp-8h]
  HWND v103; // [rsp+100h] [rbp+0h]
  _QWORD v104[2]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v105; // [rsp+118h] [rbp+18h]
  __int64 v106; // [rsp+120h] [rbp+20h]
  HDC v107; // [rsp+128h] [rbp+28h]
  _QWORD Buffer[2]; // [rsp+130h] [rbp+30h] BYREF
  struct _RECTL v109; // [rsp+140h] [rbp+40h] BYREF
  struct tagRECT v110; // [rsp+150h] [rbp+50h] BYREF
  _OWORD v111[8]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v112; // [rsp+1E0h] [rbp+E0h]
  unsigned int v113; // [rsp+2A0h] [rbp+1A0h]

  v15 = 0;
  v16 = a5;
  v17 = a6;
  v18 = 0LL;
  v19 = a7;
  v20 = a1;
  v21 = a8;
  v22 = 1;
  v85 = (__int64)a13;
  v23 = (unsigned int)a11 & 0x200000;
  v107 = a4;
  v24 = a10;
  v25 = (unsigned int)a11 & 0xFFDFFFFF;
  v94 = a1;
  v26 = a12;
  v96 = a3;
  v103 = a2;
  v97 = a5;
  v95 = a6;
  v98 = a7;
  v99 = (struct tagPOINT *)a8;
  v86 = (int *)a10;
  v93 = a12;
  v79 = 0;
  v91 = (unsigned int)a11 & 0x200000;
  memset(v111, 0, sizeof(v111));
  v112 = 0LL;
  v81 = 0;
  v83 = 0;
  v88 = 0;
  v87 = 0;
  v89 = 0;
  v80 = 0;
  v113 = (unsigned int)a11 & 0xFFDFFFFF;
  if ( a14 )
  {
    if ( !g_pDwmState )
    {
LABEL_136:
      v25 = v113;
      goto LABEL_132;
    }
    v92 = 0;
    if ( !v23 )
    {
      GreAcquireSemaphore(ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
      v92 = 1;
    }
    v101 = v20;
    v27 = 0;
    if ( !v23 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( !ThreadWin32Thread || !*(_DWORD *)(ThreadWin32Thread + 104) && !*(_DWORD *)(ThreadWin32Thread + 108) )
      {
        GreAcquireSemaphore(ghsemSprite);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
        v27 = 1;
      }
    }
    if ( v23 )
    {
      GreAcquireSemaphoreSharedInternal(ghsemDwmState, a2, a3, v24);
      EtwTraceGreLockAcquireSemaphoreShared(L"hsem", ghsemDwmState);
    }
    else
    {
      GreAcquireSemaphore(ghsemDwmState);
    }
    if ( !g_pDwmState )
    {
LABEL_83:
      if ( v92 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
      EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemDwmState);
      GreReleaseSemaphoreInternal(ghsemDwmState);
      if ( v27 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
        GreReleaseSemaphoreInternal(ghsemSprite);
      }
      if ( !v22 )
        return (unsigned int)v18;
      v26 = v93;
      a3 = v96;
      a2 = v103;
      v20 = v94;
      v24 = (struct _BLENDFUNCTION *)v86;
      v16 = v97;
      v19 = v98;
      v21 = (struct _POINTL *)v99;
      v17 = v95;
      goto LABEL_136;
    }
    v29 = v96;
    if ( v103 )
    {
      Buffer[1] = 0LL;
      v29 = 0LL;
      Buffer[0] = v103;
      v30 = (char *)g_pDwmState + 72;
      if ( g_pDwmState != (struct DwmState *)-72LL )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v30, 0LL);
      }
      v31 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)g_pDwmState, Buffer);
      if ( v31 )
        v29 = (void *)v31[1];
      if ( g_pDwmState != (struct DwmState *)-72LL )
      {
        ExReleasePushLockExclusiveEx(v30, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    if ( !v29
      || (LOBYTE(v28) = 15, v32 = HmgShareLockCheck(v29, v28), (v18 = v32) == 0)
      || (*(_DWORD *)(v32 + 164) & 0x10) != 0 )
    {
LABEL_80:
      if ( v18 )
        DEC_SHARE_REF_CNT(v18);
      v23 = v91;
      LODWORD(v18) = v79;
      goto LABEL_83;
    }
    v79 = 1;
    v90 = 0;
    if ( v32 != -88 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v18 + 88, 0LL);
    }
    v34 = *(SFMLOGICALSURFACE **)(v18 + 168);
    v96 = *(void **)v18;
    FirstLSurf = v34;
    v82 = v34;
    v84 = v34;
    v102 = 0LL;
    if ( v34 && *(_QWORD *)v34 )
    {
      LOBYTE(v33) = 18;
      v102 = (SFMLOGICALSURFACE *)HmgLock(*(_QWORD *)v34, v33);
    }
    v36 = (char *)v34 + 256;
    if ( v36 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v36, 0LL);
    }
    if ( v93 )
    {
      v37 = *v93;
      v93 = &v110;
      v110 = v37;
    }
    v38 = v113;
    if ( v113 == 0x2000000 )
    {
      v81 = 33488896;
      v86 = &v81;
      v113 = 570425346;
      LOBYTE(v33) = v95 || v97;
      vSpDwmUpdateSpriteVisibility((struct DWMSPRITE *)v18, v33, v38);
      LODWORD(v38) = 570425346;
    }
    if ( (v38 & 0x20000000) != 0 )
    {
      LODWORD(v38) = v38 & 0xDFFFFFFF;
      v113 = v38;
    }
    else if ( (v38 & 0x40000000) != 0 || !(_DWORD)v38 )
    {
      LODWORD(v38) = *(_DWORD *)(v18 + 72);
      v39 = (struct tagPOINT *)(v18 + 76);
      v40 = *(_DWORD *)(v18 + 80);
      v86 = (int *)(v18 + 76);
      v113 = v38;
      a9 = v40;
      goto LABEL_32;
    }
    v39 = (struct tagPOINT *)v86;
LABEL_32:
    if ( (v38 & 2) != 0 )
    {
      if ( !v39 || (v33 = (__int64)FirstLSurf, (v39->x & 0x1000000) != 0) && (*((_DWORD *)FirstLSurf + 63) & 1) != 0 )
      {
        v41 = 0LL;
        v79 = 0;
        goto LABEL_49;
      }
    }
    else
    {
      v33 = (__int64)FirstLSurf;
    }
    *(_DWORD *)(v18 + 72) = v38;
    if ( (v38 & 2) != 0 )
    {
      if ( *(_BYTE *)(v18 + 79) != HIBYTE(v39->x) )
      {
        v70 = bSpDwmCreateLogicalSurface(v94, (struct DWMSPRITE *)v18, (struct SFMLOGICALSURFACE *)v33, 0LL, &v84);
        LODWORD(v38) = v113;
        v39 = (struct tagPOINT *)v86;
        FirstLSurf = v84;
        v79 = v70;
      }
      *(_DWORD *)(v18 + 76) = v39->x;
      x = v39->x;
      *((_DWORD *)FirstLSurf + 61) |= 0x40u;
      *((_DWORD *)FirstLSurf + 60) = x;
    }
    if ( (v38 & 1) != 0 )
    {
      *(_DWORD *)(v18 + 80) = a9;
      if ( *((_QWORD *)v82 + 23) )
      {
        if ( (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(v82) )
        {
          if ( !(unsigned int)bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v101) )
          {
            v82 = (SFMLOGICALSURFACE *)(*((_QWORD *)v82 + 23) - 24LL);
            v71 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v101);
            v72 = v82;
            if ( v71 )
            {
              v73 = *((_DWORD *)v82 + 29);
              if ( (v73 & 0x20) == 0 )
              {
                *((_DWORD *)v82 + 29) = v73 | 0x20;
                pConvertDfbSurfaceToDibPostNKAPC(*((HSURF *)v72 + 4));
                v80 = 1;
              }
            }
            else
            {
              v74 = (SURFACE *)pProcessDfbSurfaces(v82, 1LL);
              if ( v74 )
              {
                FirstLSurf = SURFACE::GetFirstLSurf(v74);
                v84 = FirstLSurf;
              }
            }
          }
          LODWORD(v38) = v113;
        }
      }
    }
    if ( v79 )
    {
      v39 = v97;
      if ( v97 )
      {
        v69 = v97->x;
        v33 = (unsigned int)(v97->y - *(_DWORD *)(v18 + 60));
        *(_DWORD *)(v18 + 64) += v97->x - *(_DWORD *)(v18 + 56);
        *(_DWORD *)(v18 + 68) += v33;
        *(_DWORD *)(v18 + 60) += v33;
        *(_DWORD *)(v18 + 56) = v69;
      }
      if ( (*((_DWORD *)FirstLSurf + 63) & 1) != 0 )
      {
        v33 = (__int64)v93;
        if ( v93 && *((_QWORD *)FirstLSurf + 23) )
          vSpUpdateDirtyRgn((struct DWMSPRITE *)v18, FirstLSurf, v98, (struct _RECTL *)v93, &v83, a15);
        goto LABEL_43;
      }
      if ( (v38 & 0x2000000) != 0 )
      {
        if ( v39 && v95 )
        {
          updated = bSpDwmUpdateDragRectShape(v94, (struct DWMSPRITE *)v18, FirstLSurf, v39, v95, &v83, &v84);
          FirstLSurf = v84;
          v79 = updated;
        }
        goto LABEL_43;
      }
      if ( !v99 || !v95 )
      {
LABEL_43:
        v41 = v79;
        if ( v79 )
        {
          v42 = *((_DWORD *)FirstLSurf + 63);
          v33 = v42;
          if ( (v42 & 1) != 0 && (v42 & 0x40) == 0 )
          {
            v33 = v42 | 0x40;
            *((_DWORD *)FirstLSurf + 63) = v33;
          }
          v43 = *((_QWORD *)FirstLSurf + 23);
          if ( v43 && (*(_DWORD *)(v43 + 92) & 1) == 0 && !*(_QWORD *)(v43 + 224) )
          {
            v33 = (unsigned int)v33 | 8;
            *((_DWORD *)FirstLSurf + 63) = v33;
          }
        }
        goto LABEL_49;
      }
      DCOBJ::DCOBJ((DCOBJ *)v104, v98);
      v79 = 0;
      if ( v104[0] )
      {
        if ( !(unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v104) )
        {
          v64 = *(_QWORD *)(v63 + 496);
          y = v99->y;
          v66 = (struct _RECTL *)&v110;
          v109.left = v99->x;
          v109.right = v95->cx + v109.left;
          v67 = y + v95->cy;
          v109.top = y;
          if ( !v93 )
            v66 = 0LL;
          v109.bottom = v67;
          v68 = bSpDwmUpdateSpriteShape(
                  v94,
                  (struct DWMSPRITE *)v18,
                  FirstLSurf,
                  (struct _SURFOBJ *)(v64 + 24),
                  &v109,
                  *(struct PALETTE **)(v64 + 128),
                  &v83,
                  v66,
                  &v84);
          v63 = v104[0];
          FirstLSurf = v84;
          v79 = v68;
        }
        if ( v63 )
          XDCOBJ::vUnlockFast((XDCOBJ *)v104);
        goto LABEL_43;
      }
      v41 = 0LL;
    }
    else
    {
      v41 = 0LL;
    }
LABEL_49:
    if ( *(_QWORD *)(v18 + 40) )
    {
      v44 = (_OWORD *)v85;
    }
    else
    {
      vSpDwmGetMiniWinInfoForNonWindowSprite(v111, v18 + 56);
      v44 = v111;
      v85 = (__int64)v111;
    }
    if ( (_DWORD)v41 && !v80 && (v44 || (*((_DWORD *)FirstLSurf + 63) & 8) != 0) )
    {
      if ( (*((_DWORD *)FirstLSurf + 63) & 8) != 0 )
        SFMLOGICALSURFACE::StartSfmStateTracking(FirstLSurf, v94, gpSfmState);
      SFMLOGICALSURFACE::GetRedirectionInfo(FirstLSurf, (enum _HLSURF_REDIRECTIONSTYLE *)&v89, &v88, &v87, 0LL, 0LL);
      v58 = *((_DWORD *)FirstLSurf + 63) & 0xC;
      v59 = *((_DWORD *)FirstLSurf + 63) & 1;
      v60 = v58 | *(_DWORD *)(v18 + 164) & 1 | (2
                                              * (*((_DWORD *)FirstLSurf + 63) & 1 | *(_DWORD *)(v18 + 164) & 0x40 | (4 * (*(_DWORD *)(v18 + 164) & 0xE))));
      v105 = *(_QWORD *)(v18 + 104);
      v61 = *(_DWORD *)(v18 + 116) < 1;
      *(_QWORD *)(v18 + 104) = 0LL;
      LODWORD(v82) = !v61;
      v106 = *(_QWORD *)v84;
      v100 = *(void **)v18;
      v62 = (void *)UserReferenceDwmApiPort(v59, v58, v56, v57);
      DwmAsyncUpdateSprite(v62, (__int64)v100, v106, v60, v18 + 72, (__int128 *)v85, v89, v88, v87, (int)v82, v105);
    }
    if ( v36 )
    {
      ExReleasePushLockExclusiveEx(v36, 0LL);
      KeLeaveCriticalRegion();
    }
    v45 = v102;
    if ( v102 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v102 + 3);
      v46 = *((_DWORD *)v45 + 61);
      if ( (v46 & 0x80u) != 0 && (v46 & 8) != 0 && (v46 & 0x10) != 0 )
      {
        *((_DWORD *)v45 + 61) = v46 & 0xFFFFFFEF;
        SFMLOGICALSURFACE::StopSfmStateTracking(v45, 0LL, gpSfmState);
      }
      v47 = *(HLSURF *)v45;
      if ( *(_QWORD *)v45 )
      {
        LOBYTE(v78) = 18;
        v45 = (SFMLOGICALSURFACE *)HmgRemoveObject(v47, 0LL, 0LL, 1LL, v78, 0LL);
      }
      if ( v45 )
      {
        SFMLOGICALSURFACE::DeInitialize((HLSURF *)v45, v47, 0);
        FreeObject(v45, 18LL);
        EtwLogicalSurfDestroyEvent(v47, 0LL);
      }
    }
    v48 = v84;
    v49 = *((_QWORD *)v84 + 23);
    if ( v49 )
    {
      v33 = *(_QWORD *)(v49 + 8);
      v85 = v33;
    }
    else
    {
      v85 = 0LL;
    }
    v50 = *(void **)v18;
    v100 = *(void **)v18;
    if ( v49 && (*(_DWORD *)(v49 + 92) & 1) != 0 )
      v15 = 1;
    v51 = v83 & 0xFFFFFFFE;
    if ( !v15 )
      v51 = v83;
    v52 = v51;
    if ( (v51 & 1) != 0 && (unsigned __int8)bShouldUseSfmTokenArray(*((unsigned int *)v84 + 63)) )
    {
      GreAddLogicalSurfaceToDirtyQueue(*(_QWORD *)v48, 1u, v85);
      v52 = v51 & 0xFFFFFFFE;
    }
    if ( v52 )
    {
      v76 = (void *)UserReferenceDwmApiPort(v50, v33, v41, v39);
      DwmAsyncDirtySprite(v76, (__int64)v100, v77, v52, v85);
    }
    if ( v48 != (struct SFMLOGICALSURFACE *)-256LL )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)v48 + 256, 0LL);
    }
    *((_DWORD *)v48 + 63) &= ~8u;
    if ( v48 != (struct SFMLOGICALSURFACE *)-256LL )
    {
      ExReleasePushLockExclusiveEx((char *)v48 + 256, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v18 != -88 )
    {
      ExReleasePushLockExclusiveEx(v18 + 88, 0LL);
      KeLeaveCriticalRegion();
    }
    v22 = v90;
    goto LABEL_80;
  }
LABEL_132:
  if ( v23 )
    v25 |= 0x200000u;
  return GdiUpdateSprite(v20, a2, a3, v107, (struct _POINTL *)v16, v17, v19, v21, a9, v24, v25, v26);
}
