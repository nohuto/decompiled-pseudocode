/*
 * XREFs of ?vSpComposite@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E0318
 * Callers:
 *     ?vSpRedrawSprite@@YGXPAVSPRITE@@@Z @ 0x9FD10 (-vSpRedrawSprite@@YGXPAVSPRITE@@@Z.c)
 *     ?bSpPtInSprite@@YGHPAVSPRITE@@HH@Z @ 0x1DE2FD (-bSpPtInSprite@@YGHPAVSPRITE@@HH@Z.c)
 *     ?vSpRedrawArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@H@Z @ 0x1E1DFF (-vSpRedrawArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YGXPAU_SPRITESTATE@@PAU_RECTL@@@Z @ 0x1E1FC9 (-vSpRedrawAreaExMirror@@YGXPAU_SPRITESTATE@@PAU_RECTL@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YGXPAVSPRITE@@PAU_RECTL@@@Z @ 0x1E22F2 (-vSpRedrawUncoveredArea@@YGXPAVSPRITE@@PAU_RECTL@@@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?iComplexity@RGNOBJ@@QBEJXZ @ 0x5A892 (-iComplexity@RGNOBJ@@QBEJXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z @ 0x5D130 (-bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QAEXXZ @ 0x794B6 (-vAltUnlock@EXLATEOBJ@@QAEXXZ.c)
 *     ?INVOKEOFFCOPYBITS@@YGHPAU_POINTL@@PAU_SURFOBJ@@01PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@0@Z @ 0x92B62 (-INVOKEOFFCOPYBITS@@YGHPAU_POINTL@@PAU_SURFOBJ@@01PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@0@Z.c)
 *     _OffTransparentBlt@44 @ 0xCAB1A (_OffTransparentBlt@44.c)
 *     ?bAllowShareAccess@@YGHPAU_SURFOBJ@@@Z @ 0xE51B4 (-bAllowShareAccess@@YGHPAU_SURFOBJ@@@Z.c)
 *     _OffAlphaBlend@40 @ 0xE51D2 (_OffAlphaBlend@40.c)
 *     _OffBitBlt@56 @ 0xE9E3E (_OffBitBlt@56.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QAE@XZ @ 0x1DA67C (--1ECLIPOBJTMPIFNEEDED@@QAE@XZ.c)
 *     ?bConcurrent@@YGHPAU_SPRITESTATE@@@Z @ 0x1DCDEA (-bConcurrent@@YGHPAU_SPRITESTATE@@@Z.c)
 *     ?bIgnoreMirrorUpdate@@YGHPAVSPRITE@@@Z @ 0x1DCE92 (-bIgnoreMirrorUpdate@@YGHPAVSPRITE@@@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QAEXHPAVREGION@@AAVERECTL@@H@Z @ 0x1DFC7A (-vSetup@ECLIPOBJTMPIFNEEDED@@QAEXHPAVREGION@@AAVERECTL@@H@Z.c)
 *     ?vSpAddAndCompactDirtyRegion@@YGXPAVSPRITE@@PAVREGION@@@Z @ 0x1DFED7 (-vSpAddAndCompactDirtyRegion@@YGXPAVSPRITE@@PAVREGION@@@Z.c)
 *     ?vSpDeletePerPixelAlphaFromColorKey@@YGXPAU_SURFOBJ@@KPAU_RECTL@@PAE@Z @ 0x1E11DA (-vSpDeletePerPixelAlphaFromColorKey@@YGXPAU_SURFOBJ@@KPAU_RECTL@@PAE@Z.c)
 *     ?vSpDrawCursor@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@1@Z @ 0x1E1501 (-vSpDrawCursor@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@1@Z.c)
 *     ?vSpUpdatePerPixelAlphaFromColorKey@@YGXPAU_SURFOBJ@@KPAU_RECTL@@PAPAE@Z @ 0x1E2C63 (-vSpUpdatePerPixelAlphaFromColorKey@@YGXPAU_SURFOBJ@@KPAU_RECTL@@PAPAE@Z.c)
 */

