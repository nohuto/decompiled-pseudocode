/*
 * XREFs of ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C0084C10
 * Callers:
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C0083A84 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 *     ?bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C0159C98 (-bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008513C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0085290 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00852CC (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C00852F0 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0085608 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C0085DBC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C009ECF8 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A2CC0 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C00B3370 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C00B3978 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C01589A4 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0159470 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z @ 0x1C0159AC0 (-bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0159DAC (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z @ 0x1C0159FE8 (-vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C0282438 (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 */

__int64 __fastcall bSpUpdateSprite(
        struct SPRITE *a1,
        HDC a2,
        struct _POINTL *a3,
        struct tagSIZE *a4,
        HDC a5,
        struct _POINTL *a6,
        unsigned int a7,
        struct _BLENDFUNCTION *a8,
        unsigned int a9,
        struct _RECTL *a10)
{
  struct _BLENDFUNCTION *v12; // r14
  struct _RECTL *v13; // r13
  __int64 *v14; // rsi
  unsigned int v15; // ecx
  unsigned int v16; // edi
  int v17; // r15d
  _DWORD *v18; // rsi
  LONG cx; // eax
  LONG cy; // edx
  LONG v21; // eax
  unsigned int updated; // esi
  unsigned int v23; // r12d
  HDC v24; // rdx
  int v25; // edx
  LONG v26; // ecx
  int v27; // edx
  unsigned int v29; // edx
  int v30; // ecx
  unsigned int v31; // edx
  struct _POINTL *v32; // rdx
  unsigned int v33; // r8d
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // ecx
  struct _POINTL *v37; // rcx
  struct _BLENDFUNCTION v38; // [rsp+50h] [rbp-B0h] BYREF
  HDC v39; // [rsp+58h] [rbp-A8h]
  struct _POINTL *v40; // [rsp+60h] [rbp-A0h]
  struct _POINTL *v41; // [rsp+68h] [rbp-98h]
  __int64 v42; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v43; // [rsp+78h] [rbp-88h]
  __int64 v44; // [rsp+80h] [rbp-80h] BYREF
  struct tagSIZE *v45; // [rsp+88h] [rbp-78h]
  struct _SPRITESTATE *v46; // [rsp+90h] [rbp-70h]
  _BYTE v47[192]; // [rsp+A0h] [rbp-60h] BYREF
  struct _RECTL v48; // [rsp+160h] [rbp+60h] BYREF
  struct _RECTL v49; // [rsp+170h] [rbp+70h] BYREF
  __int64 v50; // [rsp+180h] [rbp+80h]
  __int128 v51; // [rsp+190h] [rbp+90h] BYREF
  __int64 v52; // [rsp+1A0h] [rbp+A0h]
  struct _RECTL v53; // [rsp+1A8h] [rbp+A8h] BYREF

