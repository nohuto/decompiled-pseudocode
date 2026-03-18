/*
 * XREFs of ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0280FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C002D44C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C004BB00 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ @ 0x1C004E784 (-bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ.c)
 *     ?vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ @ 0x1C004E7D4 (-vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C004F710 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C004F778 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C004F890 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C004F8F0 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C004F930 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C0069E5C (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C0071268 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075A68 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0077C50 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C0086610 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C00A7C18 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C00A7EE8 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C01067E4 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C010681C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C010FFE0 (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     OffBitBlt @ 0x1C011F830 (OffBitBlt.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0156044 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C0156978 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C015744C (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02852CC (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
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
  unsigned int v15; // eax
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _SPRITESTATE *v20; // r15
  int v21; // r13d
  int v22; // r12d
  int v23; // ebx
  struct _POINTL *v25; // rdx
  struct _CLIPOBJ *v26; // r9
  struct _RECTL *v27; // r8
  struct _POINTL *v28; // r11
  struct _SURFOBJ *v29; // r13
  int v30; // r15d
  int v31; // eax
  struct SPRITE *v32; // rbx
  struct _POINTL *v33; // rax
  int hsurf; // eax
  PVOID *v35; // rbx
  int v36; // eax
  LONG v37; // ecx
  __int64 ThreadWin32Thread; // rax
  DC **v39; // r12
  XCLIPOBJ *v40; // r13
  __int64 v41; // r10
  struct REGION *v42; // rax
  int v43; // eax
  BOOL (__stdcall *v44)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  int v45; // eax
  struct _POINTL *v46; // rdx
  struct _CLIPOBJ *v47; // [rsp+78h] [rbp-90h] BYREF
  int v48; // [rsp+80h] [rbp-88h]
  struct _POINTL v49; // [rsp+88h] [rbp-80h] BYREF
  int v50; // [rsp+90h] [rbp-78h]
  int v51; // [rsp+94h] [rbp-74h]
  struct _POINTL v52; // [rsp+98h] [rbp-70h]
  int v53; // [rsp+A0h] [rbp-68h]
  HDEV hdev; // [rsp+A8h] [rbp-60h] BYREF
  struct _SURFOBJ *v55; // [rsp+B0h] [rbp-58h]
  struct SPRITE *v56; // [rsp+B8h] [rbp-50h] BYREF
  int v57; // [rsp+C0h] [rbp-48h]
  int v58; // [rsp+C4h] [rbp-44h]
  int v59; // [rsp+C8h] [rbp-40h]
  struct SPRITE *v60; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v61; // [rsp+D8h] [rbp-30h] BYREF
  struct _POINTL *v62; // [rsp+E0h] [rbp-28h]
  struct _POINTL *v63; // [rsp+E8h] [rbp-20h]
  PVOID *p_pvScan0; // [rsp+F0h] [rbp-18h] BYREF
  struct _RECTL v65; // [rsp+F8h] [rbp-10h] BYREF
  struct _RECTL v66; // [rsp+108h] [rbp+0h] BYREF
  struct _SURFOBJ *v67; // [rsp+118h] [rbp+10h]
  struct _XLATEOBJ *v68; // [rsp+120h] [rbp+18h]
  struct REGION *v69; // [rsp+128h] [rbp+20h] BYREF
  struct SPRITE *v70; // [rsp+130h] [rbp+28h] BYREF
  struct _SURFOBJ *v71; // [rsp+138h] [rbp+30h]
  __int64 v72; // [rsp+140h] [rbp+38h]
  __int64 v73; // [rsp+148h] [rbp+40h]
  struct _SPRITESTATE *v74; // [rsp+150h] [rbp+48h]
  char v75[8]; // [rsp+158h] [rbp+50h] BYREF
  struct _POINTL *v76; // [rsp+160h] [rbp+58h]
  __int64 v77; // [rsp+168h] [rbp+60h]
  __int64 *v78[3]; // [rsp+170h] [rbp+68h] BYREF
  _BYTE v79[80]; // [rsp+188h] [rbp+80h] BYREF
  int v80; // [rsp+1D8h] [rbp+D0h]
  _BYTE v81[96]; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 *v82[24]; // [rsp+248h] [rbp+140h] BYREF
  struct _RECTL v83; // [rsp+308h] [rbp+200h] BYREF
  struct _RECTL v84; // [rsp+318h] [rbp+210h] BYREF
  struct _RECTL v85; // [rsp+328h] [rbp+220h] BYREF
  RECTL v86; // [rsp+338h] [rbp+230h] BYREF
  RECTL v87; // [rsp+348h] [rbp+240h] BYREF
  struct _RECTL v88; // [rsp+358h] [rbp+250h] BYREF
  _QWORD v89[3]; // [rsp+368h] [rbp+260h] BYREF

  v11 = 0;
  v12 = a6;
  v68 = a5;
  v76 = a8;
  v72 = (__int64)a9;
  v77 = (__int64)a10;
  v73 = (__int64)a3;
  v71 = a1;
  v47 = a4;
  v61 = 0LL;
  v56 = 0LL;
  v60 = 0LL;
  v70 = 0LL;
  v88 = 0LL;
  v83 = 0LL;
  v66 = 0LL;
  v87 = 0LL;
  v85 = 0LL;
  v84 = 0LL;
  v86 = 0LL;
  if ( a4 && a4->iDComplexity )
  {
    rclBounds = a4->rclBounds;
    v86 = rclBounds;
    if ( ERECTL::bEmpty((ERECTL *)&v86) )
      return 1LL;
    v87 = rclBounds;
    ERECTL::operator*=(&v87.left, &a6->left);
    v12 = &v87;
  }
  hdev = a1->hdev;
  memset(v78, 0, sizeof(v78));
  UNDOW32THREADPIDLOCKS::vUndo((UNDOW32THREADPIDLOCKS *)v78);
  v15 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&hdev);
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)v75, ghsemSprite, v15, v16);
  if ( !(unsigned int)UNDOW32THREADPIDLOCKS::bRedo(v78) )
    goto LABEL_94;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v82, (struct PDEVOBJ *)&hdev);
  v20 = (struct _SPRITESTATE *)(hdev + 22);
  v21 = v12->left - a7->x;
  v22 = v12->top - a7->y;
  v74 = (struct _SPRITESTATE *)(hdev + 22);
  v53 = v21;
  v57 = v22;
  if ( v21 <= 0 )
  {
    v23 = 0;
    if ( v22 > 0 )
      v23 = 2;
  }
  else
  {
    v23 = 3;
    if ( v22 <= 0 )
      v23 = 1;
  }
  v48 = v23;
  if ( v47 )
  {
    if ( v47->iDComplexity )
      v86 = v47->rclBounds;
    else
      v47 = 0LL;
  }
  SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(hdev + 52), v17, v18, v19);
  if ( !*((_QWORD *)v20 + 129) )
    goto LABEL_23;
  v83.left = v12->left - v21;
  v83.right = v12->right - v21;
  v83.top = v12->top - v22;
  v83.bottom = v12->bottom - v22;
  if ( *((_QWORD *)v20 + 130) )
  {
    v26 = 0LL;
    v27 = &v83;
    goto LABEL_22;
  }
  if ( bIntersect(v12, &v83, &v88) )
  {
    v26 = v47;
    v27 = &v88;
LABEL_22:
    vSpUpdateLockedScreenAreas(v20, v25, v27, v26, 1);
  }
LABEL_23:
  SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)v20 + 120));
  v65.left = v12->left - v21;
  v65.top = v12->top - v22;
  v65.right = v12->right - v21;
  v65.bottom = v12->bottom - v22;
  ERECTL::operator+=((unsigned int *)&v65, (unsigned int *)v12);
  PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v89, v20, &v65);
  if ( !v89[0] )
    goto LABEL_91;
  ENUMAREAS::ENUMAREAS((ENUMAREAS *)v79, v20, v12, v23, &v65);
  if ( !v80 )
    goto LABEL_90;
  do
  {
    v59 = ENUMAREAS::bEnum((ENUMAREAS *)v79, &v56, &v66);
    v83.left = v66.left - v21;
    v83.right = v66.right - v21;
    v83.top = v66.top - v22;
    v83.bottom = v66.bottom - v22;
    do
    {
      if ( v56 )
      {
        v29 = (struct _SURFOBJ *)*((_QWORD *)v56 + 20);
        v63 = (struct _POINTL *)((char *)v56 + 168);
      }
      else
      {
        v29 = v71;
        v63 = v28;
      }
      v67 = v29;
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v81, v20, &v83, v23, 0LL);
      v30 = v53;
      do
      {
        v31 = ENUMAREAS::bEnum((ENUMAREAS *)v81, &v60, &v85);
        v32 = v60;
        v58 = v31;
        while ( (unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v81, &v70) )
          v32 = v70;
        v60 = v32;
        if ( v32 )
        {
          v55 = (struct _SURFOBJ *)*((_QWORD *)v32 + 20);
          v33 = (struct _POINTL *)((char *)v32 + 168);
        }
        else
        {
          v55 = v71;
          v33 = &gptlZero;
        }
        v62 = v33;
        v84.left = v30 + v85.left;
        v84.right = v30 + v85.right;
        v84.top = v22 + v85.top;
        v84.bottom = v22 + v85.bottom;
        if ( v47 && !bIntersect(&v84, &v86, &v47->rclBounds) )
          goto LABEL_83;
        p_pvScan0 = 0LL;
        if ( v29 )
        {
          hsurf = (int)v29[1].hsurf;
          if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
          {
            p_pvScan0 = &v29[-1].pvScan0;
            GreLockDisplayDevice(v29->hdev);
          }
        }
        v35 = 0LL;
        if ( v55 )
        {
          v36 = (int)v55[1].hsurf;
          if ( (v36 & 0x80004000) != 0 && (v36 & 0x200) == 0 )
          {
            v35 = &v55[-1].pvScan0;
            GreLockDisplayDevice(v55->hdev);
          }
        }
        v50 = 0;
        v51 = 0;
        v37 = *((_DWORD *)hdev + 646);
        v52.y = (int)hdev[647];
        v49 = 0LL;
        v52.x = v37;
        if ( !v47 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          if ( ThreadWin32Thread )
          {
            if ( -(*(_DWORD *)(ThreadWin32Thread + 328) & 1) == 1 )
            {
              v39 = *(DC ***)(ThreadWin32Thread + 312);
              v40 = (DC *)((char *)*v39 + 1752);
              v69 = XDCOBJ::prgnEffRao(v39);
              if ( (*(_DWORD *)(v41 + 40) & 0x20000) != 0 )
              {
                v49.x = -v52.x;
                v49.y = -v52.y;
                RGNOBJ::bOffset((RGNOBJ *)&v69, &v49);
                v51 = 1;
              }
              v42 = XDCOBJ::prgnEffRao(v39);
              XCLIPOBJ::vSetup(v40, v42, (struct ERECTL *)&v84, 1);
              v22 = v57;
              v47 = (struct _CLIPOBJ *)v40;
              v29 = v67;
              v50 = 1;
            }
          }
        }
        if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&p_pvScan0, &v47) )
        {
          if ( a11 == 52428 )
          {
            INVOKEOFFCOPYBITS(v63, v29, v62, v55, v47, v68, &v84, (struct _POINTL *)&v85);
            goto LABEL_75;
          }
          if ( v76 )
          {
            v43 = v76->x + v84.left - v12->left;
            HIDWORD(v61) = v84.top + v76->y - v12->top;
            LODWORD(v61) = v43;
          }
          if ( v29->iType != 1 )
            goto LABEL_71;
          if ( bAllowShareAccess(v29)
            && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
          {
            v44 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 72LL);
LABEL_74:
            OffBitBlt(
              (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v44,
              (LONG *)v63,
              (__int64)v29,
              v62,
              (__int64)v55,
              v73,
              v47,
              (__int64)v68,
              &v84.left,
              (__int64 *)&v85.left,
              (__int64)&v61,
              v72,
              (__int64 *)v77,
              a11);
            goto LABEL_75;
          }
          if ( v29->iType != 1
            || !bAllowShareAccess(v29)
            || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
            && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108) )
          {
LABEL_71:
            if ( ((__int64)v29[1].hsurf & 1) != 0 )
            {
              v44 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)v29->hdev + 164);
              goto LABEL_74;
            }
          }
          v44 = EngBitBlt;
          goto LABEL_74;
        }
LABEL_75:
        if ( v50 == 1 )
        {
          if ( v51 == 1 )
          {
            v49 = v52;
            RGNOBJ::bOffset((RGNOBJ *)&v69, &v49);
          }
          v47 = 0LL;
        }
        if ( v35 )
          GreUnlockDisplayDevice(v35[6]);
        if ( p_pvScan0 )
          GreUnlockDisplayDevice(p_pvScan0[6]);
LABEL_83:
        if ( v47 )
          v47->rclBounds = v86;
      }
      while ( v58 );
      ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v81);
      v45 = ENUMAREAS::bEnumLayers((ENUMAREAS *)v79, &v56);
      v20 = v74;
      v28 = &gptlZero;
      v23 = v48;
    }
    while ( v45 );
    if ( v56 )
      vSpRedrawArea(v74, &v66, 0);
    v21 = v53;
  }
  while ( v59 );
LABEL_90:
  ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v79);
LABEL_91:
  PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v89);
  SPRITERANGELOCK::vLockExclusive((struct _SPRITESTATE *)((char *)v20 + 120));
  if ( *((_QWORD *)v20 + 129) )
    vSpUpdateLockedScreenAreas(v20, v46, v12, v47, 0);
  SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)v20 + 120));
  v11 = 1;
  PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v89);
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v82);
LABEL_94:
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v75);
  return v11;
}