void __userpurge vSpComposite(
        void *a1@<edx>,
        int a2@<ecx>,
        struct SPRITE *a3,
        struct _POINTL *a4,
        struct _SURFOBJ *a5,
        struct _RECTL *a6)
{
  char *v7; // esi
  struct _CLIPOBJ *v8; // edx
  unsigned int v9; // ecx
  __int32 v10; // edi
  struct REGION *iUniq; // eax
  unsigned int v12; // ecx
  ULONG v13; // edx
  LONG v14; // eax
  int v15; // eax
  DHPDEV dhpdev; // edx
  int v17; // ecx
  bool v18; // zf
  int v19; // eax
  char *v20; // edi
  int v21; // ecx
  int v22; // ecx
  char *v23; // eax
  char *v24; // eax
  int v25; // eax
  int v26; // ecx
  struct SPRITE *v27; // eax
  char *v28; // edi
  int v29; // ecx
  PKTHREAD CurrentThread; // eax
  PKTHREAD v31; // eax
  PKTHREAD v32; // eax
  PKTHREAD v33; // eax
  PKTHREAD v34; // eax
  PKTHREAD v35; // eax
  int (__stdcall *v36)(int, int, struct _CLIPOBJ *, int, int *, int *, int, int); // ecx
  PKTHREAD v37; // eax
  PKTHREAD v38; // eax
  PKTHREAD v39; // eax
  PKTHREAD v40; // eax
  struct SPRITE *v41; // eax
  int v42; // ecx
  PKTHREAD v43; // eax
  PKTHREAD v44; // eax
  PKTHREAD v45; // eax
  PKTHREAD v46; // eax
  PKTHREAD v47; // eax
  PKTHREAD v48; // eax
  BOOL (__stdcall *v49)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // ecx
  PKTHREAD v50; // eax
  PKTHREAD v51; // eax
  PKTHREAD v52; // eax
  PKTHREAD v53; // eax
  LONG top; // eax
  ULONG v55; // eax
  char *v56; // eax
  unsigned int v57; // eax
  int v58; // eax
  int v59; // ecx
  struct SPRITE *v60; // eax
  char *v61; // edi
  int v62; // ecx
  PKTHREAD v63; // eax
  PKTHREAD v64; // eax
  PKTHREAD v65; // eax
  PKTHREAD v66; // eax
  PKTHREAD v67; // eax
  PKTHREAD v68; // eax
  int (__stdcall *v69)(int, int, struct _CLIPOBJ *, int, int *, int *, int); // ecx
  PKTHREAD v70; // eax
  PKTHREAD v71; // eax
  PKTHREAD v72; // eax
  PKTHREAD v73; // eax
  ULONG cjBits; // esi
  int v75; // [esp-10h] [ebp-128h]
  struct REGION *v76; // [esp-Ch] [ebp-124h]
  struct ERECTL *v77; // [esp-8h] [ebp-120h]
  int v78; // [esp-4h] [ebp-11Ch]
  int v79; // [esp-4h] [ebp-11Ch]
  struct _RECTL *v80; // [esp+0h] [ebp-118h]
  struct _POINTL *v81; // [esp+4h] [ebp-114h]
  int v82[4]; // [esp+10h] [ebp-108h] BYREF
  __int32 v83; // [esp+20h] [ebp-F8h]
  _DWORD v84[2]; // [esp+24h] [ebp-F4h] BYREF
  unsigned int v85; // [esp+2Ch] [ebp-ECh]
  struct _CLIPOBJ *v86; // [esp+30h] [ebp-E8h]
  struct _SURFOBJ v87; // [esp+34h] [ebp-E4h] BYREF
  struct _CLIPOBJ *v88; // [esp+68h] [ebp-B0h]
  struct SPRITE *v89; // [esp+6Ch] [ebp-ACh]
  REGION *v90[33]; // [esp+70h] [ebp-A8h] BYREF
  int v91; // [esp+F4h] [ebp-24h] BYREF
  HSURF v92; // [esp+F8h] [ebp-20h]
  char *v93; // [esp+FCh] [ebp-1Ch]
  char *v94; // [esp+100h] [ebp-18h]
  int dhsurf; // [esp+104h] [ebp-14h] BYREF
  HSURF hsurf; // [esp+108h] [ebp-10h]
  char *v97; // [esp+10Ch] [ebp-Ch]
  char *v98; // [esp+110h] [ebp-8h]

