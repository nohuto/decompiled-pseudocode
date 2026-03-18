/*
 * XREFs of _EngAlphaBlend@28 @ 0x526B0
 * Callers:
 *     _GrePtInSprite@24 @ 0x23540 (_GrePtInSprite@24.c)
 *     ?bShadowAlphaCursor@@YGHPAU_SURFOBJ@@00PAU_XLATEOBJ@@1PAU_RECTL@@H@Z @ 0xCD162 (-bShadowAlphaCursor@@YGHPAU_SURFOBJ@@00PAU_XLATEOBJ@@1PAU_RECTL@@H@Z.c)
 *     ?SpAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z @ 0xE4EFE (-SpAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z.c)
 *     ?PanAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z @ 0x1F56EE (-PanAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z.c)
 *     ?RedirAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z @ 0x1FAE71 (-RedirAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z.c)
 *     ?MulAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z @ 0x2019CF (-MulAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z.c)
 *     _NtGdiEngAlphaBlend@28 @ 0x2173F0 (_NtGdiEngAlphaBlend@28.c)
 * Callees:
 *     ?AlphaScanLineBlend@@YGHPAEPAU_RECTL@@J0JPAU_POINTL@@PAU_XLATEOBJ@@33VXEPALOBJ@@4PAU_ALPHA_DISPATCH_FORMAT@@@Z @ 0x52CD0 (-AlphaScanLineBlend@@YGHPAEPAU_RECTL@@J0JPAU_POINTL@@PAU_XLATEOBJ@@33VXEPALOBJ@@4PAU_ALPHA_DISPA.c)
 *     ?bDetermineAlphaBlendFunction@@YGHPAVSURFACE@@0PAVXEPALOBJ@@1PAVXLATE@@JPAU_ALPHA_DISPATCH_FORMAT@@H@Z @ 0x52E72 (-bDetermineAlphaBlendFunction@@YGHPAVSURFACE@@0PAVXEPALOBJ@@1PAVXLATE@@JPAU_ALPHA_DISPATCH_FORMA.c)
 *     ?psSetupDstSurface@@YGPAVSURFACE@@PAV1@PAU_RECTL@@AAVSURFMEM@@HH@Z @ 0x5304E (-psSetupDstSurface@@YGPAVSURFACE@@PAV1@PAU_RECTL@@AAVSURFMEM@@HH@Z.c)
 *     ?psSetupTransparentSrcSurface@@YGPAVSURFACE@@PAV1@0PAU_RECTL@@PAU_XLATEOBJ@@1AAVSURFMEM@@KK@Z @ 0x5317A (-psSetupTransparentSrcSurface@@YGPAVSURFACE@@PAV1@0PAU_RECTL@@PAU_XLATEOBJ@@1AAVSURFMEM@@KK@Z.c)
 *     ?bEnum@XCLIPOBJ@@QAEHKPAXPAK@Z @ 0x8E412 (-bEnum@XCLIPOBJ@@QAEHKPAXPAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QAEKHKKK@Z @ 0x948B4 (-cEnumStart@XCLIPOBJ@@QAEKHKKK@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _EngHTBlt@48 @ 0x2271FF (_EngHTBlt@48.c)
 */

