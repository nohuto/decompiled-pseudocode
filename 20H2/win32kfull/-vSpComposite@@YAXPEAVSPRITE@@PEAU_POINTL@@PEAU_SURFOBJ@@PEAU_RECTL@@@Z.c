/*
 * XREFs of ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0158C0C
 * Callers:
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0085608 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C01589A4 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z @ 0x1C0280530 (-bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C02832F4 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0283680 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     OffTransparentBlt @ 0x1C0083698 (OffTransparentBlt.c)
 *     OffBitBlt @ 0x1C0083CBC (OffBitBlt.c)
 *     OffAlphaBlend @ 0x1C00845A0 (OffAlphaBlend.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C00846E4 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0084A1C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C009D498 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00A0F50 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A4450 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C0159168 (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z @ 0x1C0159190 (-vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C015923C (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z @ 0x1C01592AC (-bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C027F560 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpDeletePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAE@Z @ 0x1C028247C (-vSpDeletePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAE@Z.c)
 *     ?vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z @ 0x1C0282934 (-vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z.c)
 *     ?vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z @ 0x1C0284190 (-vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z.c)
 */

void __fastcall vSpComposite(struct SPRITE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  int *v7; // rcx
  struct _CLIPOBJ *v8; // r10
  int v9; // ecx
  struct REGION *v10; // r12
  struct REGION *v11; // r8
  __int64 *v12; // r8
  int v13; // r9d
  int v14; // ecx
  int v15; // eax
  __int64 v16; // r14
  unsigned int v17; // edx
  __int64 v18; // rdi
  struct _SURFOBJ *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdi
  int v22; // ecx
  PVOID *v23; // rbx
  int v24; // eax
  PVOID v25; // rcx
  struct REGION *v26; // rdi
  int v27; // edx
  struct _SURFOBJ *v28; // rdx
  __int64 v29; // rax
  int v30; // ecx
  int v31; // ecx
  int v32; // eax
  BOOL (__stdcall *v33)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rcx
  __int64 v34; // rdi
  PVOID *v35; // rbx
  int v36; // eax
  BOOL (__stdcall *v37)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  struct _SURFOBJ *v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rdi
  int v42; // ecx
  PVOID *p_pvScan0; // rbx
  int hsurf; // eax
  BOOL (__stdcall *v45)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rcx
  unsigned int v46; // edx
  struct _SURFOBJ *v47; // rcx
  __int64 *v48; // rbx
  unsigned int v49; // [rsp+70h] [rbp-90h]
  int v50; // [rsp+70h] [rbp-90h]
  struct _POINTL v51; // [rsp+78h] [rbp-88h] BYREF
  struct _RECTL *v52; // [rsp+80h] [rbp-80h]
  struct _POINTL *v53; // [rsp+88h] [rbp-78h]
  struct REGION *v54; // [rsp+90h] [rbp-70h] BYREF
  struct _XLATEOBJ *v55; // [rsp+98h] [rbp-68h] BYREF
  struct _CLIPOBJ *v56; // [rsp+A0h] [rbp-60h]
  struct REGION *v57; // [rsp+A8h] [rbp-58h] BYREF
  int v58; // [rsp+B0h] [rbp-50h]
  __int64 *v59; // [rsp+B8h] [rbp-48h]
  __int64 v60; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v61; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v62; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int8 *v63; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v64[2]; // [rsp+E0h] [rbp-20h] BYREF
  struct REGION *v65; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v66; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v67[4]; // [rsp+100h] [rbp+0h] BYREF
  struct _RECTL v68; // [rsp+120h] [rbp+20h] BYREF
  __int128 v69; // [rsp+130h] [rbp+30h] BYREF
  struct _RECTL v70; // [rsp+140h] [rbp+40h]
  _BYTE v71[4]; // [rsp+150h] [rbp+50h] BYREF
  int v72; // [rsp+154h] [rbp+54h]
  int v73; // [rsp+158h] [rbp+58h]
  int v74; // [rsp+15Ch] [rbp+5Ch]
  int v75; // [rsp+160h] [rbp+60h]
  __int64 v76; // [rsp+188h] [rbp+88h]
  __int64 v77; // [rsp+1A0h] [rbp+A0h]
  int v78; // [rsp+1A8h] [rbp+A8h]
  int v79; // [rsp+1D0h] [rbp+D0h]
  __int64 v80; // [rsp+1E0h] [rbp+E0h]
  int v81; // [rsp+1E8h] [rbp+E8h]

  v53 = a2;
  v51 = 0LL;
  v52 = a4;
  v77 = 0LL;
  v78 = 0;
  v79 = 1;
  v80 = 0LL;
  v76 = 0LL;
  v81 = 0;
  if ( (unsigned int)bIgnoreMirrorUpdate(a1) )
    goto LABEL_47;
  v9 = *v7;
  if ( (v9 & 0x400) != 0 || (v9 & 0xC0) == 0x40 || (v9 & 0x20) == 0 || (v9 & 1) != 0 )
    goto LABEL_47;
  v56 = v8;
  v10 = (struct REGION *)_InterlockedExchange64((volatile __int64 *)a1 + 24, (unsigned int)v8);
  v54 = (struct REGION *)v8;
  if ( *((struct _CLIPOBJ **)a1 + 23) == v8 || !v10 )
    goto LABEL_53;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v57);
  if ( !v57
    || (v66 = *((_QWORD *)a1 + 23),
        v65 = v10,
        !RGNOBJ::bMerge((RGNOBJ *)&v57, (struct RGNOBJ *)&v66, (struct RGNOBJ *)&v65, 8u)) )
  {
    v11 = v54;
LABEL_12:
    if ( v58 == 1 )
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v57);
      v11 = v54;
    }
    v8 = 0LL;
    if ( v11 )
    {
      ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v71, 0, v11, (struct ERECTL *)a4, 0);
      goto LABEL_16;
    }