  v89 = a3;
  v7 = 0;
  v87.pvBits = a1;
  v88 = (struct _CLIPOBJ *)a4;
  v87.dhsurf = 0;
  v87.hsurf = 0;
  v90[17] = 0;
  v90[18] = 0;
  v90[28] = (REGION *)1;
  v90[30] = 0;
  v90[12] = 0;
  v90[31] = 0;
  if ( bIgnoreMirrorUpdate((unsigned int *)a2) )
    goto LABEL_155;
  v9 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 0x400) != 0 || (v9 & 0xC0) == 0x40 || (v9 & 0x20) == 0 || (v9 & 1) != 0 )
    goto LABEL_155;
  v10 = _InterlockedExchange((volatile __int32 *)(a2 + 136), 0);
  v83 = v10;
  v86 = 0;
  v87.sizlBitmap.cy = 0;
  if ( *(_DWORD *)(a2 + 132) && v10 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v87.iUniq);
    if ( v87.iUniq
      && (v87.hdev = *(HDEV *)(a2 + 132),
          *(_DWORD *)&v87.iType = v10,
          RGNOBJ::bMerge((RGNOBJ *)&v87.iUniq, (struct RGNOBJ *)&v87.hdev, (struct RGNOBJ *)&v87.iType, 8u)) )
    {
      if ( RGNOBJ::iComplexity((RGNOBJ *)&v87.iUniq) == 1 )
      {
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v87.iUniq);
        vSpAddAndCompactDirtyRegion(a2, v10);
        if ( v87.iBitmapFormat == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v87.iUniq);
        goto LABEL_155;
      }
      iUniq = (struct REGION *)v87.iUniq;
      v87.sizlBitmap.cy = v87.iUniq;
    }
    else
    {
      iUniq = (struct REGION *)v87.sizlBitmap.cy;
    }
    if ( v87.iBitmapFormat == 1 )
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v87.iUniq);
      iUniq = (struct REGION *)v87.sizlBitmap.cy;
    }
    if ( iUniq )
    {
      ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v90, 0, iUniq, (struct ERECTL *)v88, 0);
      goto LABEL_25;
    }
    v8 = v88;
  }
  if ( (*(_BYTE *)a2 & 0x40) != 0 )
  {
    if ( !v10 )
      goto LABEL_155;
    if ( !*(_DWORD *)(a2 + 132) )
    {
LABEL_28:
      vSpAddAndCompactDirtyRegion(a2, v10);
      goto LABEL_155;
    }
  }
  if ( !*(_DWORD *)(a2 + 132) )
    goto LABEL_29;
  v77 = (struct ERECTL *)v8;
  v76 = *(struct REGION **)(a2 + 132);
  v75 = bConcurrent(*(int **)(a2 + 12));
  ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v90, v75, v76, v77, 0);
