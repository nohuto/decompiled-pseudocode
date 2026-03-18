/*
 * XREFs of ?bSpBltScreenToScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x1DD39B
 * Callers:
 *     ?SpBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x65C80 (-SpBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K.c)
 * Callees:
 *     ??0SEMOBJEXORSHARED@@QAE@PAUHSEMAPHORE__@@H@Z @ 0x2350A (--0SEMOBJEXORSHARED@@QAE@PAUHSEMAPHORE__@@H@Z.c)
 *     ??0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z @ 0x304FA (--0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QAE@XZ @ 0x305EC (--1SPRITEDDIACCESS@@QAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ??XERECTL@@QAEAAV0@ABU_RECTL@@@Z @ 0x4F46A (--XERECTL@@QAEAAV0@ABU_RECTL@@@Z.c)
 *     ?prgnVisSnap@DC@@QBEPAVREGION@@XZ @ 0x53684 (-prgnVisSnap@DC@@QBEPAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QBEPAVREGION@@XZ @ 0x538E8 (-prgnRao@DC@@QBEPAVREGION@@XZ.c)
 *     ?INVOKEOFFCOPYBITS@@YGHPAU_POINTL@@PAU_SURFOBJ@@01PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@0@Z @ 0x92B62 (-INVOKEOFFCOPYBITS@@YGHPAU_POINTL@@PAU_SURFOBJ@@01PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@0@Z.c)
 *     ??YERECTL@@QAEXABU_RECTL@@@Z @ 0xA93D0 (--YERECTL@@QAEXABU_RECTL@@@Z.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QAEXXZ @ 0xAED46 (-vUnlock@PIDLOCKSPRITEAREA@@QAEXXZ.c)
 *     ??1SEMOBJEXORSHARED@@QAE@XZ @ 0xAEE44 (--1SEMOBJEXORSHARED@@QAE@XZ.c)
 *     ?bRender@NEEDDDILOCK@@QAEHPAPAU_CLIPOBJ@@@Z @ 0xCAC18 (-bRender@NEEDDDILOCK@@QAEHPAPAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YGHPAU_SURFOBJ@@@Z @ 0xE51B4 (-bAllowShareAccess@@YGHPAU_SURFOBJ@@@Z.c)
 *     ?bRedo@UNDOW32THREADPIDLOCKS@@QAEHXZ @ 0xE5B8C (-bRedo@UNDOW32THREADPIDLOCKS@@QAEHXZ.c)
 *     ?vUndo@UNDOW32THREADPIDLOCKS@@QAEXXZ @ 0xE5BBC (-vUndo@UNDOW32THREADPIDLOCKS@@QAEXXZ.c)
 *     ??1ENUMAREAS@@QAE@XZ @ 0xE5C28 (--1ENUMAREAS@@QAE@XZ.c)
 *     ?bEnum@ENUMAREAS@@QAEHPAPAVSPRITE@@PAU_RECTL@@@Z @ 0xE5C5A (-bEnum@ENUMAREAS@@QAEHPAPAVSPRITE@@PAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QAE@PAU_SPRITESTATE@@PAU_RECTL@@K1@Z @ 0xE5CD8 (--0ENUMAREAS@@QAE@PAU_SPRITESTATE@@PAU_RECTL@@K1@Z.c)
 *     _OffBitBlt@56 @ 0xE9E3E (_OffBitBlt@56.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bEnumLayers@ENUMAREAS@@QAEHPAPAVSPRITE@@@Z @ 0x1DCE2E (-bEnumLayers@ENUMAREAS@@QAEHPAPAVSPRITE@@@Z.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QAEXPAU_SPRITESTATE@@PAU_RECTL@@@Z @ 0x1DFB7F (-vLock@PIDLOCKSPRITEAREA@@QAEXPAU_SPRITESTATE@@PAU_RECTL@@@Z.c)
 *     ?vSpRedrawArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@H@Z @ 0x1E1DFF (-vSpRedrawArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@H@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_RECTL@@PAU_CLIPOBJ@@H@Z @ 0x1E28CD (-vSpUpdateLockedScreenAreas@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_RECTL@@PAU_CLIPOBJ@@H@Z.c)
 */

