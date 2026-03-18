/*
 * XREFs of ?EngRealizeBrush@@YGHPAU_BRUSHOBJ@@PAU_SURFOBJ@@11PAU_XLATEOBJ@@K@Z @ 0x961A2
 * Callers:
 *     <none>
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     _EngStretchBlt@44 @ 0x4BF90 (_EngStretchBlt@44.c)
 *     _EngCopyBits@24 @ 0x519F0 (_EngCopyBits@24.c)
 *     ?pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ @ 0x55814 (-pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z @ 0x5D130 (-bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QAEXXZ @ 0x794B6 (-vAltUnlock@EXLATEOBJ@@QAEXXZ.c)
 *     ?pDevHTInfo@PDEVOBJ@@QAEPAXXZ @ 0x96990 (-pDevHTInfo@PDEVOBJ@@QAEPAXXZ.c)
 *     ?vRelease@HTSEMOBJ@@QAEXXZ @ 0x969F4 (-vRelease@HTSEMOBJ@@QAEXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QAEHPAUtagCOLORADJUSTMENT@@@Z @ 0x96B14 (-bEnableHalftone@PDEVOBJ@@QAEHPAUtagCOLORADJUSTMENT@@@Z.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _EngHTBlt@48 @ 0x2271FF (_EngHTBlt@48.c)
 */

