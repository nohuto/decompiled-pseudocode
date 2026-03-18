/*
 * XREFs of ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02A0F80
 * Callers:
 *     ?MulCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C02A1580 (-MulCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C02A1868 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     OffBitBlt @ 0x1C0083CBC (OffBitBlt.c)
 *     EngBitBlt @ 0x1C0088370 (EngBitBlt.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C009D498 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A4450 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C027309C (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C027D500 (--1MULTISURF@@QEAA@XZ.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C02A0310 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C02A0710 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C02A0750 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C02A4D44 (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02A4DD8 (-bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PE.c)
 *     ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02A5268 (-bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C02A5A10 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C02A5D1C (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C02A5E64 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02A63A4 (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vRestore@MSURF@@QEAAXXZ @ 0x1C02A6460 (-vRestore@MSURF@@QEAAXXZ.c)
 *     OffCopyBits @ 0x1C02C77F8 (OffCopyBits.c)
 */

int __fastcall MulBitBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *pxlo,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        ROP4 rop4)
{
  int v13; // ebx
  struct _RECTL *v14; // rdx
  struct _BRUSHOBJ *v15; // r8
  struct _POINTL *v16; // r9
  struct _SURFOBJ *v17; // r10
  struct _SURFOBJ *v18; // r11
  char v19; // cl
  USHORT iType; // si
  DHPDEV dhpdev; // r14
  char v23; // r15
  struct _SURFOBJ *v24; // r8
  int v25; // r10d
  int v26; // ecx
  struct _SURFOBJ *v27; // rdx
  struct _RECTL *v28; // r8
  LONG y; // ecx
  struct _SURFOBJ *v30; // r12
  int v31; // r13d
  int Source; // eax
  BOOL v33; // r14d
  SURFOBJ *v34; // r8
  struct _XLATEOBJ *v35; // rsi
  struct _DISPSURF *v36; // rdx
  int v37; // r9d
  PVOID *p_pvScan0; // r15
  __int64 v39; // rcx
  HDEV hdev; // rsi
  struct PALETTE *v41; // r10
  struct PALETTE *v42; // rax
  int v43; // r8d
  ULONG iUniq; // r15d
  int v45; // r14d
  FLONG flXlate; // r9d
  ULONG v47; // r11d
  ULONG *pulXlate; // rdx
  BOOL (__stdcall *v49)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  BOOL (__stdcall *v50)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  struct _XLATEOBJ *v51; // [rsp+70h] [rbp-90h] BYREF
  BOOL v52; // [rsp+78h] [rbp-88h]
  BRUSHOBJ *pbo; // [rsp+80h] [rbp-80h]
  struct _RECTL *v54; // [rsp+88h] [rbp-78h]
  struct _SURFOBJ *v55; // [rsp+90h] [rbp-70h]
  struct _SURFOBJ *v56; // [rsp+98h] [rbp-68h]
  POINTL *pptlBrush; // [rsp+A0h] [rbp-60h]
  POINTL *pptlMask; // [rsp+A8h] [rbp-58h]
  SURFOBJ *psoMask; // [rsp+B0h] [rbp-50h]
  _DWORD v60[4]; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD v61[12]; // [rsp+C8h] [rbp-38h] BYREF
  struct _RECTL v62; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v63[56]; // [rsp+110h] [rbp+10h] BYREF
  struct _DISPSURF *v64; // [rsp+148h] [rbp+48h]
  int v65[2]; // [rsp+150h] [rbp+50h]
  struct _CLIPOBJ *v66; // [rsp+158h] [rbp+58h]
  int v67[2]; // [rsp+160h] [rbp+60h]
  _BYTE v68[40]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v69; // [rsp+198h] [rbp+98h]
  char v70; // [rsp+1A0h] [rbp+A0h]
  int v71; // [rsp+1A4h] [rbp+A4h]
  SURFOBJ *psoSrc; // [rsp+1C8h] [rbp+C8h]
  POINTL *pptlSrc; // [rsp+1D0h] [rbp+D0h]
  _BYTE v74[40]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v75; // [rsp+208h] [rbp+108h]
  char v76; // [rsp+210h] [rbp+110h]
  int v77; // [rsp+214h] [rbp+114h]
  SURFOBJ *psoTrg; // [rsp+238h] [rbp+138h]
  RECTL *prclTrg; // [rsp+240h] [rbp+140h]

  psoMask = a3;
  v56 = a2;
  pbo = a9;
  v54 = a6;
  pptlMask = a8;
  v55 = a1;
  pptlBrush = a10;
  v13 = 0;
  v52 = IsMetaDevBitmapForMirroring(a1);
  if ( !v18 || (v19 = 1, v18->iType != 1) )
    v19 = 0;
  iType = v17->iType;
  v62 = *v14;
  if ( !v19 )
  {
    dhpdev = v17->dhpdev;
    LODWORD(v51) = 1;
    if ( iType && (unsigned int)MSURF::bFindSurface((MSURF *)v63, v17, a4, v14) )
    {
      v23 = 1;
      v24 = (struct _SURFOBJ *)*((_QWORD *)dhpdev + 6);
      v25 = *((_DWORD *)dhpdev + 4);
      v26 = ((unsigned __int16)rop4 ^ (unsigned __int16)(rop4 >> 4)) & 0xF0F;
    }
    else
    {
      v23 = 0;
      v26 = 0;
      v24 = 0LL;
      dhpdev = 0LL;
      v25 = 0;
    }
    MULTIBRUSH::MULTIBRUSH(
      (MULTIBRUSH *)v61,
      (struct _BRUSHOBJ *)((unsigned __int64)pbo & -(__int64)(v23 != 0)),
      v25,
      (struct _VDEV *)dhpdev,
      v24,
      v26);
    v27 = v56;
    v69 = 0LL;
    v70 = 0;
    v71 = 0;
    if ( v56 )
    {
      v28 = (struct _RECTL *)v60;
      y = a7->y;
      v60[0] = a7->x;
      v60[1] = y;
      v60[3] = v62.bottom + y - v62.top;
      v60[2] = v62.right + v60[0] - v62.left;
    }
    else
    {
      v28 = 0LL;
      v27 = 0LL;
    }
    MULTISURF::vInit((MULTISURF *)v68, v27, v28);
    if ( !v52 && iType )
    {
      v30 = v55;
      v31 = (int)v51;
    }
    else
    {
      v30 = v55;
      v75 = 0LL;
      v76 = 0;
      v77 = 0;
      MULTISURF::vInit((MULTISURF *)v74, v55, v54);
      v31 = EngBitBlt(psoTrg, psoSrc, psoMask, a4, pxlo, prclTrg, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
      MULTISURF::~MULTISURF((MULTISURF *)v74);
    }
    if ( !v23 )
    {
LABEL_75:
      v13 = v31;
      goto LABEL_76;
    }
    if ( !v61[0] )
    {
      MSURF::vRestore((MSURF *)v63);
LABEL_76:
      MULTISURF::~MULTISURF((MULTISURF *)v68);
      return v13;
    }
    while ( 1 )
    {
      Source = MULTISURF::bLoadSource((MULTISURF *)v68, v64);
      v51 = 0LL;
      v33 = Source == 0;
      if ( !Source )
        goto LABEL_73;
      v34 = psoSrc;
      v35 = pxlo;
      v36 = v64;
      if ( !psoSrc )
        goto LABEL_64;
      v37 = *((_DWORD *)v64 + 6);
      if ( !v37 )
        goto LABEL_64;
      p_pvScan0 = &psoSrc[-1].pvScan0;
      v39 = *((_QWORD *)v64 + 6);
      hdev = psoSrc[1].hdev;
      v54 = *(struct _RECTL **)v65;
      v41 = ppalDefault;
      if ( (*(_DWORD *)(v39 + 2172) & 0x100) != 0 )
      {
        v42 = DrvRealizeHalftonePalette((_QWORD *)v39, 0);
        v34 = psoSrc;
        v41 = v42;
      }
      else if ( v37 > 0 && pxlo && *(_QWORD *)&pxlo[2].iSrcType )
      {
        v41 = *(struct PALETTE **)&pxlo[2].iSrcType;
      }
      if ( hdev )
        goto LABEL_42;
      if ( !pxlo )
        goto LABEL_40;
      if ( pxlo[1].pulXlate )
      {
        hdev = (HDEV)pxlo[1].pulXlate;
      }
      else
      {
        if ( (pxlo->flXlate & 1) != 0 )
        {
LABEL_40:
          if ( v34 == v56 )
            hdev = v30[1].hdev;
LABEL_42:
          if ( v33 )
            goto LABEL_73;
          goto LABEL_43;
        }
        if ( !*(_QWORD *)&pxlo[2].iSrcType )
        {
          v33 = 1;
          goto LABEL_42;
        }
        v41 = *(struct PALETTE **)&pxlo[2].iSrcType;
        if ( *((_DWORD *)p_pvScan0 + 24) == v30->iBitmapFormat )
          hdev = v30[1].hdev;
      }
LABEL_43:
      v43 = 0;
      if ( hdev )
      {
        if ( ((_DWORD)hdev[6] & 0x800) != 0 )
        {
          v43 = 0x4000;
          if ( v41 == ppalDefault )
            v43 = 0x2000;
        }
      }
      if ( pxlo )
        iUniq = pxlo[1].iUniq;
      else
        iUniq = 0;
      if ( pxlo )
        v45 = *(_DWORD *)&pxlo[1].iSrcType;
      else
        v45 = 0;
      if ( pxlo )
        flXlate = pxlo[1].flXlate;
      else
        flXlate = 0;
      if ( pxlo )
        v47 = pxlo[3].iUniq;
      else
        v47 = 0;
      if ( pxlo )
        pulXlate = pxlo[2].pulXlate;
      else
        pulXlate = 0LL;
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           (__int64 *)&v51,
                           (__int64)pulXlate,
                           v47,
                           (__int64)hdev,
                           *(_QWORD *)&v54[6].right,
                           (__int64)ppalDefault,
                           (__int64)v41,
                           flXlate,
                           v45,
                           iUniq,
                           v43) )
      {
        v35 = v51;
        v36 = v64;
        v34 = psoSrc;
LABEL_64:
        if ( rop4 == 52428 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)v65 + 88LL) & 0x400) != 0 )
            v49 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*((_QWORD *)v36 + 7) + 2840LL);
          else
            v49 = EngCopyBits;
          v31 &= OffCopyBits(
                   (int)v49,
                   v67[0],
                   v65[0],
                   (int)&gptlZero,
                   (__int64)v34,
                   v66,
                   (__int64)v35,
                   (__int64)&v62,
                   (__int64)pptlSrc);
        }
        else
        {
          MULTIBRUSH::LoadElement((MULTIBRUSH *)v61, v36, (struct SURFACE *)(*(_QWORD *)v65 - 24LL));
          if ( (*(_DWORD *)(*(_QWORD *)v65 + 88LL) & 1) != 0 )
            v50 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_QWORD *)v64 + 7) + 2832LL);
          else
            v50 = EngBitBlt;
          v31 &= OffBitBlt(
                   (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v50,
                   *(int **)v67,
                   *(__int64 *)v65,
                   &gptlZero,
                   (__int64)psoSrc,
                   (__int64)psoMask,
                   v66,
                   (__int64)v35,
                   &v62.left,
                   (__int64 *)pptlSrc,
                   (__int64)pptlMask,
                   (__int64)pbo,
                   (__int64 *)pptlBrush,
                   rop4);
          MULTIBRUSH::StoreElement((MULTIBRUSH *)v61, *((_DWORD *)v64 + 4));
        }
        goto LABEL_74;
      }
LABEL_73:
      v31 = 0;
LABEL_74:
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v51);
      if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v63) )
        goto LABEL_75;
    }
  }
  if ( iType == 1 )
    return bBitBltScreenToScreen(v17, a3, a4, pxlo, &v62, a7, v16, v15, a10, rop4);
  else
    return bBitBltFromScreen(v17, v18, a3, a4, pxlo, &v62, a7, v16, v15, a10, rop4);
}
