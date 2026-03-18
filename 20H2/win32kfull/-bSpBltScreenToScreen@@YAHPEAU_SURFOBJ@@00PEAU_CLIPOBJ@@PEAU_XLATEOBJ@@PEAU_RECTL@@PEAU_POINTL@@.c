/*
 * XREFs of ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C027FA40
 * Callers:
 *     <none>
 * Callees:
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C0069D0C (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     OffBitBlt @ 0x1C0083CBC (OffBitBlt.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C00846E4 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0084A1C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C0084A50 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ @ 0x1C0084B2C (-bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ.c)
 *     ?vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ @ 0x1C0084B7C (-vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00850D4 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008513C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C0085178 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0085290 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C00852F0 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0085330 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008608C (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C009ECF8 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00A1148 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A2CC0 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C00B3370 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C00B3978 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C00C32E0 (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C01589A4 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C01592D8 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0159DAC (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0283D5C (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 */

__int64 __fastcall bSpBltScreenToScreen(
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
  unsigned int v11; // edi
  struct _RECTL *v12; // rsi
  RECTL rclBounds; // xmm6
  int v15; // eax
  struct _SPRITESTATE *v16; // r15
  int v17; // r13d
  int v18; // r12d
  int v19; // ebx
  struct _POINTL *v21; // rdx
  struct _CLIPOBJ *v22; // r9
  struct _RECTL *v23; // r8
  struct _POINTL *v24; // r11
  struct _SURFOBJ *v25; // r13
  int v26; // r15d
  int v27; // eax
  struct SPRITE *v28; // rbx
  struct _POINTL *v29; // rax
  int hsurf; // eax
  PVOID *v31; // rbx
  int v32; // eax
  LONG v33; // ecx
  __int64 ThreadWin32Thread; // rax
  DC **v35; // r12
  XCLIPOBJ *v36; // r13
  __int64 v37; // r10
  struct REGION *v38; // rax
  int v39; // eax
  BOOL (__stdcall *v40)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  int v41; // eax
  struct _POINTL *v42; // rdx
  struct _CLIPOBJ *v43; // [rsp+78h] [rbp-90h] BYREF
  int v44; // [rsp+80h] [rbp-88h]
  struct _POINTL v45; // [rsp+88h] [rbp-80h] BYREF
  int v46; // [rsp+90h] [rbp-78h]
  int v47; // [rsp+94h] [rbp-74h]
  struct _POINTL v48; // [rsp+98h] [rbp-70h]
  int v49; // [rsp+A0h] [rbp-68h]
  HDEV hdev; // [rsp+A8h] [rbp-60h] BYREF
  struct _SURFOBJ *v51; // [rsp+B0h] [rbp-58h]
  struct SPRITE *v52; // [rsp+B8h] [rbp-50h] BYREF
  int v53; // [rsp+C0h] [rbp-48h]
  int v54; // [rsp+C4h] [rbp-44h]
  int v55; // [rsp+C8h] [rbp-40h]
  struct SPRITE *v56; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v57; // [rsp+D8h] [rbp-30h] BYREF
  struct _POINTL *v58; // [rsp+E0h] [rbp-28h]
  struct _POINTL *v59; // [rsp+E8h] [rbp-20h]
  PVOID *p_pvScan0; // [rsp+F0h] [rbp-18h] BYREF
  struct _RECTL v61; // [rsp+F8h] [rbp-10h] BYREF
  struct _RECTL v62; // [rsp+108h] [rbp+0h] BYREF
  struct _SURFOBJ *v63; // [rsp+118h] [rbp+10h]
  struct _XLATEOBJ *v64; // [rsp+120h] [rbp+18h]
  struct REGION *v65; // [rsp+128h] [rbp+20h] BYREF
  struct SPRITE *v66; // [rsp+130h] [rbp+28h] BYREF
  struct _SURFOBJ *v67; // [rsp+138h] [rbp+30h]
  __int64 v68; // [rsp+140h] [rbp+38h]
  __int64 v69; // [rsp+148h] [rbp+40h]
  struct _SPRITESTATE *v70; // [rsp+150h] [rbp+48h]
  char v71[8]; // [rsp+158h] [rbp+50h] BYREF
  struct _POINTL *v72; // [rsp+160h] [rbp+58h]
  __int64 v73; // [rsp+168h] [rbp+60h]
  __int64 *v74[3]; // [rsp+170h] [rbp+68h] BYREF
  _BYTE v75[80]; // [rsp+188h] [rbp+80h] BYREF
  int v76; // [rsp+1D8h] [rbp+D0h]
  _BYTE v77[96]; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 *v78[24]; // [rsp+248h] [rbp+140h] BYREF
  struct _RECTL v79; // [rsp+308h] [rbp+200h] BYREF
  struct _RECTL v80; // [rsp+318h] [rbp+210h] BYREF
  struct _RECTL v81; // [rsp+328h] [rbp+220h] BYREF
  RECTL v82; // [rsp+338h] [rbp+230h] BYREF
  RECTL v83; // [rsp+348h] [rbp+240h] BYREF
  struct _RECTL v84; // [rsp+358h] [rbp+250h] BYREF
  _QWORD v85[3]; // [rsp+368h] [rbp+260h] BYREF

  v11 = 0;
  v12 = a6;
  v64 = a5;
  v72 = a8;
  v68 = (__int64)a9;
  v73 = (__int64)a10;
  v69 = (__int64)a3;
  v67 = a1;
  v43 = a4;
  v57 = 0LL;
  v52 = 0LL;
  v56 = 0LL;
  v66 = 0LL;
  v84 = 0LL;
  v79 = 0LL;
  v62 = 0LL;
  v83 = 0LL;
  v81 = 0LL;
  v80 = 0LL;
  v82 = 0LL;
  if ( a4 && a4->iDComplexity )
  {
    rclBounds = a4->rclBounds;
    v82 = rclBounds;
    if ( ERECTL::bEmpty((ERECTL *)&v82) )
      return 1LL;
    v83 = rclBounds;
    ERECTL::operator*=(&v83.left, &a6->left);
    v12 = &v83;
  }
  hdev = a1->hdev;
  memset(v74, 0, sizeof(v74));
  UNDOW32THREADPIDLOCKS::vUndo((UNDOW32THREADPIDLOCKS *)v74);
  v15 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&hdev);
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)v71, ghsemSprite, v15);
  if ( !(unsigned int)UNDOW32THREADPIDLOCKS::bRedo(v74) )
    goto LABEL_94;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v78, (struct PDEVOBJ *)&hdev);
  v16 = (struct _SPRITESTATE *)(hdev + 22);
  v17 = v12->left - a7->x;
  v18 = v12->top - a7->y;
  v70 = (struct _SPRITESTATE *)(hdev + 22);
  v49 = v17;
  v53 = v18;
  if ( v17 <= 0 )
  {
    v19 = 0;
    if ( v18 > 0 )
      v19 = 2;
  }
  else
  {
    v19 = 3;
    if ( v18 <= 0 )
      v19 = 1;
  }
  v44 = v19;
  if ( v43 )
  {
    if ( v43->iDComplexity )
      v82 = v43->rclBounds;
    else
      v43 = 0LL;
  }
  SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(hdev + 52));
  if ( !*((_QWORD *)v16 + 129) )
    goto LABEL_23;
  v79.left = v12->left - v17;
  v79.right = v12->right - v17;
  v79.top = v12->top - v18;
  v79.bottom = v12->bottom - v18;
  if ( *((_QWORD *)v16 + 130) )
  {
    v22 = 0LL;
    v23 = &v79;
    goto LABEL_22;
  }
  if ( bIntersect(v12, &v79, &v84) )
  {
    v22 = v43;
    v23 = &v84;
LABEL_22:
    vSpUpdateLockedScreenAreas(v16, v21, v23, v22, 1);
  }
