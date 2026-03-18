/*
 * XREFs of ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C0159898
 * Callers:
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0159470 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x1C0280814 (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x1C02809B0 (-bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1C0081FF0 (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C0082B84 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008513C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0085290 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008608C (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C009ECF8 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A2CC0 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C014BAB8 (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C027D500 (--1MULTISURF@@QEAA@XZ.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAUHDEV__@@@Z @ 0x1C02A5CAC (-bLoadSource@MULTISURF@@QEAAHPEAUHDEV__@@@Z.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02A63A4 (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     OffCopyBits @ 0x1C02C77F8 (OffCopyBits.c)
 */

__int64 __fastcall bSpCreateShape(
        struct SPRITE *a1,
        struct _POINTL *a2,
        struct _SURFOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct PALETTE *a6,
        ULONG a7,
        unsigned int a8,
        struct _RECTL *a9)
{
  SPRITERANGELOCK *v10; // r12
  ULONG v11; // edi
  signed int v12; // r14d
  signed int v13; // r13d
  SURFOBJ *Surface; // rcx
  __int64 v15; // r14
  LONG left; // r8d
  int v17; // eax
  __int64 v18; // rdi
  int v19; // edx
  struct _RECTL *v20; // rdx
  LONG top; // eax
  int v22; // ecx
  int v23; // ecx
  __int64 v25; // rax
  __int64 v26; // rdx
  HDEV v27; // rbx
  BOOL (__stdcall *v28)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r15
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rbx
  int v32; // eax
  unsigned int v33; // [rsp+50h] [rbp-B0h]
  struct _POINTL *v35[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+70h] [rbp-90h] BYREF
  __int64 v37; // [rsp+78h] [rbp-88h]
  struct _RECTL v38; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v39[40]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v40; // [rsp+B8h] [rbp-48h]
  char v41; // [rsp+C0h] [rbp-40h]
  int v42; // [rsp+C4h] [rbp-3Ch]
  __int64 v43; // [rsp+E8h] [rbp-18h]
  __int64 v44; // [rsp+F0h] [rbp-10h]
  struct _RECTL *v45; // [rsp+100h] [rbp+0h] BYREF
  int v46; // [rsp+108h] [rbp+8h]
  int v47; // [rsp+10Ch] [rbp+Ch]
  __int64 v48[2]; // [rsp+110h] [rbp+10h] BYREF

  v10 = (SPRITERANGELOCK *)(*((_QWORD *)a1 + 2) + 120LL);
  v11 = a7;
  v37 = (__int64)a4;
  v35[0] = a2;
  v45 = a9;
  v33 = 0;
  SPRITERANGELOCK::vLockExclusive(v10);
  v36 = *((_QWORD *)a1 + 18);
  if ( a6 )
    INC_SHARE_REF_CNT(a6);
  XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v36);
  *((_QWORD *)a1 + 18) = a6;
  v12 = a5->right - a5->left;
  v13 = a5->bottom - a5->top;
  if ( !a7 )
    v11 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 32LL) + 72LL);
  Surface = (SURFOBJ *)*((_QWORD *)a1 + 16);
  if ( !Surface
    || (Surface->iType || (Surface->fjBitmap & 0x20) != 0) && a8
    || Surface->iBitmapFormat != v11
    || Surface->sizlBitmap.cx < v12
    || Surface->sizlBitmap.cy < v13 )
  {
    if ( (*(_DWORD *)a1 & 0x40) != 0 )
    {
      if ( Surface->iBitmapFormat != v11 )
      {
        EngUnlockSurface(Surface);
        v25 = *((_QWORD *)a1 + 1);
        *((_QWORD *)a1 + 16) = 0LL;
        *(_DWORD *)a1 &= ~0x40u;
        Surface = 0LL;
        *((_QWORD *)a1 + 30) = 0LL;
        if ( v25 )
          *(_DWORD *)(v25 + 16) &= ~0x40u;
      }
    }
    else
    {
      vSpDeleteSurface(Surface);
      Surface = 0LL;
    }
    if ( (*(_DWORD *)a1 & 0x40) == 0 && *((_QWORD *)a1 + 30) && a8 )
    {
      Surface = EngLockSurface(*((HSURF *)a1 + 30));
      if ( !Surface )
        goto LABEL_33;
      *(_DWORD *)a1 |= 0x40u;
    }
    if ( Surface )
    {
LABEL_34:
      *((_QWORD *)a1 + 16) = Surface;
      goto LABEL_11;
    }
LABEL_33:
    Surface = psoSpCreateSurface(*((struct _SPRITESTATE **)a1 + 2), v11, v12, v13);
    goto LABEL_34;
  }
