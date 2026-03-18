/*
 * XREFs of ?GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_BLENDFUNCTION@@KPAUtagRECT@@PAUtagMINIWINDOWINFO@@HH@Z @ 0x603A0
 * Callers:
 *     _GreUpdateSprite@60 @ 0x2B28E (_GreUpdateSprite@60.c)
 *     ?GreUpdateSpriteDevLockEnd@@YGHAAVXDCOBJ@@H@Z @ 0x5FE10 (-GreUpdateSpriteDevLockEnd@@YGHAAVXDCOBJ@@H@Z.c)
 *     ?GreUpdateSpriteCallout@@YGXPAX@Z @ 0xCC288 (-GreUpdateSpriteCallout@@YGXPAX@Z.c)
 *     ?DwmMovePointer@@YGXPAU_SURFOBJ@@JJPAU_RECTL@@K@Z @ 0xD03E2 (-DwmMovePointer@@YGXPAU_SURFOBJ@@JJPAU_RECTL@@K@Z.c)
 *     ?bSpDwmUpdateCursor@@YGHPAUHSPRITE__@@PAU_SURFOBJ@@1PAU_XLATEOBJ@@PAU_RECTL@@PAU_BLENDFUNCTION@@@Z @ 0xD05AE (-bSpDwmUpdateCursor@@YGHPAUHSPRITE__@@PAU_SURFOBJ@@1PAU_XLATEOBJ@@PAU_RECTL@@PAU_BLENDFUNCTION@@.c)
 *     ?bSetPreviewRectContent@@YGHPAU_SPRITESTATE@@PBU_RECTL@@@Z @ 0x1DCEF2 (-bSetPreviewRectContent@@YGHPAU_SPRITESTATE@@PBU_RECTL@@@Z.c)
 *     _bMoveDevDragRect@16 @ 0x1E3757 (_bMoveDevDragRect@16.c)
 *     _bMoveDevPreviewRect@24 @ 0x1E3ABE (_bMoveDevPreviewRect@24.c)
 * Callees:
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QAEXPAUHDEV__@@PAUSfmState@@H@Z @ 0x20314 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QAEXPAUHDEV__@@PAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QAEXPAW4_HLSURF_REDIRECTIONSTYLE@@PAK1PAPAXPAU_LUID@@@Z @ 0x20372 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QAEXPAW4_HLSURF_REDIRECTIONSTYLE@@PAK1PAPAXPAU_LUID@@@Z.c)
 *     ?DwmCombineDwmSpriteLogSurfFlags@@YG?AU_DWMREDIR_SPRITEFLAGS@@U_DWMSPRITEFLAGS@@U_LOGSURF_FLAGS@@@Z @ 0x2041A (-DwmCombineDwmSpriteLogSurfFlags@@YG-AU_DWMREDIR_SPRITEFLAGS@@U_DWMSPRITEFLAGS@@U_LOGSURF_FLAGS@.c)
 *     _DwmAsyncUpdateSprite@44 @ 0x2044E (_DwmAsyncUpdateSprite@44.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QAEJPAUHDEV__@@PAUSfmState@@@Z @ 0x21CFA (-StopSfmStateTracking@SFMLOGICALSURFACE@@QAEJPAUHDEV__@@PAUSfmState@@@Z.c)
 *     ?DeInitialize@SFMLOGICALSURFACE@@QAEXPAUHLSURF__@@W4_CLEANUPTYPE@@@Z @ 0x24A46 (-DeInitialize@SFMLOGICALSURFACE@@QAEXPAUHLSURF__@@W4_CLEANUPTYPE@@@Z.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QAEHXZ @ 0x25308 (-bDeviceBitmap@SFMLOGICALSURFACE@@QAEHXZ.c)
 *     _DwmAsyncDirtySprite@24 @ 0x2531C (_DwmAsyncDirtySprite@24.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vSpUpdateDirtyRgn@@YGXPAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUHDC__@@PAUtagRECT@@PAKH@Z @ 0x60D20 (-vSpUpdateDirtyRgn@@YGXPAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUHDC__@@PAUtagRECT@@PAKH@Z.c)
 *     ?bFullScreen@XDCOBJ@@QAEHXZ @ 0x78918 (-bFullScreen@XDCOBJ@@QAEHXZ.c)
 *     ?GdiUpdateSprite@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_BLENDFUNCTION@@KPAUtagRECT@@@Z @ 0x9F558 (-GdiUpdateSprite@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_BLENDFUN.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YGHAAVPDEVOBJ@@@Z @ 0xAEAAA (-bRemoteDriverNeedsDeviceBitmaps@@YGHAAVPDEVOBJ@@@Z.c)
 *     ?bSpDwmUpdateSpriteShape@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAU_SURFOBJ@@PAU_RECTL@@PAVPALETTE@@PAK4PAPAV3@@Z @ 0xC62AC (-bSpDwmUpdateSpriteShape@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAU_SURFOBJ@@PAU_REC.c)
 *     ?bSpDwmCreateLogicalSurface@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagSIZE@@PAPAV3@@Z @ 0xC6572 (-bSpDwmCreateLogicalSurface@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagSIZE@@PAPAV.c)
 *     _GreAddLogicalSurfaceToDirtyQueue@16 @ 0xC6A7E (_GreAddLogicalSurfaceToDirtyQueue@16.c)
 *     ?bShouldUseSfmTokenArray@@YGEU_LOGSURF_FLAGS@@@Z @ 0xCA2FE (-bShouldUseSfmTokenArray@@YGEU_LOGSURF_FLAGS@@@Z.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YGXPAVDWMSPRITE@@_N@Z @ 0xD0592 (-vSpDwmUpdateSpriteVisibility@@YGXPAVDWMSPRITE@@_N@Z.c)
 *     _vSpDwmGetMiniWinInfoForNonWindowSprite@8 @ 0xD2CCC (_vSpDwmGetMiniWinInfoForNonWindowSprite@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?bSpDwmUpdateDragRectShape@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagPOINT@@PAUtagSIZE@@PAKPAPAV3@@Z @ 0x1CD629 (-bSpDwmUpdateDragRectShape@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagPOINT@@PAUta.c)
 *     ?pConvertDfbSurfaceToDibPostNKAPC@@YGHPAUHSURF__@@@Z @ 0x220DEC (-pConvertDfbSurfaceToDibPostNKAPC@@YGHPAUHSURF__@@@Z.c)
 */

