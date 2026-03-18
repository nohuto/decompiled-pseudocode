/*
 * XREFs of _EngBitBlt@44 @ 0x53EF2
 * Callers:
 *     ?bBitBlt@BLTRECORD@@QAEHAAVDCOBJ@@0K@Z @ 0x79928 (-bBitBlt@BLTRECORD@@QAEHAAVDCOBJ@@0K@Z.c)
 *     ?bShadowAlphaCursor@@YGHPAU_SURFOBJ@@00PAU_XLATEOBJ@@1PAU_RECTL@@H@Z @ 0xCD162 (-bShadowAlphaCursor@@YGHPAU_SURFOBJ@@00PAU_XLATEOBJ@@1PAU_RECTL@@H@Z.c)
 *     _SimBitBlt@48 @ 0x1D49E6 (_SimBitBlt@48.c)
 *     ?EngTextOutBitBlt@@YGXPAVSURFACE@@PAU_FONTOBJ@@KPAU_SURFOBJ@@2PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@6PAU_BRUSHOBJ@@6K@Z @ 0x1EFC42 (-EngTextOutBitBlt@@YGXPAVSURFACE@@PAU_FONTOBJ@@KPAU_SURFOBJ@@2PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_REC.c)
 *     ?PanBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x1F57FD (-PanBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4.c)
 *     ?RedirBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x1FAFE2 (-RedirBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@.c)
 *     ?MulBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x201F9D (-MulBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4.c)
 *     _NtGdiEngBitBlt@44 @ 0x217630 (_NtGdiEngBitBlt@44.c)
 *     _EngHTBlt@48 @ 0x2271FF (_EngHTBlt@48.c)
 * Callees:
 *     _EngCopyBits@24 @ 0x519F0 (_EngCopyBits@24.c)
 *     ?pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ @ 0x55814 (-pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ.c)
 *     ?vDIBSolidBlt@@YGXPAVSURFACE@@PAU_RECTL@@PAU_CLIPOBJ@@KH@Z @ 0x55928 (-vDIBSolidBlt@@YGXPAVSURFACE@@PAU_RECTL@@PAU_CLIPOBJ@@KH@Z.c)
 *     ?BltLnk@@YGHPAVSURFACE@@00PAVECLIPOBJ@@PAVXLATE@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x94E94 (-BltLnk@@YGHPAVSURFACE@@00PAVECLIPOBJ@@PAVXLATE@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z.c)
 *     ?bUMPDSecurityGateEx@@YGHXZ @ 0x9591E (-bUMPDSecurityGateEx@@YGHXZ.c)
 *     ?pvGetEngRbrush@@YGPAXPAU_BRUSHOBJ@@@Z @ 0x95952 (-pvGetEngRbrush@@YGPAXPAU_BRUSHOBJ@@@Z.c)
 *     ?vDIBPatBlt@@YGXPAVSURFACE@@PAU_CLIPOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@K@Z @ 0xA8080 (-vDIBPatBlt@@YGXPAVSURFACE@@PAU_CLIPOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@K@Z.c)
 *     _EngTransparentBlt@32 @ 0xCAC46 (_EngTransparentBlt@32.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     _SimBitBlt@48 @ 0x1D49E6 (_SimBitBlt@48.c)
 *     ?vDIBPatBltSrccopy8x8@@YGXPAVSURFACE@@PAU_CLIPOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@P6GXPAU_PATBLTFRAME@@H@Z@Z @ 0x22C848 (-vDIBPatBltSrccopy8x8@@YGXPAVSURFACE@@PAU_CLIPOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@P6GXPAU_.c)
 *     ?vDIBnPatBltSrccopy6x6@@YGXPAVSURFACE@@PAU_CLIPOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@P6GXPAU_PATBLTFRAME@@H@Z@Z @ 0x22CB54 (-vDIBnPatBltSrccopy6x6@@YGXPAVSURFACE@@PAU_CLIPOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@P6GXPAU.c)
 */

