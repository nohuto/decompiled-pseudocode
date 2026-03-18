/*
 * XREFs of ?MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C02A4760
 * Callers:
 *     <none>
 * Callees:
 *     OffTransparentBlt @ 0x1C0083698 (OffTransparentBlt.c)
 *     EngTransparentBlt @ 0x1C00869D0 (EngTransparentBlt.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C009D498 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A4450 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C027309C (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C027D500 (--1MULTISURF@@QEAA@XZ.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C02A0710 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C02A1868 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C02A5A10 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C02A5D1C (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C02A5E64 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02A63A4 (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall MulTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        ULONG iTransColor,
        ULONG ulReserved)
{
  unsigned int v8; // esi
  struct _RECTL *v9; // rdi
  HDEV hdev; // rax
  struct _SURFOBJ *v13; // r13
  struct _RECTL v15; // xmm0
  BOOL v16; // ebx
  int Surface; // eax
  int v18; // r15d
  struct _SURFOBJ *v19; // rdi
  int v20; // ebx
  int Source; // eax
  BOOL v22; // r12d
  SURFOBJ *v23; // r8
  struct _XLATEOBJ *v24; // r15
  PVOID *p_pvScan0; // rax
  ULONG *pulXlate; // rbx
  __int64 v27; // rcx
  struct PALETTE *v28; // rdx
  struct PALETTE *v29; // rax
  int v30; // r8d
  ULONG iUniq; // edi
  int v32; // r11d
  FLONG flXlate; // r9d
  ULONG v34; // r10d
  ULONG *v35; // rdx
  int inited; // eax
  bool v37; // zf
  int v38; // r9d
  PVOID v39; // rbx
  unsigned int v40; // eax
  int NearestIndexFromColorref; // eax
  BOOL (__stdcall *v42)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rcx
  int v43; // eax
  BOOL v45; // [rsp+60h] [rbp-A0h]
  PVOID *v46; // [rsp+68h] [rbp-98h]
  struct PALETTE *v47; // [rsp+70h] [rbp-90h]
  struct _XLATEOBJ *v48; // [rsp+80h] [rbp-80h] BYREF
  struct _SURFOBJ *v49; // [rsp+88h] [rbp-78h]
  __int64 v50; // [rsp+90h] [rbp-70h] BYREF
  char v51; // [rsp+98h] [rbp-68h]
  int v52; // [rsp+9Ch] [rbp-64h]
  _BYTE v53[40]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v54; // [rsp+C8h] [rbp-38h]
  char v55; // [rsp+D0h] [rbp-30h]
  int v56; // [rsp+D4h] [rbp-2Ch]
  SURFOBJ *psoSrc; // [rsp+F8h] [rbp-8h]
  RECTL *prclSrc; // [rsp+100h] [rbp+0h]
  _BYTE v59[56]; // [rsp+110h] [rbp+10h] BYREF
  struct _DISPSURF *v60; // [rsp+148h] [rbp+48h]
  int v61[2]; // [rsp+150h] [rbp+50h]
  struct _CLIPOBJ *v62; // [rsp+158h] [rbp+58h]
  int v63[2]; // [rsp+160h] [rbp+60h]
  _BYTE v64[40]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v65; // [rsp+198h] [rbp+98h]
  char v66; // [rsp+1A0h] [rbp+A0h]
  int v67; // [rsp+1A4h] [rbp+A4h]
  SURFOBJ *psoDst; // [rsp+1C8h] [rbp+C8h]
  RECTL *prclDst; // [rsp+1D0h] [rbp+D0h]
  struct _RECTL v70; // [rsp+1E0h] [rbp+E0h] BYREF

  v8 = 0;
  v9 = a6;
  hdev = a2->hdev;
  v13 = a2;
  v49 = a1;
  v50 = 0LL;
  v15 = *a6;
  v51 = 0;
  v52 = 0;
  v70 = v15;
  if ( a2->iType != 1 || !hdev || ((_DWORD)hdev[10] & 0x20000) == 0 )
  {
LABEL_8:
    v45 = 1;
    v16 = IsMetaDevBitmapForMirroring(a1);
    Surface = MSURF::bFindSurface((MSURF *)v59, a1, a3, a5);
    v54 = 0LL;
    v55 = 0;
    v56 = 0;
    v18 = Surface;
    MULTISURF::vInit((MULTISURF *)v53, v13, v9);
    v19 = v49;
    if ( v16 )
    {
      v65 = 0LL;
      v66 = 0;
      v67 = 0;
      MULTISURF::vInit((MULTISURF *)v64, v49, a5);
      v45 = EngTransparentBlt(psoDst, psoSrc, a3, a4, prclDst, prclSrc, iTransColor, ulReserved);
      v20 = v45;
      MULTISURF::~MULTISURF((MULTISURF *)v64);
    }
    else
    {
      v20 = 1;
    }
    if ( !v18 )
    {
LABEL_63:
      v8 = v20;
      MULTISURF::~MULTISURF((MULTISURF *)v53);
      goto LABEL_64;
    }
    while ( 1 )
    {
      v48 = 0LL;
      Source = MULTISURF::bLoadSource((MULTISURF *)v53, v60);
      v22 = Source == 0;
      *(_QWORD *)&v70.left = *(_QWORD *)v61;
      if ( !Source )
        goto LABEL_61;
      v23 = psoSrc;
      v24 = a4;
      p_pvScan0 = &psoSrc[-1].pvScan0;
      v46 = &psoSrc[-1].pvScan0;
      if ( *((_DWORD *)v60 + 6) )
        break;
LABEL_51:
      v38 = iTransColor;
      if ( v23 != v13 )
      {
        v39 = p_pvScan0[16];
        v40 = ulIndexToRGB(v13[1].hdev, ppalDefault, iTransColor);
        NearestIndexFromColorref = ulGetNearestIndexFromColorref(v39, ppalDefault, v40, 1LL);
        v23 = psoSrc;
        v38 = NearestIndexFromColorref;
      }
      if ( !v22 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)v61 + 88LL) & 0x8000) != 0 )
          v42 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*((_QWORD *)v60 + 7) + 3280LL);
        else
          v42 = EngTransparentBlt;
        if ( v23->iType == 1 && v46[6] != *(PVOID *)(*(_QWORD *)&v70.left + 24LL) )
          v42 = EngTransparentBlt;
        v20 = OffTransparentBlt(
                (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int128 *, int, int))v42,
                *(int **)v63,
                *(__int64 *)v61,
                (int *)&gptlZero,
                (__int64)v23,
                v62,
                (__int64)v24,
                (__int128 *)&a5->left,
                (__int128 *)&prclSrc->left,
                v38,
                ulReserved) & v45;
        goto LABEL_62;
      }
LABEL_61:
      v20 = 0;
LABEL_62:
      v45 = v20;
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v48);
      v43 = MSURF::bNextSurface((MSURF *)v59);
      v19 = v49;
      if ( !v43 )
        goto LABEL_63;
    }
    pulXlate = (ULONG *)p_pvScan0[16];
    v27 = *((_QWORD *)v60 + 6);
    v28 = ppalDefault;
    v47 = ppalDefault;
    if ( (*(_DWORD *)(v27 + 2172) & 0x100) != 0 )
    {
      v29 = DrvRealizeHalftonePalette((_QWORD *)v27, 0);
      v23 = psoSrc;
      v28 = v29;
      v47 = v29;
    }
    if ( !pulXlate )
    {
      if ( !a4 )
        goto LABEL_25;
      if ( a4[1].pulXlate )
      {
        pulXlate = a4[1].pulXlate;
LABEL_28:
        v30 = 0;
        if ( pulXlate )
        {
          if ( (pulXlate[6] & 0x800) != 0 )
          {
            v30 = 0x4000;
            if ( v28 == ppalDefault )
              v30 = 0x2000;
          }
        }
        if ( a4 )
          iUniq = a4[1].iUniq;
        else
          iUniq = 0;
        if ( a4 )
          v32 = *(_DWORD *)&a4[1].iSrcType;
        else
          v32 = 0;
        if ( a4 )
          flXlate = a4[1].flXlate;
        else
          flXlate = 0;
        if ( a4 )
          v34 = a4[3].iUniq;
        else
          v34 = 0;
        if ( a4 )
          v35 = a4[2].pulXlate;
        else
          v35 = 0LL;
        inited = EXLATEOBJ::bInitXlateObj(
                   (__int64 *)&v48,
                   (__int64)v35,
                   v34,
                   (__int64)pulXlate,
                   *(_QWORD *)(*(_QWORD *)&v70.left + 104LL),
                   (__int64)ppalDefault,
                   (__int64)v47,
                   flXlate,
                   v32,
                   iUniq,
                   v30);
        v23 = psoSrc;
        v37 = inited == 0;
        p_pvScan0 = v46;
        if ( v37 )
        {
          v22 = 1;
          v24 = a4;
        }
        else
        {
          v24 = v48;
        }
        goto LABEL_51;
      }
      if ( (a4->flXlate & 1) != 0 )
      {
LABEL_25:
        if ( v23 == v13 )
          pulXlate = (ULONG *)v19[1].hdev;
      }
      else
      {
        if ( *(_QWORD *)&a4[2].iSrcType )
        {
          v28 = *(struct PALETTE **)&a4[2].iSrcType;
          v47 = v28;
          if ( *((_DWORD *)v46 + 24) == v19->iBitmapFormat )
            pulXlate = (ULONG *)v19[1].hdev;
          goto LABEL_28;
        }
        v22 = 1;
      }
    }
    v24 = a4;
    if ( v22 )
    {
      p_pvScan0 = v46;
      goto LABEL_51;
    }
    goto LABEL_28;
  }
  if ( (unsigned int)MulCopyDeviceToDIB(a2, (struct SURFMEM *)&v50, &v70) )
  {
    if ( !v50 )
    {
      v8 = 1;
      goto LABEL_64;
    }
    v9 = &v70;
    v13 = (struct _SURFOBJ *)(v50 + 24);
    goto LABEL_8;
  }
LABEL_64:
  SURFMEM::~SURFMEM((SURFMEM *)&v50);
  return v8;
}