BOOL __stdcall EngAlphaBlend(
        SURFOBJ *psoDest,
        SURFOBJ *psoSrc,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDest,
        RECTL *prclSrc,
        BLENDOBJ *pBlendObj)
{
  int v7; // ebx
  BOOL result; // eax
  int v9; // eax
  volatile signed __int32 *v10; // esi
  volatile signed __int32 v11; // edx
  LONG *v12; // ebx
  struct SURFACE *v13; // eax
  struct SURFACE *v14; // esi
  int v15; // edi
  struct _SURFOBJ *v16; // ecx
  LONG lDelta; // eax
  ULONG *pulXlate; // eax
  LONG v19; // edx
  XCLIPOBJ *v20; // eax
  int v21; // ecx
  XCLIPOBJ *v22; // ecx
  struct XEPALOBJ *v23; // eax
  LONG v24; // edx
  bool v25; // cc
  LONG *v26; // esi
  LONG bottom; // esi
  int v28; // ecx
  int v29; // eax
  int v30; // edx
  int v31; // ebx
  unsigned int v32; // [esp+8h] [ebp-248h]
  int v33; // [esp+8h] [ebp-248h]
  struct _ALPHA_DISPATCH_FORMAT *v34; // [esp+8h] [ebp-248h]
  struct _ALPHA_DISPATCH_FORMAT *v35; // [esp+8h] [ebp-248h]
  unsigned int v36; // [esp+Ch] [ebp-244h]
  int v37; // [esp+Ch] [ebp-244h]
  int v38; // [esp+Ch] [ebp-244h]
  int v39; // [esp+Ch] [ebp-244h]
  int v40; // [esp+18h] [ebp-238h] BYREF
  LONG *v41; // [esp+1Ch] [ebp-234h]
  struct _SURFOBJ *v42; // [esp+20h] [ebp-230h]
  struct _SURFOBJ *v43; // [esp+24h] [ebp-22Ch] BYREF
  struct _SURFOBJ *v44; // [esp+28h] [ebp-228h]
  XCLIPOBJ *v45; // [esp+2Ch] [ebp-224h]
  int v46; // [esp+30h] [ebp-220h]
  struct XEPALOBJ *v47; // [esp+34h] [ebp-21Ch] BYREF
  XLATEOBJ *v48; // [esp+38h] [ebp-218h]
  BLENDOBJ *v49; // [esp+3Ch] [ebp-214h]
  struct XEPALOBJ *v50; // [esp+40h] [ebp-210h]
  HDEV hdev; // [esp+44h] [ebp-20Ch] BYREF
  int v52; // [esp+48h] [ebp-208h]
  LONG *v53; // [esp+4Ch] [ebp-204h]
  CLIPOBJ *v54; // [esp+50h] [ebp-200h]
  LONG left; // [esp+54h] [ebp-1FCh]
  LONG top; // [esp+58h] [ebp-1F8h]
  BLENDOBJ v57; // [esp+5Ch] [ebp-1F4h]
  BLENDOBJ v58; // [esp+60h] [ebp-1F0h]
  char *v59; // [esp+64h] [ebp-1ECh]
  struct _XLATEOBJ v60; // [esp+68h] [ebp-1E8h] BYREF
  int v61; // [esp+7Ch] [ebp-1D4h]
  _DWORD v62[2]; // [esp+80h] [ebp-1D0h] BYREF
  _DWORD v63[2]; // [esp+88h] [ebp-1C8h] BYREF
  _DWORD v64[8]; // [esp+90h] [ebp-1C0h] BYREF
  RECTL v65; // [esp+B0h] [ebp-1A0h] BYREF
  struct _RECTL v66; // [esp+C0h] [ebp-190h] BYREF
  RECTL v67; // [esp+D0h] [ebp-180h] BYREF
  struct _KFLOATING_SAVE FloatSave; // [esp+E0h] [ebp-170h] BYREF
  unsigned int v69; // [esp+100h] [ebp-150h] BYREF
  _OWORD v70[20]; // [esp+104h] [ebp-14Ch] BYREF

  v48 = pxlo;
  v54 = pco;
  v45 = (XCLIPOBJ *)prclDest;
  v44 = psoDest;
  v7 = 1;
  v46 = (int)prclSrc;
  v49 = pBlendObj;
  v42 = psoSrc;
  v53 = psoDest != 0 ? &psoDest[-1].lDelta : 0;
  v41 = psoSrc != 0 ? &psoSrc[-1].lDelta : 0;
  v52 = 0;
  v50 = (struct XEPALOBJ *)pBlendObj[1];
  v58 = pBlendObj[2];
  v57 = pBlendObj[3];
  result = 0;
  v65 = *prclDest;
  v66 = *prclSrc;
  memset(v64, 0, sizeof(v64));
  if ( v53 )
  {
    v64[6] = *v49;
    v61 = 0;
    v60.iUniq = 0;
    LOBYTE(v60.flXlate) = 0;
    memset(&v60.iSrcType, 0, 9);
    v9 = (int)*(psoDest != 0 ? &psoDest->hdev : (HDEV *)28);
    if ( v9 )
    {
      v10 = (volatile signed __int32 *)(v9 + 24);
      do
        v11 = *v10;
      while ( _InterlockedCompareExchange(v10, *v10 | 0x40000, *v10) != v11 );
    }
    if ( (v49->BlendFunction.BlendFlags & 1) != 0
      && (v65.right - v65.left != v66.right - v66.left || v65.bottom - v65.top != v66.bottom - v66.top) )
    {
      v7 = EngHTBlt(v44, v42, 0, v54, v48, 0, &gptlZero, v45, v46, 0, 512, v49) == 1;
LABEL_61:
      SURFMEM::~SURFMEM((SURFMEM *)&v60);
      SURFMEM::~SURFMEM((SURFMEM *)&v60.cEntries);
      return v7;
    }
    hdev = v44->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&hdev, v44, 0, 0);
    v47 = (struct XEPALOBJ *)v42->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&v47, v42, 0, 0);
    v44 = (struct _SURFOBJ *)psSetupTransparentSrcSurface((struct SURFACE *)&v65, v50, &v66, &v60, 0, 0, v32, v36);
    if ( !v44 || v65.left == v65.right )
      goto LABEL_61;
    v12 = v53;
    v67 = v65;
    left = v66.left;
    top = v66.top;
    v13 = psSetupDstSurface((struct SURFACE *)&v60.cEntries, 0, (struct SURFMEM *)1, v33, v37);
    v14 = v13;
    hdev = (HDEV)v13;
    if ( !v13 )
    {
LABEL_60:
      v7 = 0;
      goto LABEL_61;
    }
    if ( v13 == (struct SURFACE *)v12 )
    {
      v15 = v52;
    }
    else
    {
      v15 = 1;
      v52 = 1;
    }
    v16 = (struct _SURFOBJ *)*((_DWORD *)v13 + 22);
    v42 = v16;
    v43 = v16;
    lDelta = v44[1].lDelta;
    v41 = (LONG *)lDelta;
    v40 = lDelta;
    if ( !lDelta )
    {
      if ( v48 )
      {
        pulXlate = v48[1].pulXlate;
        v19 = (LONG)pulXlate;
        v41 = (LONG *)pulXlate;
        if ( pulXlate )
        {
          v40 = (int)pulXlate;
          goto LABEL_21;
        }
      }
      lDelta = *((_DWORD *)v44->pvBits + 278);
      v41 = (LONG *)lDelta;
      v40 = lDelta;
    }
    v19 = lDelta;
