/*
 * XREFs of ?MulBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x201F9D
 * Callers:
 *     ?MulCopyBits@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@@Z @ 0x202500 (-MulCopyBits@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@@Z.c)
 *     ?MulCopyDeviceToDIB@@YGHPAU_SURFOBJ@@PAVSURFMEM@@PAU_RECTL@@@Z @ 0x202783 (-MulCopyDeviceToDIB@@YGHPAU_SURFOBJ@@PAVSURFMEM@@PAU_RECTL@@@Z.c)
 * Callees:
 *     _EngBitBlt@44 @ 0x53EF2 (_EngBitBlt@44.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z @ 0x5D130 (-bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QAEXXZ @ 0x794B6 (-vAltUnlock@EXLATEOBJ@@QAEXXZ.c)
 *     _OffBitBlt@56 @ 0xE9E3E (_OffBitBlt@56.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?DrvRealizeHalftonePalette@@YGPAVPALETTE@@PAUHDEV__@@H@Z @ 0x1D12FD (-DrvRealizeHalftonePalette@@YGPAVPALETTE@@PAUHDEV__@@H@Z.c)
 *     ??1MULTISURF@@QAE@XZ @ 0x1DA696 (--1MULTISURF@@QAE@XZ.c)
 *     ??0MULTIBRUSH@@QAE@PAU_BRUSHOBJ@@JPAU_VDEV@@PAU_SURFOBJ@@H@Z @ 0x20150E (--0MULTIBRUSH@@QAE@PAU_BRUSHOBJ@@JPAU_VDEV@@PAU_SURFOBJ@@H@Z.c)
 *     ??0MULTISURF@@QAE@PAU_SURFOBJ@@PAU_POINTL@@JJ@Z @ 0x2016E0 (--0MULTISURF@@QAE@PAU_SURFOBJ@@PAU_POINTL@@JJ@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YGHPAU_SURFOBJ@@@Z @ 0x201804 (-IsMetaDevBitmapForMirroring@@YGHPAU_SURFOBJ@@@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QAEXPAU_DISPSURF@@PAVSURFACE@@@Z @ 0x20182C (-LoadElement@MULTIBRUSH@@QAEXPAU_DISPSURF@@PAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QAEXJ@Z @ 0x205465 (-StoreElement@MULTIBRUSH@@QAEXJ@Z.c)
 *     ?bBitBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x2054D5 (-bBitBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRU.c)
 *     ?bBitBltScreenToScreen@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x20595F (-bBitBltScreenToScreen@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_.c)
 *     ?bFindSurface@MSURF@@QAEHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z @ 0x205F5F (-bFindSurface@MSURF@@QAEHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QAEHPAU_DISPSURF@@@Z @ 0x2061FA (-bLoadSource@MULTISURF@@QAEHPAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QAEHXZ @ 0x2062FC (-bNextSurface@MSURF@@QAEHXZ.c)
 *     ?vInit@MULTISURF@@AAEXPAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x206708 (-vInit@MULTISURF@@AAEXPAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?vRestore@MSURF@@QAEXXZ @ 0x2067A0 (-vRestore@MSURF@@QAEXXZ.c)
 *     _OffCopyBits@36 @ 0x22EF0F (_OffCopyBits@36.c)
 */

