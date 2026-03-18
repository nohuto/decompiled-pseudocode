/*
 * XREFs of _EngStretchBltROP@52 @ 0x7AF4C
 * Callers:
 *     ?SpStretchBltROP@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54KPAU_BRUSHOBJ@@K@Z @ 0x1DC279 (-SpStretchBltROP@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL.c)
 *     ?RedirStretchBltROP@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54KPAU_BRUSHOBJ@@K@Z @ 0x1FBCEC (-RedirStretchBltROP@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POI.c)
 *     _NtGdiEngStretchBltROP@52 @ 0x219109 (_NtGdiEngStretchBltROP@52.c)
 * Callees:
 *     _EngStretchBlt@44 @ 0x4BF90 (_EngStretchBlt@44.c)
 *     ?vOrder@ERECTL@@QAEXXZ @ 0x4E19C (-vOrder@ERECTL@@QAEXXZ.c)
 *     ?pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ @ 0x55814 (-pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

BOOL __stdcall EngStretchBltROP(
        SURFOBJ *psoDest,
        SURFOBJ *psoSrc,
        SURFOBJ *psoMask,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlHTOrg,
        RECTL *prclDest,
        RECTL *prclSrc,
        POINTL *pptlMask,
        ULONG iMode,
        BRUSHOBJ *pbo,
        DWORD rop4)
{
  DWORD v13; // edx
  RECTL *v14; // esi
  LONG right; // eax
  BOOL v16; // ebx
  LONG left; // edi
  LONG bottom; // eax
  LONG top; // edi
  int v20; // eax
  int v21; // edi
  int v22; // eax
  int v23; // eax
  RECTL *v24; // edi
  LONG y; // esi
  LONG v26; // eax
  LONG v27; // eax
  SURFOBJ *v28; // eax
  LONG v29; // edx
  int v30; // eax
  SURFOBJ *v31; // eax
  SURFOBJ *v32; // edx
  SURFOBJ *v33; // edi
  int v34; // eax
  _DWORD *v36; // eax
  int v37; // ecx
  int v38; // esi
  LONG v39; // ecx
  LONG v40; // edx
  bool v41; // cc
  int v42; // ecx
  SURFOBJ *v43; // ebx
  int v44; // eax
  char v45; // [esp+28h] [ebp-B0h]
  BOOL (__stdcall *v46)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // [esp+28h] [ebp-B0h]
  LONG v47; // [esp+34h] [ebp-A4h]
  LONG v48; // [esp+38h] [ebp-A0h]
  int v49; // [esp+3Ch] [ebp-9Ch]
  int v50; // [esp+40h] [ebp-98h]
  ULONG v51; // [esp+44h] [ebp-94h]
  LONG v52; // [esp+54h] [ebp-84h]
  LONG v53; // [esp+58h] [ebp-80h]
  LONG v54; // [esp+5Ch] [ebp-7Ch]
  LONG *v55; // [esp+64h] [ebp-74h]
  POINTL v56; // [esp+7Ch] [ebp-5Ch] BYREF
  SURFACE *v57; // [esp+84h] [ebp-54h] BYREF
  char v58; // [esp+88h] [ebp-50h]
  int v59; // [esp+8Ch] [ebp-4Ch]
  SURFACE *v60; // [esp+90h] [ebp-48h] BYREF
  char v61; // [esp+94h] [ebp-44h]
  int v62; // [esp+98h] [ebp-40h]
  _DWORD v63[6]; // [esp+9Ch] [ebp-3Ch] BYREF
  RECTL v64; // [esp+B4h] [ebp-24h] BYREF
  RECTL v65; // [esp+C4h] [ebp-14h] BYREF

  v13 = rop4;
  v14 = prclDest;
  if ( rop4 != 52428 && rop4 != 43724 )
  {
    v51 = iMode;
    if ( iMode == 4 )
      v51 = 3;
    right = prclDest->right;
    v16 = 0;
    left = prclDest->left;
    v49 = 0;
    v50 = 0;
    v53 = prclDest->left;
    v52 = right;
    if ( prclDest->left > right )
    {
      prclDest->left = right;
      v52 = left;
      prclDest->right = left;
      v49 = 1;
      v53 = right;
    }
    bottom = prclDest->bottom;
    top = prclDest->top;
    v47 = top;
    v54 = bottom;
    if ( top > bottom )
    {
      prclDest->top = bottom;
      v54 = top;
      prclDest->bottom = top;
      v50 = 1;
      v47 = bottom;
    }
    v60 = 0;
    v61 = 0;
    memset(v63, 0, sizeof(v63));
    v62 = 0;
    v57 = 0;
    v20 = (unsigned __int8)gajRop3[BYTE1(rop4)];
    v58 = 0;
    v21 = v20 | (unsigned __int8)gajRop3[(unsigned __int8)rop4];
    v59 = 0;
    v45 = v21;
    v22 = v21;
    if ( (unsigned __int8)rop4 != BYTE1(rop4) )
    {
      v22 = v21 | 0x10000;
      v45 = v21;
    }
    v56.x = 0;
    v56.y = 0;
    if ( (v22 & 0x10000) != 0 )
    {
      v63[0] = 1;
      v63[1] = v52 - v53;
      v63[2] = v54 - v47;
      v63[4] = 0;
      v64.left = 0;
      v64.top = 0;
      v23 = (int)*(psoMask != 0 ? &psoMask[1].hsurf : (HSURF *)72) & 0x40000;
      v64.right = v52 - v53;
      v63[5] = v23;
      v64.bottom = v54 - v47;
      if ( v49 )
      {
        v64.left = v52 - v53;
        v64.right = 0;
      }
      if ( v50 )
      {
        v64.top = v54 - v47;
        v64.bottom = 0;
      }
      SURFMEM::bCreateDIB((SURFMEM *)&v57, (struct _DEVBITMAPINFO *)v63, 0, 0, 0, 0, 0, 0, 1, 0, 0);
      if ( !v57 )
        goto LABEL_31;
      v24 = prclSrc;
      y = pptlMask->y;
      v26 = pptlMask->x + prclSrc->right - prclSrc->left;
      v65.left = pptlMask->x;
      v65.right = v26;
      v27 = y + prclSrc->bottom - prclSrc->top;
      v65.top = y;
      v65.bottom = v27;
      v28 = SURFACE::pSurfobj(v57);
      if ( !EngStretchBlt(v28, psoMask, 0, 0, 0, 0, &v56, &v64, &v65, 0, v51) )
        goto LABEL_31;
      v14 = prclDest;
      LOBYTE(v22) = v45;
    }
    else
    {
      v24 = prclSrc;
    }
    if ( (v22 & 0xD4) == 0 )
      goto LABEL_27;
    v29 = v14->right - v14->left;
    v63[1] = v29;
    v63[0] = *(psoSrc != 0 ? &psoSrc->iBitmapFormat : (ULONG *)60);
    v48 = v14->bottom - v14->top;
    v63[2] = v48;
    v30 = (int)*(psoSrc != 0 ? &psoSrc[1].hsurf : (HSURF *)72) & 0x40000;
    v63[4] = 0;
    v63[5] = v30;
    v64.left = 0;
    v64.top = 0;
    v64.right = v29;
    v64.bottom = v48;
    if ( v49 )
    {
      v64.left = v29;
      v64.right = 0;
    }
    if ( v50 )
    {
      v64.top = v48;
      v64.bottom = 0;
    }
    SURFMEM::bCreateDIB((SURFMEM *)&v60, (struct _DEVBITMAPINFO *)v63, 0, 0, 0, 0, 0, 0, 1, 0, 0);
    if ( v60 )
    {
      v31 = SURFACE::pSurfobj(v60);
      if ( EngStretchBlt(v31, psoSrc, 0, 0, 0, 0, &v56, &v64, v24, 0, v51) )
      {
LABEL_27:
        SURFACE::pSurfobj(v57);
        v33 = SURFACE::pSurfobj(v60);
        if ( (*(psoDest != 0 ? (_BYTE *)&psoDest[1].hsurf : (_BYTE *)72) & 1) != 0 )
          v34 = (*((int (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, DWORD))*(psoDest != 0 ? &psoDest->hdev : (HDEV *)28)
                 + 493))(
                  psoDest,
                  v33,
                  v32,
                  pco,
                  pxlo,
                  v14,
                  &v56,
                  &v56,
                  pbo,
                  pptlHTOrg,
                  rop4);
        else
          v34 = EngBitBlt(psoDest, v33, v32, pco, pxlo, v14, &v56, &v56, pbo, pptlHTOrg, rop4);
        v16 = v34;
      }
    }
LABEL_31:
    SURFMEM::~SURFMEM((SURFMEM *)&v57);
    SURFMEM::~SURFMEM((SURFMEM *)&v60);
    return v16;
  }
  v36 = *(psoSrc != 0 ? &psoSrc->hdev : (HDEV *)28);
  v37 = (int)*(psoDest != 0 ? &psoDest->hdev : (HDEV *)28);
  v55 = psoDest != 0 ? &psoDest[-1].lDelta : 0;
  ++v55[14];
  v38 = v55[18] & 2;
  if ( v38 )
    v46 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v37 + 1980);
  else
    v46 = EngStretchBlt;
  if ( !v38 || ((unsigned int)&loc_20000 & *(_DWORD *)(v37 + 24)) != 0 )
  {
    v43 = psoSrc;
    return v46(psoDest, v43, v13 != 52428 ? psoMask : 0, pco, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode);
  }
  if ( iMode == 4 && (*(_BYTE *)(v37 + 1120) & 0x10) == 0 )
    v46 = EngStretchBlt;
  if ( *(psoSrc != 0 ? &psoSrc->iType : (USHORT *)64) == 1 && v36 && ((unsigned int)&loc_20000 & v36[6]) != 0 )
  {
    v39 = v36[459];
    if ( prclSrc->left >= v39 )
    {
      v40 = v36[460];
      if ( prclSrc->top >= v40 && prclSrc->right <= v39 + (psoSrc != 0 ? &psoSrc->sizlBitmap : (SIZEL *)32)->cx )
      {
        v41 = prclSrc->bottom <= v40 + *(psoSrc != 0 ? &psoSrc->sizlBitmap.cy : (LONG *)36);
        goto LABEL_51;
      }
    }
  }
  else if ( prclSrc->left >= 0
         && prclSrc->top >= 0
         && prclSrc->right <= (psoSrc != 0 ? &psoSrc->sizlBitmap : (SIZEL *)32)->cx )
  {
    v41 = prclSrc->bottom <= *(psoSrc != 0 ? &psoSrc->sizlBitmap.cy : (LONG *)36);
LABEL_51:
    if ( v41 )
      goto LABEL_53;
  }
  v46 = EngStretchBlt;
LABEL_53:
  v64 = *prclDest;
  ERECTL::vOrder((ERECTL *)&v64);
  v43 = psoSrc;
  if ( psoSrc == psoDest )
  {
    v44 = bIntersect(prclSrc, v42);
    v13 = rop4;
    if ( v44 )
      return EngStretchBlt(
               psoDest,
               psoSrc,
               rop4 != 52428 ? psoMask : 0,
               pco,
               pxlo,
               pca,
               pptlHTOrg,
               prclDest,
               prclSrc,
               pptlMask,
               iMode);
  }
  else
  {
    v13 = rop4;
  }
  return v46(psoDest, v43, v13 != 52428 ? psoMask : 0, pco, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode);
}
