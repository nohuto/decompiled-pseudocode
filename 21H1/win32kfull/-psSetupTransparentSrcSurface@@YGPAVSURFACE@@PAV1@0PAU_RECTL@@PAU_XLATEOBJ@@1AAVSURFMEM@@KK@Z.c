/*
 * XREFs of ?psSetupTransparentSrcSurface@@YGPAVSURFACE@@PAV1@0PAU_RECTL@@PAU_XLATEOBJ@@1AAVSURFMEM@@KK@Z @ 0x5317A
 * Callers:
 *     _EngAlphaBlend@28 @ 0x526B0 (_EngAlphaBlend@28.c)
 *     _EngTransparentBlt@32 @ 0xCAC46 (_EngTransparentBlt@32.c)
 * Callees:
 *     _EngStretchBlt@44 @ 0x4BF90 (_EngStretchBlt@44.c)
 *     ?bIsSourceBGRA@@YGHPAVSURFACE@@@Z @ 0x99BF2 (-bIsSourceBGRA@@YGHPAVSURFACE@@@Z.c)
 *     ??0ECLIPOBJ@@QAE@XZ @ 0xF5B49 (--0ECLIPOBJ@@QAE@XZ.c)
 *     ??1RGNMEMOBJTMP@@QAE@XZ @ 0xF5B78 (--1RGNMEMOBJTMP@@QAE@XZ.c)
 *     ??0RGNMEMOBJTMP@@QAE@H@Z @ 0xF6A4A (--0RGNMEMOBJTMP@@QAE@H@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

LONG *__userpurge psSetupTransparentSrcSurface@<eax>(
        int a1@<edx>,
        LONG *a2@<ecx>,
        XLATEOBJ **a3,
        XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _XLATEOBJ *a6,
        struct _RECTL *a7,
        int a8,
        unsigned int a9,
        unsigned int a10)
{
  LONG *v10; // edi
  bool v11; // al
  XLATEOBJ *v12; // eax
  LONG v13; // edx
  LONG v14; // eax
  LONG v15; // eax
  LONG v16; // eax
  int v17; // eax
  int v18; // eax
  XLATEOBJ *v19; // esi
  int *v21; // eax
  int v22; // esi
  int v23; // ecx
  XLATEOBJ *v24; // esi
  SURFMEM *v25; // edx
  int IsSourceBGRA; // edi
  SURFMEM *v27; // edx
  int v28; // ecx
  int v29; // edx
  int v30; // edi
  SURFMEM *v31; // esi
  ULONG iUniq; // ecx
  int v33; // ecx
  RECTL *v34; // esi
  RECTL *v35; // edi
  SURFMEM *v36; // edx
  SURFMEM *v37; // esi
  int v38; // edx
  size_t v39; // ecx
  int *v40; // esi
  size_t j; // edx
  _BYTE *v42; // edi
  size_t v43; // ecx
  _BYTE *v44; // ecx
  int v45; // edx
  _BYTE *v46; // ecx
  _WORD *v47; // esi
  size_t i; // edx
  void *v49; // eax
  LONG v50; // ecx
  LONG v51; // eax
  int v52; // edi
  XLATEOBJ *v53; // esi
  LONG v54; // esi
  int *v55; // eax
  SURFMEM *v56; // edx
  RECTL *v57; // edi
  struct SURFACE *v58; // [esp+0h] [ebp-17Ch]
  XLATEOBJ *v59; // [esp+1Ch] [ebp-160h]
  LONG top; // [esp+20h] [ebp-15Ch]
  LONG bottom; // [esp+24h] [ebp-158h]
  POINTL pptlHTOrg; // [esp+28h] [ebp-154h] BYREF
  int v63; // [esp+30h] [ebp-14Ch]
  int v64; // [esp+34h] [ebp-148h] BYREF
  size_t v65; // [esp+38h] [ebp-144h]
  RECTL *v66; // [esp+3Ch] [ebp-140h]
  int v67; // [esp+40h] [ebp-13Ch]
  int v68; // [esp+44h] [ebp-138h]
  int v69; // [esp+48h] [ebp-134h]
  struct _XLATEOBJ *v70; // [esp+4Ch] [ebp-130h]
  struct REGION *v71[2]; // [esp+50h] [ebp-12Ch] BYREF
  LONG left; // [esp+58h] [ebp-124h]
  int v73; // [esp+5Ch] [ebp-120h]
  _BYTE *v74; // [esp+60h] [ebp-11Ch]
  int v75; // [esp+64h] [ebp-118h]
  int v76; // [esp+68h] [ebp-114h]
  LONG v77; // [esp+6Ch] [ebp-110h]
  XLATEOBJ *v78; // [esp+70h] [ebp-10Ch]
  LONG *v79; // [esp+74h] [ebp-108h]
  LONG *v80; // [esp+78h] [ebp-104h]
  size_t v81; // [esp+7Ch] [ebp-100h]
  LONG v82; // [esp+80h] [ebp-FCh] BYREF
  XLATEOBJ *pxlo; // [esp+84h] [ebp-F8h]
  CLIPOBJ *pco; // [esp+88h] [ebp-F4h]
  RECTL *DIB; // [esp+8Ch] [ebp-F0h]
  RECTL *prclSrc; // [esp+90h] [ebp-ECh]
  int v87; // [esp+94h] [ebp-E8h]
  int v88; // [esp+98h] [ebp-E4h]
  int v89; // [esp+9Ch] [ebp-E0h]
  LONG right; // [esp+A0h] [ebp-DCh]
  int v91; // [esp+A4h] [ebp-D8h]
  RECTL *v92; // [esp+A8h] [ebp-D4h]
  LONG v93; // [esp+ACh] [ebp-D0h]
  SURFMEM *v94; // [esp+B0h] [ebp-CCh]
  _BYTE v95[124]; // [esp+B4h] [ebp-C8h] BYREF
  struct _RECTL v96; // [esp+130h] [ebp-4Ch] BYREF
  RECTL v97; // [esp+140h] [ebp-3Ch] BYREF
  RECTL prclDest; // [esp+150h] [ebp-2Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+164h] [ebp-18h]

  v91 = a1;
  v10 = a2;
  v80 = a2;
  v92 = (RECTL *)a3;
  prclSrc = a5;
  pptlHTOrg.y = (LONG)a2;
  v79 = a2;
  v71[1] = (struct REGION *)a3;
  pxlo = a4;
  pco = (CLIPOBJ *)a5;
  v94 = (SURFMEM *)a6;
  v70 = a6;
  v88 = (int)a3[2];
  v73 = (int)*a3;
  v87 = v88 - v73;
  v59 = a3[3];
  v63 = (int)a3[1];
  DIB = (RECTL *)((char *)v59 - v63);
  right = a5->right;
  left = a5->left;
  bottom = a5->bottom;
  top = a5->top;
  v11 = v88 - v73 != right - left || DIB != (RECTL *)(bottom - top);
  v93 = 0;
  v89 = 0;
  if ( !a2 || !v91 )
    return 0;
  if ( v11 )
  {
    v67 = 0;
    v21 = (int *)a2[22];
    v75 = 0;
    v76 = 0;
    v22 = v91;
    v23 = *(_DWORD *)(v91 + 32);
    v91 = v23;
    v77 = v23;
    v24 = *(XLATEOBJ **)(v22 + 36);
    v78 = v24;
    if ( v73 > 0 )
      v75 = v73;
    v25 = v94;
    if ( v63 > 0 )
    {
      v76 = v63;
      v25 = v94;
    }
    if ( v23 > v88 )
    {
      v23 = v88;
      v91 = v88;
      v77 = v88;
    }
    if ( (int)v24 > (int)v59 )
    {
      v24 = v59;
      v78 = v59;
    }
    if ( v75 >= v23 || v76 >= (int)v24 )
      return 0;
    if ( left < 0 || right > v10[8] || top < 0 || bottom > v10[9] )
      v89 = 1;
    if ( a7 )
    {
      v65 = v87;
      v66 = DIB;
      v64 = v10[15];
      v69 = v10[18] & 0x40000;
      v68 = 0;
      if ( v21 )
        v68 = *v21;
      DIB = (RECTL *)SURFMEM::bCreateDIB(v25, (struct _DEVBITMAPINFO *)&v64, 0, 0, 0, 0, 0, 0, 1, 0, 0);
      ms_exc.registration.TryLevel = 1;
      if ( DIB && v89 )
      {
        v81 = 0;
        v37 = v94;
        v38 = *(_DWORD *)v94;
        v39 = *(_DWORD *)(*(_DWORD *)v94 + 40);
        v87 = v39;
        switch ( v10[15] )
        {
          case 1:
            v49 = *(void **)(v38 + 44);
            if ( a8 )
              memset(v49, 255, v39);
            else
              memset(v49, 0, v39);
            break;
          case 2:
            memset(*(void **)(v38 + 44), a8 | (16 * a8), v87);
            break;
          case 3:
            memset(*(void **)(v38 + 44), a8, v39);
            break;
          case 4:
            v47 = *(_WORD **)(v38 + 44);
            for ( i = 0; ; ++i )
            {
              v81 = i;
              if ( i >= v39 >> 1 )
                break;
              *v47++ = a8;
            }
            break;
          case 5:
            v42 = *(_BYTE **)(v38 + 48);
            v43 = (size_t)&v42[*(_DWORD *)(v38 + 52) * *(_DWORD *)(v38 + 36)];
            v87 = v43;
            while ( v42 != (_BYTE *)v43 )
            {
              v44 = v42;
              v45 = 3 * *(_DWORD *)(v38 + 32) - 2;
              while ( 1 )
              {
                v74 = v44;
                if ( v44 >= &v42[v45] )
                  break;
                *v44 = a8;
                v46 = v44 + 1;
                *v46++ = BYTE1(a8);
                v74 = v46;
                *v46 = BYTE2(a8);
                v44 = v46 + 1;
              }
              v38 = *(_DWORD *)v37;
              v42 += *(_DWORD *)(*(_DWORD *)v37 + 52);
              v43 = v87;
            }
            break;
          case 6:
            v40 = *(int **)(v38 + 44);
            for ( j = 0; ; ++j )
            {
              v81 = j;
              if ( j >= v39 >> 2 )
                break;
              *v40++ = a8;
            }
            break;
        }
      }
    }
    else
    {
      IsSourceBGRA = bIsSourceBGRA(v58);
      v93 = IsSourceBGRA;
      v65 = v91 - v75;
      v66 = (RECTL *)((char *)v24 - v76);
      v64 = 6;
      v69 = v79[18] & 0x40000;
      v68 = *(_DWORD *)gppalRGB;
      DIB = (RECTL *)SURFMEM::bCreateDIB(v27, (struct _DEVBITMAPINFO *)&v64, 0, 0, 0, 0, 0, 0, 1, 0, 0);
      if ( !DIB || !v89 || IsSourceBGRA )
      {
LABEL_46:
        if ( DIB )
        {
          pptlHTOrg.x = 0;
          pptlHTOrg.y = 0;
          prclDest = *v92;
          ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v95);
          pco = 0;
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v71, v28);
          if ( !v71[0] )
            goto LABEL_56;
          prclDest.left -= v75;
          v29 = prclDest.right - v75;
          prclDest.right -= v75;
          v30 = prclDest.top - v76;
          prclDest.top -= v76;
          prclDest.bottom -= v76;
          v31 = v94;
          if ( prclDest.left < 0
            || (iUniq = *(_DWORD *)v94, v29 > *(_DWORD *)(*(_DWORD *)v94 + 32))
            || v30 < 0
            || prclDest.bottom > *(_DWORD *)(iUniq + 36) )
          {
            v50 = *(_DWORD *)(*(_DWORD *)v94 + 36);
            v51 = *(_DWORD *)(*(_DWORD *)v94 + 32);
            v96.left = 0;
            v96.top = 0;
            v96.right = v51;
            v96.bottom = v50;
            RGNOBJ::vSet((RGNOBJ *)v71, &v96);
            pco = (CLIPOBJ *)v95;
            v97 = prclDest;
            XCLIPOBJ::vSetup((XCLIPOBJ *)v95, v71[0], (struct ERECTL *)&v97, 0);
            iUniq = v70->iUniq;
          }
          *(_DWORD *)(iUniq + 28) = v80[7];
          v33 = *(_DWORD *)v31;
          v34 = prclSrc;
          if ( EngStretchBlt(
                 v33 != 0 ? (SURFOBJ *)(v33 + 16) : 0,
                 (SURFOBJ *)(v79 + 4),
                 0,
                 pco,
                 pxlo,
                 0,
                 &pptlHTOrg,
                 &prclDest,
                 prclSrc,
                 0,
                 3u) )
          {
            v34->left = 0;
            v34->right = v65;
            v34->top = 0;
            v34->bottom = (LONG)v66;
            v35 = v92;
            v92->left = v75;
            v35 = (RECTL *)((char *)v35 + 4);
            v35->left = v76;
            v35 = (RECTL *)((char *)v35 + 4);
            v35->left = v77;
            v35->top = (LONG)v78;
            v36 = v94;
            if ( !v93 && !a7 )
            {
              v52 = *(_DWORD *)v94;
              v53 = *(XLATEOBJ **)(*(_DWORD *)v94 + 48);
              pxlo = (XLATEOBJ *)((char *)v53 + *(_DWORD *)(*(_DWORD *)v94 + 52) * *(_DWORD *)(*(_DWORD *)v94 + 36));
              while ( 1 )
              {
                v93 = (LONG)v53;
                if ( v53 == pxlo )
                  break;
                v89 = (int)v53;
                v70 = (XLATEOBJ *)((char *)v53 + 4 * *(_DWORD *)(v52 + 32));
                while ( (struct _XLATEOBJ *)v89 != v70 )
                {
                  ms_exc.registration.TryLevel = 2;
                  *(_DWORD *)v89 ^= 0xFF000000;
                  ms_exc.registration.TryLevel = -2;
                  v89 += 4;
                }
                v36 = v94;
                v52 = *(_DWORD *)v94;
                v53 = (XLATEOBJ *)((char *)v53 + *(_DWORD *)(*(_DWORD *)v94 + 52));
              }
            }
            v10 = *(LONG **)v36;
          }
          else
          {
LABEL_56:
            v10 = 0;
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v71);
          return v10;
        }
        return 0;
      }
      ms_exc.registration.TryLevel = 0;
      RtlFillMemoryUlong(*(PVOID *)(*(_DWORD *)v94 + 44), *(_DWORD *)(*(_DWORD *)v94 + 40), 0xFF000000);
    }
    ms_exc.registration.TryLevel = -2;
    goto LABEL_46;
  }
  if ( left < 0 )
  {
    *a3 = (XLATEOBJ *)(v73 - left);
    a5->left = 0;
    right = a5->right;
    v12 = a3[2];
  }
  else
  {
    v12 = (XLATEOBJ *)v88;
  }
  v13 = a2[8];
  if ( right > v13 )
  {
    a3[2] = (XLATEOBJ *)((char *)v12 + v13 - right);
    a5->right = a2[8];
  }
  v14 = a5->top;
  if ( v14 < 0 )
  {
    a3[1] = (XLATEOBJ *)((char *)a3[1] - v14);
    a5->top = 0;
  }
  v93 = a5->bottom;
  v15 = a2[9];
  if ( v93 > v15 )
  {
    a3[3] = (XLATEOBJ *)((char *)a3[3] + v15 - v93);
    a5->bottom = a2[9];
  }
  if ( (int)*a3 < 0 )
  {
    a5->left -= (LONG)*a3;
    *a3 = 0;
  }
  v93 = (LONG)a3[2];
  v16 = *(_DWORD *)(v91 + 32);
  if ( v93 > v16 )
  {
    a5->right += v16 - v93;
    a3[2] = *(XLATEOBJ **)(v91 + 32);
  }
  v17 = (int)a3[1];
  if ( v17 < 0 )
  {
    a5->top -= v17;
    a3[1] = 0;
  }
  v18 = (int)a3[3];
  v92 = (RECTL *)v18;
  v88 = *(_DWORD *)(v91 + 36);
  if ( v18 > v88 )
  {
    v88 -= v18;
    a5->bottom += v88;
    v18 = *(_DWORD *)(v91 + 36);
    v92 = (RECTL *)v18;
    a3[3] = (XLATEOBJ *)v18;
  }
  v93 = (LONG)*a3;
  v19 = a3[2];
  right = (LONG)v19;
  if ( v93 >= (int)v19 || (pxlo = a3[1], v10 = v80, (int)pxlo >= v18) )
  {
    *a3 = v19;
    return v10;
  }
  if ( *((_WORD *)v80 + 32) )
  {
    v67 = 0;
    v54 = v80[7];
    v55 = (int *)v80[22];
    right -= v93;
    v92 = (RECTL *)((char *)v92 - (int)pxlo);
    v65 = right;
    v66 = v92;
    v64 = v80[15];
    v69 = v80[18] & 0x40000;
    v68 = 0;
    if ( v55 )
      v68 = *v55;
    if ( SURFMEM::bCreateDIB(v94, (struct _DEVBITMAPINFO *)&v64, 0, 0, 0, 0, 0, 0, 1, 0, 0) )
    {
      prclDest.left = 0;
      prclDest.right = right;
      prclDest.top = 0;
      prclDest.bottom = (LONG)v92;
      v56 = v94;
      *(_DWORD *)(*(_DWORD *)v94 + 28) = v10[7];
      v82 = prclSrc->left;
      pxlo = (XLATEOBJ *)prclSrc->top;
      if ( (v10[18] & 0x400) != 0 )
        (*(void (__stdcall **)(int, LONG *, _DWORD, _DWORD, RECTL *, LONG *))(v54 + 1976))(
          *(_DWORD *)v56 != 0 ? *(_DWORD *)v56 + 16 : 0,
          v10 + 4,
          0,
          0,
          &prclDest,
          &v82);
      else
        EngCopyBits(
          *(_DWORD *)v56 != 0 ? (SURFOBJ *)(*(_DWORD *)v56 + 16) : 0,
          (SURFOBJ *)(v10 + 4),
          0,
          0,
          &prclDest,
          (POINTL *)&v82);
      v57 = prclSrc;
      prclSrc->left = prclDest.left;
      v57 = (RECTL *)((char *)v57 + 4);
      v57->left = prclDest.top;
      v57 = (RECTL *)((char *)v57 + 4);
      v57->left = prclDest.right;
      v57->top = prclDest.bottom;
      return *(LONG **)v94;
    }
    return 0;
  }
  return v10;
}
