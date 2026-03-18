/*
 * XREFs of _SimBitBlt@48 @ 0x1D49E6
 * Callers:
 *     _EngBitBlt@44 @ 0x53EF2 (_EngBitBlt@44.c)
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 * Callees:
 *     _EngBitBlt@44 @ 0x53EF2 (_EngBitBlt@44.c)
 *     ?pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ @ 0x55814 (-pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ.c)
 *     ?bUMPDSecurityGateEx@@YGHXZ @ 0x9591E (-bUMPDSecurityGateEx@@YGHXZ.c)
 *     ?SETFLAG@@YGXHACKK@Z @ 0x9DB80 (-SETFLAG@@YGXHACKK@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QAEXH@Z @ 0x1D48D3 (-vUnLock@DEVLOCKBLTOBJ@@QAEXH@Z.c)
 */

int __fastcall SimBitBlt(
        SURFOBJ *a1,
        SURFOBJ *a2,
        SURFOBJ *a3,
        CLIPOBJ *a4,
        XLATEOBJ *a5,
        RECTL *prclTrg,
        POINTL *pptlSrc,
        POINTL *pptlMask,
        BRUSHOBJ *a9,
        POINTL *a10,
        ROP4 a11,
        DEVLOCKBLTOBJ *a12)
{
  POINTL *v12; // edx
  char v13; // bl
  BOOL (__stdcall *v14)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // eax
  int v15; // ebx
  __int16 v17; // cx
  int v18; // ecx
  LONG v19; // eax
  LONG v20; // edx
  int v21; // ecx
  POINTL *v22; // eax
  LONG y; // ecx
  LONG x; // edx
  int v25; // edi
  int v26; // esi
  POINTL *v27; // ecx
  LONG v28; // edx
  LONG v29; // edx
  LONG v30; // ecx
  BOOL (__stdcall *v31)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // esi
  LONG v32; // eax
  int v33; // eax
  struct _SURFOBJ *v34; // eax
  void (__stdcall *v35)(struct _SURFOBJ *, SURFOBJ *, _DWORD, XLATEOBJ *, RECTL *, LONG *); // edx
  SURFOBJ *v36; // eax
  LONG v37; // edi
  int v38; // ecx
  LONG *v39; // edi
  int v40; // eax
  struct _SURFOBJ *v41; // eax
  void (__stdcall *v42)(struct _SURFOBJ *, SURFOBJ *, _DWORD, XLATEOBJ *const, RECTL *, _DWORD *); // edx
  SURFOBJ *v43; // eax
  struct _SURFOBJ *v44; // eax
  SURFOBJ *v46; // [esp-28h] [ebp-110h]
  SURFOBJ *v47; // [esp-24h] [ebp-10Ch]
  XLATEOBJ *v48; // [esp-1Ch] [ebp-104h]
  SURFOBJ *v49; // [esp-14h] [ebp-FCh]
  SURFOBJ *v50; // [esp-14h] [ebp-FCh]
  POINTL *v51; // [esp-14h] [ebp-FCh]
  XLATEOBJ *v52; // [esp-Ch] [ebp-F4h]
  BRUSHOBJ *v53; // [esp-Ch] [ebp-F4h]
  ROP4 v54; // [esp-4h] [ebp-ECh]
  volatile unsigned int *v55; // [esp+0h] [ebp-E8h]
  unsigned int v56; // [esp+4h] [ebp-E4h]
  _DWORD v57[6]; // [esp+10h] [ebp-D8h] BYREF
  _DWORD v58[6]; // [esp+28h] [ebp-C0h] BYREF
  _DWORD v59[2]; // [esp+40h] [ebp-A8h] BYREF
  DEVLOCKBLTOBJ *v60; // [esp+48h] [ebp-A0h]
  SURFACE *v61; // [esp+4Ch] [ebp-9Ch] BYREF
  char v62; // [esp+50h] [ebp-98h]
  int v63; // [esp+54h] [ebp-94h]
  POINTL v64; // [esp+58h] [ebp-90h] BYREF
  SURFACE *v65; // [esp+60h] [ebp-88h] BYREF
  char v66; // [esp+64h] [ebp-84h]
  int v67; // [esp+68h] [ebp-80h]
  LONG *v68; // [esp+6Ch] [ebp-7Ch]
  int v69; // [esp+70h] [ebp-78h]
  POINTL *v70; // [esp+74h] [ebp-74h]
  POINTL *v71; // [esp+78h] [ebp-70h]
  CLIPOBJ *pco; // [esp+7Ch] [ebp-6Ch]
  SURFOBJ *psoMask; // [esp+80h] [ebp-68h]
  BRUSHOBJ *pbo; // [esp+84h] [ebp-64h]
  int v75; // [esp+88h] [ebp-60h]
  POINTL v76; // [esp+8Ch] [ebp-5Ch] BYREF
  LONG v77; // [esp+94h] [ebp-54h] BYREF
  int v78; // [esp+98h] [ebp-50h]
  ROP4 rop4; // [esp+9Ch] [ebp-4Ch]
  POINTL *pptlBrush; // [esp+A0h] [ebp-48h]
  LONG *v81; // [esp+A4h] [ebp-44h]
  BOOL (__stdcall *v82)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // [esp+A8h] [ebp-40h]
  LONG cx; // [esp+ACh] [ebp-3Ch]
  POINTL *v84; // [esp+B0h] [ebp-38h]
  LONG v85; // [esp+B4h] [ebp-34h]
  SURFOBJ *psoTrg; // [esp+B8h] [ebp-30h]
  XLATEOBJ *pxlo; // [esp+BCh] [ebp-2Ch]
  SURFOBJ *psoSrc; // [esp+C0h] [ebp-28h]
  RECTL v89; // [esp+C4h] [ebp-24h] BYREF
  int left; // [esp+D4h] [ebp-14h] BYREF
  LONG top; // [esp+D8h] [ebp-10h]
  LONG right; // [esp+DCh] [ebp-Ch]
  POINTL *bottom; // [esp+E0h] [ebp-8h]

  psoSrc = a2;
  psoTrg = a1;
  psoMask = a3;
  pco = a4;
  pxlo = a5;
  pbo = a9;
  pptlBrush = a10;
  rop4 = a11;
  v60 = a12;
  v12 = pptlSrc;
  v13 = gajRop3[(unsigned __int8)a11] | gajRop3[BYTE1(a11)];
  v71 = pptlSrc;
  v70 = pptlMask;
  v75 = v13 & 0xD4;
  v68 = psoTrg != 0 ? &psoTrg[-1].lDelta : 0;
  v14 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))v68[7];
  v81 = psoSrc != 0 ? &psoSrc[-1].lDelta : 0;
  v85 = *((unsigned __int16 *)v68 + 32);
  v15 = 0;
  v82 = v14;
  if ( !(_WORD)v85 )
  {
    if ( !v75 || (v12 = v71, !*((_WORD *)v81 + 32)) )
    {
      if ( !psoMask )
      {
        if ( (*((_DWORD *)v14 + 6) & 0x8000) != 0 )
          return EngBitBlt(psoTrg, psoSrc, 0, pco, pxlo, prclTrg, v12, pptlMask, pbo, pptlBrush, rop4);
        if ( (*(psoTrg != 0 ? (_BYTE *)&psoTrg[1].hsurf : (_BYTE *)72) & 1) != 0 )
          return (*((int (__stdcall **)(SURFOBJ *, SURFOBJ *, _DWORD, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))v14
                  + 493))(
                   psoTrg,
                   psoSrc,
                   0,
                   pco,
                   pxlo,
                   prclTrg,
                   v12,
                   pptlMask,
                   pbo,
                   pptlBrush,
                   rop4);
        return EngBitBlt(psoTrg, psoSrc, 0, pco, pxlo, prclTrg, v12, pptlMask, pbo, pptlBrush, rop4);
      }
    }
  }
  if ( v14 )
  {
    SETFLAG((volatile signed __int32 *)v14 + 6, 1, 0x40000, v55, v56);
    v17 = *(psoTrg != 0 ? &psoTrg->iType : (USHORT *)64);
    v14 = v82;
  }
  else
  {
    v17 = v85;
  }
  if ( v17 == 1 && v14 && ((unsigned int)&loc_20000 & *((_DWORD *)v14 + 6)) != 0 )
  {
    v18 = *((_DWORD *)v14 + 459);
    v19 = *((_DWORD *)v14 + 460);
    v20 = v18 + (psoTrg != 0 ? &psoTrg->sizlBitmap : (SIZEL *)32)->cx;
    v69 = v18;
    v21 = *(psoTrg != 0 ? &psoTrg->sizlBitmap.cy : (LONG *)36);
    v85 = v19;
    cx = v20;
    v84 = (POINTL *)(v19 + v21);
  }
  else
  {
    cx = (psoTrg != 0 ? &psoTrg->sizlBitmap : (SIZEL *)32)->cx;
    v22 = (POINTL *)*(psoTrg != 0 ? &psoTrg->sizlBitmap.cy : (LONG *)36);
    v85 = 0;
    v84 = v22;
    v69 = 0;
  }
  v76.x = 0;
  v76.y = 0;
  y = 0;
  x = 0;
  v77 = 0;
  left = prclTrg->left;
  v78 = 0;
  top = prclTrg->top;
  right = prclTrg->right;
  bottom = (POINTL *)prclTrg->bottom;
  if ( v75 )
  {
    x = v71->x;
    y = v71->y;
    v77 = v71->x;
    v78 = y;
  }
  if ( psoMask )
  {
    if ( bUMPDSecurityGateEx() && !v70 )
    {
      if ( gfUMPDDebug )
        _DbgPrint("clientcore\\windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:SimBitBlt:pptlMask == NULL\n", 708);
      return v15;
    }
    x = v77;
    v76 = *v70;
    y = v78;
  }
  v25 = top;
  if ( top < v85 )
  {
    v78 = v85 - top + y;
    v76.y += v85 - top;
    v25 = v85;
    top = v85;
  }
  v26 = left;
  if ( left < v69 )
  {
    v77 = v69 - left + x;
    v76.x += v69 - left;
    v26 = v69;
    left = v69;
  }
  v27 = bottom;
  if ( (int)bottom > (int)v84 )
  {
    v27 = v84;
    bottom = v84;
  }
  v28 = right;
  if ( right > cx )
  {
    v28 = cx;
    right = cx;
  }
  if ( v25 >= (int)v27 || v26 >= v28 )
    return 1;
  v89.left = 0;
  v84 = (POINTL *)&v77;
  v29 = v28 - v26;
  v30 = (LONG)v27 - v25;
  v31 = v82;
  v89.top = 0;
  v89.right = v29;
  v32 = v68[15];
  v89.bottom = v30;
  cx = v30;
  if ( v32 == *((_DWORD *)v82 + 351) )
  {
    v61 = 0;
    v62 = 0;
    v63 = 0;
    v82 = EngCopyBits;
    if ( v75 && *((_WORD *)v81 + 32) )
    {
      v58[0] = *((_DWORD *)v31 + 351);
      v58[2] = v30;
      v33 = v81[18] & 0x40000;
      v58[3] = 0;
      v58[5] = v33;
      v58[1] = v29;
      v58[4] = 0;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v61, (struct _DEVBITMAPINFO *)v58, 0, 0, 0, 0, 0, 0, 1, 0, 0) )
      {
LABEL_54:
        SURFMEM::~SURFMEM((SURFMEM *)&v61);
        return v15;
      }
      v52 = pxlo;
      v49 = psoSrc;
      v34 = SURFACE::pSurfobj(v61);
      v35(v34, v49, 0, v52, &v89, &v77);
      v84 = &gptl00;
      v36 = SURFACE::pSurfobj(v61);
      v37 = v89.bottom;
      v29 = v89.right;
      psoSrc = v36;
      pxlo = xloIdent;
    }
    else
    {
      v37 = cx;
    }
    v57[3] = 0;
    v38 = *((_DWORD *)v31 + 351);
    v57[2] = v37;
    v39 = v68;
    v57[0] = v38;
    v40 = v68[18] & 0x40000;
    v57[1] = v29;
    v57[5] = v40;
    v57[4] = 0;
    v65 = 0;
    v66 = 0;
    v67 = 0;
    SURFMEM::bCreateDIB((SURFMEM *)&v65, (struct _DEVBITMAPINFO *)v57, 0, 0, 0, 0, 0, 0, 1, 0, 0);
    if ( v65 )
    {
      v59[0] = left;
      v59[1] = top;
      v64.x = 0;
      v64.y = 0;
      if ( pptlBrush )
      {
        v64.x = pptlBrush->x - left;
        v64.y = pptlBrush->y - top;
      }
      if ( *((char *)v31 + 24) < 0 && v60 )
        DEVLOCKBLTOBJ::vUnLock(v60, left);
      v50 = psoTrg;
      v41 = SURFACE::pSurfobj(v65);
      v42(v41, v50, 0, xloIdent, &v89, v59);
      v54 = rop4;
      v53 = pbo;
      v51 = v84;
      v48 = pxlo;
      v47 = psoMask;
      v46 = psoSrc;
      v43 = SURFACE::pSurfobj(v65);
      EngBitBlt(v43, v46, v47, 0, v48, &v89, v51, &v76, v53, &v64, v54);
      ++v39[14];
      if ( (v39[18] & 0x400) != 0 )
        v82 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_DWORD *)v31 + 494);
      v44 = SURFACE::pSurfobj(v65);
      v15 = v82(psoTrg, v44, pco, xloIdent, (RECTL *)&left, &gptl00);
    }
    SURFMEM::~SURFMEM((SURFMEM *)&v65);
    goto LABEL_54;
  }
  return v15;
}