int __stdcall bSpBltScreenToScreen(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  int v11; // ebx
  int *v12; // edx
  int *v13; // ecx
  struct _RECTL *v14; // ecx
  struct _RECTL *v15; // edi
  int v17; // eax
  HDEV v18; // esi
  int v19; // ecx
  int v20; // eax
  struct _RECTL *v21; // ecx
  int v22; // eax
  int v23; // edi
  int v24; // ecx
  ENUMAREAS *v25; // ecx
  struct SPRITE *v26; // esi
  struct _SURFOBJ *v27; // esi
  struct _POINTL *v28; // eax
  int v29; // edi
  int v30; // ecx
  HSURF hsurf; // eax
  LONG v32; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  DC *v35; // ecx
  int v36; // esi
  DC *v37; // ecx
  struct REGION *v38; // eax
  DC *v39; // ecx
  struct REGION *v40; // eax
  struct _CLIPOBJ *v41; // esi
  int v42; // esi
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
  RECTL *p_rclBounds; // edi
  int v55; // eax
  int v56; // [esp+4h] [ebp-22Ch]
  HDEV v57; // [esp+4h] [ebp-22Ch]
  struct _CLIPOBJ *v58; // [esp+8h] [ebp-228h]
  struct _POINTL *v59; // [esp+Ch] [ebp-224h]
  struct _CLIPOBJ *v60; // [esp+14h] [ebp-21Ch] BYREF
  struct _RECTL *v61; // [esp+18h] [ebp-218h]
  int v62; // [esp+1Ch] [ebp-214h]
  struct _RECTL v63; // [esp+20h] [ebp-210h] BYREF
  unsigned int v64; // [esp+30h] [ebp-200h]
  int v65; // [esp+34h] [ebp-1FCh]
  HDEV hdev; // [esp+38h] [ebp-1F8h] BYREF
  int v67; // [esp+3Ch] [ebp-1F4h]
  struct _SURFOBJ *v68; // [esp+40h] [ebp-1F0h]
  struct SPRITE *v69; // [esp+44h] [ebp-1ECh] BYREF
  HDEV v70; // [esp+48h] [ebp-1E8h]
  struct _POINTL *p_lDelta; // [esp+4Ch] [ebp-1E4h]
  int v72; // [esp+50h] [ebp-1E0h]
  struct SPRITE *v73; // [esp+54h] [ebp-1DCh] BYREF
  struct SPRITE *v74; // [esp+58h] [ebp-1D8h] BYREF
  struct _SURFOBJ *v75; // [esp+5Ch] [ebp-1D4h]
  struct _POINTL *v76; // [esp+60h] [ebp-1D0h]
  POINTL *v77; // [esp+64h] [ebp-1CCh]
  int v78; // [esp+68h] [ebp-1C8h] BYREF
  struct _SURFOBJ *v79; // [esp+6Ch] [ebp-1C4h]
  int v80; // [esp+70h] [ebp-1C0h]
  LONG v81; // [esp+74h] [ebp-1BCh]
  LONG v82; // [esp+78h] [ebp-1B8h]
  struct REGION *v83; // [esp+7Ch] [ebp-1B4h] BYREF
  int v84; // [esp+80h] [ebp-1B0h] BYREF
  int v85; // [esp+84h] [ebp-1ACh]
  struct _CLIPOBJ *v86; // [esp+88h] [ebp-1A8h]
  struct _POINTL *v87; // [esp+8Ch] [ebp-1A4h]
  int v88; // [esp+90h] [ebp-1A0h]
  int v89; // [esp+94h] [ebp-19Ch]
  int v90; // [esp+98h] [ebp-198h]
  int v91; // [esp+9Ch] [ebp-194h]
  int v92; // [esp+A0h] [ebp-190h]
  char v93[4]; // [esp+A4h] [ebp-18Ch] BYREF
  struct _RECTL v94; // [esp+A8h] [ebp-188h] BYREF
  _BYTE v95[72]; // [esp+B8h] [ebp-178h] BYREF
  _BYTE v96[60]; // [esp+100h] [ebp-130h] BYREF
  int v97; // [esp+13Ch] [ebp-F4h]
  _BYTE v98[112]; // [esp+148h] [ebp-E8h] BYREF
  struct _RECTL v99; // [esp+1B8h] [ebp-78h] BYREF
  struct _CLIPOBJ v100; // [esp+1C8h] [ebp-68h] BYREF
  int v101; // [esp+1E0h] [ebp-50h]
  int v102; // [esp+1E4h] [ebp-4Ch]
  RECTL rclBounds; // [esp+1E8h] [ebp-48h] BYREF
  int v104; // [esp+1F8h] [ebp-38h] BYREF
  int v105; // [esp+1FCh] [ebp-34h]
  int v106; // [esp+200h] [ebp-30h]
  int v107; // [esp+204h] [ebp-2Ch]
  _DWORD v108[5]; // [esp+208h] [ebp-28h] BYREF
  struct _RECTL v109; // [esp+21Ch] [ebp-14h] BYREF

  v75 = a1;
  v90 = (int)a3;
  v79 = (struct _SURFOBJ *)a5;
  p_lDelta = a7;
  v87 = a8;
  v89 = (int)a9;
  v88 = (int)a10;
  memset(&v109, 0, sizeof(v109));
  v11 = 0;
  v60 = a4;
  v61 = a6;
  v84 = 0;
  v85 = 0;
  v69 = 0;
  v74 = 0;
  v73 = 0;
  memset(&v99, 0, sizeof(v99));
  memset(&v94, 0, sizeof(v94));
  v104 = 0;
  v105 = 0;
  v106 = 0;
  v107 = 0;
  v101 = 0;
  v102 = 0;
  memset(&v100, 0, sizeof(v100));
  memset(&rclBounds, 0, sizeof(rclBounds));
  if ( a4 && a4->iDComplexity )
  {
    rclBounds = a4->rclBounds;
    if ( ERECTL::bEmpty((ERECTL *)&rclBounds) )
      return 1;
    v104 = *v13;
    v105 = v13[1];
    v106 = v13[2];
    v107 = v13[3];
    ERECTL::operator*=(&v104, v12);
    v15 = v14;
    v61 = v14;
  }
  else
  {
    v15 = a6;
  }
  memset(&v63, 0, sizeof(v63));
  hdev = v75->hdev;
  UNDOW32THREADPIDLOCKS::vUndo((UNDOW32THREADPIDLOCKS *)&v63);
  v17 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&hdev);
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)v93, _ghsemSprite, v17);
  if ( !UNDOW32THREADPIDLOCKS::bRedo((int **)&v63) )
    goto LABEL_100;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v98, (struct PDEVOBJ *)&hdev);
  v18 = hdev + 16;
  v19 = v15->left - p_lDelta->x;
  v20 = v15->top - p_lDelta->y;
  v70 = hdev + 16;
  v65 = v19;
  v62 = v20;
  if ( v19 <= 0 )
  {
    v64 = 2;
    if ( v20 <= 0 )
      v64 = 0;
  }
  else
  {
    v64 = 2 * (v20 > 0) + 1;
  }
  if ( v60 )
  {
    if ( v60->iDComplexity )
    {
      rclBounds = v60->rclBounds;
      v18 = v70;
      v15 = v61;
    }
    else
    {
      v60 = 0;
    }
  }
  GreAcquireSemaphoreSharedInternal(*((_DWORD *)v18 + 22));
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", *((_DWORD *)v18 + 22));
  if ( *((_DWORD *)v18 + 161) )
  {
    v99.left = v15->left - v65;
    v99.right = v15->right - v65;
    v99.top = v15->top - v62;
    v99.bottom = v15->bottom - v62;
    if ( *((_DWORD *)v18 + 162) )
    {
      vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)&v99, 0, (struct _RECTL *)1, v58, (int)v59);
    }
    else if ( bIntersect(v15, &v99, &v109) )
    {
      vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)&v109, (struct _POINTL *)v60, (struct _RECTL *)1, v58, (int)v59);
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"hsem", *((_DWORD *)v18 + 22));
  GreReleaseSemaphoreInternal(*((_DWORD *)v18 + 22));
  v63.left = v15->left - v65;
  v63.top = v15->top - v62;
  v63.right = v15->right - v65;
  v63.bottom = v15->bottom - v62;
  ERECTL::operator+=(&v63, v15);
  PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v108, (struct _SPRITESTATE *)v18, v21);
  if ( !v108[0] )
    goto LABEL_97;
  ENUMAREAS::ENUMAREAS((ENUMAREAS *)v96, (struct _SPRITESTATE *)v18, v15, v64, &v63);
  if ( !v97 )
    goto LABEL_96;
  do
  {
    v22 = ENUMAREAS::bEnum((ENUMAREAS *)v96, &v69, &v94);
    v23 = v62;
    v92 = v22;
    v99.left = v94.left - v65;
    v99.right = v94.right - v65;
    v99.top = v94.top - v62;
    v99.bottom = v94.bottom - v62;
    do
    {
      if ( v69 )
      {
        v24 = *((_DWORD *)v69 + 28);
        v77 = (POINTL *)((char *)v69 + 116);
      }
      else
      {
        v24 = (int)v75;
        v77 = &gptlZero;
      }
      v67 = v24;
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v95, (struct _SPRITESTATE *)v18, &v99, v64, 0);
      do
      {
        v91 = ENUMAREAS::bEnum((ENUMAREAS *)v95, &v74, (struct _RECTL *)&v100.rclBounds.bottom);
        if ( ENUMAREAS::bEnumLayers(v25, &v73) )
        {
          do
          {
            v26 = v73;
            v74 = v73;
          }
          while ( ENUMAREAS::bEnumLayers((ENUMAREAS *)v95, &v73) );
        }
        else
        {
          v26 = v74;
        }
        if ( v26 )
        {
          v68 = (struct _SURFOBJ *)*((_DWORD *)v26 + 28);
          v28 = (struct _POINTL *)((char *)v26 + 116);
          v27 = v68;
          v76 = v28;
        }
        else
        {
          v27 = v75;
          v68 = v75;
          v76 = &gptlZero;
        }
        v100.iUniq = v65 + v100.rclBounds.bottom;
        v100.rclBounds.top = v65 + v101;
        v100.rclBounds.left = v23 + *(_DWORD *)&v100.iDComplexity;
        v100.rclBounds.right = v23 + v102;
        if ( v60 && !bIntersect((const struct _RECTL *)&v100, &rclBounds, &v60->rclBounds) )
          goto LABEL_88;
        v29 = 0;
        v78 = 0;
        if ( v67 )
        {
          v30 = *(_DWORD *)(v67 + 56);
          if ( (v30 & 0x80004000) != 0 && (v30 & 0x200) == 0 )
          {
            v29 = v67 - 16;
            v56 = *(_DWORD *)(v67 - 16 + 28);
            v78 = v67 - 16;
            GreLockDisplayDevice(v56);
          }
        }
        p_lDelta = 0;
        if ( v27 )
        {
          hsurf = v27[1].hsurf;
          if ( ((unsigned int)hsurf & 0x80004000) != 0 && ((unsigned __int16)hsurf & 0x200) == 0 )
          {
            v57 = v27->hdev;
            p_lDelta = (struct _POINTL *)&v27[-1].lDelta;
            GreLockDisplayDevice(v57);
          }
        }
        v72 = 0;
        v80 = 0;
        v32 = *((_DWORD *)hdev + 460);
        v81 = *((_DWORD *)hdev + 459);
        v82 = v32;
        v63.left = 0;
        v63.top = 0;
        if ( !v60 )
        {
          CurrentThread = KeGetCurrentThread();
          ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
          {
            if ( (int)(*(_DWORD *)(ThreadWin32Thread + 180) << 31) >> 31 == 1 )
            {
              v72 = *(_DWORD *)(ThreadWin32Thread + 172);
              v35 = *(DC **)v72;
              v36 = *(_DWORD *)(*(_DWORD *)v72 + 36);
              v86 = (struct _CLIPOBJ *)(*(_DWORD *)v72 + 1568);
              if ( DC::prgnRao(v35) )
                v38 = DC::prgnRao(v37);
              else
                v38 = DC::prgnVisSnap(v37);
              v83 = v38;
              if ( ((unsigned int)&loc_20000 & *(_DWORD *)(v36 + 24)) != 0 )
              {
                v63.left = -v81;
                v63.top = -v82;
                RGNOBJ::bOffset((RGNOBJ *)&v83, (struct _POINTL *)&v63);
                v80 = 1;
              }
              if ( DC::prgnRao(*(DC **)v72) )
                v40 = DC::prgnRao(v39);
              else
                v40 = DC::prgnVisSnap(v39);
              v41 = v86;
              XCLIPOBJ::vSetup((XCLIPOBJ *)v86, v40, (struct ERECTL *)&v100, 1);
              v60 = v41;
              v72 = 1;
            }
          }
        }
        if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v78, &v60) )
        {
          if ( a11 == 52428 )
          {
            INVOKEOFFCOPYBITS(
              (SURFOBJ *)v67,
              &v77->x,
              v76,
              v68,
              (struct _POINTL *)v60,
              (XLATEOBJ *)v79,
              &v100,
              (struct _XLATEOBJ *)&v100.rclBounds.bottom,
              (struct _RECTL *)v58,
              v59);
            goto LABEL_80;
          }
          if ( v87 )
          {
            v84 = v100.iUniq + v87->x - v61->left;
            v85 = v100.rclBounds.left + v87->y - v61->top;
          }
          v42 = v67;
          if ( *(_WORD *)(v67 + 48) != 1 )
            goto LABEL_76;
          if ( bAllowShareAccess((_DWORD *)v67) )
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
LABEL_79:
                    OffBitBlt(
                      (int (__stdcall *)(int, int, int, struct _CLIPOBJ *, int, _DWORD *, int *, int, int, int *, int))v49,
                      &v77->x,
                      v42,
                      v76,
                      (int)v68,
                      v90,
                      v60,
                      (int)v79,
                      &v100,
                      &v100.rclBounds.bottom,
                      (int)&v84,
                      v89,
                      (int *)v88,
                      a11);
                    goto LABEL_80;
                  }
                }
              }
            }
          }
          if ( *(_WORD *)(v42 + 48) != 1
            || !bAllowShareAccess((_DWORD *)v42)
            || (v50 = KeGetCurrentThread(), !W32GetThreadWin32Thread(v50))
            || (v51 = KeGetCurrentThread(), !*(_DWORD *)(W32GetThreadWin32Thread(v51) + 156))
            || (v52 = KeGetCurrentThread(), !*(_DWORD *)(W32GetThreadWin32Thread(v52) + 52))
            && (v53 = KeGetCurrentThread(), !*(_DWORD *)(W32GetThreadWin32Thread(v53) + 56)) )
          {
LABEL_76:
            if ( (*(_BYTE *)(v42 + 56) & 1) != 0 )
            {
              v49 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_DWORD *)(v42 + 12) + 832);
              goto LABEL_79;
            }
          }
          v49 = EngBitBlt;
          goto LABEL_79;
        }
