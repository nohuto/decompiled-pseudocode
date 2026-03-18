/*
 * XREFs of ?bSpUpdateSprite@@YGHPAVSPRITE@@PAUHDC__@@PAU_POINTL@@PAUtagSIZE@@12KPAU_BLENDFUNCTION@@KPAU_RECTL@@@Z @ 0x9F6DC
 * Callers:
 *     ?GdiUpdateSprite@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_BLENDFUNCTION@@KPAUtagRECT@@@Z @ 0x9F558 (-GdiUpdateSprite@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_BLENDFUN.c)
 *     ?bSpUpdateSpriteDevLockEnd@@YGHPAUHDEV__@@AAVXDCOBJ@@PAU_RECTL@@@Z @ 0x1DEDCA (-bSpUpdateSpriteDevLockEnd@@YGHPAUHDEV__@@AAVXDCOBJ@@PAU_RECTL@@@Z.c)
 * Callees:
 *     ??0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z @ 0x304FA (--0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QAE@XZ @ 0x305EC (--1SPRITEDDIACCESS@@QAE@XZ.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ??XERECTL@@QAEAAV0@ABU_RECTL@@@Z @ 0x4F46A (--XERECTL@@QAEAAV0@ABU_RECTL@@@Z.c)
 *     ?bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x53E36 (-bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vSpRedrawSprite@@YGXPAVSPRITE@@@Z @ 0x9FD10 (-vSpRedrawSprite@@YGXPAVSPRITE@@@Z.c)
 *     ?bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z @ 0xA0A28 (-bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QAEXXZ @ 0xAED46 (-vUnlock@PIDLOCKSPRITEAREA@@QAEXXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bSpUpdateAlpha@@YGHPAVSPRITE@@PAU_BLENDFUNCTION@@H@Z @ 0x1DE62C (-bSpUpdateAlpha@@YGHPAVSPRITE@@PAU_BLENDFUNCTION@@H@Z.c)
 *     ?bSpUpdateShape@@YGHPAVSPRITE@@KPAUHDC__@@1KPAU_BLENDFUNCTION@@PAU_POINTL@@PAUtagSIZE@@PAU_RECTL@@@Z @ 0x1DE86D (-bSpUpdateShape@@YGHPAVSPRITE@@KPAUHDC__@@1KPAU_BLENDFUNCTION@@PAU_POINTL@@PAUtagSIZE@@PAU_RECTL.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QAEXPAU_SPRITESTATE@@PAU_RECTL@@@Z @ 0x1DFB7F (-vLock@PIDLOCKSPRITEAREA@@QAEXPAU_SPRITESTATE@@PAU_RECTL@@@Z.c)
 *     ?vSpAddAndCompactDirtyRect@@YGXPAVSPRITE@@VERECTL@@@Z @ 0x1DFD02 (-vSpAddAndCompactDirtyRect@@YGXPAVSPRITE@@VERECTL@@@Z.c)
 *     ?vSpCreateExMirror@@YGXPAUHDEV__@@@Z @ 0x1E11AC (-vSpCreateExMirror@@YGXPAUHDEV__@@@Z.c)
 *     ?vSpRedrawArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@H@Z @ 0x1E1DFF (-vSpRedrawArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@H@Z.c)
 */