int __stdcall EngRealizeBrush(
        struct _BRUSHOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4,
        struct _XLATEOBJ *a5,
        unsigned int a6)
{
  LONG v6; // ebx
  _WORD *v7; // esi
  LONG v8; // edi
  LONG v9; // ecx
  LONG v10; // ebx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  LONG v16; // eax
  LONG v17; // ecx
  signed int v18; // esi
  char *v19; // esi
  size_t v20; // ecx
  bool v21; // zf
  LONG v22; // eax
  XLATEOBJ *v23; // ecx
  LONG v24; // edx
  size_t iSolidColor; // eax
  XLATEOBJ *v27; // ecx
  size_t v28; // edx
  char v29; // dl
  LONG v30; // ecx
  struct _BRUSHOBJ *v31; // edi
  ULONG v32; // ecx
  ULONG v33; // eax
  LONG *v34; // eax
  unsigned int v35; // edi
  XLATEOBJ *v36; // ecx
  struct _SURFOBJ *v37; // eax
  int v38; // edx
  LONG v39; // esi
  SURFOBJ *v40; // edi
  SURFOBJ *v41; // eax
  LONG right; // ecx
  SURFOBJ *v43; // esi
  SURFOBJ *v44; // eax
  LONG v45; // ecx
  void (__thiscall *v46)(SURFMEM *__hidden); // edi
  LONG v47; // ecx
  LONG v48; // ebx
  int v49; // eax
  LONG v50; // edi
  SURFOBJ *v51; // esi
  SURFOBJ *v52; // eax
  LONG v53; // ecx
  void *v54; // [esp+18h] [ebp-E4h]
  XLATEOBJ *v55; // [esp+1Ch] [ebp-E0h]
  XLATEOBJ *v56; // [esp+20h] [ebp-DCh]
  XLATEOBJ *v57; // [esp+30h] [ebp-CCh]
  int v58; // [esp+38h] [ebp-C4h]
  ULONG *v59; // [esp+3Ch] [ebp-C0h]
  ULONG *v60; // [esp+3Ch] [ebp-C0h]
  unsigned int v61; // [esp+3Ch] [ebp-C0h]
  ULONG *v62; // [esp+3Ch] [ebp-C0h]
  unsigned int v63; // [esp+3Ch] [ebp-C0h]
  unsigned int *v64; // [esp+40h] [ebp-BCh]
  unsigned int *v65; // [esp+40h] [ebp-BCh]
  unsigned int v66; // [esp+48h] [ebp-B4h] BYREF
  XLATEOBJ *pxlo; // [esp+4Ch] [ebp-B0h] BYREF
  unsigned int v68; // [esp+50h] [ebp-ACh]
  int v69; // [esp+54h] [ebp-A8h]
  LONG *v70; // [esp+58h] [ebp-A4h]
  XLATEOBJ *v71; // [esp+5Ch] [ebp-A0h]
  int v72; // [esp+60h] [ebp-9Ch] BYREF
  size_t Size[2]; // [esp+64h] [ebp-98h] BYREF
  struct _BRUSHOBJ *v74; // [esp+6Ch] [ebp-90h]
  int v75; // [esp+70h] [ebp-8Ch]
  LONG v76; // [esp+74h] [ebp-88h]
  LONG v77; // [esp+78h] [ebp-84h] BYREF
  LONG v78; // [esp+7Ch] [ebp-80h]
  LONG v79; // [esp+80h] [ebp-7Ch]
  LONG v80; // [esp+84h] [ebp-78h]
  LONG *v81; // [esp+88h] [ebp-74h]
  POINTL pptlHTOrg; // [esp+8Ch] [ebp-70h] BYREF
  int v83; // [esp+94h] [ebp-68h]
  SURFACE *v84; // [esp+98h] [ebp-64h] BYREF
  int v85; // [esp+9Ch] [ebp-60h]
  int v86; // [esp+A0h] [ebp-5Ch]
  unsigned int flColorType; // [esp+A4h] [ebp-58h] BYREF
  ULONG v88; // [esp+A8h] [ebp-54h]
  LONG *v89; // [esp+ACh] [ebp-50h]
  int v90; // [esp+B0h] [ebp-4Ch]
  POINTL pptlSrc; // [esp+B4h] [ebp-48h] BYREF
  _DWORD v92[6]; // [esp+BCh] [ebp-40h] BYREF
  LONG v93; // [esp+D4h] [ebp-28h]
  RECTL prclDest; // [esp+D8h] [ebp-24h] BYREF
  RECTL prclSrc; // [esp+E8h] [ebp-14h] BYREF

  v74 = a1;
  v71 = a5;
  v72 = 1;
  v89 = a2 != 0 ? &a2[-1].lDelta : 0;
  v6 = v89[15];
  v70 = a3 != 0 ? &a3[-1].lDelta : 0;
  v78 = v6;
  v7 = 0;
  v66 = 0;
  v68 = 0;
  v90 = 0;
  v76 = 0;
  v80 = 0;
  v79 = 0;
  pptlSrc.x = 0;
  pptlSrc.y = 0;
  memset(&prclDest, 0, sizeof(prclDest));
  v81 = a4 != 0 ? &a4[-1].lDelta : 0;
  v75 = 0;
  memset(v92, 0, sizeof(v92));
  v8 = v70[8];
  pxlo = (XLATEOBJ *)v70[9];
  v93 = v8;
  v77 = v89[7];
  GreAcquireSemaphore(_ghsemHT);
  if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v77) || PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v77, 0) )
    v7 = PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v77);
  v9 = v6;
  v10 = 8;
  v11 = v9 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          if ( v14 != 1 )
          {
            v15 = 32;
            v69 = 32;
            v10 = v8;
            goto LABEL_30;
          }
          v58 = 24;
        }
        else
        {
          v58 = 16;
        }
        v15 = v58;
      }
      else
      {
        v15 = 8;
      }
      v69 = v15;
      v10 = (v8 + 7) & 0xFFFFFFFC;
    }
    else
    {
      v15 = 4;
      v69 = 4;
      if ( v8 == 8 )
        goto LABEL_30;
      v10 = (v8 + 15) & 0xFFFFFFF8;
    }
  }
  else
  {
    v15 = 1;
    v69 = 1;
    if ( v8 != 32 && v8 != 16 && v8 != 8 )
    {
      v10 = (v8 + 63) & 0xFFFFFFE0;
      goto LABEL_29;
    }
    v10 = 32;
    if ( v7 )
    {
      switch ( v7[2] )
      {
        case 0xA:
          v10 = 160;
          break;
        case 0xC:
          v10 = 96;
          break;
        case 0xE:
          v10 = 224;
          break;
        default:
          goto LABEL_29;
      }
      v75 = 1;
    }
  }
LABEL_29:
  if ( v10 < v8 )
    goto LABEL_54;
LABEL_30:
  if ( ULongLongToULong((unsigned int)v10 * (unsigned __int64)(unsigned int)v15, v59) < 0 )
    goto LABEL_54;
  flColorType = v68 >> 3;
  if ( ULongLongToULong((v68 >> 3) * (unsigned __int64)(unsigned int)pxlo, v60) < 0
    || (ULongAdd(v69, 0x44u, (int *)&v66, v61, v64) & 0x80000000) != 0 )
  {
    goto LABEL_54;
  }
  if ( v81 )
  {
    v16 = v81[8];
    v17 = v81[9];
    v76 = v16;
    v80 = v17;
    if ( v16 == 32 || v16 == 16 || v16 == 8 )
      v18 = 32;
    else
      v18 = (v16 + 63) & 0xFFFFFFE0;
    v79 = v18;
    if ( v18 < v16 )
      goto LABEL_54;
    v68 = 0;
    v90 = v18 >> 3;
    if ( ULongLongToULong((unsigned int)(v18 >> 3) * (unsigned __int64)(unsigned int)v17, v62) < 0
      || (ULongAdd(v68, v66, (int *)&v66, v63, v65) & 0x80000000) != 0 )
    {
      goto LABEL_54;
    }
  }
  Size[0] = 0;
  if ( (ULongAdd(v66, 0x40u, (int *)Size, (unsigned int)v62, v65) & 0x80000000) != 0 )
    goto LABEL_54;
  if ( !gpCachedEngbrush
    || (v19 = (char *)_InterlockedExchange((volatile __int32 *)gpCachedEngbrush, 0), (v68 = (unsigned int)v19) == 0) )
  {
LABEL_48:
    v19 = (char *)PALLOCMEM2(Size[0], 1919051079, 1);
    v68 = (unsigned int)v19;
    if ( v19 )
    {
      v20 = Size[0];
      goto LABEL_50;
    }
LABEL_54:
    HTSEMOBJ::vRelease((HTSEMOBJ *)&v72);
    return 0;
  }
  v20 = Size[0];
  if ( Size[0] <= v66 || *((_DWORD *)v19 + 1) < Size[0] )
  {
    Win32FreePool(v19);
    goto LABEL_48;
  }
