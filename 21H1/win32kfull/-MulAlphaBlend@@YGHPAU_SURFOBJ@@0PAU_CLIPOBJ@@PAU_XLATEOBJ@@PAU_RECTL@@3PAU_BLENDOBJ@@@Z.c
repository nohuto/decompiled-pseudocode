/*
 * XREFs of ?MulAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z @ 0x2019CF
 * Callers:
 *     <none>
 * Callees:
 *     _EngAlphaBlend@28 @ 0x526B0 (_EngAlphaBlend@28.c)
 *     ?pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ @ 0x55814 (-pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z @ 0x5D130 (-bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QAEXXZ @ 0x794B6 (-vAltUnlock@EXLATEOBJ@@QAEXXZ.c)
 *     _OffAlphaBlend@40 @ 0xE51D2 (_OffAlphaBlend@40.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?DrvRealizeHalftonePalette@@YGPAVPALETTE@@PAUHDEV__@@H@Z @ 0x1D12FD (-DrvRealizeHalftonePalette@@YGPAVPALETTE@@PAUHDEV__@@H@Z.c)
 *     ??1MULTISURF@@QAE@XZ @ 0x1DA696 (--1MULTISURF@@QAE@XZ.c)
 *     ?IsMetaDevBitmapForMirroring@@YGHPAU_SURFOBJ@@@Z @ 0x201804 (-IsMetaDevBitmapForMirroring@@YGHPAU_SURFOBJ@@@Z.c)
 *     ?MulCopyDeviceToDIB@@YGHPAU_SURFOBJ@@PAVSURFMEM@@PAU_RECTL@@@Z @ 0x202783 (-MulCopyDeviceToDIB@@YGHPAU_SURFOBJ@@PAVSURFMEM@@PAU_RECTL@@@Z.c)
 *     ?bFindSurface@MSURF@@QAEHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z @ 0x205F5F (-bFindSurface@MSURF@@QAEHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QAEHPAU_DISPSURF@@@Z @ 0x2061FA (-bLoadSource@MULTISURF@@QAEHPAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QAEHXZ @ 0x2062FC (-bNextSurface@MSURF@@QAEHXZ.c)
 *     ?vInit@MULTISURF@@AAEXPAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x206708 (-vInit@MULTISURF@@AAEXPAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 */

