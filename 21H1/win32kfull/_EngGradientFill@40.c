/*
 * XREFs of _EngGradientFill@40 @ 0xBE83A
 * Callers:
 *     ?PanGradientFill@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAXKPAU_RECTL@@PAU_POINTL@@K@Z @ 0x1F5F1D (-PanGradientFill@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAXKPAU_RECTL@@PAU_.c)
 *     ?BmpDevGradientFill@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAXKPAU_RECTL@@PAU_POINTL@@K@Z @ 0x1F9D1F (-BmpDevGradientFill@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAXKPAU_RECTL@@P.c)
 *     ?RedirGradientFill@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAXKPAU_RECTL@@PAU_POINTL@@K@Z @ 0x1FB57B (-RedirGradientFill@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAXKPAU_RECTL@@PA.c)
 *     ?MulGradientFill@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAXKPAU_RECTL@@PAU_POINTL@@K@Z @ 0x203762 (-MulGradientFill@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAXKPAU_RECTL@@PAU_.c)
 *     _NtGdiEngGradientFill@40 @ 0x218480 (_NtGdiEngGradientFill@40.c)
 * Callees:
 *     ?psSetupDstSurface@@YGPAVSURFACE@@PAV1@PAU_RECTL@@AAVSURFMEM@@HH@Z @ 0x5304E (-psSetupDstSurface@@YGPAVSURFACE@@PAV1@PAU_RECTL@@AAVSURFMEM@@HH@Z.c)
 *     ?bRectangleMesh@@YGHPAVSURFACE@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAU_GRADIENT_RECT@@KKPAU_RECTL@@PAU_POINTL@@@Z @ 0xBEA98 (-bRectangleMesh@@YGHPAVSURFACE@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAU_GRADIENT_RECT@@KKPAU_RECTL@@PA.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bTriangleMesh@@YGHPAVSURFACE@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAU_GRADIENT_TRIANGLE@@KKPAU_RECTL@@4PAU_POINTL@@@Z @ 0x1EA568 (-bTriangleMesh@@YGHPAVSURFACE@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAU_GRADIENT_TRIANGLE@@KKPAU_RECTL@.c)
 */