LABEL_23:
  SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)v16 + 120));
  v61.left = v12->left - v17;
  v61.top = v12->top - v18;
  v61.right = v12->right - v17;
  v61.bottom = v12->bottom - v18;
  ERECTL::operator+=((unsigned int *)&v61, (unsigned int *)v12);
  PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v85, v16, &v61);
  if ( !v85[0] )
    goto LABEL_91;
  ENUMAREAS::ENUMAREAS((ENUMAREAS *)v75, v16, v12, v19, &v61);
  if ( !v76 )
    goto LABEL_90;
  do
  {
    v55 = ENUMAREAS::bEnum((ENUMAREAS *)v75, &v52, &v62);
    v79.left = v62.left - v17;
    v79.right = v62.right - v17;
    v79.top = v62.top - v18;
    v79.bottom = v62.bottom - v18;
    do
    {
      if ( v52 )
      {
        v25 = (struct _SURFOBJ *)*((_QWORD *)v52 + 20);
        v59 = (struct _POINTL *)((char *)v52 + 168);
      }
      else
      {
        v25 = v67;
        v59 = v24;
      }
      v63 = v25;
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v77, v16, &v79, v19, 0LL);
      v26 = v49;
      do
      {
        v27 = ENUMAREAS::bEnum((ENUMAREAS *)v77, &v56, &v81);
        v28 = v56;
        v54 = v27;
        while ( (unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v77, &v66) )
          v28 = v66;
        v56 = v28;
        if ( v28 )
        {
          v51 = (struct _SURFOBJ *)*((_QWORD *)v28 + 20);
          v29 = (struct _POINTL *)((char *)v28 + 168);
        }
        else
        {
          v51 = v67;
          v29 = &gptlZero;
        }
        v58 = v29;
        v80.left = v26 + v81.left;
        v80.right = v26 + v81.right;
        v80.top = v18 + v81.top;
        v80.bottom = v18 + v81.bottom;
        if ( v43 && !bIntersect(&v80, &v82, &v43->rclBounds) )
          goto LABEL_83;
        p_pvScan0 = 0LL;
        if ( v25 )
        {
          hsurf = (int)v25[1].hsurf;
          if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
          {
            p_pvScan0 = &v25[-1].pvScan0;
            GreLockDisplayDevice(v25->hdev);
          }
        }
        v31 = 0LL;
        if ( v51 )
        {
          v32 = (int)v51[1].hsurf;
          if ( (v32 & 0x80004000) != 0 && (v32 & 0x200) == 0 )
          {
            v31 = &v51[-1].pvScan0;
            GreLockDisplayDevice(v51->hdev);
          }
        }
        v46 = 0;
        v47 = 0;
        v33 = *((_DWORD *)hdev + 646);
        v48.y = (int)hdev[647];
        v45 = 0LL;
        v48.x = v33;
        if ( !v43 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          if ( ThreadWin32Thread )
          {
            if ( -(*(_DWORD *)(ThreadWin32Thread + 328) & 1) == 1 )
            {
              v35 = *(DC ***)(ThreadWin32Thread + 312);
              v36 = (DC *)((char *)*v35 + 1752);
              v65 = XDCOBJ::prgnEffRao(v35);
              if ( (*(_DWORD *)(v37 + 40) & 0x20000) != 0 )
              {
                v45.x = -v48.x;
                v45.y = -v48.y;
                RGNOBJ::bOffset((RGNOBJ *)&v65, &v45);
                v47 = 1;
              }
              v38 = XDCOBJ::prgnEffRao(v35);
              XCLIPOBJ::vSetup(v36, v38, (struct ERECTL *)&v80, 1);
              v18 = v53;
              v43 = (struct _CLIPOBJ *)v36;
              v25 = v63;
              v46 = 1;
            }
          }
        }
        if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&p_pvScan0, &v43) )
        {
          if ( a11 == 52428 )
          {
            INVOKEOFFCOPYBITS(v59, v25, v58, v51, v43, v64, &v80, (struct _POINTL *)&v81);
            goto LABEL_75;
          }
          if ( v72 )
          {
            v39 = v72->x + v80.left - v12->left;
            HIDWORD(v57) = v80.top + v72->y - v12->top;
            LODWORD(v57) = v39;
          }
          if ( v25->iType != 1 )
            goto LABEL_71;
          if ( bAllowShareAccess(v25)
            && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
          {
            v40 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 72LL);
LABEL_74:
            OffBitBlt(
              (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v40,
              (int *)v59,
              (__int64)v25,
              v58,
              (__int64)v51,
              v69,
              v43,
              (__int64)v64,
              &v80.left,
              (__int64 *)&v81.left,
              (__int64)&v57,
              v68,
              (__int64 *)v73,
              a11);
            goto LABEL_75;
          }
          if ( v25->iType != 1
            || !bAllowShareAccess(v25)
            || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
            && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108) )
          {
LABEL_71:
            if ( ((__int64)v25[1].hsurf & 1) != 0 )
            {
              v40 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)v25->hdev + 164);
              goto LABEL_74;
            }
          }
          v40 = EngBitBlt;
          goto LABEL_74;
        }