BOOL __stdcall MulAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BLENDOBJ *a7)
{
  struct _BLENDOBJ v7; // ebx
  struct _BLENDOBJ v8; // ebx
  struct _BLENDOBJ v9; // eax
  HDEV hdev; // eax
  BOOL v11; // ebx
  BOOL v12; // esi
  struct _SURFOBJ *v13; // ecx
  XLATEOBJ *v14; // edi
  __int64 v15; // rax
  bool v16; // zf
  int v17; // edx
  SURFOBJ *v18; // ecx
  struct _DISPSURF *v19; // eax
  int v20; // ecx
  struct PALETTE *v21; // eax
  LONG pulXlate; // eax
  struct PALETTE *v23; // edx
  int v24; // ecx
  int iUniq; // eax
  int v27; // edx
  int (__stdcall *v28)(int, int, struct _CLIPOBJ *, int, int *, int *, int); // esi
  int v29; // eax
  struct SURFMEM *v30; // [esp+0h] [ebp-170h]
  struct _RECTL *v31; // [esp+4h] [ebp-16Ch]
  ULONG *v32; // [esp+10h] [ebp-160h]
  struct PALETTE *v33; // [esp+14h] [ebp-15Ch]
  int v34; // [esp+18h] [ebp-158h]
  int Surface; // [esp+1Ch] [ebp-154h]
  CLIPOBJ *v36; // [esp+1Ch] [ebp-154h]
  int cEntries; // [esp+1Ch] [ebp-154h]
  int v38; // [esp+24h] [ebp-14Ch]
  int v39; // [esp+24h] [ebp-14Ch]
  CLIPOBJ *pco; // [esp+28h] [ebp-148h] BYREF
  struct _SURFOBJ *v41; // [esp+2Ch] [ebp-144h]
  struct _SURFOBJ *v42; // [esp+30h] [ebp-140h]
  int v43; // [esp+34h] [ebp-13Ch]
  FLONG flXlate; // [esp+38h] [ebp-138h]
  int v45; // [esp+3Ch] [ebp-134h]
  LONG *p_lDelta; // [esp+40h] [ebp-130h]
  XLATEOBJ *pxlo; // [esp+44h] [ebp-12Ch]
  struct _RECTL *v48; // [esp+48h] [ebp-128h]
  struct _BLENDOBJ v49; // [esp+4Ch] [ebp-124h] BYREF
  struct _BLENDOBJ v50; // [esp+50h] [ebp-120h] BYREF
  struct _BLENDOBJ v51; // [esp+54h] [ebp-11Ch] BYREF
  struct _BLENDOBJ v52; // [esp+58h] [ebp-118h]
  struct _BLENDOBJ v53; // [esp+5Ch] [ebp-114h]
  struct _BLENDOBJ v54; // [esp+60h] [ebp-110h]
  SURFACE *v55; // [esp+64h] [ebp-10Ch] BYREF
  char v56; // [esp+68h] [ebp-108h]
  int v57; // [esp+6Ch] [ebp-104h]
  _BYTE v58[28]; // [esp+70h] [ebp-100h] BYREF
  int v59; // [esp+8Ch] [ebp-E4h]
  char v60; // [esp+90h] [ebp-E0h]
  int v61; // [esp+94h] [ebp-DCh]
  SURFOBJ *psoSrc; // [esp+B4h] [ebp-BCh]
  RECTL *prclSrc; // [esp+B8h] [ebp-B8h]
  _BYTE v64[48]; // [esp+C0h] [ebp-B0h] BYREF
  struct _DISPSURF *v65; // [esp+F0h] [ebp-80h]
  int v66; // [esp+F4h] [ebp-7Ch]
  struct _CLIPOBJ *v67; // [esp+F8h] [ebp-78h]
  LONG *v68; // [esp+FCh] [ebp-74h]
  _BYTE v69[28]; // [esp+108h] [ebp-68h] BYREF
  int v70; // [esp+124h] [ebp-4Ch]
  char v71; // [esp+128h] [ebp-48h]
  int v72; // [esp+12Ch] [ebp-44h]
  SURFOBJ *psoDest; // [esp+14Ch] [ebp-24h]
  RECTL *prclDest; // [esp+150h] [ebp-20h]
  struct _RECTL v75; // [esp+15Ch] [ebp-14h] BYREF

  v41 = a1;
  pco = a3;
  v75.left = a6->left;
  pxlo = a4;
  v48 = a5;
  v75.top = a6->top;
  v42 = a2;
  v7 = a7[2];
  v75.right = a6->right;
  v52 = v7;
  v8 = a7[3];
  v9 = a7[1];
  v75.bottom = a6->bottom;
  v53 = v8;
  v54 = v9;
  hdev = a2->hdev;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  if ( a2->iType != 1 || !hdev || ((unsigned int)&loc_20000 & (_DWORD)hdev[6]) == 0 )
  {
    v45 = 1;
    v12 = IsMetaDevBitmapForMirroring((int)v41);
    Surface = MSURF::bFindSurface((MSURF *)v64, v13, pco, v48);
    v59 = 0;
    v60 = 0;
    v61 = 0;
    MULTISURF::vInit((MULTISURF *)v58, v42, a6);
    if ( v12 )
    {
      v70 = 0;
      v71 = 0;
      v72 = 0;
      MULTISURF::vInit((MULTISURF *)v69, v41, v48);
      v14 = pxlo;
      v45 = EngAlphaBlend(psoDest, psoSrc, pco, pxlo, prclDest, prclSrc, a7);
      MULTISURF::~MULTISURF((MULTISURF *)v69);
    }
    else
    {
      v14 = pxlo;
    }
    if ( !Surface )
    {
LABEL_32:
      v11 = v45;
      MULTISURF::~MULTISURF((MULTISURF *)v58);
      goto LABEL_33;
    }
    while ( 1 )
    {
      pco = 0;
      v51 = 0;
      v50 = 0;
      v49 = 0;
      v15 = -(__int64)(unsigned int)MULTISURF::bLoadSource((MULTISURF *)v58, v65);
      v16 = HIDWORD(v15) == -1;
      v17 = HIDWORD(v15) + 1;
      v38 = v17;
      v34 = v66 - 16;
      if ( !v16 )
        goto LABEL_30;
      v18 = psoSrc;
      v36 = (CLIPOBJ *)v14;
      p_lDelta = &psoSrc[-1].lDelta;
      v19 = v65;
      if ( !*((_DWORD *)v65 + 4) )
        goto LABEL_57;
      v20 = *((_DWORD *)v65 + 9);
      v32 = (ULONG *)p_lDelta[22];
      v33 = ppalDefault;
      if ( (*(_DWORD *)(v20 + 1456) & 0x100) != 0 )
      {
        v21 = DrvRealizeHalftonePalette(v20, 0);
        v17 = v38;
        v33 = v21;
      }
      if ( v32 )
        goto LABEL_28;
      if ( !v14 )
        goto LABEL_34;
      pulXlate = (LONG)v14[1].pulXlate;
      if ( !pulXlate )
        break;
      v32 = v14[1].pulXlate;
LABEL_17:
      v23 = v33;
LABEL_18:
      v24 = 0;
      if ( pulXlate && (*(_DWORD *)(pulXlate + 16) & 0x800) != 0 )
        v24 = v23 != ppalDefault ? 0x4000 : 0x2000;
      if ( v14 )
        flXlate = v14[1].flXlate;
      else
        flXlate = 0;
      if ( v14 )
        v43 = *(_DWORD *)&v14[1].iSrcType;
      else
        v43 = 0;
      if ( v14 )
      {
        iUniq = v14[1].iUniq;
        v39 = iUniq;
      }
      else
      {
        iUniq = 0;
        v39 = 0;
      }
      if ( v14 )
        cEntries = v14[2].cEntries;
      else
        cEntries = 0;
      if ( v14 )
        v27 = *(_DWORD *)&v14[2].iSrcType;
      else
        v27 = 0;
      if ( EXLATEOBJ::bInitXlateObj(
             (int *)&pco,
             v27,
             cEntries,
             v32,
             *(_DWORD **)(v34 + 88),
             (int)ppalDefault,
             (int)v33,
             flXlate,
             v43,
             iUniq,
             v24) )
      {
        v36 = pco;
        if ( EXLATEOBJ::bInitXlateObj(
               (int *)&v51,
               0,
               0,
               *(_DWORD **)(v34 + 88),
               gppalRGB,
               (int)v33,
               (int)v33,
               flXlate,
               v43,
               v39,
               0) )
        {
          a7[2] = v51;
          if ( EXLATEOBJ::bInitXlateObj(
                 (int *)&v50,
                 0,
                 0,
                 gppalRGB,
                 *(_DWORD **)(v34 + 88),
                 (int)v33,
                 (int)v33,
                 flXlate,
                 v43,
                 v39,
                 0) )
          {
            a7[3] = v50;
            v18 = psoSrc;
            if ( psoSrc == v42 )
              goto LABEL_56;
            if ( EXLATEOBJ::bInitXlateObj(
                   (int *)&v49,
                   0,
                   0,
                   (_DWORD *)p_lDelta[22],
                   gppalRGB,
                   (int)ppalDefault,
                   (int)v33,
                   flXlate,
                   v43,
                   v39,
                   0) )
            {
              a7[1] = v49;
              v18 = psoSrc;
LABEL_56:
              v19 = v65;
LABEL_57:
              if ( (*(_DWORD *)(v66 + 56) & 0x10000) != 0 )
                v28 = *(int (__stdcall **)(int, int, struct _CLIPOBJ *, int, int *, int *, int))(*((_DWORD *)v19 + 10)
                                                                                               + 2184);
              else
                v28 = (int (__stdcall *)(int, int, struct _CLIPOBJ *, int, int *, int *, int))EngAlphaBlend;
              if ( v18->iType == 1 )
              {
                v14 = pxlo;
                if ( p_lDelta[7] != *(_DWORD *)(v34 + 28) )
                  v28 = (int (__stdcall *)(int, int, struct _CLIPOBJ *, int, int *, int *, int))EngAlphaBlend;
              }
              v29 = OffAlphaBlend(
                      v28,
                      v68,
                      v66,
                      &gptlZero.x,
                      (int)v18,
                      v67,
                      (int)v36,
                      &v48->left,
                      &prclSrc->left,
                      (int)a7);
              v45 &= v29;
              goto LABEL_31;
            }
          }
        }
      }
LABEL_30:
      v45 = 0;
LABEL_31:
      a7[2] = v52;
      a7[3] = v53;
      a7[1] = v54;
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v49);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v50);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v51);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pco);
      if ( !MSURF::bNextSurface((MSURF *)v64) )
        goto LABEL_32;
    }
    if ( (v14->flXlate & 1) != 0 )
    {
LABEL_34:
      if ( psoSrc == v42 )
      {
        pulXlate = v41[1].sizlBitmap.cy;
        v32 = (ULONG *)pulXlate;
LABEL_29:
        if ( v17 )
          goto LABEL_30;
        goto LABEL_17;
      }
    }
    else
    {
      if ( v14[2].flXlate )
      {
        v23 = (struct PALETTE *)v14[2].flXlate;
        v33 = v23;
        if ( p_lDelta[15] == v41->iBitmapFormat )
        {
          pulXlate = v41[1].sizlBitmap.cy;
          v32 = (ULONG *)pulXlate;
        }
        else
        {
          pulXlate = 0;
        }
        goto LABEL_18;
      }
      v17 = 1;
    }
LABEL_28:
    pulXlate = (LONG)v32;
    goto LABEL_29;
  }
  v11 = MulCopyDeviceToDIB((struct _SURFOBJ *)&v75, v30, v31) != 0;
LABEL_33:
  SURFMEM::~SURFMEM((SURFMEM *)&v55);
  return v11;
}