BOOL __stdcall EngBitBlt(
        SURFOBJ *psoTrg,
        SURFOBJ *psoSrc,
        SURFOBJ *psoMask,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclTrg,
        POINTL *pptlSrc,
        POINTL *pptlMask,
        BRUSHOBJ *pbo,
        POINTL *pptlBrush,
        ROP4 rop4)
{
  BRUSHOBJ *v11; // esi
  BOOL v12; // ebx
  int *ThreadWin32Thread; // eax
  int v14; // eax
  _DWORD *v15; // eax
  bool v16; // zf
  int v17; // eax
  char v18; // al
  LONG *v20; // eax
  LONG v21; // ecx
  int v22; // ecx
  SURFOBJ *v23; // ecx
  LONG v24; // eax
  volatile signed __int32 *v25; // esi
  volatile signed __int32 v26; // edx
  LONG *v27; // ecx
  ROP4 v28; // eax
  LONG x; // ecx
  int v30; // eax
  LONG y; // ecx
  ULONG v32; // edx
  FLONG flColorType; // eax
  unsigned int v34; // ecx
  FLONG v35; // eax
  FLONG v36; // eax
  int v37; // ecx
  char v38; // al
  int v39; // esi
  int v40; // ecx
  int v41; // edx
  int v42; // eax
  struct _SURFOBJ *v43; // eax
  void (__stdcall *v44)(struct _SURFOBJ *, SURFOBJ *, _DWORD, XLATEOBJ *, _DWORD *, POINTL *); // edx
  int (__stdcall *v45)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // eax
  struct _RECTL *iSolidColor; // [esp+40h] [ebp-A0h]
  int v47; // [esp+44h] [ebp-9Ch]
  struct _BRUSHOBJ *v48; // [esp+44h] [ebp-9Ch]
  struct _POINTL *v49; // [esp+48h] [ebp-98h]
  void (__stdcall *v50)(struct _PATBLTFRAME *, int); // [esp+4Ch] [ebp-94h]
  LONG *p_lDelta; // [esp+58h] [ebp-88h]
  POINTL *v52; // [esp+6Ch] [ebp-74h]
  char v53; // [esp+73h] [ebp-6Dh]
  XLATEOBJ *v54; // [esp+74h] [ebp-6Ch]
  PKTHREAD CurrentThread; // [esp+80h] [ebp-60h] BYREF
  BRUSHOBJ *v56; // [esp+84h] [ebp-5Ch]
  struct _RECTL *v57; // [esp+88h] [ebp-58h]
  SURFOBJ *v58; // [esp+8Ch] [ebp-54h]
  SURFACE *v59; // [esp+90h] [ebp-50h] BYREF
  int v60; // [esp+94h] [ebp-4Ch]
  int v61; // [esp+98h] [ebp-48h]
  int v62; // [esp+9Ch] [ebp-44h] BYREF
  struct SURFACE *v63; // [esp+A0h] [ebp-40h]
  _DWORD v64[6]; // [esp+A4h] [ebp-3Ch] BYREF
  RECTL prclSrc; // [esp+BCh] [ebp-24h] BYREF
  _DWORD v66[4]; // [esp+CCh] [ebp-14h] BYREF

  v54 = pxlo;
  v52 = pptlSrc;
  v57 = (struct _RECTL *)pptlMask;
  p_lDelta = &psoTrg[-1].lDelta;
  v58 = psoMask;
  v11 = pbo;
  v56 = pbo;
  v63 = psoMask != 0 ? (struct SURFACE *)&psoMask[-1].lDelta : 0;
  CurrentThread = KeGetCurrentThread();
  v12 = 0;
  if ( IsThreadCrossSessionAttached()
    || (ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread)) == 0
    || (v14 = *ThreadWin32Thread) == 0
    || (v15 = (_DWORD *)(v14 + 20), v16 = *v15 == (_DWORD)v15, v17 = *v15 - 28, v16) )
  {
    v17 = 0;
  }
  if ( v17 && (*(_DWORD *)(v17 + 220) & 0x100) != 0 && *(_DWORD *)(v17 + 228) )
  {
    v18 = gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)];
    if ( (v18 & 0xE8) != 0 && (!pbo || pbo->iSolidColor == -1 && !pptlBrush) )
    {
      if ( gfUMPDDebug )
        _DbgPrint(
          "clientcore\\windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:ROP4NEEDPAT && (!pbo || (pbo->iSolidCol"
          "or == -1 && !pptlBrush))\n",
          67);
      return 0;
    }
    v53 = v18 & 0xD4;
    if ( (v18 & 0xD4) != 0 && (!psoSrc || !pptlSrc) )
    {
      if ( gfUMPDDebug )
        _DbgPrint(
          "clientcore\\windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:ROP4NEEDSRC && (!psoSrc || !pptlSrc)\n",
          74);
      return 0;
    }
    v20 = &psoTrg[-1].lDelta;
    v21 = p_lDelta[15];
    if ( v21 == 9 || v21 == 10 )
    {
      if ( gfUMPDDebug )
        _DbgPrint(
          "clientcore\\windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:pSurfDst is BMF_JPEG/BMF_PNG\n",
          84);
      return 1;
    }
    if ( v53 )
    {
      v22 = *(psoSrc != 0 ? &psoSrc->iBitmapFormat : (ULONG *)60);
      if ( v22 == 9 || v22 == 10 )
      {
        if ( gfUMPDDebug )
          _DbgPrint(
            "clientcore\\windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:pSurfSrc is BMF_JPEG/BMF_PNG\n",
            90);
        return 1;
      }
    }
  }
  else
  {
    v20 = &psoTrg[-1].lDelta;
  }
  v23 = psoTrg;
  if ( !psoTrg->iType )
  {
    v24 = v20[7];
    if ( v24 )
    {
      v25 = (volatile signed __int32 *)(v24 + 24);
      do
        v26 = *v25;
      while ( _InterlockedCompareExchange(v25, *v25 | 0x40000, *v25) != v26 );
      v11 = v56;
      v23 = psoTrg;
      v24 = p_lDelta[7];
    }
    CurrentThread = (PKTHREAD)v24;
    PDEVOBJ::vSync((PDEVOBJ *)&CurrentThread, v23, 0, 0);
    v27 = &psoTrg[-1].lDelta;
    v28 = rop4;
    ++p_lDelta[14];
    if ( rop4 > 0xCCAA )
    {
      if ( rop4 == 52428 )
      {
        if ( !*(psoSrc != 0 ? &psoSrc->iType : (USHORT *)64) )
          return EngCopyBits(psoTrg, psoSrc, pco, pxlo, prclTrg, pptlSrc);
        v45 = (int (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_DWORD *)*(psoSrc != 0 ? &psoSrc->hdev : (HDEV *)28)
                                                                                                 + 494);
        if ( v45 )
          return v45(psoTrg, psoSrc, pco, pxlo, prclTrg, pptlSrc);
        return v12;
      }
      if ( rop4 == 61680 )
        goto LABEL_57;
      if ( rop4 != 0xFFFF )
        goto LABEL_90;
    }
    else
    {
      if ( rop4 == 52394 )
      {
        if ( !v58 )
        {
          if ( !v11->pvRbrush )
          {
            x = pptlSrc->x;
            iSolidColor = (struct _RECTL *)v11->iSolidColor;
            prclSrc.right = pptlSrc->x + prclTrg->right - prclTrg->left;
            v30 = prclTrg->bottom - prclTrg->top;
            prclSrc.left = x;
            y = pptlSrc->y;
            prclSrc.bottom = y + v30;
            prclSrc.top = y;
            return EngTransparentBlt(psoTrg, psoSrc, pco, pxlo, prclTrg, &prclSrc, (ULONG)iSolidColor, 1u);
          }
          return 1;
        }
        goto LABEL_90;
      }
      if ( rop4 )
      {
        if ( rop4 != 3855 )
        {
          if ( rop4 == 21845 )
          {
            vDIBSolidBlt(
              (struct SURFACE *)pco,
              (struct _RECTL *)0xFFFFFFFF,
              (struct _CLIPOBJ *)1,
              (unsigned int)v49,
              (int)v50);
            return 1;
          }
          if ( rop4 == 23130 )
          {
            if ( v11->iSolidColor != -1 )
            {
              vDIBSolidBlt(
                (struct SURFACE *)pco,
                (struct _RECTL *)v11->iSolidColor,
                (struct _CLIPOBJ *)1,
                (unsigned int)v49,
                (int)v50);
              return 1;
            }
            if ( (unsigned int)p_lDelta[15] >= 3
              && pvGetEngRbrush((struct _BRUSHOBJ *)v49)
              && *(_DWORD *)(v11[1].flColorType + 20) >= 4u )
            {
              v47 = 2;
LABEL_74:
              vDIBPatBlt(
                (struct SURFACE *)prclTrg,
                (struct _CLIPOBJ *)v11,
                (struct _RECTL *)pptlBrush,
                (struct _BRUSHOBJ *)v47,
                v49,
                (unsigned int)v50);
              return 1;
            }
          }
          goto LABEL_90;
        }
LABEL_57:
        v32 = v11->iSolidColor;
        if ( v11->iSolidColor != -1 )
        {
          if ( (rop4 & 1) != 0 )
            v32 = ~v32;
          vDIBSolidBlt((struct SURFACE *)pco, (struct _RECTL *)v32, 0, (unsigned int)v49, (int)v50);
          return 1;
        }
        if ( p_lDelta[15] == 3 && rop4 == 61680 )
        {
          if ( pvGetEngRbrush((struct _BRUSHOBJ *)v49)
            && (flColorType = v11[1].flColorType, *(_DWORD *)(flColorType + 20) == 8) )
          {
            v27 = &psoTrg[-1].lDelta;
            if ( *(_DWORD *)(flColorType + 24) == 8 )
            {
              v48 = (struct _BRUSHOBJ *)vPatCpyRect8_8x8;
              goto LABEL_67;
            }
          }
          else
          {
            v27 = &psoTrg[-1].lDelta;
          }
          v28 = rop4;
        }
        v34 = v27[15];
        if ( v34 >= 3 )
        {
          if ( pvGetEngRbrush((struct _BRUSHOBJ *)v49) && *(_DWORD *)(v11[1].flColorType + 20) >= 4u )
          {
            v47 = rop4 != 61680;
            goto LABEL_74;
          }
LABEL_90:
          if ( psoSrc )
          {
            v62 = (int)*(psoSrc != 0 ? &psoSrc->hdev : (HDEV *)28);
            PDEVOBJ::vSync((PDEVOBJ *)&v62, psoSrc, 0, 0);
          }
          v59 = 0;
          LOBYTE(v60) = 0;
          v38 = gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)];
          v61 = 0;
          if ( (v38 & 0xD4) != 0 && *(psoSrc != 0 ? &psoSrc->iType : (USHORT *)64) )
          {
            v39 = (int)*(psoSrc != 0 ? &psoSrc->hdev : (HDEV *)28);
            v40 = prclTrg->bottom - prclTrg->top;
            v41 = prclTrg->right - prclTrg->left;
            v64[0] = p_lDelta[15];
            v42 = (int)*(psoSrc != 0 ? &psoSrc[1].hsurf : (HSURF *)72) & 0x40000;
            v66[3] = v40;
            v64[5] = v42;
            v64[2] = v40;
            v66[0] = 0;
            v66[1] = 0;
            v66[2] = v41;
            v64[3] = 0;
            v64[1] = v41;
            v64[4] = 0;
            if ( !SURFMEM::bCreateDIB((SURFMEM *)&v59, (struct _DEVBITMAPINFO *)v64, 0, 0, 0, 0, 0, 0, 1, 0, 0)
              || !*(_DWORD *)(v39 + 1976) )
            {
LABEL_102:
              SURFMEM::~SURFMEM((SURFMEM *)&v59);
              return v12;
            }
            v43 = SURFACE::pSurfobj(v59);
            v44(v43, psoSrc, 0, pxlo, v66, pptlSrc);
            v11 = v56;
            v52 = &gptl00;
            v54 = xloIdent;
          }
          if ( (unsigned int)p_lDelta[15] <= 6 || !bUMPDSecurityGateEx() )
          {
            BltLnk(
              v63,
              (struct SURFACE *)pco,
              (struct SURFACE *)v54,
              (struct ECLIPOBJ *)prclTrg,
              (struct XLATE *)v52,
              v57,
              (struct _POINTL *)v11,
              pptlBrush,
              (struct _BRUSHOBJ *)rop4,
              v49,
              (unsigned int)v50);
            SURFMEM::~SURFMEM((SURFMEM *)&v59);
            return 1;
          }
          if ( gfUMPDDebug )
            _DbgPrint(
              "clientcore\\windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:Invalid pSurfDst->iFormat()\n",
              492);
          v12 = 1;
          goto LABEL_102;
        }
        if ( v34 == 2 )
        {
          if ( v28 != 61680 )
            goto LABEL_90;
          if ( !pvGetEngRbrush((struct _BRUSHOBJ *)v49) )
            goto LABEL_90;
          v35 = v11[1].flColorType;
          if ( *(_DWORD *)(v35 + 20) != 8 || *(_DWORD *)(v35 + 24) != 8 )
            goto LABEL_90;
          v48 = (struct _BRUSHOBJ *)vPatCpyRect4_8x8;
        }
        else
        {
          if ( v34 != 1 || v28 != 61680 || !pvGetEngRbrush((struct _BRUSHOBJ *)v49) )
            goto LABEL_90;
          v36 = v11[1].flColorType;
          v37 = *(_DWORD *)(v36 + 20);
          if ( v37 != 8 )
          {
            if ( v37 == 6 && *(_DWORD *)(v36 + 24) == 6 )
            {
              vDIBnPatBltSrccopy6x6(
                (struct SURFACE *)prclTrg,
                (struct _CLIPOBJ *)v11,
                (struct _RECTL *)pptlBrush,
                *(struct _BRUSHOBJ **)(v36 + 20),
                v49,
                v50);
              return 1;
            }
            goto LABEL_90;
          }
          if ( *(_DWORD *)(v36 + 24) != 8 )
            goto LABEL_90;
          v48 = (struct _BRUSHOBJ *)vPatCpyRect1_8x8;
        }
LABEL_67:
        vDIBPatBltSrccopy8x8(
          (struct SURFACE *)prclTrg,
          (struct _CLIPOBJ *)v11,
          (struct _RECTL *)pptlBrush,
          v48,
          v49,
          v50);
        return 1;
      }
    }
    vDIBSolidBlt((struct SURFACE *)pco, (struct _RECTL *)-(rop4 != 0), 0, (unsigned int)v49, (int)v50);
    return 1;
  }
  return SimBitBlt(v58, pco, pxlo, prclTrg, pptlSrc, v57, pbo, pptlBrush, rop4, 0);
}