int __stdcall MulBitBlt(
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
        ROP4 rop4)
{
  XLATEOBJ *v11; // ebx
  CLIPOBJ *v12; // edx
  struct _SURFOBJ *v13; // eax
  bool v14; // cl
  DHPDEV dhpdev; // esi
  __int16 v17; // di
  char v18; // dl
  int v19; // ecx
  int v20; // edi
  int v21; // esi
  int Source; // eax
  int v23; // edx
  BOOL v24; // esi
  SURFOBJ *v25; // edi
  struct _DISPSURF *v26; // ecx
  int v27; // ecx
  bool v28; // zf
  FLONG flXlate; // eax
  struct _RECTL *pulXlate; // edi
  int v31; // ecx
  int v32; // eax
  int cEntries; // esi
  int v34; // esi
  int v35; // eax
  BOOL (__stdcall *v36)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // ecx
  int v37; // eax
  struct _POINTL *v38; // [esp+0h] [ebp-168h]
  unsigned int v39; // [esp+4h] [ebp-164h]
  char v40; // [esp+13h] [ebp-155h]
  struct _RECTL *cy; // [esp+14h] [ebp-154h]
  struct _RECTL *v42; // [esp+14h] [ebp-154h]
  struct _POINTL *v43; // [esp+18h] [ebp-150h]
  int iType; // [esp+1Ch] [ebp-14Ch] BYREF
  CLIPOBJ *pco; // [esp+20h] [ebp-148h]
  struct _SURFOBJ *v46; // [esp+24h] [ebp-144h]
  int v47; // [esp+28h] [ebp-140h]
  XLATEOBJ *p_lDelta; // [esp+2Ch] [ebp-13Ch]
  struct _SURFOBJ *v49; // [esp+30h] [ebp-138h]
  POINTL *pptlBrush; // [esp+34h] [ebp-134h]
  BRUSHOBJ *pbo; // [esp+38h] [ebp-130h]
  POINTL *pptlMask; // [esp+3Ch] [ebp-12Ch]
  SURFOBJ *psoMask; // [esp+40h] [ebp-128h]
  int v54; // [esp+44h] [ebp-124h]
  XLATEOBJ *pxlo; // [esp+48h] [ebp-120h]
  _DWORD v56[7]; // [esp+4Ch] [ebp-11Ch] BYREF
  struct _CLIPOBJ v57; // [esp+68h] [ebp-100h] BYREF
  struct _DISPSURF *v58; // [esp+A8h] [ebp-C0h]
  int v59; // [esp+ACh] [ebp-BCh]
  struct _CLIPOBJ *v60; // [esp+B0h] [ebp-B8h]
  LONG *v61; // [esp+B4h] [ebp-B4h]
  _BYTE v62[68]; // [esp+C0h] [ebp-A8h] BYREF
  SURFOBJ *psoSrc; // [esp+104h] [ebp-64h]
  POINTL *pptlSrc; // [esp+108h] [ebp-60h]
  _BYTE v65[28]; // [esp+110h] [ebp-58h] BYREF
  int v66; // [esp+12Ch] [ebp-3Ch]
  char v67; // [esp+130h] [ebp-38h]
  int v68; // [esp+134h] [ebp-34h]
  SURFOBJ *psoTrg; // [esp+154h] [ebp-14h]
  RECTL *prclTrg; // [esp+158h] [ebp-10h]

  pbo = a9;
  v49 = a2;
  v11 = a5;
  psoMask = a3;
  pptlMask = a8;
  v46 = a1;
  pco = a4;
  pxlo = a5;
  pptlBrush = a10;
  p_lDelta = (XLATEOBJ *)IsMetaDevBitmapForMirroring((int)a1);
  v13 = 0;
  v14 = 0;
  if ( a2 )
  {
    v12 = pco;
    if ( v49->iType == 1 )
      v14 = 1;
  }
  iType = a1->iType;
  v57.iUniq = a6->left;
  v57.rclBounds.left = a6->top;
  v57.rclBounds.top = a6->right;
  v57.rclBounds.right = a6->bottom;
  if ( !v14 )
  {
    v47 = 1;
    dhpdev = v46->dhpdev;
    v17 = iType;
    if ( (_WORD)iType )
    {
      if ( MSURF::bFindSurface((MSURF *)&v57.rclBounds.bottom, v46, v12, a6) )
      {
        v18 = 1;
        iType = *((_DWORD *)dhpdev + 2);
        v13 = (struct _SURFOBJ *)*((_DWORD *)dhpdev + 6);
        v19 = ((unsigned __int16)rop4 ^ (unsigned __int16)(rop4 >> 4)) & 0xF0F;
        v11 = pxlo;
        v40 = 1;
        goto LABEL_14;
      }
      v13 = 0;
    }
    v18 = 0;
    v40 = 0;
    v19 = 0;
    v54 = 0;
    dhpdev = 0;
    iType = 0;
LABEL_14:
    MULTIBRUSH::MULTIBRUSH((MULTIBRUSH *)v56, v18 != 0 ? pbo : 0, iType, (struct _VDEV *)dhpdev, v13, v19);
    MULTISURF::MULTISURF(
      (MULTISURF *)v62,
      v49,
      a7,
      v57.rclBounds.top - v57.iUniq,
      v57.rclBounds.right - v57.rclBounds.left);
    if ( !p_lDelta && v17 )
    {
      v20 = v47;
    }
    else
    {
      v66 = 0;
      v67 = 0;
      v68 = 0;
      MULTISURF::vInit((MULTISURF *)v65, v46, a6);
      v20 = EngBitBlt(psoTrg, psoSrc, psoMask, pco, v11, prclTrg, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
      v47 = v20;
      MULTISURF::~MULTISURF((MULTISURF *)v65);
    }
    if ( !v40 )
    {
LABEL_43:
      v21 = v20;
      goto LABEL_44;
    }
    if ( !v56[0] )
    {
      MSURF::vRestore((MSURF *)&v57.rclBounds.bottom);
      v21 = 0;
LABEL_44:
      MULTISURF::~MULTISURF((MULTISURF *)v62);
      return v21;
    }
    while ( 1 )
    {
      Source = MULTISURF::bLoadSource((MULTISURF *)v62, v58);
      v23 = 0;
      iType = 0;
      v24 = Source == 0;
      if ( !Source )
        goto LABEL_41;
      v25 = psoSrc;
      v26 = v58;
      p_lDelta = v11;
      if ( !psoSrc )
      {
        v34 = (int)p_lDelta;
        goto LABEL_69;
      }
      pco = (CLIPOBJ *)*((_DWORD *)v58 + 4);
      if ( !pco )
      {
        v34 = (int)v11;
LABEL_69:
        if ( rop4 == 52428 )
        {
          v35 = OffCopyBits(v59, (int)&gptlZero, (int)v25, v60, v34, (int)&v57, (int)pptlSrc);
          v20 = v35 & v47;
          v47 &= v35;
        }
        else
        {
          MULTIBRUSH::LoadElement((MULTIBRUSH *)v56, v26, (struct SURFACE *)(v59 - 16));
          if ( (*(_BYTE *)(v59 + 56) & 1) != 0 )
            v36 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_DWORD *)v58 + 10) + 1972);
          else
            v36 = EngBitBlt;
          v37 = OffBitBlt(
                  (int (__stdcall *)(int, int, int, struct _CLIPOBJ *, int, _DWORD *, int *, int, int, int *, int))v36,
                  v61,
                  v59,
                  &gptlZero,
                  (int)psoSrc,
                  (int)psoMask,
                  v60,
                  v34,
                  &v57,
                  &pptlSrc->x,
                  (int)pptlMask,
                  (int)pbo,
                  &pptlBrush->x,
                  rop4);
          v20 = v37 & v47;
          v47 &= v37;
          MULTIBRUSH::StoreElement((MULTIBRUSH *)v56, *((_DWORD *)v58 + 2));
        }
        goto LABEL_42;
      }
      v27 = *((_DWORD *)v58 + 9);
      p_lDelta = (XLATEOBJ *)&psoSrc[-1].lDelta;
      v28 = (*(_DWORD *)(v27 + 1456) & 0x100) == 0;
      cy = (struct _RECTL *)psoSrc[1].sizlBitmap.cy;
      v54 = v59;
      v11 = pxlo;
      v43 = (struct _POINTL *)ppalDefault;
      if ( !v28 )
        break;
      if ( (int)pco > 0 )
      {
        if ( pxlo )
        {
          flXlate = pxlo[2].flXlate;
          if ( flXlate )
            goto LABEL_29;
        }
      }
LABEL_30:
      if ( cy )
        goto LABEL_39;
      if ( !v11 )
      {
LABEL_45:
        if ( v25 == v49 )
          pulXlate = (struct _RECTL *)v46[1].sizlBitmap.cy;
        else
LABEL_39:
          pulXlate = cy;
        if ( v24 )
          goto LABEL_41;
        goto LABEL_48;
      }
      if ( v11[1].pulXlate )
      {
        pulXlate = (struct _RECTL *)v11[1].pulXlate;
      }
      else
      {
        if ( (v11->flXlate & 1) != 0 )
          goto LABEL_45;
        if ( !v11[2].flXlate )
        {
          v24 = 1;
          goto LABEL_39;
        }
        v43 = (struct _POINTL *)v11[2].flXlate;
        if ( p_lDelta[3].iUniq == v46->iBitmapFormat )
          pulXlate = (struct _RECTL *)v46[1].sizlBitmap.cy;
        else
          pulXlate = 0;
      }
LABEL_48:
      v31 = 0;
      if ( pulXlate && (pulXlate[1].left & 0x800) != 0 )
        v31 = v43 != (struct _POINTL *)ppalDefault ? 0x4000 : 0x2000;
      if ( v11 )
        pco = (CLIPOBJ *)v11[1].iUniq;
      else
        pco = 0;
      if ( v11 )
        v42 = *(struct _RECTL **)&v11[1].iSrcType;
      else
        v42 = 0;
      if ( v11 )
        v32 = v11[1].flXlate;
      else
        v32 = 0;
      if ( v11 )
        cEntries = v11[2].cEntries;
      else
        cEntries = 0;
      if ( v11 )
        v23 = *(_DWORD *)&v11[2].iSrcType;
      if ( EXLATEOBJ::bInitXlateObj(
             &iType,
             v23,
             cEntries,
             pulXlate,
             *(_DWORD **)(v54 + 72),
             (int)ppalDefault,
             (int)v43,
             v32,
             (int)v42,
             (int)pco,
             v31) )
      {
        v34 = iType;
        v26 = v58;
        v25 = psoSrc;
        goto LABEL_69;
      }
LABEL_41:
      v20 = 0;
      v47 = 0;
LABEL_42:
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&iType);
      if ( !MSURF::bNextSurface((MSURF *)&v57.rclBounds.bottom) )
        goto LABEL_43;
    }
    flXlate = (FLONG)DrvRealizeHalftonePalette(v27, 0);
    v25 = psoSrc;
    v23 = 0;
LABEL_29:
    v43 = (struct _POINTL *)flXlate;
    goto LABEL_30;
  }
  if ( (_WORD)iType == 1 )
    return bBitBltScreenToScreen(
             (struct _SURFOBJ *)v12,
             (struct _SURFOBJ *)a5,
             &v57,
             (struct _XLATEOBJ *)a7,
             (struct _RECTL *)pptlMask,
             (struct _POINTL *)pbo,
             pptlBrush,
             (struct _BRUSHOBJ *)rop4,
             v38,
             v39);
  else
    return bBitBltFromScreen(
             psoMask,
             (struct _SURFOBJ *)v12,
             (struct _SURFOBJ *)a5,
             &v57,
             (struct _XLATEOBJ *)a7,
             (struct _RECTL *)pptlMask,
             (struct _POINTL *)pbo,
             pptlBrush,
             (struct _BRUSHOBJ *)rop4,
             v38,
             v39);
}
