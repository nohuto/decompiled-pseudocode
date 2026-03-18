/*
 * XREFs of _EngStretchBlt@44 @ 0x4BF90
 * Callers:
 *     ?psSetupTransparentSrcSurface@@YGPAVSURFACE@@PAV1@0PAU_RECTL@@PAU_XLATEOBJ@@1AAVSURFMEM@@KK@Z @ 0x5317A (-psSetupTransparentSrcSurface@@YGPAVSURFACE@@PAV1@0PAU_RECTL@@PAU_XLATEOBJ@@1AAVSURFMEM@@KK@Z.c)
 *     _EngStretchBltROP@52 @ 0x7AF4C (_EngStretchBltROP@52.c)
 *     ?EngRealizeBrush@@YGHPAU_BRUSHOBJ@@PAU_SURFOBJ@@11PAU_XLATEOBJ@@K@Z @ 0x961A2 (-EngRealizeBrush@@YGHPAU_BRUSHOBJ@@PAU_SURFOBJ@@11PAU_XLATEOBJ@@K@Z.c)
 *     ?SpStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x1DBF6E (-SpStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@P.c)
 *     ?bStretch@BLTRECORD@@QAEHAAVSURFMEM@@K@Z @ 0x1EFAF2 (-bStretch@BLTRECORD@@QAEHAAVSURFMEM@@K@Z.c)
 *     ?PanStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x1F62D2 (-PanStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@.c)
 *     ?RedirStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x1FBB44 (-RedirStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL.c)
 *     ?MulStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x203EDB (-MulStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@.c)
 *     _NtGdiEngStretchBlt@44 @ 0x218D88 (_NtGdiEngStretchBlt@44.c)
 * Callees:
 *     ?EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x4C3B0 (-EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 *     _EngCopyBits@24 @ 0x519F0 (_EngCopyBits@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54KPAH@Z @ 0x1EE497 (-EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 */