int __userpurge GreUpdateSpriteInternal@<eax>(
        int a1@<edx>,
        HDEV a2@<ecx>,
        HDEV a3,
        HWND a4,
        void *a5,
        HDC a6,
        struct tagPOINT *a7,
        struct tagSIZE *a8,
        HDC a9,
        struct tagPOINT *a10,
        unsigned int a11,
        struct _BLENDFUNCTION *a12,
        unsigned int a13,
        struct tagRECT *a14,
        struct tagRECT *a15,
        int a16,
        int a17)
{
  struct _BLENDFUNCTION *v17; // esi
  unsigned int v18; // edi
  unsigned int v19; // ebx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v22; // esi
  int v23; // edx
  int v24; // esi
  HDEV v25; // ebx
  char *v26; // edi
  PVOID v27; // eax
  int v28; // eax
  int v29; // edx
  HDEV v30; // edi
  HDEV cx; // ebx
  HDEV v32; // edi
  int v33; // edx
  struct tagPOINT *v34; // ecx
  SFMLOGICALSURFACE *v35; // ebx
  int v36; // ecx
  HDC v37; // eax
  int LogicalSurface; // eax
  struct tagPOINT *v39; // eax
  LONG x; // ecx
  int v41; // ecx
  SURFACE *v42; // eax
  LONG top; // ecx
  int v44; // eax
  int v45; // edx
  int updated; // eax
  int v47; // ebx
  int v48; // ebx
  int v49; // ecx
  int v50; // eax
  struct _SURFOBJ *v51; // ecx
  int v52; // eax
  int v53; // ecx
  int v54; // eax
  int v55; // ecx
  int v56; // eax
  int v57; // edx
  HDEV v58; // ebx
  void *v59; // eax
  SFMLOGICALSURFACE *right; // ebx
  int v61; // eax
  int v62; // edi
  LONG v63; // ebx
  int v64; // ecx
  int v65; // edi
  unsigned int left; // eax
  void *v67; // eax
  void (*v68)(void); // edi
  int v70; // [esp-24h] [ebp-164h]
  int v71; // [esp-20h] [ebp-160h]
  const void *v72; // [esp-18h] [ebp-158h]
  int v73; // [esp-14h] [ebp-154h]
  unsigned int v74; // [esp-10h] [ebp-150h]
  int v75; // [esp-10h] [ebp-150h]
  unsigned int v76; // [esp-Ch] [ebp-14Ch]
  int v77; // [esp-Ch] [ebp-14Ch]
  BOOL v78; // [esp-8h] [ebp-148h]
  int v79; // [esp-4h] [ebp-144h]
  struct DWMSPRITE *v80; // [esp+0h] [ebp-140h]
  struct SFMLOGICALSURFACE **v81; // [esp+4h] [ebp-13Ch]
  int v82; // [esp+10h] [ebp-130h]
  struct tagSIZE v83; // [esp+14h] [ebp-12Ch] BYREF
  HDEV v84; // [esp+1Ch] [ebp-124h]
  struct tagPOINT *v85; // [esp+20h] [ebp-120h]
  unsigned int v86; // [esp+24h] [ebp-11Ch]
  HDC v87; // [esp+28h] [ebp-118h]
  HDEV v88; // [esp+2Ch] [ebp-114h]
  int v89; // [esp+30h] [ebp-110h] BYREF
  struct SFMLOGICALSURFACE *v90; // [esp+34h] [ebp-10Ch]
  struct _RECTL v91; // [esp+38h] [ebp-108h] BYREF
  HDC v92; // [esp+48h] [ebp-F8h]
  HDEV v93; // [esp+4Ch] [ebp-F4h]
  HDEV v94; // [esp+50h] [ebp-F0h] BYREF
  unsigned int v95; // [esp+54h] [ebp-ECh] BYREF
  unsigned int v96; // [esp+58h] [ebp-E8h] BYREF
  int v97; // [esp+5Ch] [ebp-E4h] BYREF
  int v98; // [esp+60h] [ebp-E0h]
  int v99; // [esp+64h] [ebp-DCh]
  int v100; // [esp+68h] [ebp-D8h]
  int v101; // [esp+6Ch] [ebp-D4h]
  unsigned int v102; // [esp+70h] [ebp-D0h]
  int v103; // [esp+74h] [ebp-CCh]
  _DWORD v104[3]; // [esp+78h] [ebp-C8h] BYREF
  HWND v105; // [esp+84h] [ebp-BCh]
  _DWORD Buffer[2]; // [esp+88h] [ebp-B8h] BYREF
  _DWORD v107[4]; // [esp+90h] [ebp-B0h] BYREF
  int v108; // [esp+A0h] [ebp-A0h] BYREF
  int v109; // [esp+A4h] [ebp-9Ch]
  int v110; // [esp+A8h] [ebp-98h]
  int v111; // [esp+ACh] [ebp-94h]
  _BYTE v112[140]; // [esp+B0h] [ebp-90h] BYREF
  unsigned int v113; // [esp+168h] [ebp+28h]

  v103 = a1;
  v88 = a2;
  v93 = a3;
  v105 = a4;
  v91.top = (LONG)a5;
  v87 = a6;
  v17 = a12;
  v92 = (HDC)a7;
  v18 = ((unsigned int)&loc_1FFFFC + 4) & a11;
  v91.bottom = (LONG)a8;
  v85 = a10;
  v90 = (struct SFMLOGICALSURFACE *)a12;
  v86 = a13;
  v82 = 0;
  v101 = 1;
  v102 = ((unsigned int)&loc_1FFFFC + 4) & a11;
  memset(v112, 0, 0x84u);
  v19 = a11 & 0xFFDFFFFF;
  v89 = 0;
  v91.left = 0;
  v96 = 0;
  v95 = 0;
  v97 = 0;
  HIBYTE(v83.cy) = 0;
  v113 = a11 & 0xFFDFFFFF;
  if ( !a14 || !g_pDwmState )
    goto LABEL_137;
  v99 = 0;
  if ( !v18 )
  {
    GreAcquireSemaphore(_ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", _ghsemGreLock, 2);
    v99 = 1;
  }
  v94 = v88;
  v100 = 0;
  if ( !v102 )
  {
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_DWORD *)(ThreadWin32Thread + 52) && !*(_DWORD *)(ThreadWin32Thread + 56) )
    {
      GreAcquireSemaphore(_ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", _ghsemSprite, 5);
      v100 = 1;
    }
  }
  v22 = _ghsemDwmState;
  v98 = _ghsemDwmState;
  if ( v102 )
  {
    GreAcquireSemaphoreSharedInternal(_ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"hsem", _ghsemDwmState);
  }
  else
  {
    GreAcquireSemaphore(_ghsemDwmState);
  }
  if ( g_pDwmState )
  {
    v24 = 0;
    v25 = v93;
    if ( v103 )
    {
      v25 = 0;
      Buffer[1] = 0;
      Buffer[0] = v103;
      v26 = (char *)g_pDwmState + 40;
      if ( g_pDwmState != (struct DwmState *)-40 )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v26, 0);
      }
      v27 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)g_pDwmState, Buffer);
      if ( v27 )
        v25 = (HDEV)*((_DWORD *)v27 + 1);
      if ( g_pDwmState != (struct DwmState *)-40 )
      {
        ExReleasePushLockExclusiveEx(v26, 0);
        KeLeaveCriticalRegion();
      }
    }
    if ( !v25 )
      goto LABEL_127;
    LOBYTE(v23) = 15;
    v28 = HmgShareLockCheck(v25, v23);
    v24 = v28;
    if ( !v28 )
    {
LABEL_129:
      v22 = v98;
      goto LABEL_130;
    }
    if ( (*(_BYTE *)(v28 + 132) & 0x10) != 0 )
    {
LABEL_127:
      if ( v24 )
        DEC_SHARE_REF_CNT(v24);
      goto LABEL_129;
    }
    v101 = 0;
    v82 = 1;
    if ( v28 != -60 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v24 + 60, 0);
    }
    v30 = *(HDEV *)(v24 + 136);
    cx = v30;
    v93 = *(HDEV *)v24;
    v84 = v30;
    v83.cx = (LONG)v30;
    v91.right = 0;
    if ( v30 && *(_DWORD *)v30 )
    {
      LOBYTE(v29) = 18;
      v91.right = HmgLock(*(_DWORD *)v30, v29);
    }
    v32 = v30 + 42;
    if ( v32 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v32, 0);
    }
    if ( v90 )
    {
      v107[0] = *(_DWORD *)v90;
      v107[1] = *((_DWORD *)v90 + 1);
      v107[2] = *((_DWORD *)v90 + 2);
      v107[3] = *((_DWORD *)v90 + 3);
      v90 = (struct SFMLOGICALSURFACE *)v107;
    }
    v33 = v113;
    if ( v113 == 0x2000000 )
    {
      v113 = 570425346;
      v89 = 33488896;
      v85 = (struct tagPOINT *)&v89;
      vSpDwmUpdateSpriteVisibility(v80, (bool)v81);
      v33 = 570425346;
    }
    if ( (v33 & 0x20000000) != 0 )
    {
      v33 &= ~0x20000000u;
      v113 = v33;
    }
    else if ( (v33 & 0x40000000) != 0 || !v33 )
    {
      v33 = *(_DWORD *)(v24 + 48);
      v34 = (struct tagPOINT *)(v24 + 52);
      v37 = *(HDC *)(v24 + 56);
      v113 = v33;
      v85 = (struct tagPOINT *)(v24 + 52);
      a9 = v37;
      goto LABEL_38;
    }
    v34 = v85;