LABEL_11:
  SPRITERANGELOCK::vUnlock(v10);
  SPRITERANGELOCK::vLockShared(v10);
  v15 = *((_QWORD *)a1 + 16);
  if ( !v15 )
    goto LABEL_20;
  left = a5->left;
  v33 = 1;
  *((_DWORD *)a1 + 34) = -a5->left;
  v17 = -a5->top;
  *((_DWORD *)a1 + 38) = v11;
  v18 = 0LL;
  *((_DWORD *)a1 + 35) = v17;
  if ( a6 )
    v19 = **((_DWORD **)a6 + 14) | *(_DWORD *)(*((_QWORD *)a6 + 14) + 8LL);
  else
    v19 = 0;
  *((_DWORD *)a1 + 39) = v19;
  v20 = v45;
  *(struct _RECTL *)v48 = *a5;
  if ( v45 )
  {
    top = v45->top;
    LODWORD(v45) = left + v45->left;
    v46 = left + v20->right;
    v22 = *((_DWORD *)a1 + 35);
    HIDWORD(v45) = top - v22;
    v47 = v20->bottom - v22;
    ERECTL::operator*=((int *)v48, (int *)&v45);
  }
  if ( ERECTL::bEmpty((ERECTL *)v48) )
    goto LABEL_20;
  v23 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 0x40) != 0 && ((v23 & 0x200) == 0 || *(HSURF *)(v15 + 320) != a3->hsurf) )
  {
    *(_DWORD *)a1 = v23 | 0x80;
LABEL_20:
    SPRITERANGELOCK::vUnlock(v10);
    return v33;
  }
  v38 = *(struct _RECTL *)v48;
  ERECTL::bOffsetAdd((ERECTL *)&v38, v35[0], 0);
  v40 = 0LL;
  v41 = 0;
  v42 = 0;
  MULTISURF::vInit((MULTISURF *)v39, a3, &v38);
  v45 = 0LL;
  v35[0] = 0LL;
  if ( (*(_DWORD *)(v15 + 88) & 0x400) == 0 )
  {
    if ( (*(_DWORD *)(v26 + 88) & 0x400) != 0 )
      v28 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v26 + 24)
                                                                                                 + 2840LL);
    else
      v28 = EngCopyBits;
    goto LABEL_44;
  }
  v27 = *(HDEV *)(v15 + 24);
  if ( (unsigned int)MULTISURF::bLoadSource((MULTISURF *)v39, v27) )
  {
    v28 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v27 + 355);
LABEL_44:
    if ( SURFREFVIEW::bMap((SURFREFVIEW *)&v45, (struct _SURFOBJ *)v43)
      && SURFREFVIEW::bMap((SURFREFVIEW *)v35, (struct _SURFOBJ *)v15) )
    {
      v29 = *(_DWORD *)(v15 + 88);
      if ( (v29 & 0x80004000) != 0 && (v29 & 0x200) == 0 )
      {
        v18 = v15 - 24;
        GreLockDisplayDevice(*(_QWORD *)(v15 - 24 + 48));
      }
      v30 = v43;
      v31 = 0LL;
      if ( v43 )
      {
        v32 = *(_DWORD *)(v43 + 88);
        if ( (v32 & 0x80004000) != 0 && (v32 & 0x200) == 0 )
        {
          v31 = v43 - 24;
          GreLockDisplayDevice(*(_QWORD *)(v43 - 24 + 48));
          v30 = v43;
        }
      }
      OffCopyBits((int)v28, (_DWORD)a1 + 136, v15, (int)&gptlZero, v30, 0LL, v37, (__int64)v48, v44);
      if ( (*(_DWORD *)a1 & 0x200) != 0 && *((_QWORD *)a1 + 16) == v15 && *(HSURF *)(v15 + 320) == a3->hsurf )
        *(_DWORD *)a1 |= 0x80u;
      if ( v31 )
        GreUnlockDisplayDevice(*(_QWORD *)(v31 + 48));
      if ( v18 )
        GreUnlockDisplayDevice(*(_QWORD *)(v18 + 48));
    }
    else
    {
      v33 = 0;
    }
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v35);
    SURFREFVIEW::bUnMap((SURFREFVIEW *)&v45);
    MULTISURF::~MULTISURF((MULTISURF *)v39);
    goto LABEL_20;
  }
  SPRITERANGELOCK::vUnlock(v10);
  SPRITERANGELOCK::vLockExclusive(v10);
  vSpDeleteSurface(*((struct _SURFOBJ **)a1 + 16));
  *((_QWORD *)a1 + 16) = 0LL;
  SPRITERANGELOCK::vUnlock(v10);
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v35);
  SURFREFVIEW::bUnMap((SURFREFVIEW *)&v45);
  MULTISURF::~MULTISURF((MULTISURF *)v39);
  return 0LL;
}