BOOL __stdcall EngGradientFill(
        SURFOBJ *psoDest,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        TRIVERTEX *pVertex,
        ULONG nVertex,
        PVOID pMesh,
        ULONG nMesh,
        RECTL *prclExtents,
        POINTL *pptlDitherOrg,
        ULONG ulMode)
{
  int v10; // eax
  BOOL v11; // eax
  struct SURFMEM *v12; // ecx
  struct SURFACE *v13; // eax
  ULONG v14; // edi
  LONG top; // edx
  LONG left; // esi
  TRIVERTEX *v17; // eax
  ULONG v18; // ecx
  TRIVERTEX *v19; // esi
  int v20; // eax
  LONG *v21; // ecx
  SURFOBJ *v22; // eax
  LONG v23; // eax
  LONG v24; // ecx
  int v26; // [esp+0h] [ebp-68h]
  struct _RECTL *v27; // [esp+0h] [ebp-68h]
  int v28; // [esp+4h] [ebp-64h]
  struct _POINTL *v29; // [esp+4h] [ebp-64h]
  struct SURFACE *v30; // [esp+Ch] [ebp-5Ch]
  struct SURFACE *v31; // [esp+10h] [ebp-58h]
  LONG *v32; // [esp+14h] [ebp-54h]
  BOOL (__stdcall *v33)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // [esp+14h] [ebp-54h]
  int v34; // [esp+24h] [ebp-44h]
  _DWORD v35[2]; // [esp+2Ch] [ebp-3Ch] BYREF
  int v36; // [esp+34h] [ebp-34h] BYREF
  SURFACE *v37; // [esp+38h] [ebp-30h] BYREF
  char v38; // [esp+3Ch] [ebp-2Ch]
  int v39; // [esp+40h] [ebp-28h]
  RECTL v40; // [esp+44h] [ebp-24h] BYREF
  RECTL v41; // [esp+54h] [ebp-14h] BYREF

  v10 = (int)*(psoDest != 0 ? &psoDest->hdev : (HDEV *)28);
  v32 = psoDest != 0 ? &psoDest[-1].lDelta : 0;
  v34 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v36 = v10;
  v35[0] = 1;
  PDEVOBJ::vSync((PDEVOBJ *)&v36, psoDest, 0, 0);
  v41 = *prclExtents;
  if ( pco && pco->iDComplexity )
  {
    if ( v41.left < pco->rclBounds.left )
      v41.left = pco->rclBounds.left;
    if ( v41.right > pco->rclBounds.right )
      v41.right = pco->rclBounds.right;
    if ( v41.top < pco->rclBounds.top )
      v41.top = pco->rclBounds.top;
    if ( v41.bottom > pco->rclBounds.bottom )
      v41.bottom = pco->rclBounds.bottom;
  }
  v40 = v41;
  v11 = pco && pco->iDComplexity >= 2u;
  if ( ulMode > 1 )
    v12 = (struct SURFMEM *)v35[0];
  else
    v12 = 0;
  v13 = psSetupDstSurface(&v40, (int)v32, &v37, (struct _RECTL *)v11, v12, v26, v28);
  v31 = v13;
  if ( v13 )
  {
    v14 = nVertex;
    if ( v13 != (struct SURFACE *)v32 )
    {
      top = v41.top;
      left = v41.left;
      v34 = 1;
      if ( nVertex )
      {
        v17 = pVertex;
        v18 = nVertex;
        do
        {
          v17->x -= left;
          ++v17;
          v17[-1].y -= top;
          --v18;
        }
        while ( v18 );
      }
      pptlDitherOrg->x += left;
      pptlDitherOrg->y += top;
    }
    v19 = pVertex;
    if ( ulMode == 2 )
      v20 = bTriangleMesh(
              (struct SURFACE *)pVertex,
              (struct _XLATEOBJ *)nVertex,
              (struct _TRIVERTEX *)pMesh,
              nMesh,
              (struct _GRADIENT_TRIANGLE *)2,
              (unsigned int)&v40,
              (unsigned int)prclExtents,
              (struct _RECTL *)pptlDitherOrg,
              v27,
              v29);
    else
      v20 = bRectangleMesh(
              (struct SURFACE *)pVertex,
              (struct _XLATEOBJ *)nVertex,
              (struct _TRIVERTEX *)pMesh,
              nMesh,
              (struct _GRADIENT_RECT *)ulMode,
              (unsigned int)&v40,
              (unsigned int)pptlDitherOrg,
              v27,
              v29);
    v30 = (struct SURFACE *)v20;
    if ( v34 )
    {
      v21 = psoDest != 0 ? &psoDest[-1].lDelta : 0;
      v22 = 0;
      v35[0] = 0;
      v35[1] = 0;
      if ( (v21[18] & 0x400) != 0 )
      {
        v33 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_DWORD *)*(psoDest != 0 ? &psoDest->hdev : (HDEV *)28)
                                                                                                  + 494);
        v22 = 0;
      }
      else
      {
        v33 = EngCopyBits;
      }
      if ( v21 )
        v22 = (SURFOBJ *)(v21 + 4);
      v33(v22, (SURFOBJ *)((char *)v31 + 16), pco, xloIdent, &v41, (POINTL *)v35);
      v23 = v41.top;
      v24 = v41.left;
      if ( nVertex )
      {
        do
        {
          v19->x += v24;
          ++v19;
          v19[-1].y += v23;
          --v14;
        }
        while ( v14 );
      }
      pptlDitherOrg->x -= v24;
      pptlDitherOrg->y -= v23;
    }
  }
  else
  {
    EngSetLastError(8u);
    v30 = 0;
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v37);
  return (BOOL)v30;
}