LABEL_38:
    if ( (v33 & 2) != 0 && (!v34 || (v34->x & 0x1000000) != 0 && ((_BYTE)v84[41] & 1) != 0) )
    {
      v82 = 0;
      goto LABEL_43;
    }
    *(_DWORD *)(v24 + 48) = v33;
    if ( (v33 & 2) != 0 )
    {
      if ( *(_BYTE *)(v24 + 55) != HIBYTE(v85->x) )
      {
        LogicalSurface = bSpDwmCreateLogicalSurface(
                           v84,
                           0,
                           (struct SFMLOGICALSURFACE *)&v83,
                           (struct tagSIZE *)v80,
                           v81);
        cx = (HDEV)v83.cx;
        LOBYTE(v33) = v113;
        v82 = LogicalSurface;
      }
      v39 = v85;
      *(_DWORD *)(v24 + 52) = v85->x;
      x = v39->x;
      *((_DWORD *)cx + 39) |= 0x40u;
      *((_DWORD *)cx + 38) = x;
    }
    if ( (v33 & 1) != 0 )
    {
      *(_DWORD *)(v24 + 56) = a9;
      if ( *((_DWORD *)v84 + 28) )
      {
        if ( SFMLOGICALSURFACE::bDeviceBitmap((SFMLOGICALSURFACE *)v84) && !bRemoteDriverNeedsDeviceBitmaps(v80) )
        {
          v84 = (HDEV)(*((_DWORD *)v84 + 28) - 16);
          if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v94) )
          {
            v41 = *((_DWORD *)v84 + 19);
            if ( (v41 & 0x20) == 0 )
            {
              *((_DWORD *)v84 + 19) = v41 | 0x20;
              pConvertDfbSurfaceToDibPostNKAPC((HSURF)v80);
              HIBYTE(v83.cy) = 1;
            }
          }
          else
          {
            v42 = (SURFACE *)pProcessDfbSurfaces(v84, 1, 0);
            if ( v42 )
            {
              cx = (HDEV)SURFACE::GetFirstLSurf(v42);
              v83.cx = (LONG)cx;
            }
          }
        }
      }
    }
    if ( !v82 )
      goto LABEL_43;
    top = v91.top;
    if ( v91.top )
    {
      v44 = *(_DWORD *)v91.top;
      v45 = *(_DWORD *)(v91.top + 4) - *(_DWORD *)(v24 + 36);
      *(_DWORD *)(v24 + 40) += *(_DWORD *)v91.top - *(_DWORD *)(v24 + 32);
      *(_DWORD *)(v24 + 44) += v45;
      *(_DWORD *)(v24 + 36) += v45;
      top = v91.top;
      *(_DWORD *)(v24 + 32) = v44;
    }
    if ( ((_BYTE)cx[41] & 1) != 0 )
    {
      if ( v90 && *((_DWORD *)cx + 28) )
        vSpUpdateDirtyRgn((struct DWMSPRITE *)v92, v90, (HDC)&v91, a15, (unsigned int *)v80, (int)v81);
    }
    else if ( (v113 & 0x2000000) != 0 )
    {
      if ( top && v87 )
      {
        updated = bSpDwmUpdateDragRectShape(
                    cx,
                    (struct DWMSPRITE *)&v91,
                    (struct SFMLOGICALSURFACE *)v87,
                    (struct tagPOINT *)&v91,
                    &v83,
                    (unsigned int *)v80,
                    v81);
        v82 = updated;
        goto LABEL_81;
      }
    }
    else if ( v91.bottom && v87 )
    {
      memset(v104, 0, sizeof(v104));
      XDCOBJ::vLock((XDCOBJ *)v104, v92);
      v47 = v104[0];
      v82 = 0;
      if ( !v104[0] )
        goto LABEL_43;
      if ( !XDCOBJ::bFullScreen((XDCOBJ *)v104) )
      {
        v48 = *(_DWORD *)(v47 + 504);
        v49 = *(_DWORD *)v91.bottom;
        v109 = *(_DWORD *)(v91.bottom + 4);
        v108 = v49;
        v50 = v49 + *(_DWORD *)v87;
        v51 = *(struct _SURFOBJ **)(v48 + 88);
        v110 = v50;
        v111 = v109 + *((_DWORD *)v87 + 1);
        v52 = bSpDwmUpdateSpriteShape(
                (HDEV)v83.cx,
                (struct DWMSPRITE *)(v48 + 16),
                (struct SFMLOGICALSURFACE *)&v108,
                v51,
                &v91,
                v90 != 0 ? (struct PALETTE *)v107 : 0,
                (unsigned int *)&v83,
                (struct _RECTL *)v80,
                v81);
        v47 = v104[0];
        v82 = v52;
      }
      if ( v47 )
        XDCOBJ::vUnlockFast((XDCOBJ *)v104);
    }
    updated = v82;
