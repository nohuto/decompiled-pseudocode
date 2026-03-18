/*
 * XREFs of ?MulTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z @ 0x204EF4
 * Callers:
 *     <none>
 * Callees:
 *     ?pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ @ 0x55814 (-pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z @ 0x5D130 (-bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QAEXXZ @ 0x794B6 (-vAltUnlock@EXLATEOBJ@@QAEXXZ.c)
 *     _OffTransparentBlt@44 @ 0xCAB1A (_OffTransparentBlt@44.c)
 *     _EngTransparentBlt@32 @ 0xCAC46 (_EngTransparentBlt@32.c)
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

int __stdcall MulTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        ULONG iTransColor,
        ULONG ulReserved)
{
  int v8; // ebx
  HDEV hdev; // eax
  struct _RECTL *v10; // edi
  BOOL v11; // esi
  struct _SURFOBJ *v12; // ecx
  XLATEOBJ *v13; // esi
  int Source; // eax
  BOOL v15; // edi
  SURFOBJ *v16; // edx
  int v17; // ecx
  bool v18; // zf
  struct PALETTE *v19; // eax
  ULONG *pulXlate; // edx
  int v21; // ecx
  int inited; // eax
  int v23; // eax
  int NearestIndexFromColorref; // eax
  int (__stdcall *v25)(int, int, struct _CLIPOBJ *, int, int *, int *, int, int); // ecx
  int v26; // eax
  struct SURFMEM *v28; // [esp+0h] [ebp-150h]
  struct _RECTL *v29; // [esp+4h] [ebp-14Ch]
  CLIPOBJ *v30; // [esp+Ch] [ebp-144h]
  int iUniq; // [esp+Ch] [ebp-144h]
  LONG cy; // [esp+10h] [ebp-140h]
  int v33; // [esp+10h] [ebp-140h]
  struct _SURFOBJ *v34; // [esp+14h] [ebp-13Ch]
  CLIPOBJ *pco; // [esp+18h] [ebp-138h] BYREF
  int v36; // [esp+1Ch] [ebp-134h]
  int v37; // [esp+20h] [ebp-130h]
  struct _SURFOBJ *v38; // [esp+24h] [ebp-12Ch]
  struct PALETTE *flXlate; // [esp+28h] [ebp-128h]
  int Surface; // [esp+2Ch] [ebp-124h]
  XLATEOBJ *pxlo; // [esp+30h] [ebp-120h]
  LONG *p_lDelta; // [esp+34h] [ebp-11Ch]
  struct _RECTL *v43; // [esp+38h] [ebp-118h]
  FLONG v44; // [esp+3Ch] [ebp-114h]
  ULONG cEntries; // [esp+40h] [ebp-110h]
  SURFACE *v46; // [esp+44h] [ebp-10Ch] BYREF
  char v47; // [esp+48h] [ebp-108h]
  int v48; // [esp+4Ch] [ebp-104h]
  _BYTE v49[28]; // [esp+50h] [ebp-100h] BYREF
  int v50; // [esp+6Ch] [ebp-E4h]
  char v51; // [esp+70h] [ebp-E0h]
  int v52; // [esp+74h] [ebp-DCh]
  SURFOBJ *psoSrc; // [esp+94h] [ebp-BCh]
  RECTL *prclSrc; // [esp+98h] [ebp-B8h]
  _BYTE v55[48]; // [esp+A0h] [ebp-B0h] BYREF
  struct _DISPSURF *v56; // [esp+D0h] [ebp-80h]
  int v57; // [esp+D4h] [ebp-7Ch]
  struct _CLIPOBJ *v58; // [esp+D8h] [ebp-78h]
  LONG *v59; // [esp+DCh] [ebp-74h]
  _BYTE v60[28]; // [esp+E8h] [ebp-68h] BYREF
  int v61; // [esp+104h] [ebp-4Ch]
  char v62; // [esp+108h] [ebp-48h]
  int v63; // [esp+10Ch] [ebp-44h]
  SURFOBJ *psoDst; // [esp+12Ch] [ebp-24h]
  RECTL *prclDst; // [esp+130h] [ebp-20h]
  struct _RECTL v66; // [esp+13Ch] [ebp-14h] BYREF

  v38 = a1;
  pco = a3;
  v8 = 0;
  v66.left = a6->left;
  pxlo = a4;
  v43 = a5;
  hdev = a2->hdev;
  v66.top = a6->top;
  v34 = a2;
  v46 = 0;
  v47 = 0;
  v66.right = a6->right;
  v48 = 0;
  v66.bottom = a6->bottom;
  if ( a2->iType != 1 || !hdev || ((unsigned int)&loc_20000 & (_DWORD)hdev[6]) == 0 )
  {
    v10 = a6;
LABEL_9:
    v36 = 1;
    v11 = IsMetaDevBitmapForMirroring((int)v38);
    Surface = MSURF::bFindSurface((MSURF *)v55, v12, pco, v43);
    v50 = 0;
    v51 = 0;
    v52 = 0;
    MULTISURF::vInit((MULTISURF *)v49, v34, v10);
    if ( v11 )
    {
      v61 = 0;
      v62 = 0;
      v63 = 0;
      MULTISURF::vInit((MULTISURF *)v60, v38, v43);
      v13 = pxlo;
      v36 = EngTransparentBlt(psoDst, psoSrc, pco, pxlo, prclDst, prclSrc, iTransColor, ulReserved);
      MULTISURF::~MULTISURF((MULTISURF *)v60);
    }
    else
    {
      v13 = pxlo;
    }
    if ( !Surface )
    {
LABEL_63:
      v8 = v36;
      MULTISURF::~MULTISURF((MULTISURF *)v49);
      goto LABEL_64;
    }
    while ( 1 )
    {
      pco = 0;
      Source = MULTISURF::bLoadSource((MULTISURF *)v49, v56);
      Surface = v57;
      v15 = Source == 0;
      if ( !Source )
        goto LABEL_61;
      v16 = psoSrc;
      v30 = (CLIPOBJ *)v13;
      p_lDelta = &psoSrc[-1].lDelta;
      if ( *((_DWORD *)v56 + 4) )
        break;
LABEL_51:
      v37 = iTransColor;
      if ( v16 != v34 )
      {
        v23 = ulIndexToRGB(v34[1].sizlBitmap.cy, ppalDefault, iTransColor);
        NearestIndexFromColorref = ulGetNearestIndexFromColorref(p_lDelta[22], ppalDefault, v23, 1);
        v16 = psoSrc;
        v37 = NearestIndexFromColorref;
      }
      if ( !v15 )
      {
        if ( (*(_DWORD *)(v57 + 56) & 0x8000) != 0 )
          v25 = *(int (__stdcall **)(int, int, struct _CLIPOBJ *, int, int *, int *, int, int))(*((_DWORD *)v56 + 10)
                                                                                              + 2196);
        else
          v25 = (int (__stdcall *)(int, int, struct _CLIPOBJ *, int, int *, int *, int, int))EngTransparentBlt;
        if ( v16->iType == 1 && p_lDelta[7] != *(_DWORD *)(Surface + 12) )
          v25 = (int (__stdcall *)(int, int, struct _CLIPOBJ *, int, int *, int *, int, int))EngTransparentBlt;
        v26 = OffTransparentBlt(
                v25,
                v59,
                v57,
                &gptlZero.x,
                (int)v16,
                v58,
                (int)v30,
                &v43->left,
                &prclSrc->left,
                v37,
                ulReserved);
        v36 &= v26;
        goto LABEL_62;
      }
LABEL_61:
      v36 = 0;
LABEL_62:
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pco);
      if ( !MSURF::bNextSurface((MSURF *)v55) )
        goto LABEL_63;
    }
    v17 = *((_DWORD *)v56 + 9);
    cy = psoSrc[1].sizlBitmap.cy;
    v18 = (*(_DWORD *)(v17 + 1456) & 0x100) == 0;
    flXlate = ppalDefault;
    if ( !v18 )
    {
      v19 = DrvRealizeHalftonePalette(v17, 0);
      v16 = psoSrc;
      flXlate = v19;
    }
    if ( !cy )
    {
      if ( !v13 )
        goto LABEL_26;
      if ( v13[1].pulXlate )
      {
        pulXlate = v13[1].pulXlate;
        goto LABEL_30;
      }
      if ( (v13->flXlate & 1) != 0 )
      {
LABEL_26:
        if ( v16 == v34 )
          cy = v38[1].sizlBitmap.cy;
      }
      else
      {
        if ( v13[2].flXlate )
        {
          flXlate = (struct PALETTE *)v13[2].flXlate;
          if ( p_lDelta[15] == v38->iBitmapFormat )
          {
            pulXlate = (ULONG *)v38[1].sizlBitmap.cy;
            goto LABEL_30;
          }
LABEL_29:
          pulXlate = (ULONG *)cy;
LABEL_30:
          v21 = 0;
          if ( pulXlate && (pulXlate[4] & 0x800) != 0 )
          {
            v13 = pxlo;
            v21 = flXlate != ppalDefault ? 0x4000 : 0x2000;
          }
          if ( v13 )
            iUniq = v13[1].iUniq;
          else
            iUniq = 0;
          if ( v13 )
            v33 = *(_DWORD *)&v13[1].iSrcType;
          else
            v33 = 0;
          if ( v13 )
            v44 = v13[1].flXlate;
          else
            v44 = 0;
          if ( v13 )
            cEntries = v13[2].cEntries;
          else
            cEntries = 0;
          if ( v13 )
            v37 = *(_DWORD *)&v13[2].iSrcType;
          else
            v37 = 0;
          inited = EXLATEOBJ::bInitXlateObj(
                     (int *)&pco,
                     v37,
                     cEntries,
                     pulXlate,
                     *(_DWORD **)(Surface + 72),
                     (int)ppalDefault,
                     (int)flXlate,
                     v44,
                     v33,
                     iUniq,
                     v21);
          v16 = psoSrc;
          if ( inited )
          {
            v30 = pco;
          }
          else
          {
            v15 = 1;
            v30 = (CLIPOBJ *)v13;
          }
          goto LABEL_51;
        }
        v15 = 1;
      }
    }
    v30 = (CLIPOBJ *)v13;
    if ( v15 )
      goto LABEL_51;
    goto LABEL_29;
  }
  if ( MulCopyDeviceToDIB((SURFMEM *)&v46, a2, (struct _SURFOBJ *)&v66, v28, v29) )
  {
    if ( !v46 )
    {
      v8 = 1;
      goto LABEL_64;
    }
    v10 = &v66;
    v34 = SURFACE::pSurfobj(v46);
    goto LABEL_9;
  }
LABEL_64:
  SURFMEM::~SURFMEM((SURFMEM *)&v46);
  return v8;
}