LABEL_25:
  if ( (int)v90[1] < (int)v90[3] )
  {
    v86 = (struct _CLIPOBJ *)v90;
    if ( (int)v90[2] < (int)v90[4] )
    {
LABEL_29:
      v12 = *(_DWORD *)a2;
      v13 = *(_DWORD *)(a2 + 12);
      v14 = *(_DWORD *)(a2 + 4);
      v87.cjBits = v13;
      v87.lDelta = v14;
      v85 = v12;
      if ( (v12 & 8) != 0 )
      {
        v14 = 4;
        v87.lDelta = 4;
      }
      if ( (v12 & 0x100) != 0 )
        v87.lDelta = v14 & 0xEFFFFFFF;
      v87.dhsurf = (DHSURF)(v88->iUniq + *(_DWORD *)(a2 + 60) - *(_DWORD *)(a2 + 76));
      v87.hsurf = (HSURF)(v88->rclBounds.left + *(_DWORD *)(a2 + 64) - *(_DWORD *)(a2 + 80));
      v15 = *(_DWORD *)(v13 + 16);
      dhpdev = *(DHPDEV *)(a2 + 100);
      v87.pvScan0 = *(PVOID *)(v15 + 72);
      v87.iBitmapFormat = (ULONG)gppalRGB;
      v17 = *(_DWORD *)(a2 + 104);
      v84[0] = 0;
      v18 = v17 == *(_DWORD *)(v87.cjBits + 76);
      v87.dhpdev = dhpdev;
      v87.sizlBitmap.cx = 0;
      if ( !v18 || (dhpdev = v87.dhpdev, *(_DWORD *)(a2 + 108) != *(_DWORD *)(v87.cjBits + 80)) || (v85 & 0x40) != 0 )
      {
        if ( !EXLATEOBJ::bInitXlateObj(
                &v87.sizlBitmap.cx,
                0,
                0,
                dhpdev,
                (_DWORD *)v87.pvScan0,
                (int)ppalDefault,
                (int)ppalDefault,
                0,
                0,
                0,
                0) )
          goto LABEL_152;
      }
      if ( v87.lDelta != 2 )
      {
        switch ( v87.lDelta )
        {
          case 4:
            if ( *(_DWORD *)(a2 + 88) && SURFREFVIEW::bMap((SURFREFVIEW *)v84, *(struct _SURFOBJ **)(a2 + 88)) )
            {
              v19 = *(_DWORD *)(a2 + 88);
              v20 = 0;
              if ( v19 )
              {
                v21 = *(_DWORD *)(v19 + 56);
                if ( (v21 & 0x80004000) != 0 && (v21 & 0x200) == 0 )
                {
                  v20 = (char *)(v19 - 16);
                  GreLockDisplayDevice(*(_DWORD *)(v19 - 16 + 28));
                }
              }
              if ( v89 )
              {
                v22 = *((_DWORD *)v89 + 14);
                if ( (v22 & 0x80004000) != 0 && (v22 & 0x200) == 0 )
                {
                  v7 = (char *)v89 - 16;
                  GreLockDisplayDevice(*((_DWORD *)v89 + 3));
                }
              }
              INVOKEOFFCOPYBITS(
                (SURFOBJ *)v89,
                (int *)v87.pvBits,
                (struct _POINTL *)(a2 + 92),
                *(struct _SURFOBJ **)(a2 + 88),
                (struct _POINTL *)v86,
                (XLATEOBJ *)v87.sizlBitmap.cx,
                v88,
                (struct _XLATEOBJ *)&v87,
                v80,
                v81);
              if ( v7 )
                GreUnlockDisplayDevice(*((_DWORD *)v7 + 7));
              goto LABEL_109;
            }
LABEL_152:
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v87.sizlBitmap.cy);
            if ( v83 )
              vSpAddAndCompactDirtyRegion(a2, v83);
            SURFREFVIEW::bUnMap((SURFREFVIEW *)v84);
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v87.sizlBitmap);
            goto LABEL_155;
          case 1:
            if ( !*(_DWORD *)(a2 + 88) || !SURFREFVIEW::bMap((SURFREFVIEW *)v84, *(struct _SURFOBJ **)(a2 + 88)) )
              goto LABEL_152;
            dhsurf = (int)v87.dhsurf;
            v23 = (char *)v87.dhsurf + v88->rclBounds.top - v88->iUniq;
            hsurf = v87.hsurf;
            v97 = v23;
            v24 = (char *)v87.hsurf + v88->rclBounds.right - v88->rclBounds.left;
            *(_DWORD *)&v87.iType = 0;
            v98 = v24;
            v25 = *(_DWORD *)(a2 + 88);
            if ( v25 )
            {
              v26 = *(_DWORD *)(v25 + 56);
              if ( (v26 & 0x80004000) != 0 && (v26 & 0x200) == 0 )
              {
                v78 = *(_DWORD *)(v25 + 12);
                *(_DWORD *)&v87.iType = v25 - 16;
                GreLockDisplayDevice(v78);
              }
            }
            v27 = v89;
            v28 = 0;
            if ( v89 )
            {
              v29 = *((_DWORD *)v89 + 14);
              if ( (v29 & 0x80004000) != 0 && (v29 & 0x200) == 0 )
              {
                v28 = (char *)v89 - 16;
                GreLockDisplayDevice(*((_DWORD *)v89 + 3));
                v27 = v89;
              }
            }
            if ( *((_WORD *)v27 + 24) == 1 )
            {
              if ( bAllowShareAccess(v27) )
              {
                CurrentThread = KeGetCurrentThread();
                if ( W32GetThreadWin32Thread(CurrentThread) )
                {
                  v31 = KeGetCurrentThread();
                  if ( *(_DWORD *)(W32GetThreadWin32Thread(v31) + 156) )
                  {
                    v32 = KeGetCurrentThread();
                    if ( *(_DWORD *)(W32GetThreadWin32Thread(v32) + 52)
                      || (v33 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v33) + 56)) )
                    {
                      v34 = KeGetCurrentThread();
                      if ( (*(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(v34) + 156) + 20) & 0x8000) != 0 )
                      {
                        v35 = KeGetCurrentThread();
                        v36 = *(int (__stdcall **)(int, int, struct _CLIPOBJ *, int, int *, int *, int, int))(*(_DWORD *)(W32GetThreadWin32Thread(v35) + 156) + 68);
LABEL_80:
                        OffTransparentBlt(
                          v36,
                          (LONG *)v87.pvBits,
                          (int)v89,
                          (int *)(a2 + 92),
                          *(_DWORD *)(a2 + 88),
                          v86,
                          v87.sizlBitmap.cx,
                          (int *)v88,
                          &dhsurf,
                          *(_DWORD *)(a2 + 144),
                          0);
                        if ( v28 )
                          GreUnlockDisplayDevice(*((_DWORD *)v28 + 7));
                        if ( *(_DWORD *)&v87.iType )
                          GreUnlockDisplayDevice(*(_DWORD *)(*(_DWORD *)&v87.iType + 28));
                        goto LABEL_152;
                      }
                    }
                  }
                }
              }
              v27 = v89;
              if ( *((_WORD *)v89 + 24) == 1 )
              {
                if ( bAllowShareAccess(v89) )
                {
                  v37 = KeGetCurrentThread();
                  if ( W32GetThreadWin32Thread(v37) )
                  {
                    v38 = KeGetCurrentThread();
                    if ( *(_DWORD *)(W32GetThreadWin32Thread(v38) + 156) )
                    {
                      v39 = KeGetCurrentThread();
                      if ( *(_DWORD *)(W32GetThreadWin32Thread(v39) + 52) )
                        goto LABEL_79;
                      v40 = KeGetCurrentThread();
                      if ( *(_DWORD *)(W32GetThreadWin32Thread(v40) + 56) )
                        goto LABEL_79;
                    }
                  }
                }
                v27 = v89;
              }
            }
            if ( (*((_DWORD *)v27 + 14) & 0x8000) != 0 )
            {
              v36 = *(int (__stdcall **)(int, int, struct _CLIPOBJ *, int, int *, int *, int, int))(*((_DWORD *)v27 + 3)
                                                                                                  + 852);
              goto LABEL_80;
            }