LABEL_75:
        if ( v46 == 1 )
        {
          if ( v47 == 1 )
          {
            v45 = v48;
            RGNOBJ::bOffset((RGNOBJ *)&v65, &v45);
          }
          v43 = 0LL;
        }
        if ( v31 )
          GreUnlockDisplayDevice(v31[6]);
        if ( p_pvScan0 )
          GreUnlockDisplayDevice(p_pvScan0[6]);
LABEL_83:
        if ( v43 )
          v43->rclBounds = v82;
      }
      while ( v54 );
      ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v77);
      v41 = ENUMAREAS::bEnumLayers((ENUMAREAS *)v75, &v52);
      v16 = v70;
      v24 = &gptlZero;
      v19 = v44;
    }
    while ( v41 );
    if ( v52 )
      vSpRedrawArea(v70, &v62, 0);
    v17 = v49;
  }
  while ( v55 );
LABEL_90:
  ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v75);
LABEL_91:
  PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v85);
  SPRITERANGELOCK::vLockExclusive((struct _SPRITESTATE *)((char *)v16 + 120));
  if ( *((_QWORD *)v16 + 129) )
    vSpUpdateLockedScreenAreas(v16, v42, v12, v43, 0);
  SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)v16 + 120));
  v11 = 1;
  PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v85);
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v78);
LABEL_94:
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v71);
  return v11;
}