LABEL_50:
  v21 = v75 == 0;
  v74[1].flColorType = (FLONG)v19;
  *((_DWORD *)v19 + 7) = flColorType;
  v22 = v10;
  *((_DWORD *)v19 + 1) = v20;
  *((_DWORD *)v19 + 4) = v10;
  if ( v21 )
    v22 = v8;
  v23 = pxlo;
  v24 = v78;
  *((_DWORD *)v19 + 5) = v22;
  *((_DWORD *)v19 + 8) = v19 + 64;
  *((_DWORD *)v19 + 6) = v23;
  *((_DWORD *)v19 + 15) = v24;
  v92[2] = v23;
  v92[4] = 0;
  v92[5] = 1;
  v84 = 0;
  LOBYTE(v85) = 0;
  v86 = 0;
  v92[0] = v24;
  v92[1] = v10;
  SURFMEM::bCreateDIB((SURFMEM *)&v84, (struct _DEVBITMAPINFO *)v92, *((void **)v19 + 8), 0, 0, 0, 0, 0, 1, 0, 0);
  if ( !v84 )
  {
    SURFMEM::~SURFMEM((SURFMEM *)&v84);
    goto LABEL_54;
  }
  prclDest.bottom = (LONG)pxlo;
  prclDest.right = v8;
  iSolidColor = v74[3].iSolidColor;
  pxlo = (XLATEOBJ *)v74[2].flColorType;
  Size[0] = iSolidColor;
  HTSEMOBJ::vRelease((HTSEMOBJ *)&v72);
  if ( v78 == 1 )
  {
    if ( a6 < 0xC )
      goto LABEL_90;
    v27 = pxlo;
    v28 = Size[0];
    if ( pxlo != (XLATEOBJ *)Size[0] )
      goto LABEL_64;
  }
  else
  {
    v27 = pxlo;
    v28 = Size[0];
  }
  if ( v78 == 2
    && (v74[4].iSolidColor & 5) != 0
    && (v27 != (XLATEOBJ *)v28 || ((unsigned int)&loc_20000 & (unsigned int)v74[6].pvRbrush) == 0) )
  {
LABEL_64:
    v29 = 0;
    prclSrc.left = prclDest.left;
    v30 = v89[7];
    Size[1] = 0;
    prclSrc.top = prclDest.top;
    Size[0] = 0;
    pptlHTOrg.x = 0;
    pptlHTOrg.y = 0;
    prclSrc.right = prclDest.right;
    pxlo = 0;
    v66 = 0;
    prclSrc.bottom = prclDest.bottom;
    v31 = v74;
    *((_DWORD *)v84 + 7) = v30;
    if ( a6 >= 6 )
    {
      if ( ((unsigned int)&loc_20000 & (unsigned int)v31[6].pvRbrush) == 0 )
      {
        v34 = v70;
        v35 = 0;
        goto LABEL_77;
      }
    }
    else
    {
      v29 = 1;
    }
    if ( (v31[4].iSolidColor & 5) != 0
      && ((v32 = v31[3].iSolidColor, !v29)
        ? (flColorType = v31[2].flColorType, v88 = v32)
        : (v33 = v31[1].iSolidColor, flColorType = v31[3].iSolidColor, v88 = v33),
          PALMEMOBJ::bCreatePalette((PALMEMOBJ *)Size, 1u, 2u, &flColorType, 0, 0, 0, 0x400u, 1)) )
    {
      v21 = EXLATEOBJ::bInitXlateObj(
              (int *)&pxlo,
              v31[3].flColorType,
              v31[4].iSolidColor,
              (_DWORD *)Size[0],
              *(_DWORD **)(v31[4].flColorType + 88),
              (int)v31[5].pvRbrush,
              (int)v31[5].pvRbrush,
              v31[2].flColorType,
              v31[3].iSolidColor,
              0xFFFFFF,
              0) == 0;
      v34 = v70;
      if ( !v21 )
      {
        v35 = v70[22];
        v36 = pxlo;
        v70[22] = 0;
        v71 = v36;
        v66 = v35;
        goto LABEL_78;
      }
    }
    else
    {
      v34 = v70;
    }
    v35 = v66;
LABEL_77:
    v36 = v71;
LABEL_78:
    if ( v78 == 1 && v75 )
    {
      prclDest.right = v10;
      v55 = v36;
      v37 = SURFACE::pSurfobj(v84);
      EngHTBlt(v37, v38, 0, 0, v55, 0, &pptlHTOrg, &prclDest, &prclSrc, 0, 64, 0);
    }
    else if ( prclDest.left != v10 )
    {
      v39 = v93;
      v40 = (SURFOBJ *)(v34 + 4);
      do
      {
        v56 = v36;
        v41 = SURFACE::pSurfobj(v84);
        EngStretchBlt(v41, v40, 0, 0, v56, 0, &pptlHTOrg, &prclDest, &prclSrc, 0, 4u);
        right = prclDest.right;
        prclDest.left = prclDest.right;
        prclDest.right += v39;
        if ( prclDest.right > v10 )
          prclDest.right = v10;
        v21 = right == v10;
        v36 = v71;
      }
      while ( !v21 );
      v35 = v66;
    }
    if ( v35 )
      v70[22] = v35;
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)Size);
    goto LABEL_95;
  }