LABEL_79:
            v36 = (int (__stdcall *)(int, int, struct _CLIPOBJ *, int, int *, int *, int, int))EngTransparentBlt;
            goto LABEL_80;
          case 0x1000000:
            vSpDrawCursor(v89, (struct _POINTL *)v88, &v87, v80, v81);
            goto LABEL_152;
        }
        v20 = 0;
        v85 = *(_DWORD *)v87.cjBits;
        v41 = v89;
        if ( v89 )
        {
          v42 = *((_DWORD *)v89 + 14);
          if ( (v42 & 0x80004000) != 0 && (v42 & 0x200) == 0 )
          {
            v20 = (char *)v89 - 16;
            GreLockDisplayDevice(*((_DWORD *)v89 + 3));
            v41 = v89;
          }
        }
        if ( *((_WORD *)v41 + 24) == 1 )
        {
          if ( bAllowShareAccess(v41) )
          {
            v43 = KeGetCurrentThread();
            if ( W32GetThreadWin32Thread(v43) )
            {
              v44 = KeGetCurrentThread();
              if ( *(_DWORD *)(W32GetThreadWin32Thread(v44) + 156) )
              {
                v45 = KeGetCurrentThread();
                if ( *(_DWORD *)(W32GetThreadWin32Thread(v45) + 52)
                  || (v46 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v46) + 56)) )
                {
                  v47 = KeGetCurrentThread();
                  if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(v47) + 156) + 20) & 1) != 0 )
                  {
                    v48 = KeGetCurrentThread();
                    v49 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_DWORD *)(W32GetThreadWin32Thread(v48) + 156) + 48);
LABEL_108:
                    OffBitBlt(
                      (int (__stdcall *)(int, int, int, struct _CLIPOBJ *, int, _DWORD *, int *, int, int, int *, int))v49,
                      (LONG *)v87.pvBits,
                      (int)v89,
                      0,
                      0,
                      0,
                      0,
                      0,
                      v88,
                      0,
                      0,
                      v85 + 952,
                      &gptlZero.x,
                      23130);