LABEL_53:
    if ( (*(_DWORD *)a1 & 0x40) != 0 )
    {
      if ( !v10 )
        goto LABEL_47;
      if ( !*((_QWORD *)a1 + 23) )
        goto LABEL_59;
    }
    v26 = (struct REGION *)*((_QWORD *)a1 + 23);
    if ( !v26 )
      goto LABEL_19;
    v27 = bConcurrent(*((struct _SPRITESTATE **)a1 + 2));
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v71, v27, v26, (struct ERECTL *)a4, 0);
LABEL_16:
    if ( v72 < v74 )
    {
      v56 = (struct _CLIPOBJ *)v71;
      if ( v73 < v75 )
      {
        v8 = 0LL;
LABEL_19:
        v12 = (__int64 *)*((_QWORD *)a1 + 2);
        v13 = *(_DWORD *)a1;
        v14 = *((_DWORD *)a1 + 1);
        v15 = *(_DWORD *)a1;
        if ( (*(_DWORD *)a1 & 8) != 0 )
          v14 = 4;
        v16 = *((_QWORD *)a1 + 18);
        v17 = v14 & 0xEFFFFFFF;
        v59 = (__int64 *)*((_QWORD *)a1 + 2);
        v55 = (struct _XLATEOBJ *)v8;
        if ( (v15 & 0x100) == 0 )
          v17 = v14;
        v51.x = a4->left + *((_DWORD *)a1 + 24) - *((_DWORD *)a1 + 28);
        v51.y = a4->top + *((_DWORD *)a1 + 25) - *((_DWORD *)a1 + 29);
        v49 = v17;
        v18 = *(_QWORD *)(v12[4] + 104);
        v64[0] = v8;
        if ( *((_DWORD *)a1 + 38) != *((_DWORD *)v12 + 27)
          || *((_DWORD *)a1 + 39) != *((_DWORD *)v12 + 28)
          || (v13 & 0x40) != 0 )
        {
          if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                (__int64 *)&v55,
                                0LL,
                                0,
                                v16,
                                v18,
                                (__int64)ppalDefault,
                                (__int64)ppalDefault,
                                (int)v8,
                                (int)v8,
                                (int)v8,
                                (int)v8) )
          {
LABEL_44:
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v54);
            if ( v10 )
              vSpAddAndCompactDirtyRegion(a1, v10);
            SURFREFVIEW::bUnMap((SURFREFVIEW *)v64);
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v55);
            goto LABEL_47;
          }
          v17 = v49;
          v12 = v59;
        }
        switch ( v17 )
        {
          case 2u:
            v38 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
            if ( v38 && SURFREFVIEW::bMap((SURFREFVIEW *)v64, v38) )
            {
              v68.right = v51.x + v52->right - v52->left;
              v68.bottom = v51.y + v52->bottom - v52->top;
              v68.left = v51.x;
              v68.top = v51.y;
              v62 = 0LL;
              v61 = 0LL;
              v60 = 0LL;
              if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                   &v62,
                                   0LL,
                                   0,
                                   v16,
                                   (__int64)gppalRGB,
                                   (__int64)ppalDefault,
                                   (__int64)ppalDefault,
                                   0,
                                   0,
                                   0,
                                   0)
                && (unsigned int)EXLATEOBJ::bInitXlateObj(
                                   &v61,
                                   0LL,
                                   0,
                                   v18,
                                   (__int64)gppalRGB,
                                   (__int64)ppalDefault,
                                   (__int64)ppalDefault,
                                   0,
                                   0,
                                   0,
                                   0)
                && (unsigned int)EXLATEOBJ::bInitXlateObj(
                                   &v60,
                                   0LL,
                                   0,
                                   (__int64)gppalRGB,
                                   v18,
                                   (__int64)ppalDefault,
                                   (__int64)ppalDefault,
                                   0,
                                   0,
                                   0,
                                   0) )
              {
                LODWORD(v67[0]) = *((_DWORD *)a1 + 50);
                v67[1] = v62;
                v67[2] = v61;
                v67[3] = v60;
                v39 = *((_DWORD *)a1 + 56) & 0xEFFFFFFF;
                v50 = 0;
                v70 = 0LL;
                v63 = 0LL;
                if ( v39 == 3 && !*((_BYTE *)a1 + 231) && (*(_DWORD *)a1 & 0x40) != 0 )
                {
                  GreAcquireSemaphore(v59[16]);
                  vSpUpdatePerPixelAlphaFromColorKey(*((struct _SURFOBJ **)a1 + 16), *((_DWORD *)a1 + 51), &v68, &v63);
                  v70 = v68;
                  v50 = 1;
                }
                v40 = *((_QWORD *)a1 + 16);
                v41 = 0LL;
                if ( v40 )
                {
                  v42 = *(_DWORD *)(v40 + 88);
                  if ( (v42 & 0x80004000) != 0 && (v42 & 0x200) == 0 )
                  {
                    v41 = v40 - 24;
                    GreLockDisplayDevice(*(_QWORD *)(v40 - 24 + 48));
                  }
                }
                p_pvScan0 = 0LL;
                if ( a3 )
                {
                  hsurf = (int)a3[1].hsurf;
                  if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
                  {
                    p_pvScan0 = &a3[-1].pvScan0;
                    GreLockDisplayDevice(a3->hdev);
                  }
                }
                if ( a3->iType == 1
                  && bAllowShareAccess(a3)
                  && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                  && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                  && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                   || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
                  && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x10000) != 0 )
                {
                  v45 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 120LL);
                }
                else if ( a3->iType == 1
                       && bAllowShareAccess(a3)
                       && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                       && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                       && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                        || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
                       || ((__int64)a3[1].hsurf & 0x10000) == 0 )
                {
                  v45 = EngAlphaBlend;
                }
                else
                {
                  v45 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))*((_QWORD *)a3->hdev + 170);
                }
                OffAlphaBlend(
                  (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int128 *, __int64))v45,
                  (int *)v53,
                  (__int64)a3,
                  (int *)a1 + 34,
                  *((_QWORD *)a1 + 16),
                  v56,
                  (__int64)v55,
                  (__int128 *)&v52->left,
                  (__int128 *)&v68.left,
                  (__int64)v67);
                if ( p_pvScan0 )
                  GreUnlockDisplayDevice(p_pvScan0[6]);
                if ( v41 )
                  GreUnlockDisplayDevice(*(_QWORD *)(v41 + 48));
                if ( v50 )
                {
                  v46 = *((_DWORD *)a1 + 51);
                  v47 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
                  v68 = v70;
                  vSpDeletePerPixelAlphaFromColorKey(v47, v46, &v68, v63);
                  v48 = v59;
                  EtwTraceGreLockReleaseSemaphore(L"pState->hsemState", v59[16]);
                  GreReleaseSemaphoreInternal(v48[16]);
                }
              }
              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v60);
              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v61);
              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v62);
            }
            goto LABEL_44;
          case 4u:
            v19 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
            if ( !v19 || !SURFREFVIEW::bMap((SURFREFVIEW *)v64, v19) )
              goto LABEL_44;
            v20 = *((_QWORD *)a1 + 16);
            v21 = 0LL;
            if ( v20 )
            {
              v22 = *(_DWORD *)(v20 + 88);
              if ( (v22 & 0x80004000) != 0 && (v22 & 0x200) == 0 )
              {
                v21 = v20 - 24;
                GreLockDisplayDevice(*(_QWORD *)(v20 - 24 + 48));
              }
            }
            v23 = 0LL;
            if ( a3 )
            {
              v24 = (int)a3[1].hsurf;
              if ( (v24 & 0x80004000) != 0 && (v24 & 0x200) == 0 )
              {
                v23 = &a3[-1].pvScan0;
                GreLockDisplayDevice(a3->hdev);
              }
            }
            INVOKEOFFCOPYBITS(v53, a3, (struct _POINTL *)a1 + 17, *((struct _SURFOBJ **)a1 + 16), v56, v55, v52, &v51);
            goto LABEL_41;
          case 1u:
            v28 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
            if ( !v28 || !SURFREFVIEW::bMap((SURFREFVIEW *)v64, v28) )
              goto LABEL_44;
            v21 = 0LL;
            v29 = *((_QWORD *)a1 + 16);
            v30 = v51.x + v52->right - v52->left;
            *(struct _POINTL *)&v69 = v51;
            DWORD2(v69) = v30;
            HIDWORD(v69) = v51.y + v52->bottom - v52->top;
            if ( v29 )
            {
              v31 = *(_DWORD *)(v29 + 88);
              if ( (v31 & 0x80004000) != 0 && (v31 & 0x200) == 0 )
              {
                v21 = v29 - 24;
                GreLockDisplayDevice(*(_QWORD *)(v29 - 24 + 48));
              }
            }
            v23 = 0LL;
            if ( a3 )
            {
              v32 = (int)a3[1].hsurf;
              if ( (v32 & 0x80004000) != 0 && (v32 & 0x200) == 0 )
              {
                v23 = &a3[-1].pvScan0;
                GreLockDisplayDevice(a3->hdev);
              }
            }
            if ( a3->iType == 1
              && bAllowShareAccess(a3)
              && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
              && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
              && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x8000) != 0 )
            {
              v33 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 112LL);
            }
            else if ( a3->iType == 1
                   && bAllowShareAccess(a3)
                   && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                   && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                   && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                    || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
                   || ((__int64)a3[1].hsurf & 0x8000) == 0 )
            {
              v33 = EngTransparentBlt;
            }
            else
            {
              v33 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))*((_QWORD *)a3->hdev + 169);
            }
            OffTransparentBlt(
              (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int128 *, int, int))v33,
              (int *)v53,
              (__int64)a3,
              (int *)a1 + 34,
              *((_QWORD *)a1 + 16),
              v56,
              (__int64)v55,
              (__int128 *)&v52->left,
              &v69,
              *((_DWORD *)a1 + 51),
              0);
