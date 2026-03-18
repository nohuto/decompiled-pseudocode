/*
 * XREFs of ?MulStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x203EDB
 * Callers:
 *     <none>
 * Callees:
 *     _EngStretchBlt@44 @ 0x4BF90 (_EngStretchBlt@44.c)
 *     ?pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ @ 0x55814 (-pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z @ 0x5D130 (-bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QAEXXZ @ 0x794B6 (-vAltUnlock@EXLATEOBJ@@QAEXXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?DrvRealizeHalftonePalette@@YGPAVPALETTE@@PAUHDEV__@@H@Z @ 0x1D12FD (-DrvRealizeHalftonePalette@@YGPAVPALETTE@@PAUHDEV__@@H@Z.c)
 *     ??1MULTISURF@@QAE@XZ @ 0x1DA696 (--1MULTISURF@@QAE@XZ.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QAEXHPAVREGION@@AAVERECTL@@H@Z @ 0x1DFC7A (-vSetup@ECLIPOBJTMPIFNEEDED@@QAEXHPAVREGION@@AAVERECTL@@H@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YGHPAU_SURFOBJ@@@Z @ 0x201804 (-IsMetaDevBitmapForMirroring@@YGHPAU_SURFOBJ@@@Z.c)
 *     ?IsMetaRedirectionBitmap@@YGHPAU_SURFOBJ@@@Z @ 0x201818 (-IsMetaRedirectionBitmap@@YGHPAU_SURFOBJ@@@Z.c)
 *     ?MulCopyDeviceToDIB@@YGHPAU_SURFOBJ@@PAVSURFMEM@@PAU_RECTL@@@Z @ 0x202783 (-MulCopyDeviceToDIB@@YGHPAU_SURFOBJ@@PAVSURFMEM@@PAU_RECTL@@@Z.c)
 *     ?bFindSurface@MSURF@@QAEHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z @ 0x205F5F (-bFindSurface@MSURF@@QAEHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QAEHPAU_DISPSURF@@@Z @ 0x2061FA (-bLoadSource@MULTISURF@@QAEHPAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QAEHXZ @ 0x2062FC (-bNextSurface@MSURF@@QAEHXZ.c)
 *     ?vInit@MULTISURF@@AAEXPAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x206708 (-vInit@MULTISURF@@AAEXPAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     _OffStretchBlt@56 @ 0x22F2C1 (_OffStretchBlt@56.c)
 */