int __userpurge bSpUpdateSprite@<eax>(
        struct SPRITE *a1@<edx>,
        int a2@<ecx>,
        struct SPRITE *a3,
        struct _BLENDFUNCTION *a4,
        struct _POINTL *a5,
        struct tagSIZE *a6,
        HDC a7,
        struct HDC__ *a8,
        unsigned int a9,
        struct _POINTL *a10,
        unsigned int a11,
        struct _RECTL *a12)
{
  struct HDC__ *v13; // esi
  unsigned int v15; // eax
  struct _SPRITESTATE *v16; // edi
  int v17; // edi
  LONG v18; // ecx
  LONG v19; // edx
  struct _BLENDFUNCTION v20; // ecx
  struct _BLENDFUNCTION v21; // ecx
  struct _SPRITESTATE *v22; // edi
  bool v23; // zf
  HDC v24; // edi
  HDC v25; // ecx
  int v26; // ecx
  int v27; // eax
  unsigned int v28; // ecx
  int v29; // eax
  unsigned int v30; // esi
  int *v31; // ecx
  ERECTL *v32; // ecx
  _DWORD *v33; // ecx
  unsigned int v34; // esi
  struct tagSIZE *v35; // [esp+0h] [ebp-F8h]
  struct _RECTL *v36; // [esp+4h] [ebp-F4h]
  _BYTE v37[116]; // [esp+10h] [ebp-E8h] BYREF
  int v38; // [esp+84h] [ebp-74h]
  struct SPRITE *v39; // [esp+88h] [ebp-70h]
  unsigned int v40; // [esp+8Ch] [ebp-6Ch]
  struct _BLENDFUNCTION v41; // [esp+90h] [ebp-68h] BYREF
  struct _BLENDFUNCTION v42; // [esp+94h] [ebp-64h]
  int v43; // [esp+98h] [ebp-60h] BYREF
  struct _SPRITESTATE *v44; // [esp+9Ch] [ebp-5Ch]
  struct _POINTL *v45; // [esp+A0h] [ebp-58h]
  struct SPRITE *v46; // [esp+A4h] [ebp-54h]
  struct _BLENDFUNCTION *v47; // [esp+A8h] [ebp-50h]
  HDC v48; // [esp+ACh] [ebp-4Ch]
  unsigned int v49; // [esp+B0h] [ebp-48h]
  unsigned int v50; // [esp+B4h] [ebp-44h]
  struct HDC__ v51; // [esp+B8h] [ebp-40h] BYREF
  int updated; // [esp+BCh] [ebp-3Ch]
  struct _POINTL v53; // [esp+C0h] [ebp-38h] BYREF
  struct _POINTL v54; // [esp+C8h] [ebp-30h]
  int v55; // [esp+D0h] [ebp-28h] BYREF
  int v56; // [esp+D4h] [ebp-24h] BYREF
  int v57; // [esp+D8h] [ebp-20h]
  LONG v58; // [esp+DCh] [ebp-1Ch]
  LONG v59; // [esp+E0h] [ebp-18h]
  struct _RECTL v60; // [esp+E4h] [ebp-14h] BYREF