LABEL_41:
            if ( v23 )
              GreUnlockDisplayDevice(v23[6]);
            if ( !v21 )
              goto LABEL_44;
            v25 = *(PVOID *)(v21 + 48);
LABEL_49:
            GreUnlockDisplayDevice(v25);
            goto LABEL_44;
          case 0x1000000u:
            vSpDrawCursor(a1, v53, a3, v52, &v51);
            goto LABEL_44;
        }
        v34 = *v12;
        v35 = 0LL;
        if ( a3 )
        {
          v36 = (int)a3[1].hsurf;
          if ( (v36 & 0x80004000) != 0 && (v36 & 0x200) == 0 )
          {
            v35 = &a3[-1].pvScan0;
            GreLockDisplayDevice(a3->hdev);
          }
        }
        if ( a3->iType != 1 )
          goto LABEL_109;
        if ( bAllowShareAccess(a3)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
        {
          v37 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 72LL);
LABEL_112:
          OffBitBlt(
            (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v37,
            (int *)v53,
            (__int64)a3,
            0LL,
            0LL,
            0LL,
            0LL,
            0LL,
            &v52->left,
            0LL,
            0LL,
            v34 + 1544,
            (__int64 *)&gptlZero,
            23130);
          if ( !v35 )
            goto LABEL_44;
          v25 = v35[6];
          goto LABEL_49;
        }
        if ( a3->iType != 1
          || !bAllowShareAccess(a3)
          || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
          && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108) )
        {
LABEL_109:
          if ( ((__int64)a3[1].hsurf & 1) != 0 )
          {
            v37 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a3->hdev + 164);
            goto LABEL_112;
          }
        }
        v37 = EngBitBlt;
        goto LABEL_112;
      }
    }
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v54);
    if ( !v10 )
      goto LABEL_47;
LABEL_59:
    vSpAddAndCompactDirtyRegion(a1, v10);
    goto LABEL_47;
  }
  if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v57) != 1 )
  {
    v11 = v57;
    v54 = v57;
    goto LABEL_12;
  }
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v57);
  vSpAddAndCompactDirtyRegion(a1, v10);
  if ( v58 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v57);
LABEL_47:
  ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((ECLIPOBJTMPIFNEEDED *)v71);
}