BOOL __stdcall EngStretchBlt(
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
        ULONG iMode)
{
  struct _SURFOBJ *y; // ecx
  struct _SURFOBJ *v12; // edx
  struct _SURFOBJ *v13; // esi
  struct _CLIPOBJ *v14; // edi
  HDEV hdev; // esi
  HSURF Bitmap; // eax
  ULONG v17; // ecx
  HSURF v18; // eax
  ULONG v19; // ecx
  HSURF v20; // eax
  SURFOBJ *v21; // eax
  SURFOBJ *v22; // edi
  SURFOBJ *pvBits; // ecx
  ULONG v24; // eax
  int v25; // edx
  int v26; // eax
  SIZEL v28; // [esp+8h] [ebp-A8h]
  ULONG iBitmapFormat; // [esp+14h] [ebp-9Ch]
  struct _POINTL *v30; // [esp+20h] [ebp-90h]
  int *v31; // [esp+24h] [ebp-8Ch]
  SURFOBJ *pso; // [esp+30h] [ebp-80h]
  SURFOBJ *psoa; // [esp+30h] [ebp-80h]
  SURFOBJ *psob; // [esp+30h] [ebp-80h]
  SURFOBJ *v35; // [esp+34h] [ebp-7Ch]
  struct _POINTL v36; // [esp+3Ch] [ebp-74h] BYREF
  struct _SURFOBJ *v37; // [esp+44h] [ebp-6Ch]
  struct _SURFOBJ *v38; // [esp+48h] [ebp-68h]
  struct _CLIPOBJ *v39; // [esp+4Ch] [ebp-64h]
  struct _RECTL *v40; // [esp+50h] [ebp-60h]
  struct _POINTL *v41; // [esp+54h] [ebp-5Ch]
  struct tagCOLORADJUSTMENT *v42; // [esp+58h] [ebp-58h]
  struct _XLATEOBJ *v43; // [esp+5Ch] [ebp-54h]
  SURFOBJ *v44; // [esp+60h] [ebp-50h]
  HSURF v45; // [esp+64h] [ebp-4Ch]
  int v46; // [esp+68h] [ebp-48h]
  ULONG v47; // [esp+6Ch] [ebp-44h]
  HSURF hsurf; // [esp+70h] [ebp-40h]
  HSURF v49; // [esp+74h] [ebp-3Ch]
  int v50; // [esp+78h] [ebp-38h]
  RECTL v51; // [esp+7Ch] [ebp-34h] BYREF
  struct _POINTL v52; // [esp+8Ch] [ebp-24h] BYREF
  struct _POINTL v53; // [esp+94h] [ebp-1Ch]
  tagCOLORADJUSTMENT var14; // [esp+9Ch] [ebp-14h] BYREF

  y = psoMask;
  v12 = (struct _SURFOBJ *)pco;
  v43 = (struct _XLATEOBJ *)pptlHTOrg;
  v42 = (struct tagCOLORADJUSTMENT *)prclDest;
  v13 = (struct _SURFOBJ *)pxlo;
  v41 = (struct _POINTL *)prclSrc;
  v14 = (struct _CLIPOBJ *)pca;
  v40 = (struct _RECTL *)pptlMask;
  v36.y = (LONG)psoMask;
  v37 = (struct _SURFOBJ *)pco;
  v38 = (struct _SURFOBJ *)pxlo;
  v39 = (struct _CLIPOBJ *)pca;
  if ( dword_2785A0 )
  {
    v51.right = psoDest->sizlBitmap.cx;
    *(_DWORD *)&var14.caSize = *(_DWORD *)&v42->caSize;
    v51.bottom = psoDest->sizlBitmap.cy;
    *(_DWORD *)&var14.caIlluminantIndex = *(_DWORD *)&v42->caIlluminantIndex;
    iBitmapFormat = psoDest->iBitmapFormat;
    *(_DWORD *)&var14.caGreenGamma = *(_DWORD *)&v42->caGreenGamma;
    v28.cy = psoDest->sizlBitmap.cy;
    v51.left = 0;
    v28.cx = psoDest->sizlBitmap.cx;
    *(_DWORD *)&var14.caReferenceBlack = *(_DWORD *)&v42->caReferenceBlack;
    v51.top = 0;
    v52 = *v41;
    v53 = v41[1];
    hdev = psoDest->hdev;
    Bitmap = (HSURF)EngCreateBitmap(v28, 0, iBitmapFormat, 0, 0);
    v17 = psoDest->iBitmapFormat;
    hsurf = Bitmap;
    v18 = (HSURF)EngCreateBitmap(psoDest->sizlBitmap, 0, v17, 0, 0);
    v19 = psoDest->iBitmapFormat;
    v45 = v18;
    v20 = (HSURF)EngCreateBitmap(psoDest->sizlBitmap, 0, v19, 0, 0);
    v49 = v20;
    if ( !hsurf || !v45 || !v20 )
      _DbgPrint("hsurf1 == 0 || hsurf2 == 0 || hsurf3 == 0\n");
    pso = EngLockSurface(hsurf);
    v35 = EngLockSurface(v45);
    v21 = EngLockSurface(v49);
    v46 = 0;
    v22 = pso;
    v44 = v21;
    if ( pso )
    {
      if ( v35 )
      {
        if ( v21 )
        {
          EngCopyBits(v21, psoDest, 0, xloIdent, &v51, &gptlZero);
          memset(pso->pvBits, 0, pso->cjBits);
          memset(v35->pvBits, 0, pso->cjBits);
          v36.x = 0;
          psoa = (SURFOBJ *)EngStretchBltOld(
                              (struct _SURFOBJ *)v36.y,
                              v37,
                              v38,
                              v39,
                              v43,
                              v42,
                              v41,
                              v40,
                              (struct _RECTL *)iMode,
                              &v36,
                              (unsigned int)v30,
                              v31);
          if ( v36.x )
          {
            v42 = &var14;
            v41 = &v52;
LABEL_11:
            EngCopyBits(v22, psoDest, 0, 0, &v51, &gptlZero);
            if ( ((int)psoDest[1].hsurf & 0x400) != 0 )
              (*((void (__stdcall **)(SURFOBJ *, SURFOBJ *, _DWORD, XLATEOBJ *const, RECTL *, POINTL *))hdev + 494))(
                psoDest,
                v44,
                0,
                xloIdent,
                &v51,
                &gptlZero);
            else
              EngCopyBits(psoDest, v44, 0, xloIdent, &v51, &gptlZero);
            if ( (unsigned int)psoa != EngStretchBltNew(
                                         (struct _SURFOBJ *)v36.y,
                                         v37,
                                         v38,
                                         v39,
                                         v43,
                                         &var14,
                                         &v52,
                                         v40,
                                         (struct _RECTL *)iMode,
                                         v30,
                                         (unsigned int)v31) )
              _DbgPrint("bOld ^ bNew\n");
            EngCopyBits(v35, psoDest, 0, xloIdent, &v51, &gptlZero);
            pvBits = (SURFOBJ *)v22->pvBits;
            v24 = 0;
            v25 = (char *)v35->pvBits - (char *)pvBits;
            v50 = v25;
            while ( 1 )
            {
              v47 = v24;
              psob = pvBits;
              if ( v24 >= v22->cjBits )
                break;
              if ( LOBYTE(pvBits->dhsurf) != *((_BYTE *)&pvBits->dhsurf + v25) )
              {
                _DbgPrint("memcmp failed\n");
                v26 = v46 + 1;
                v46 = v26;
                if ( v26 == 1 )
                {
                  __debugbreak();
                  if ( ((int)psoDest[1].hsurf & 0x400) != 0 )
                    (*((void (__stdcall **)(SURFOBJ *, SURFOBJ *, _DWORD, XLATEOBJ *const, RECTL *, POINTL *))hdev + 494))(
                      psoDest,
                      v44,
                      0,
                      xloIdent,
                      &v51,
                      &gptlZero);
                  else
                    EngCopyBits(psoDest, v44, 0, xloIdent, &v51, &gptlZero);
                  memset(v22->pvBits, 0, v22->cjBits);
                  memset(v35->pvBits, 0, v22->cjBits);
                  v36.x = 0;
                  psoa = (SURFOBJ *)EngStretchBltOld(
                                      (struct _SURFOBJ *)v36.y,
                                      v37,
                                      v38,
                                      v39,
                                      v43,
                                      &var14,
                                      &v52,
                                      v40,
                                      (struct _RECTL *)iMode,
                                      &v36,
                                      (unsigned int)v30,
                                      v31);
                  if ( v36.x )
                    goto LABEL_11;
                  break;
                }
                if ( v26 == 2 )
                {
                  __debugbreak();
                  break;
                }
                pvBits = psob;
                v25 = v50;
              }
              v24 = v47 + 1;
              pvBits = (SURFOBJ *)((char *)pvBits + 1);
            }
          }
        }
      }
      EngUnlockSurface(v22);
    }
    if ( v35 )
      EngUnlockSurface(v35);
    if ( v44 )
      EngUnlockSurface(v44);
    if ( hsurf )
      EngDeleteSurface(hsurf);
    if ( v45 )
      EngDeleteSurface(v45);
    if ( v49 )
      EngDeleteSurface(v49);
    v14 = v39;
    v13 = v38;
    v12 = v37;
    y = (struct _SURFOBJ *)v36.y;
  }
  return EngStretchBltNew(y, v12, v13, v14, v43, v42, v41, v40, (struct _RECTL *)iMode, v30, (unsigned int)v31);
}