  v51.unused = 0;
  v46 = a3;
  v47 = a4;
  v48 = (HDC)a5;
  v40 = (unsigned int)a6;
  v39 = a1;
  v45 = a10;
  v13 = a8;
  updated = (int)a8;
  if ( !a2 )
    return 0;
  v44 = *(struct _SPRITESTATE **)(a2 + 12);
  v43 = *(_DWORD *)v44;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v37, (struct PDEVOBJ *)&v43);
  v15 = a9;
  v49 = a9 & 0x10000000;
  if ( (a9 & 0x10000000) != 0 )
  {
    v15 = a9 & 0xEFFFFFFF;
    a9 &= ~0x10000000u;
  }
  v50 = ((unsigned int)&loc_1FFFFC + 4) & v15;
  if ( (((unsigned int)&loc_1FFFFC + 4) & v15) != 0 )
    a9 = v15 & 0xFFDFFFFF;
  v41 = 0;
  v42 = 0;
  v53.x = 0;
  v53.y = 0;
  v54.x = 0;
  v54.y = 0;
  v16 = v44;
  GreAcquireSemaphoreSharedInternal(*((_DWORD *)v44 + 22));
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", *((_DWORD *)v16 + 22));
  v17 = *(_DWORD *)(a2 + 88);
  v38 = v17;
  if ( v17 && (*(_DWORD *)(v17 + 140) || (*(_BYTE *)(v17 + 60) & 1) != 0) )
  {
    W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v17 + 152));
    if ( (*(_DWORD *)a2 & 0x200) != 0 )
    {
      v56 = 0;
      v57 = 0;
      v18 = *(_DWORD *)(v17 + 16);
      v19 = *(_DWORD *)(v17 + 20);
      v58 = v18;
      v59 = v19;
      if ( v45 )
      {
        v53 = *v45;
        v54 = v45[1];
        ERECTL::operator*=(&v53.x, &v56);
        v13 = (struct HDC__ *)updated;
        v17 = v38;
      }
      else
      {
        v54.x = v18;
        v54.y = v19;
      }
      v45 = &v53;
    }
    memset(&v60.top, 0, 12);
    XDCOBJ::vLock((XDCOBJ *)&v60.top, v48);
    if ( v60.top && v47 )
    {
      v20 = *(struct _BLENDFUNCTION *)(v17 + 16);
      v41 = *v47;
      if ( *(_DWORD *)&v41 >= *(_DWORD *)&v20 )
        v41 = v20;
      v21 = *(struct _BLENDFUNCTION *)(v17 + 20);
      v42 = v47[1];
      if ( *(_DWORD *)&v42 >= *(_DWORD *)&v21 )
        v42 = v21;
      v47 = &v41;
    }
    W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v17 + 152));
    if ( v60.top )
      XDCOBJ::vUnlockFast((XDCOBJ *)&v60.top);
  }
  v22 = v44;
  EtwTraceGreLockReleaseSemaphore(L"hsem", *((_DWORD *)v44 + 22));
  GreReleaseSemaphoreInternal(*((_DWORD *)v22 + 22));
  updated = 1;
  if ( (a9 & 0x20000000) != 0 )
  {
    a9 &= ~0x20000000u;
    *(_DWORD *)(a2 + 164) = a9 | (v49 != 0 ? 0x10000000 : 0);
    if ( (a9 & 2) != 0 && v13 )
      *(_DWORD *)(struct HDC__ *)(a2 + 168) = *(_DWORD *)v13;
    v23 = v49 == 0;
    v24 = a7;
    *(_DWORD *)(a2 + 172) = a7;
    if ( !v23 )
    {
      vSpCreateExMirror((HDEV)v35);
      *(_DWORD *)a2 |= 0x100u;
    }
    v25 = v48;
    if ( !v48 )
    {
      v26 = *(_DWORD *)(a2 + 164);
      v49 = *(_DWORD *)(a2 + 144);
      v51.unused = *(_DWORD *)(a2 + 140);
      if ( v26 != 3 || *((_BYTE *)v13 + 3) )
      {
        v24 = (HDC)v49;
      }
      else
      {
        v27 = *(_DWORD *)v13;
        v13 = &v51;
        v51.unused = v27;
        HIBYTE(v51.unused) = 1;
        v26 = 2;
      }
      *(_DWORD *)(a2 + 4) = v26;
      *(_DWORD *)(a2 + 144) = v24;
      *(_DWORD *)(struct HDC__ *)(a2 + 140) = *(_DWORD *)v13;
      goto LABEL_82;
    }
  }
  else if ( a9 == 0x40000000 )
  {
    v28 = *(_DWORD *)(a2 + 164);
    a9 = v28;
    if ( (v28 & 0x10000000) != 0 )
    {
      v28 &= ~0x10000000u;
      a9 = v28;
    }
    if ( (*(_BYTE *)a2 & 0x40) != 0 && !v28 )
      a9 = *(_DWORD *)(a2 + 4);
    v13 = &v51;
    v24 = *(HDC *)(a2 + 172);
    v25 = v48;
    v51.unused = *(_DWORD *)(a2 + 168);
  }
  else
  {
    v24 = a7;
    v25 = v48;
  }
  if ( (*(_DWORD *)(v43 + 24) & 0x400) == 0 )
  {
    if ( v39 || v47 || v25 || v40 || v24 )
    {
      updated = bSpUpdateShape(v39, (unsigned int)v25, v24, v13, v40, v47, v45, v35, v36);
      if ( updated )
      {
        v30 = v50;
        if ( !v50 )
          updated = bSpUpdatePosition(0, 0, (int)v35, (int)v36);
        goto LABEL_57;
      }
    }
    else
    {
      if ( (a9 == 2 || a9 == 3) && v13 && !v46 )
      {
        v29 = bSpUpdateAlpha((struct SPRITE *)1, (struct _BLENDFUNCTION *)v35, (int)v36);
      }
      else
      {
        if ( a9 && a9 != 0x80000000 || v13 )
        {
          updated = 1;
          goto LABEL_56;
        }
        v29 = bSpUpdatePosition((struct SPRITE *)(a9 & 0x80000000), 0, (int)v35, (int)v36);
      }
      updated = v29;
    }
LABEL_56:
    v30 = v50;
LABEL_57:
    if ( v45 )
    {
      v60.left = v45->x;
      v60.top = v45->y;
      *(struct _POINTL *)&v60.right = v45[1];
      ERECTL::bOffsetAdd((ERECTL *)&v60, (const struct _POINTL *)(a2 + 76), 0);
      ERECTL::operator*=(v31, (int *)(a2 + 44));
      if ( !ERECTL::bEmpty(v32) )
      {
        vSpAddAndCompactDirtyRect(a2, *v33, v33[1], v33[2], v33[3]);
        v34 = v50;
        v55 = 0;
        v56 = 0;
        v57 = 0;
        v58 = 0;
        v59 = 0;
        if ( v50 )
          PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v55, v44, &v60);
        if ( !v55 && v34 || (vSpRedrawArea(0, (struct _RECTL *)v35, (int)v36), v34) )
          PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v55);
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v55);
      }
    }
    else
    {
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v58 = 0;
      v59 = 0;
      if ( v30 )
        PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v55, v44, (struct _RECTL *)(a2 + 44));
      if ( !v55 && v30 || (vSpRedrawSprite((struct SPRITE *)v35), v30) )
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v55);
      PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v55);
      if ( (*(_DWORD *)(v43 + 24) & 0x400) == 0 )
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v43,
          *(_DWORD *)(v43 + 1820) != 0 ? (struct _SURFOBJ *)(*(_DWORD *)(v43 + 1820) + 16) : 0,
          0,
          0);
    }
  }
LABEL_82:
  SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v37);
  return updated;
}