  v38 = 0;
  v12 = a8;
  v13 = a10;
  v39 = a5;
  v40 = a6;
  v45 = a4;
  v41 = a3;
  *(_QWORD *)&v48.left = a2;
  if ( a1 )
  {
    v14 = (__int64 *)*((_QWORD *)a1 + 2);
    v46 = (struct _SPRITESTATE *)v14;
    v42 = *v14;
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v47, (struct PDEVOBJ *)&v42);
    v15 = a9 & 0xEFFFFFFF;
    v43 = a9 & 0x10000000;
    v53 = 0LL;
    if ( (a9 & 0x10000000) == 0 )
      v15 = a9;
    v16 = v15 & 0xFFDFFFFF;
    v17 = v15 & 0x200000;
    if ( (v15 & 0x200000) == 0 )
      v16 = v15;
    v44 = 0LL;
    SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(v14 + 15));
    v18 = (_DWORD *)*((_QWORD *)a1 + 16);
    if ( v18 && (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v18 - 6)) )
    {
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v18 + 62));
      if ( (*(_DWORD *)a1 & 0x200) != 0 )
      {
        *(_QWORD *)&v51 = 0LL;
        v35 = v18[8];
        v36 = v18[9];
        *((_QWORD *)&v51 + 1) = __PAIR64__(v36, v35);
        if ( a10 )
        {
          v53 = *a10;
          ERECTL::operator*=(&v53, &v51);
        }
        else
        {
          *(_QWORD *)&v53.right = __PAIR64__(v36, v35);
        }
        v13 = &v53;
      }
      DCOBJ::DCOBJ((DCOBJ *)&v49, v39);
      if ( *(_QWORD *)&v49.left && a4 )
      {
        cx = v18[8];
        cy = a4->cy;
        if ( a4->cx < cx )
          cx = a4->cx;
        LODWORD(v44) = cx;
        v21 = v18[9];
        if ( cy < v21 )
          v21 = cy;
        HIDWORD(v44) = v21;
        v45 = (struct tagSIZE *)&v44;
      }
      W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v18 + 62));
      if ( *(_QWORD *)&v49.left )
        XDCOBJ::vUnlockFast((XDCOBJ *)&v49);
    }
    SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)v46 + 120));
    updated = 1;
    if ( (v16 & 0x20000000) != 0 )
    {
      v29 = v43;
      v16 &= ~0x20000000u;
      *((_DWORD *)a1 + 56) = v16 | (v43 != 0 ? 0x10000000 : 0);
      if ( (v16 & 2) != 0 && a8 )
        *((struct _BLENDFUNCTION *)a1 + 57) = *a8;
      v23 = a7;
      *((_DWORD *)a1 + 58) = a7;
      if ( v29 )
      {
        vSpCreateExMirror(**((HDEV **)a1 + 2));
        *(_DWORD *)a1 |= 0x100u;
      }
      v24 = v39;
      if ( !v39 )
      {
        v30 = *((_DWORD *)a1 + 56);
        v31 = *((_DWORD *)a1 + 51);
        v38 = (struct _BLENDFUNCTION)*((_DWORD *)a1 + 50);
        if ( v30 == 3 && !a8->AlphaFormat )
        {
          v30 = 2;
          v38 = *a8;
          v12 = &v38;
          v38.AlphaFormat = 1;
          v31 = a7;
        }
        *((_DWORD *)a1 + 1) = v30;
        *((_DWORD *)a1 + 51) = v31;
        *((struct _BLENDFUNCTION *)a1 + 50) = *v12;
        goto LABEL_40;
      }
    }
    else
    {
      if ( v16 == 0x40000000 )
      {
        v16 = *((_DWORD *)a1 + 56) & 0xEFFFFFFF;
        if ( (*((_DWORD *)a1 + 56) & 0x10000000) == 0 )
          v16 = *((_DWORD *)a1 + 56);
        if ( (*(_DWORD *)a1 & 0x40) != 0 && !v16 )
          v16 = *((_DWORD *)a1 + 1);
        v12 = &v38;
        v23 = *((_DWORD *)a1 + 58);
        v38 = (struct _BLENDFUNCTION)*((_DWORD *)a1 + 57);
      }
      else
      {
        v23 = a7;
      }
      v24 = v39;
    }
    if ( (*(_DWORD *)(v42 + 40) & 0x400) != 0 )
    {
LABEL_40:
      SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v47);
      return updated;
    }
    if ( *(_QWORD *)&v48.left || v45 || v24 || v40 || v23 )
    {
      updated = bSpUpdateShape(a1, v16, *(HDC *)&v48.left, v24, v23, v12, v40, v45, v13);
      if ( updated && !v17 )
      {
        v37 = v41;
        if ( !v41 )
          v37 = (struct _POINTL *)((char *)a1 + 112);
        v33 = 0;
        v32 = v37;
        goto LABEL_57;
      }
    }
    else
    {
      if ( v16 - 2 <= 1 && v12 && !v41 )
      {
        v34 = bSpUpdateAlpha(a1, v12, 1);
        goto LABEL_58;
      }
      if ( (v16 & 0x7FFFFFFF) == 0 && !v12 )
      {
        v32 = v41;
        v33 = v16 & 0x80000000;
LABEL_57:
        v34 = bSpUpdatePosition(a1, v32, v33, 0);
LABEL_58:
        updated = v34;
      }
    }
    if ( v13 )
    {
      v25 = *((_DWORD *)a1 + 28);
      v48.left = v25 + v13->left;
      v26 = v25 + v13->right;
      v27 = *((_DWORD *)a1 + 29);
      v48.right = v26;
      v48.top = v27 + v13->top;
      v48.bottom = v27 + v13->bottom;
      ERECTL::operator*=(&v48, (char *)a1 + 80);
      if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v48) )
      {
        v49 = v48;
        vSpAddAndCompactDirtyRect(a1, &v49);
        v52 = 0LL;
        v51 = 0LL;
        if ( v17 )
          PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v51, v46, &v48);
        if ( !(_QWORD)v51 && v17 || (vSpRedrawArea(*((struct _SPRITESTATE **)a1 + 2), &v48, 0), v17) )
          PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v51);
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v51);
      }
    }
    else
    {
      v50 = 0LL;
      v49 = 0LL;
      if ( v17 )
        PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v49, v46, (struct _RECTL *)a1 + 5);
      if ( !*(_QWORD *)&v49.left && v17 || (vSpRedrawSprite(a1), v17) )
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v49);
      PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v49);
      if ( (*(_DWORD *)(v42 + 40) & 0x400) == 0 )
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v42,
          (struct _SURFOBJ *)((*(_QWORD *)(v42 + 2552) + 24LL) & -(__int64)(*(_QWORD *)(v42 + 2552) != 0LL)),
          0LL,
          0);
    }
    goto LABEL_40;
  }
  return 0LL;
}