LABEL_21:
    if ( !v16 )
    {
      v16 = *(struct _SURFOBJ **)(*((_DWORD *)v14 + 7) + 1112);
      v42 = v16;
      v43 = v16;
    }
    if ( v19 && v16 )
    {
      v47 = (struct XEPALOBJ *)(v65.right - v65.left);
      v45 = v15 == 0 ? (XCLIPOBJ *)v54 : 0;
      v7 = bDetermineAlphaBlendFunction(
             (struct SURFACE *)&v43,
             (struct SURFACE *)&v40,
             v50,
             (struct XEPALOBJ *)(v65.right - v65.left),
             (struct XLATE *)v64,
             0,
             v34,
             v38);
      v46 = 0;
      memset(&FloatSave, 0, sizeof(FloatSave));
      if ( v7 )
      {
        if ( v64[7] )
        {
          v46 = 1;
          if ( KeSaveFloatingPointState(&FloatSave) < 0 )
          {
            v46 = 0;
            memset(v64, 0, sizeof(v64));
            v64[6] = *v49;
            v7 = bDetermineAlphaBlendFunction(
                   (struct SURFACE *)&v43,
                   (struct SURFACE *)&v40,
                   v50,
                   v47,
                   (struct XLATE *)v64,
                   1,
                   v35,
                   v39);
          }
        }
        if ( v7 )
        {
          memset(&v70[1], 0, 0x130u);
          v20 = v45;
          v21 = 0;
          v69 = 1;
          v70[0] = v65;
          v40 = 0;
          if ( v45 )
          {
            if ( *((_BYTE *)v45 + 20) == 1 )
            {
              v21 = 0;
              v40 = 0;
              v70[0] = *(_OWORD *)((char *)v45 + 4);
            }
            else
            {
              if ( *((_BYTE *)v45 + 20) == 3 )
              {
                v40 = 1;
                XCLIPOBJ::cEnumStart(v45, 0, 0, 1u, 0x14u);
                v20 = v22;
              }
              v21 = v40;
            }
          }
          if ( !v21 )
            goto LABEL_37;
          do
          {
            v21 = XCLIPOBJ::bEnum(v20, 0x144u, &v69, 0);
            v40 = v21;
LABEL_37:
            v43 = 0;
            if ( v69 )
            {
              v23 = (struct XEPALOBJ *)((char *)v70 + 8);
              v47 = (struct XEPALOBJ *)((char *)v70 + 8);
              do
              {
                v59 = (char *)v23 - 8;
                if ( *((_DWORD *)v23 - 2) < v65.left )
                  *((_DWORD *)v23 - 2) = v65.left;
                v24 = v65.top;
                if ( *(_DWORD *)v23 > v65.right )
                  *(_DWORD *)v23 = v65.right;
                v25 = *((_DWORD *)v23 - 1) < v24;
                v49 = (BLENDOBJ *)*((_DWORD *)v23 - 1);
                v26 = v41;
                if ( v25 )
                {
                  *((_DWORD *)v23 - 1) = v24;
                  v49 = (BLENDOBJ *)v24;
                }
                v48 = (XLATEOBJ *)*((_DWORD *)v23 + 1);
                if ( (int)v48 > v65.bottom )
                {
                  bottom = v65.bottom;
                  *((_DWORD *)v23 + 1) = v65.bottom;
                  v48 = (XLATEOBJ *)bottom;
                  v26 = v41;
                }
                if ( (int)v49 < (int)v48 )
                {
                  v28 = *((_DWORD *)v23 - 2);
                  if ( v28 < *(_DWORD *)v23 )
                  {
                    v29 = *((_DWORD *)v23 - 1) - v24;
                    v30 = *((_DWORD *)hdev + 13);
                    v31 = *((_DWORD *)hdev + 12);
                    v62[0] = left + v28 - v65.left;
                    v62[1] = top + v29;
                    v7 = ((int (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))AlphaScanLineBlend)(
                           v31,
                           v59,
                           v30,
                           *(_DWORD *)&v44->iType,
                           v44[1].dhsurf,
                           v62,
                           v50,
                           v58,
                           v57,
                           v42,
                           v26,
                           v64);
                    v23 = v47;
                  }
                }
                v23 = (struct XEPALOBJ *)((char *)v23 + 16);
                v47 = v23;
                v43 = (struct _SURFOBJ *)((char *)v43 + 1);
              }
              while ( (unsigned int)v43 < v69 );
              v21 = v40;
            }
            v20 = v45;
          }
          while ( v21 );
          if ( v52 )
          {
            v63[0] = 0;
            v63[1] = 0;
            if ( (v53[18] & 0x400) != 0 )
              (*(void (__stdcall **)(LONG *, HDEV, CLIPOBJ *, XLATEOBJ *const, RECTL *, _DWORD *))(v53[7] + 1976))(
                v53 + 4,
                hdev + 4,
                v54,
                xloIdent,
                &v67,
                v63);
            else
              EngCopyBits((SURFOBJ *)(v53 + 4), (SURFOBJ *)(hdev + 4), v54, xloIdent, &v67, (POINTL *)v63);
          }
        }
        if ( v46 )
          KeRestoreFloatingPointState(&FloatSave);
      }
      goto LABEL_61;
    }
    goto LABEL_60;
  }
  return result;
}