LABEL_81:
    if ( updated )
    {
      v35 = (SFMLOGICALSURFACE *)v83.cx;
      v53 = *(_DWORD *)(v83.cx + 164);
      v54 = v53;
      if ( (v53 & 1) != 0 && (v53 & 0x40) == 0 )
      {
        v54 = v53 | 0x40;
        *(_DWORD *)(v83.cx + 164) = v53 | 0x40;
      }
      v55 = *((_DWORD *)v35 + 28);
      if ( v55 && (*(_BYTE *)(v55 + 60) & 1) == 0 && !*(_DWORD *)(v55 + 140) )
        *((_DWORD *)v35 + 41) = v54 | 8;
      goto LABEL_44;
    }
LABEL_43:
    v35 = (SFMLOGICALSURFACE *)v83.cx;
LABEL_44:
    if ( *(_DWORD *)(v24 + 24) )
    {
      v36 = v86;
    }
    else
    {
      vSpDwmGetMiniWinInfoForNonWindowSprite(v112, v24 + 32);
      v86 = v36;
    }
    if ( v82 && !HIBYTE(v83.cy) && (v36 || (*((_BYTE *)v35 + 164) & 8) != 0) )
    {
      if ( (*((_BYTE *)v35 + 164) & 8) != 0 )
        SFMLOGICALSURFACE::StartSfmStateTracking(v35, v88, gpSfmState, v36);
      SFMLOGICALSURFACE::GetRedirectionInfo(v35, (enum _HLSURF_REDIRECTIONSTYLE *)&v97, &v96, &v95, 0, 0);
      v56 = DwmCombineDwmSpriteLogSurfFlags(*(_DWORD *)(v24 + 132), *((_DWORD *)v35 + 41));
      v79 = *(_DWORD *)(v24 + 68);
      *(_DWORD *)(v24 + 68) = 0;
      v57 = *(_DWORD *)v35;
      v58 = *(HDEV *)v24;
      v78 = *(_DWORD *)(v24 + 76) >= 1;
      v76 = v95;
      v74 = v96;
      v73 = v97;
      v72 = (const void *)v86;
      v71 = v56;
      v70 = v57;
      v59 = (void *)UserReferenceDwmApiPort();
      DwmAsyncUpdateSprite(v59, (int)v58, v70, v71, (_DWORD *)(v24 + 48), v72, v73, v74, v76, v78, v79);
    }
    if ( v32 )
    {
      ExReleasePushLockExclusiveEx(v32, 0);
      KeLeaveCriticalRegion();
    }
    right = (SFMLOGICALSURFACE *)v91.right;
    if ( v91.right )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v91.right + 8));
      v61 = *((_DWORD *)right + 39);
      if ( (v61 & 0x80u) != 0 && (v61 & 8) != 0 && (v61 & 0x10) != 0 )
      {
        *((_DWORD *)right + 39) = v61 & 0xFFFFFFEF;
        SFMLOGICALSURFACE::StopSfmStateTracking(right, 0, gpSfmState);
      }
      v62 = *(_DWORD *)right;
      if ( *(_DWORD *)right )
        right = (SFMLOGICALSURFACE *)HmgRemoveObject(v62, 0, 0, 1, 18, 0);
      if ( right )
      {
        SFMLOGICALSURFACE::DeInitialize((HDEV *)right, v62, 0);
        FreeObject(right, 18);
        EtwLogicalSurfDestroyEvent(v62, v62 >> 31, 0);
      }
    }
    v63 = v83.cx;
    v64 = *(_DWORD *)(v83.cx + 112);
    if ( v64 )
      v65 = *(_DWORD *)(v64 + 4);
    else
      v65 = 0;
    v91.right = *(_DWORD *)v24;
    left = v91.left;
    v86 = v91.left;
    if ( v64 && (*(_BYTE *)(v64 + 60) & 1) != 0 )
    {
      left = v91.left & 0xFFFFFFFE;
      v86 = v91.left & 0xFFFFFFFE;
    }
    if ( (left & 1) != 0 )
    {
      if ( (unsigned __int8)bShouldUseSfmTokenArray(*(_DWORD *)(v83.cx + 164)) )
      {
        GreAddLogicalSurfaceToDirtyQueue(v65, 0);
        left = v86 & 0xFFFFFFFE;
      }
      else
      {
        left = v86;
      }
    }
    if ( left )
    {
      v77 = left;
      v75 = v64;
      v67 = (void *)UserReferenceDwmApiPort();
      DwmAsyncDirtySprite(v67, v91.right, v75, v77, v65, 0);
    }
    if ( v63 != -168 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v63 + 168, 0);
    }
    *(_DWORD *)(v63 + 164) &= ~8u;
    if ( v63 == -168 )
    {
      v68 = KeLeaveCriticalRegion;
    }
    else
    {
      ExReleasePushLockExclusiveEx(v63 + 168, 0);
      v68 = KeLeaveCriticalRegion;
      KeLeaveCriticalRegion();
    }
    if ( v24 != -60 )
    {
      ExReleasePushLockExclusiveEx(v24 + 60, 0);
      v68();
    }
    goto LABEL_127;
  }
LABEL_130:
  if ( v99 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", _ghsemGreLock);
    GreReleaseSemaphoreInternal(_ghsemGreLock);
  }
  EtwTraceGreLockReleaseSemaphore(L"hsem", v22);
  GreReleaseSemaphoreInternal(v22);
  if ( v100 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", _ghsemSprite);
    GreReleaseSemaphoreInternal(_ghsemSprite);
  }
  if ( !v101 )
    return v82;
  v19 = v113;
  v17 = (struct _BLENDFUNCTION *)v90;
  v18 = v102;
LABEL_137:
  if ( v18 )
    v19 |= (unsigned int)&loc_1FFFFC + 4;
  return GdiUpdateSprite(
           v93,
           v105,
           (void *)v91.top,
           v87,
           (struct tagPOINT *)v92,
           (struct tagSIZE *)v91.bottom,
           a9,
           v85,
           v19,
           v17,
           (unsigned int)v80,
           (struct tagRECT *)v81);
}