LABEL_90:
  if ( prclDest.left == v10 )
    goto LABEL_96;
  v43 = (SURFOBJ *)(v70 + 4);
  do
  {
    v57 = v71;
    v44 = SURFACE::pSurfobj(v84);
    EngCopyBits(v44, v43, 0, v57, &prclDest, &pptlSrc);
    v45 = prclDest.right;
    prclDest.left = prclDest.right;
    prclDest.right += v8;
    if ( prclDest.right > v10 )
      prclDest.right = v10;
  }
  while ( v45 != v10 );
LABEL_95:
  v19 = (char *)v68;
LABEL_96:
  GreAcquireSemaphore(_ghsemHT);
  v46 = SURFMEM::~SURFMEM;
  if ( v81 )
  {
    *((_DWORD *)v19 + 13) = v90;
    v47 = v80;
    v48 = v79;
    *((_DWORD *)v19 + 10) = v76;
    v49 = v69 + 64;
    *((_DWORD *)v19 + 11) = v47;
    *((_DWORD *)v19 + 9) = v48;
    *((_DWORD *)v19 + 12) = &v19[v49];
    v92[2] = v47;
    v92[4] = 0;
    v92[0] = 1;
    v92[1] = v48;
    v92[5] = 1;
    v54 = (void *)*((_DWORD *)v19 + 12);
    pptlHTOrg.x = 0;
    LOBYTE(pptlHTOrg.y) = 0;
    v83 = 0;
    SURFMEM::bCreateDIB((SURFMEM *)&pptlHTOrg, (struct _DEVBITMAPINFO *)v92, v54, 0, 0, 0, 0, 0, 1, 0, 0);
    if ( !pptlHTOrg.x )
    {
      SURFMEM::~SURFMEM((SURFMEM *)&pptlHTOrg);
      SURFMEM::~SURFMEM((SURFMEM *)&v84);
      goto LABEL_54;
    }
    pptlSrc.x = 0;
    pptlSrc.y = 0;
    prclDest.left = 0;
    prclDest.top = 0;
    prclDest.right = v76;
    prclDest.bottom = v80;
    HTSEMOBJ::vRelease((HTSEMOBJ *)&v72);
    if ( prclDest.left != v48 )
    {
      v50 = v76;
      v51 = (SURFOBJ *)(v81 + 4);
      do
      {
        v52 = SURFACE::pSurfobj((SURFACE *)pptlHTOrg.x);
        EngCopyBits(v52, v51, 0, 0, &prclDest, &pptlSrc);
        v53 = prclDest.right;
        prclDest.left = prclDest.right;
        prclDest.right += v50;
        if ( prclDest.right > v48 )
          prclDest.right = v48;
      }
      while ( v53 != v48 );
      v46 = SURFMEM::~SURFMEM;
    }
    GreAcquireSemaphore(_ghsemHT);
    v46((SURFMEM *)&pptlHTOrg);
  }
  else
  {
    *((_DWORD *)v19 + 12) = 0;
  }
  v46((SURFMEM *)&v84);
  HTSEMOBJ::vRelease((HTSEMOBJ *)&v72);
  return 1;
}
