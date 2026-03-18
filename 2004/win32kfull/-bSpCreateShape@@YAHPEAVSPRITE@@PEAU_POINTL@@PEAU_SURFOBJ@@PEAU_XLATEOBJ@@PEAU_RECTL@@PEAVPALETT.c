/*
 * XREFs of ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C0156F38
 * Callers:
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0156B10 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x1C0281D84 (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x1C0281F20 (-bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C002D44C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1C004B6E4 (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C004BB00 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C004F890 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C0050854 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C0071268 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0077C50 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C01494C8 (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C027EA70 (--1MULTISURF@@QEAA@XZ.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAUHDEV__@@@Z @ 0x1C02A70FC (-bLoadSource@MULTISURF@@QEAAHPEAUHDEV__@@@Z.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02A77F4 (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     OffCopyBits @ 0x1C02C8C98 (OffCopyBits.c)
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
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r14
  LONG left; // r8d
  int v20; // eax
  __int64 v21; // rdi
  int v22; // edx
  struct _RECTL *v23; // rdx
  LONG top; // eax
  int v25; // ecx
  int v26; // ecx
  __int64 v28; // rax
  __int64 v29; // rdx
  HDEV v30; // rbx
  BOOL (__stdcall *v31)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r15
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rbx
  int v35; // eax
  unsigned int v36; // [rsp+50h] [rbp-B0h]
  struct _POINTL *v38[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+70h] [rbp-90h] BYREF
  __int64 v40; // [rsp+78h] [rbp-88h]
  struct _RECTL v41; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v42[40]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v43; // [rsp+B8h] [rbp-48h]
  char v44; // [rsp+C0h] [rbp-40h]
  int v45; // [rsp+C4h] [rbp-3Ch]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  __int64 v47; // [rsp+F0h] [rbp-10h]
  struct _RECTL *v48; // [rsp+100h] [rbp+0h] BYREF
  int v49; // [rsp+108h] [rbp+8h]
  int v50; // [rsp+10Ch] [rbp+Ch]
  __int64 v51[2]; // [rsp+110h] [rbp+10h] BYREF

  v10 = (SPRITERANGELOCK *)(*((_QWORD *)a1 + 2) + 120LL);
  v11 = a7;
  v40 = (__int64)a4;
  v38[0] = a2;
  v48 = a9;
  v36 = 0;
  SPRITERANGELOCK::vLockExclusive(v10);
  v39 = *((_QWORD *)a1 + 18);
  if ( a6 )
    INC_SHARE_REF_CNT(a6);
  XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v39);
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
        v28 = *((_QWORD *)a1 + 1);
        *((_QWORD *)a1 + 16) = 0LL;
        *(_DWORD *)a1 &= ~0x40u;
        Surface = 0LL;
        *((_QWORD *)a1 + 30) = 0LL;
        if ( v28 )
          *(_DWORD *)(v28 + 16) &= ~0x40u;
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
  SPRITERANGELOCK::vLockShared(v10, v15, v16, v17);
  v18 = *((_QWORD *)a1 + 16);
  if ( !v18 )
    goto LABEL_20;
  left = a5->left;
  v36 = 1;
  *((_DWORD *)a1 + 34) = -a5->left;
  v20 = -a5->top;
  *((_DWORD *)a1 + 38) = v11;
  v21 = 0LL;
  *((_DWORD *)a1 + 35) = v20;
  if ( a6 )
    v22 = **((_DWORD **)a6 + 14) | *(_DWORD *)(*((_QWORD *)a6 + 14) + 8LL);
  else
    v22 = 0;
  *((_DWORD *)a1 + 39) = v22;
  v23 = v48;
  *(struct _RECTL *)v51 = *a5;
  if ( v48 )
  {
    top = v48->top;
    LODWORD(v48) = left + v48->left;
    v49 = left + v23->right;
    v25 = *((_DWORD *)a1 + 35);
    HIDWORD(v48) = top - v25;
    v50 = v23->bottom - v25;
    ERECTL::operator*=((int *)v51, (int *)&v48);
  }
  if ( ERECTL::bEmpty((ERECTL *)v51) )
    goto LABEL_20;
  v26 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 0x40) != 0 && ((v26 & 0x200) == 0 || *(HSURF *)(v18 + 320) != a3->hsurf) )
  {
    *(_DWORD *)a1 = v26 | 0x80;
LABEL_20:
    SPRITERANGELOCK::vUnlock(v10);
    return v36;
  }
  v41 = *(struct _RECTL *)v51;
  ERECTL::bOffsetAdd((ERECTL *)&v41, v38[0], 0);
  v43 = 0LL;
  v44 = 0;
  v45 = 0;
  MULTISURF::vInit((MULTISURF *)v42, a3, &v41);
  v48 = 0LL;
  v38[0] = 0LL;
  if ( (*(_DWORD *)(v18 + 88) & 0x400) == 0 )
  {
    if ( (*(_DWORD *)(v29 + 88) & 0x400) != 0 )
      v31 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v29 + 24)
                                                                                                 + 2840LL);
    else
      v31 = EngCopyBits;
    goto LABEL_44;
  }
  v30 = *(HDEV *)(v18 + 24);
  if ( (unsigned int)MULTISURF::bLoadSource((MULTISURF *)v42, v30) )
  {
    v31 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v30 + 355);
LABEL_44:
    if ( SURFREFVIEW::bMap((SURFREFVIEW *)&v48, (struct _SURFOBJ *)v46)
      && SURFREFVIEW::bMap((SURFREFVIEW *)v38, (struct _SURFOBJ *)v18) )
    {
      v32 = *(_DWORD *)(v18 + 88);
      if ( (v32 & 0x80004000) != 0 && (v32 & 0x200) == 0 )
      {
        v21 = v18 - 24;
        GreLockDisplayDevice(*(_QWORD *)(v18 - 24 + 48));
      }
      v33 = v46;
      v34 = 0LL;
      if ( v46 )
      {
        v35 = *(_DWORD *)(v46 + 88);
        if ( (v35 & 0x80004000) != 0 && (v35 & 0x200) == 0 )
        {
          v34 = v46 - 24;
          GreLockDisplayDevice(*(_QWORD *)(v46 - 24 + 48));
          v33 = v46;
        }
      }
      OffCopyBits((int)v31, (_DWORD)a1 + 136, v18, (int)&gptlZero, v33, 0LL, v40, (__int64)v51, v47);
      if ( (*(_DWORD *)a1 & 0x200) != 0 && *((_QWORD *)a1 + 16) == v18 && *(HSURF *)(v18 + 320) == a3->hsurf )
        *(_DWORD *)a1 |= 0x80u;
      if ( v34 )
        GreUnlockDisplayDevice(*(_QWORD *)(v34 + 48));
      if ( v21 )
        GreUnlockDisplayDevice(*(_QWORD *)(v21 + 48));
    }
    else
    {
      v36 = 0;
    }
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v38);
    SURFREFVIEW::bUnMap((SURFREFVIEW *)&v48);
    MULTISURF::~MULTISURF((MULTISURF *)v42);
    goto LABEL_20;
  }
  SPRITERANGELOCK::vUnlock(v10);
  SPRITERANGELOCK::vLockExclusive(v10);
  vSpDeleteSurface(*((struct _SURFOBJ **)a1 + 16));
  *((_QWORD *)a1 + 16) = 0LL;
  SPRITERANGELOCK::vUnlock(v10);
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v38);
  SURFREFVIEW::bUnMap((SURFREFVIEW *)&v48);
  MULTISURF::~MULTISURF((MULTISURF *)v42);
  return 0LL;
}