LABEL_109:
                    if ( v20 )
                      GreUnlockDisplayDevice(*((_DWORD *)v20 + 7));
                    goto LABEL_152;
                  }
                }
              }
            }
          }
          v41 = v89;
          if ( *((_WORD *)v89 + 24) == 1 )
          {
            if ( bAllowShareAccess(v89) )
            {
              v50 = KeGetCurrentThread();
              if ( W32GetThreadWin32Thread(v50) )
              {
                v51 = KeGetCurrentThread();
                if ( *(_DWORD *)(W32GetThreadWin32Thread(v51) + 156) )
                {
                  v52 = KeGetCurrentThread();
                  if ( *(_DWORD *)(W32GetThreadWin32Thread(v52) + 52) )
                    goto LABEL_107;
                  v53 = KeGetCurrentThread();
                  if ( *(_DWORD *)(W32GetThreadWin32Thread(v53) + 56) )
                    goto LABEL_107;
                }
              }
            }
            v41 = v89;
          }
        }
        if ( (*((_BYTE *)v41 + 56) & 1) != 0 )
        {
          v49 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_DWORD *)v41 + 3) + 832);
          goto LABEL_108;
        }
LABEL_107:
        v49 = EngBitBlt;
        goto LABEL_108;
      }
      if ( !*(_DWORD *)(a2 + 88) || !SURFREFVIEW::bMap((SURFREFVIEW *)v84, *(struct _SURFOBJ **)(a2 + 88)) )
        goto LABEL_152;
      top = v88->rclBounds.top;
      v92 = v87.hsurf;
      v55 = top - v88->iUniq;
      v91 = (int)v87.dhsurf;
      v93 = (char *)v87.dhsurf + v55;
      *(_DWORD *)&v87.iType = 0;
      v56 = (char *)v87.hsurf + v88->rclBounds.right - v88->rclBounds.left;
      v87.hdev = 0;
      v87.lDelta = 0;
      v94 = v56;
      if ( !EXLATEOBJ::bInitXlateObj(
              (int *)&v87.iType,
              0,
              0,
              v87.dhpdev,
              (_DWORD *)v87.iBitmapFormat,
              (int)ppalDefault,
              (int)ppalDefault,
              0,
              0,
              0,
              0)
        || !EXLATEOBJ::bInitXlateObj(
              (int *)&v87.hdev,
              0,
              0,
              (_DWORD *)v87.pvScan0,
              (_DWORD *)v87.iBitmapFormat,
              (int)ppalDefault,
              (int)ppalDefault,
              0,
              0,
              0,
              0)
        || !EXLATEOBJ::bInitXlateObj(
              &v87.lDelta,
              0,
              0,
              (_DWORD *)v87.iBitmapFormat,
              (_DWORD *)v87.pvScan0,
              (int)ppalDefault,
              (int)ppalDefault,
              0,
              0,
              0,
              0) )
      {
LABEL_151:
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v87.lDelta);
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v87.hdev);
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v87.iType);
        goto LABEL_152;
      }
      v82[0] = *(_DWORD *)(a2 + 140);
      v82[1] = *(_DWORD *)&v87.iType;
      v82[2] = (int)v87.hdev;
      v82[3] = v87.lDelta;
      v57 = *(_DWORD *)(a2 + 164) & 0xEFFFFFFF;
      v87.iBitmapFormat = 0;
      dhsurf = 0;
      hsurf = 0;
      v97 = 0;
      v98 = 0;
      v87.pvScan0 = 0;
      if ( v57 == 3 && !*(_BYTE *)(a2 + 171) && (*(_BYTE *)a2 & 0x40) != 0 )
      {
        GreAcquireSemaphore(*(_DWORD *)(v87.cjBits + 92));
        vSpUpdatePerPixelAlphaFromColorKey(
          (struct _SURFOBJ *)&v91,
          (unsigned int)&v87.pvScan0,
          v80,
          (unsigned __int8 **)v81);
        dhsurf = v91;
        v87.iBitmapFormat = 1;
        hsurf = v92;
        v97 = v93;
        v98 = v94;
      }
      v58 = *(_DWORD *)(a2 + 88);
      v87.dhpdev = 0;
      if ( v58 )
      {
        v59 = *(_DWORD *)(v58 + 56);
        if ( (v59 & 0x80004000) != 0 && (v59 & 0x200) == 0 )
        {
          v79 = *(_DWORD *)(v58 + 12);
          v87.dhpdev = (DHPDEV)(v58 - 16);
          GreLockDisplayDevice(v79);
        }
      }
      v60 = v89;
      v61 = 0;
      if ( v89 )
      {
        v62 = *((_DWORD *)v89 + 14);
        if ( (v62 & 0x80004000) != 0 && (v62 & 0x200) == 0 )
        {
          v61 = (char *)v89 - 16;
          GreLockDisplayDevice(*((_DWORD *)v89 + 3));
          v60 = v89;
        }
      }
      if ( *((_WORD *)v60 + 24) != 1 )
        goto LABEL_142;
      if ( bAllowShareAccess(v60) )
      {
        v63 = KeGetCurrentThread();
        if ( W32GetThreadWin32Thread(v63) )
        {
          v64 = KeGetCurrentThread();
          if ( *(_DWORD *)(W32GetThreadWin32Thread(v64) + 156) )
          {
            v65 = KeGetCurrentThread();
            if ( *(_DWORD *)(W32GetThreadWin32Thread(v65) + 52)
              || (v66 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v66) + 56)) )
            {
              v67 = KeGetCurrentThread();
              if ( (*(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(v67) + 156) + 20) & 0x10000) != 0 )
              {
                v68 = KeGetCurrentThread();
                v69 = *(int (__stdcall **)(int, int, struct _CLIPOBJ *, int, int *, int *, int))(*(_DWORD *)(W32GetThreadWin32Thread(v68) + 156)
                                                                                               + 72);
LABEL_145:
                OffAlphaBlend(
                  v69,
                  (LONG *)v87.pvBits,
                  (int)v89,
                  (int *)(a2 + 92),
                  *(_DWORD *)(a2 + 88),
                  v86,
                  v87.sizlBitmap.cx,
                  (int *)v88,
                  &v91,
                  (int)v82);
                if ( v61 )
                  GreUnlockDisplayDevice(*((_DWORD *)v61 + 7));
                if ( v87.dhpdev )
                  GreUnlockDisplayDevice(*((_DWORD *)v87.dhpdev + 7));
                if ( v87.iBitmapFormat )
                {
                  v91 = dhsurf;
                  v92 = hsurf;
                  v93 = v97;
                  v94 = v98;
                  vSpDeletePerPixelAlphaFromColorKey(
                    (struct _SURFOBJ *)&v91,
                    (unsigned int)v87.pvScan0,
                    v80,
                    (unsigned __int8 *)v81);
                  cjBits = v87.cjBits;
                  EtwTraceGreLockReleaseSemaphore(L"pState->hsemState", *(_DWORD *)(v87.cjBits + 92));
                  GreReleaseSemaphoreInternal(*(_DWORD *)(cjBits + 92));
                }
                goto LABEL_151;
              }
            }
          }
        }
      }
      if ( *((_WORD *)v89 + 24) != 1
        || !bAllowShareAccess(v89)
        || (v70 = KeGetCurrentThread(), !W32GetThreadWin32Thread(v70))
        || (v71 = KeGetCurrentThread(), !*(_DWORD *)(W32GetThreadWin32Thread(v71) + 156))
        || (v72 = KeGetCurrentThread(), !*(_DWORD *)(W32GetThreadWin32Thread(v72) + 52))
        && (v73 = KeGetCurrentThread(), !*(_DWORD *)(W32GetThreadWin32Thread(v73) + 56)) )
      {
LABEL_142:
        if ( (*((_DWORD *)v89 + 14) & 0x10000) != 0 )
        {
          v69 = *(int (__stdcall **)(int, int, struct _CLIPOBJ *, int, int *, int *, int))(*((_DWORD *)v89 + 3) + 856);
          goto LABEL_145;
        }
      }
      v69 = (int (__stdcall *)(int, int, struct _CLIPOBJ *, int, int *, int *, int))EngAlphaBlend;
      goto LABEL_145;
    }
  }
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v87.sizlBitmap.cy);
  if ( v10 )
    goto LABEL_28;
LABEL_155:
  ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED(v90);
}