LABEL_80:
        if ( v72 == 1 )
        {
          if ( v80 == 1 )
          {
            v63.left = v81;
            v63.top = v82;
            RGNOBJ::bOffset((RGNOBJ *)&v83, (struct _POINTL *)&v63);
          }
          v60 = 0;
        }
        if ( p_lDelta )
          GreUnlockDisplayDevice(p_lDelta[3].y);
        if ( v29 )
          GreUnlockDisplayDevice(*(_DWORD *)(v29 + 28));
LABEL_88:
        if ( v60 )
        {
          p_rclBounds = &v60->rclBounds;
          v60->rclBounds.left = rclBounds.left;
          p_rclBounds = (RECTL *)((char *)p_rclBounds + 4);
          p_rclBounds->left = rclBounds.top;
          p_rclBounds = (RECTL *)((char *)p_rclBounds + 4);
          p_rclBounds->left = rclBounds.right;
          p_rclBounds->top = rclBounds.bottom;
        }
        v23 = v62;
      }
      while ( v91 );
      ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v95);
      v55 = ENUMAREAS::bEnumLayers((ENUMAREAS *)v96, &v69);
      v18 = v70;
    }
    while ( v55 );
    if ( v69 )
      vSpRedrawArea(0, (struct _RECTL *)v58, (int)v59);
  }
  while ( v92 );
  v15 = v61;
LABEL_96:
  ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v96);
LABEL_97:
  PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v108);
  GreAcquireSemaphore(*((_DWORD *)v18 + 22));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", *((_DWORD *)v18 + 22), 8);
  if ( *((_DWORD *)v18 + 161) )
    vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v15, (struct _POINTL *)v60, 0, v58, (int)v59);
  EtwTraceGreLockReleaseSemaphore(L"hsem", *((_DWORD *)v18 + 22));
  GreReleaseSemaphoreInternal(*((_DWORD *)v18 + 22));
  v11 = 1;
  PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v108);
  SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v98);
LABEL_100:
  SEMOBJEXORSHARED::~SEMOBJEXORSHARED((SEMOBJEXORSHARED *)v93);
  return v11;
}