int __stdcall MulStretchBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct tagCOLORADJUSTMENT *a6,
        struct _POINTL *a7,
        struct _RECTL *a8,
        struct _RECTL *a9,
        struct _POINTL *a10,
        ULONG iMode)
{
  int v11; // ebx
  LONG *p_lDelta; // ecx
  HDEV hdev; // eax
  RECTL *v14; // edx
  LONG left; // edi
  LONG right; // ecx
  LONG top; // esi
  LONG bottom; // eax
  int v19; // eax
  DHSURF v20; // eax
  DHPDEV v21; // ecx
  HSURF v22; // edx
  HDEV v23; // edi
  LONG v24; // esi
  LONG v25; // ebx
  void *v26; // eax
  void *v27; // ecx
  SURFOBJ *v28; // eax
  struct _RECTL *v29; // edi
  BOOL v30; // esi
  struct _SURFOBJ *v31; // edx
  XLATEOBJ *v32; // edi
  int v33; // esi
  int Source; // eax
  SURFOBJ *v35; // edx
  int v36; // esi
  int v37; // ecx
  struct PALETTE *v38; // eax
  LONG pulXlate; // eax
  struct PALETTE *v40; // edx
  int v41; // ecx
  int v42; // edx
  int inited; // eax
  int v44; // ecx
  RECTL *v45; // ecx
  BOOL (__stdcall *v46)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // eax
  REGION *v47; // ecx
  struct SURFMEM *v49; // [esp+14h] [ebp-1D8h]
  struct _RECTL *v50; // [esp+18h] [ebp-1D4h]
  ULONG *cy; // [esp+24h] [ebp-1C8h]
  BOOL (__stdcall *v52)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // [esp+24h] [ebp-1C8h]
  struct _RECTL *prclSrc; // [esp+28h] [ebp-1C4h]
  RECTL *prclSrca; // [esp+28h] [ebp-1C4h]
  RECTL *prclSrcb; // [esp+28h] [ebp-1C4h]
  struct PALETTE *v56; // [esp+2Ch] [ebp-1C0h]
  PVOID *p_pvScan0; // [esp+2Ch] [ebp-1C0h]
  int *v58; // [esp+30h] [ebp-1BCh]
  int Surface; // [esp+30h] [ebp-1BCh]
  int cEntries; // [esp+30h] [ebp-1BCh]
  LONG *v61; // [esp+34h] [ebp-1B8h]
  struct _RECTL *p_sizlBitmap; // [esp+38h] [ebp-1B4h]
  SURFOBJ *psoSrc; // [esp+3Ch] [ebp-1B0h]
  int v64; // [esp+44h] [ebp-1A8h]
  XLATEOBJ *pxlo; // [esp+48h] [ebp-1A4h] BYREF
  int v66; // [esp+4Ch] [ebp-1A0h]
  CLIPOBJ *pco; // [esp+50h] [ebp-19Ch]
  int v68; // [esp+54h] [ebp-198h]
  FLONG flXlate; // [esp+58h] [ebp-194h]
  POINTL *pptlMask; // [esp+5Ch] [ebp-190h]
  POINTL *pptlHTOrg; // [esp+60h] [ebp-18Ch]
  COLORADJUSTMENT *pca; // [esp+64h] [ebp-188h]
  SURFOBJ *psoMask; // [esp+68h] [ebp-184h]
  SURFACE *v74; // [esp+6Ch] [ebp-180h] BYREF
  char v75; // [esp+70h] [ebp-17Ch]
  int v76; // [esp+74h] [ebp-178h]
  SURFACE *v77; // [esp+78h] [ebp-174h] BYREF
  char v78; // [esp+7Ch] [ebp-170h]
  int v79; // [esp+80h] [ebp-16Ch]
  _DWORD v80[6]; // [esp+84h] [ebp-168h] BYREF
  _BYTE v81[28]; // [esp+9Ch] [ebp-150h] BYREF
  int v82; // [esp+B8h] [ebp-134h]
  char v83; // [esp+BCh] [ebp-130h]
  int v84; // [esp+C0h] [ebp-12Ch]
  SURFOBJ *v85; // [esp+E0h] [ebp-10Ch]
  RECTL *v86; // [esp+E4h] [ebp-108h]
  _BYTE v87[48]; // [esp+ECh] [ebp-100h] BYREF
  struct _DISPSURF *v88; // [esp+11Ch] [ebp-D0h]
  int v89; // [esp+120h] [ebp-CCh]
  int v90; // [esp+124h] [ebp-C8h]
  _DWORD *v91; // [esp+128h] [ebp-C4h]
  RECTL prclDest; // [esp+134h] [ebp-B8h] BYREF
  struct _SURFOBJ v93; // [esp+144h] [ebp-A8h] BYREF
  int v94; // [esp+180h] [ebp-6Ch]
  char v95; // [esp+184h] [ebp-68h]
  int v96; // [esp+188h] [ebp-64h]
  REGION *v97; // [esp+194h] [ebp-58h]
  SURFOBJ *psoDest; // [esp+1A8h] [ebp-44h]
  RECTL *v99; // [esp+1ACh] [ebp-40h]
  int v100; // [esp+1D4h] [ebp-18h]
  int v101; // [esp+1DCh] [ebp-10h]
  int v102; // [esp+1E0h] [ebp-Ch]

  psoMask = a3;
  v11 = 0;
  v93.dhsurf = (DHSURF)a9->left;
  pco = a4;
  pxlo = a5;
  v93.hsurf = (HSURF)a9->top;
  pca = a6;
  psoSrc = a2;
  p_lDelta = &a2[-1].lDelta;
  v93.dhpdev = (DHPDEV)a9->right;
  pptlHTOrg = a7;
  p_sizlBitmap = a8;
  v93.hdev = (HDEV)a9->bottom;
  pptlMask = a10;
  hdev = a2->hdev;
  prclSrc = a9;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  v61 = &a2[-1].lDelta;
  if ( a2->iType != 1 || !hdev || ((unsigned int)&loc_20000 & (_DWORD)hdev[6]) == 0 )
    goto LABEL_8;
  if ( MulCopyDeviceToDIB((SURFMEM *)&v77, a2, &v93, v49, v50) )
  {
    if ( !v77 )
    {
      v11 = 1;
      goto LABEL_110;
    }
    prclSrc = (struct _RECTL *)&v93;
    psoSrc = SURFACE::pSurfobj(v77);
    p_lDelta = &psoSrc[-1].lDelta;
    v61 = &psoSrc[-1].lDelta;
LABEL_8:
    v74 = 0;
    v75 = 0;
    memset(&v93.sizlBitmap, 0, 16);
    v76 = 0;
    v58 = (int *)p_lDelta[22];
    if ( a8->left < a8->right && a8->top < a8->bottom || IsMetaRedirectionBitmap((int)a1) )
    {
      v29 = prclSrc;
    }
    else
    {
      v80[3] = 0;
      prclDest = *v14;
      left = prclDest.left;
      if ( prclDest.left < 0 )
        left = 0;
      right = prclDest.right;
      if ( prclDest.right > v61[8] )
        right = v61[8];
      top = prclDest.top;
      if ( prclDest.top < 0 )
        top = 0;
      bottom = prclDest.bottom;
      if ( prclDest.bottom > v61[9] )
        bottom = v61[9];
      if ( right <= left || bottom <= top )
      {
        v11 = 1;
        goto LABEL_109;
      }
      v80[2] = bottom - top;
      v80[1] = right - left;
      if ( v58 )
        v19 = *v58;
      else
        v19 = 0;
      v80[4] = v19;
      v80[0] = v61[15];
      v80[5] = v61[18] & 0x40000;
      SURFMEM::bCreateDIB((SURFMEM *)&v74, (struct _DEVBITMAPINFO *)v80, 0, 0, 0, 0, 0, 0, 1, 0, 0);
      if ( !v74 )
        goto LABEL_109;
      v20 = (DHSURF)((char *)v93.dhsurf - left);
      v21 = (DHPDEV)((char *)v93.dhpdev - left);
      v22 = (HSURF)((char *)v93.hsurf - top);
      v23 = (HDEV)((char *)v93.hdev - top);
      v93.dhsurf = v20;
      v24 = a8->left;
      v25 = a8->right;
      v93.dhpdev = v21;
      v93.hsurf = v22;
      v93.hdev = v23;
      if ( v24 < v25 )
      {
        v93.sizlBitmap.cx = v24;
        v24 = v25;
        prclDest.left = (LONG)v20;
        prclDest.right = (LONG)v21;
      }
      else
      {
        v93.sizlBitmap.cx = v25;
        prclDest.left = (LONG)v21;
        prclDest.right = (LONG)v20;
      }
      v93.cjBits = v24;
      v26 = (void *)a8->top;
      v27 = (void *)a8->bottom;
      if ( (int)v26 < (int)v27 )
      {
        v93.sizlBitmap.cy = a8->top;
        v93.pvBits = v27;
        prclDest.top = (LONG)v22;
        prclDest.bottom = (LONG)v23;
      }
      else
      {
        v93.sizlBitmap.cy = a8->bottom;
        v93.pvBits = v26;
        prclDest.top = (LONG)v23;
        prclDest.bottom = (LONG)v22;
      }
      v28 = SURFACE::pSurfobj(v74);
      v11 = 0;
      if ( !EngStretchBlt(v28, psoSrc, 0, 0, xloIdent, 0, 0, &prclDest, prclSrc, 0, 3u) )
        goto LABEL_109;
      v29 = (struct _RECTL *)&v93;
      p_sizlBitmap = (struct _RECTL *)&v93.sizlBitmap;
      psoSrc = SURFACE::pSurfobj(v74);
      v61 = &psoSrc[-1].lDelta;
    }
    v64 = 1;
    v30 = IsMetaDevBitmapForMirroring((int)a1);
    Surface = MSURF::bFindSurface((MSURF *)v87, v31, pco, p_sizlBitmap);
    v82 = 0;
    v83 = 0;
    v84 = 0;
    MULTISURF::vInit((MULTISURF *)v81, psoSrc, v29);
    if ( v30 )
    {
      v94 = 0;
      v95 = 0;
      v96 = 0;
      MULTISURF::vInit((MULTISURF *)&v93.pvScan0, a1, p_sizlBitmap);
      v32 = pxlo;
      v33 = EngStretchBlt(psoDest, v85, psoMask, pco, pxlo, pca, pptlHTOrg, v99, v86, pptlMask, iMode);
      v64 = v33;
      MULTISURF::~MULTISURF((MULTISURF *)&v93.pvScan0);
    }
    else
    {
      v32 = pxlo;
      v33 = 1;
    }
    if ( Surface )
    {
      while ( 1 )
      {
        pxlo = 0;
        v66 = v89;
        Source = MULTISURF::bLoadSource((MULTISURF *)v81, v88);
        v35 = v85;
        prclSrca = (RECTL *)v32;
        if ( !Source )
        {
          v36 = 1;
          goto LABEL_61;
        }
        v61 = &v85[-1].lDelta;
        v36 = 0;
        cy = (ULONG *)v85[1].sizlBitmap.cy;
        if ( *((_DWORD *)v88 + 4) )
          break;
LABEL_61:
        if ( !v36 )
        {
          v100 = 1;
          p_pvScan0 = (PVOID *)v90;
          psoDest = 0;
          v99 = 0;
          v101 = 0;
          v97 = 0;
          v102 = 0;
          if ( (*(_BYTE *)(v89 + 56) & 2) != 0 )
            v52 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(*((_DWORD *)v88 + 10) + 1980);
          else
            v52 = EngStretchBlt;
          v44 = v66;
          if ( v35->iType == 1 && v61[7] != *(_DWORD *)(v66 + 12) )
          {
            v52 = EngStretchBlt;
            v44 = v66;
          }
          if ( iMode == 4 && (*(_BYTE *)(*(_DWORD *)(v44 + 12) + 1120) & 0x10) == 0 )
            v52 = EngStretchBlt;
          v45 = v86;
          if ( v86->left >= 0 && v86->top >= 0 && v86->right <= v35->sizlBitmap.cx && v86->bottom <= v35->sizlBitmap.cy )
            v46 = v52;
          else
            v46 = EngStretchBlt;
          if ( v46 == EngStretchBlt && iMode == 4 && pco && pco->iDComplexity && (*v91 || v91[1]) )
          {
            v36 = 1;
            ECLIPOBJTMPIFNEEDED::vSetup(
              (ECLIPOBJTMPIFNEEDED *)&v93.pvScan0,
              1,
              *(struct REGION **)(v90 + 48),
              (struct ERECTL *)(v90 + 4),
              1);
            v47 = v97;
            if ( v97 )
            {
              v45 = v86;
              v35 = v85;
              v36 = 0;
              p_pvScan0 = &v93.pvScan0;
              goto LABEL_104;
            }
          }
          else
          {
LABEL_104:
            v64 &= OffStretchBlt(
                     v89,
                     p_pvScan0,
                     v35,
                     psoMask,
                     p_pvScan0,
                     prclSrca,
                     pca,
                     pptlHTOrg,
                     p_sizlBitmap,
                     v45,
                     pptlMask,
                     iMode);
            v47 = v97;
          }
          if ( v102 )
            REGION::vDeleteREGION(v47);
        }
        v33 = v36 == 0 ? v64 : 0;
        v64 = v33;
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
        if ( !MSURF::bNextSurface((MSURF *)v87) )
          goto LABEL_108;
      }
      v37 = *((_DWORD *)v88 + 9);
      v56 = ppalDefault;
      if ( (*(_DWORD *)(v37 + 1456) & 0x100) != 0 )
      {
        v38 = DrvRealizeHalftonePalette(v37, 0);
        v35 = v85;
        v56 = v38;
      }
      if ( !cy )
      {
        if ( !v32 )
          goto LABEL_64;
        pulXlate = (LONG)v32[1].pulXlate;
        if ( pulXlate )
        {
          cy = v32[1].pulXlate;
LABEL_48:
          v40 = v56;
LABEL_49:
          v41 = 0;
          if ( pulXlate && (*(_DWORD *)(pulXlate + 16) & 0x800) != 0 )
            v41 = v40 != ppalDefault ? 0x4000 : 0x2000;
          if ( v32 )
            prclSrcb = (RECTL *)v32[1].iUniq;
          else
            prclSrcb = 0;
          if ( v32 )
            v68 = *(_DWORD *)&v32[1].iSrcType;
          else
            v68 = 0;
          if ( v32 )
            flXlate = v32[1].flXlate;
          else
            flXlate = 0;
          if ( v32 )
            cEntries = v32[2].cEntries;
          else
            cEntries = 0;
          if ( v32 )
            v42 = *(_DWORD *)&v32[2].iSrcType;
          else
            v42 = 0;
          inited = EXLATEOBJ::bInitXlateObj(
                     (int *)&pxlo,
                     v42,
                     cEntries,
                     cy,
                     *(_DWORD **)(v66 + 72),
                     (int)ppalDefault,
                     (int)v56,
                     flXlate,
                     v68,
                     (int)prclSrcb,
                     v41);
          v35 = v85;
          if ( inited )
          {
            prclSrca = (RECTL *)pxlo;
          }
          else
          {
            prclSrca = (RECTL *)v32;
            v36 = 1;
          }
          goto LABEL_61;
        }
        if ( (v32->flXlate & 1) != 0 )
        {
LABEL_64:
          if ( v35 == psoSrc )
          {
            pulXlate = a1[1].sizlBitmap.cy;
            cy = (ULONG *)pulXlate;
LABEL_60:
            prclSrca = (RECTL *)v32;
            if ( v36 )
              goto LABEL_61;
            goto LABEL_48;
          }
        }
        else
        {
          if ( v32[2].flXlate )
          {
            v40 = (struct PALETTE *)v32[2].flXlate;
            v56 = v40;
            if ( v61[15] == a1->iBitmapFormat )
            {
              pulXlate = a1[1].sizlBitmap.cy;
              cy = (ULONG *)pulXlate;
            }
            else
            {
              pulXlate = 0;
            }
            goto LABEL_49;
          }
          v36 = 1;
        }
      }
      pulXlate = (LONG)cy;
      goto LABEL_60;
    }
LABEL_108:
    v11 = v33;
    MULTISURF::~MULTISURF((MULTISURF *)v81);
LABEL_109:
    SURFMEM::~SURFMEM((SURFMEM *)&v74);
  }
LABEL_110:
  SURFMEM::~SURFMEM((SURFMEM *)&v77);
  return v11;
}
