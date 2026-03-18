/*
 * XREFs of ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1C00D2528
 * Callers:
 *     EngTransparentBlt @ 0x1C00C9450 (EngTransparentBlt.c)
 *     EngAlphaBlend @ 0x1C00D1A90 (EngAlphaBlend.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C001D0B8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     EngStretchBlt @ 0x1C00D2AA0 (EngStretchBlt.c)
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1C00D42EC (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C01598D4 (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@H@Z @ 0x1C015A4C8 (--0RGNMEMOBJTMP@@QEAA@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

struct SURFACE *__fastcall psSetupTransparentSrcSurface(
        struct SURFACE *a1,
        struct SURFACE *a2,
        struct _RECTL *a3,
        struct _XLATEOBJ *a4,
        RECTL *prclSrc,
        struct SURFMEM *a6,
        unsigned int a7,
        unsigned int a8)
{
  struct SURFACE *v9; // rsi
  LONG right; // ecx
  LONG left; // r10d
  LONG v12; // r9d
  LONG v13; // r11d
  int v14; // eax
  bool v15; // al
  LONG v16; // eax
  LONG v17; // eax
  LONG v18; // ecx
  LONG v19; // eax
  LONG v20; // ecx
  LONG v21; // eax
  LONG v22; // eax
  LONG v23; // r13d
  LONG v24; // eax
  LONG v25; // r8d
  LONG v26; // ecx
  LONG v27; // edx
  _QWORD *v29; // rax
  LONG v30; // r8d
  LONG v31; // edi
  LONG v32; // r13d
  LONG v33; // r10d
  int v34; // r8d
  int v35; // r10d
  int DIB; // r13d
  int v37; // edi
  CLIPOBJ *v38; // r13
  int v39; // edx
  int v40; // edx
  int v41; // edi
  int v42; // r8d
  __int64 v43; // rcx
  LONG v44; // edx
  LONG v45; // ecx
  _DWORD *v46; // r8
  unsigned __int64 v47; // rdx
  __int64 v48; // rdi
  size_t v49; // r8
  _DWORD *v50; // rdx
  unsigned int j; // ecx
  _BYTE *v52; // r8
  _BYTE *v53; // r9
  _BYTE *v54; // rdx
  __int64 v55; // rcx
  _BYTE *v56; // rdx
  _WORD *v57; // rdx
  unsigned int i; // ecx
  void *v59; // rcx
  unsigned int v60; // edx
  __int64 v61; // rdi
  RECTL *v62; // rdx
  XLATEOBJ *v63; // r8
  RECTL *v64; // rcx
  struct SURFMEM *v65; // rax
  __int64 v66; // rdi
  __int64 *v67; // rax
  int v68; // r13d
  LONG bottom; // [rsp+60h] [rbp-258h]
  LONG top; // [rsp+64h] [rbp-254h]
  LONG v71; // [rsp+64h] [rbp-254h]
  LONG v72; // [rsp+6Ch] [rbp-24Ch]
  unsigned int v73; // [rsp+6Ch] [rbp-24Ch]
  int v74; // [rsp+6Ch] [rbp-24Ch]
  int IsSourceBGRA; // [rsp+70h] [rbp-248h]
  _DWORD v76[2]; // [rsp+78h] [rbp-240h] BYREF
  LONG v77; // [rsp+80h] [rbp-238h]
  LONG v78; // [rsp+84h] [rbp-234h]
  struct _RECTL *v79; // [rsp+88h] [rbp-230h]
  RECTL *v80; // [rsp+90h] [rbp-228h]
  _DWORD *v81; // [rsp+98h] [rbp-220h]
  POINTL pptlHTOrg; // [rsp+A0h] [rbp-218h] BYREF
  struct SURFACE *v83; // [rsp+A8h] [rbp-210h]
  struct _RECTL v84; // [rsp+B0h] [rbp-208h]
  int v85; // [rsp+C0h] [rbp-1F8h] BYREF
  LONG v86; // [rsp+C4h] [rbp-1F4h]
  LONG v87; // [rsp+C8h] [rbp-1F0h]
  int v88; // [rsp+CCh] [rbp-1ECh]
  __int64 v89; // [rsp+D0h] [rbp-1E8h]
  int v90; // [rsp+D8h] [rbp-1E0h]
  int v91; // [rsp+DCh] [rbp-1DCh]
  _BYTE *v92; // [rsp+E0h] [rbp-1D8h]
  struct SURFMEM *v93; // [rsp+E8h] [rbp-1D0h]
  struct SURFMEM *v94; // [rsp+F0h] [rbp-1C8h]
  XLATEOBJ *pxlo; // [rsp+F8h] [rbp-1C0h]
  unsigned __int64 v96; // [rsp+100h] [rbp-1B8h]
  struct SURFACE *v97; // [rsp+108h] [rbp-1B0h]
  struct REGION *v98[2]; // [rsp+110h] [rbp-1A8h] BYREF
  _DWORD v99[4]; // [rsp+120h] [rbp-198h] BYREF
  __int64 v100; // [rsp+130h] [rbp-188h]
  int v101; // [rsp+138h] [rbp-180h]
  int v102; // [rsp+13Ch] [rbp-17Ch]
  _BYTE *v103; // [rsp+140h] [rbp-178h]
  _WORD *v104; // [rsp+148h] [rbp-170h]
  _DWORD *v105; // [rsp+150h] [rbp-168h]
  _DWORD *v106; // [rsp+158h] [rbp-160h]
  __int64 v107; // [rsp+160h] [rbp-158h]
  _QWORD *v108; // [rsp+168h] [rbp-150h]
  void *v109; // [rsp+170h] [rbp-148h]
  void *v110; // [rsp+178h] [rbp-140h]
  __int64 v111; // [rsp+180h] [rbp-138h]
  RECTL prclDest; // [rsp+190h] [rbp-128h] BYREF
  RECTL v113; // [rsp+1A0h] [rbp-118h] BYREF
  struct _RECTL v114; // [rsp+1B0h] [rbp-108h] BYREF
  RECTL v115; // [rsp+1C0h] [rbp-F8h] BYREF
  _BYTE v116[160]; // [rsp+1D0h] [rbp-E8h] BYREF

  v9 = a1;
  v97 = a1;
  v83 = a1;
  v79 = a3;
  pxlo = a4;
  v80 = prclSrc;
  v93 = a6;
  v94 = a6;
  right = a3->right;
  left = a3->left;
  v78 = right - a3->left;
  bottom = a3->bottom;
  top = a3->top;
  v72 = bottom - top;
  v12 = prclSrc->right;
  v13 = prclSrc->left;
  v14 = v12 - prclSrc->left;
  v77 = prclSrc->bottom;
  pptlHTOrg.x = prclSrc->top;
  v15 = v78 != v14 || bottom - top != v77 - pptlHTOrg.x;
  IsSourceBGRA = 0;
  LODWORD(v81) = 0;
  if ( v9 && a2 )
  {
    if ( !v15 )
    {
      if ( v13 < 0 )
      {
        a3->left = left - v13;
        prclSrc->left = 0;
        v12 = prclSrc->right;
        right = a3->right;
      }
      v16 = *((_DWORD *)v9 + 14);
      if ( v12 > v16 )
      {
        a3->right = v16 + right - v12;
        prclSrc->right = *((_DWORD *)v9 + 14);
      }
      v17 = prclSrc->top;
      if ( v17 < 0 )
      {
        a3->top -= v17;
        prclSrc->top = 0;
      }
      v18 = prclSrc->bottom;
      v19 = *((_DWORD *)v9 + 15);
      if ( v18 > v19 )
      {
        a3->bottom += v19 - v18;
        prclSrc->bottom = *((_DWORD *)v9 + 15);
      }
      if ( a3->left < 0 )
      {
        prclSrc->left -= a3->left;
        a3->left = 0;
      }
      v20 = a3->right;
      v21 = *((_DWORD *)a2 + 14);
      if ( v20 > v21 )
      {
        prclSrc->right += v21 - v20;
        a3->right = *((_DWORD *)a2 + 14);
      }
      v22 = a3->top;
      if ( v22 < 0 )
      {
        prclSrc->top -= v22;
        a3->top = 0;
      }
      v23 = a3->bottom;
      v24 = *((_DWORD *)a2 + 15);
      if ( v23 > v24 )
      {
        prclSrc->bottom += v24 - v23;
        v23 = *((_DWORD *)a2 + 15);
        a3->bottom = v23;
      }
      v25 = a3->left;
      v26 = a3->right;
      if ( a3->left >= v26 || (v27 = a3->top, v27 >= v23) )
      {
        a3->left = v26;
        return v9;
      }
      if ( !*((_WORD *)v9 + 50) )
        return v9;
      v99[3] = 0;
      v102 = 0;
      v66 = *((_QWORD *)v9 + 6);
      v67 = (__int64 *)*((_QWORD *)v9 + 16);
      v74 = v26 - v25;
      v68 = v23 - v27;
      v99[1] = v26 - v25;
      v99[2] = v68;
      v99[0] = *((_DWORD *)v9 + 24);
      v101 = *((_DWORD *)v9 + 28) & 0x40000;
      v100 = 0LL;
      if ( v67 )
        v100 = *v67;
      if ( SURFMEM::bCreateDIB(a6, (struct _DEVBITMAPINFO *)v99, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
        *(_QWORD *)&v113.left = 0LL;
        *(_QWORD *)&v113.right = __PAIR64__(v68, v74);
        *(_QWORD *)(*(_QWORD *)a6 + 48LL) = *((_QWORD *)v9 + 6);
        v76[0] = prclSrc->left;
        v76[1] = prclSrc->top;
        if ( (*((_DWORD *)v9 + 28) & 0x400) != 0 )
          (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, RECTL *, _DWORD *))(v66 + 2840))(
            (*(_QWORD *)a6 + 24LL) & -(__int64)(*(_QWORD *)a6 != 0LL),
            (__int64)v9 + 24,
            0LL,
            0LL,
            &v113,
            v76);
        else
          ((void (__fastcall *)(__int64, char *, _QWORD, _QWORD, RECTL *, _DWORD *))EngCopyBits)(
            (*(_QWORD *)a6 + 24LL) & -(__int64)(*(_QWORD *)a6 != 0LL),
            (char *)v9 + 24,
            0LL,
            0LL,
            &v113,
            v76);
        *prclSrc = v113;
        return *(struct SURFACE **)a6;
      }
      return 0LL;
    }
    v88 = 0;
    v91 = 0;
    v29 = (_QWORD *)*((_QWORD *)v9 + 16);
    v108 = v29;
    v30 = *((_DWORD *)a2 + 14);
    v31 = *((_DWORD *)a2 + 15);
    v32 = 0;
    if ( left > 0 )
      v32 = left;
    v76[0] = v32;
    v84.left = v32;
    v33 = 0;
    if ( top > 0 )
      v33 = top;
    v71 = v33;
    v84.top = v33;
    if ( v30 > right )
      v30 = right;
    v84.right = v30;
    if ( v31 > bottom )
      v31 = bottom;
    v84.bottom = v31;
    if ( v32 >= v30 || v33 >= v31 )
      return 0LL;
    if ( v13 < 0 || v12 > *((_DWORD *)v9 + 14) || pptlHTOrg.x < 0 || v77 > *((_DWORD *)v9 + 15) )
      LODWORD(v81) = 1;
    if ( !a7 )
    {
      IsSourceBGRA = bIsSourceBGRA(v9);
      v86 = v34 - v32;
      v87 = v31 - v35;
      v85 = 6;
      v90 = *((_DWORD *)v9 + 28) & 0x40000;
      v89 = *(_QWORD *)gppalRGB;
      DIB = SURFMEM::bCreateDIB(a6, (struct _DEVBITMAPINFO *)&v85, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !DIB || !(_DWORD)v81 || IsSourceBGRA )
      {
        v37 = v76[0];
        goto LABEL_46;
      }
      v73 = *(_DWORD *)(*(_QWORD *)a6 + 64LL);
      v46 = *(_DWORD **)(*(_QWORD *)a6 + 72LL);
      v81 = v46;
      v105 = v46;
      v47 = (unsigned __int64)v73 >> 2;
      v96 = v47;
      if ( !v47 )
        goto LABEL_65;
      if ( ((unsigned __int8)v46 & 4) != 0 )
      {
        *v46 = -16777216;
        v96 = --v47;
        if ( !v47 )
        {
LABEL_65:
          v37 = v76[0];
          goto LABEL_46;
        }
        v105 = ++v46;
      }
      memset64(v46, 0xFF000000FF000000uLL, v47 >> 1);
      if ( (v47 & 1) != 0 )
        v46[v47 - 1] = -16777216;
      goto LABEL_65;
    }
    v86 = v78;
    v87 = v72;
    v85 = *((_DWORD *)v9 + 24);
    v90 = *((_DWORD *)v9 + 28) & 0x40000;
    v89 = 0LL;
    if ( v29 )
      v89 = *v29;
    DIB = SURFMEM::bCreateDIB(a6, (struct _DEVBITMAPINFO *)&v85, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( DIB && (_DWORD)v81 )
    {
      v48 = *(_QWORD *)a6;
      v49 = *(unsigned int *)(*(_QWORD *)a6 + 64LL);
      switch ( *((_DWORD *)v9 + 24) )
      {
        case 1:
          v59 = *(void **)(v48 + 72);
          if ( a8 )
          {
            v111 = *(_QWORD *)(v48 + 72);
            v60 = 255;
          }
          else
          {
            v107 = *(_QWORD *)(v48 + 72);
            v60 = 0;
          }
          break;
        case 2:
          v60 = a8 | (16 * a8);
          v59 = *(void **)(v48 + 72);
          v110 = v59;
          break;
        case 3:
          v59 = *(void **)(v48 + 72);
          v109 = v59;
          v60 = a8;
          break;
        default:
          switch ( *((_DWORD *)v9 + 24) )
          {
            case 4:
              v57 = *(_WORD **)(v48 + 72);
              v104 = v57;
              for ( i = 0; i < (unsigned int)v49 >> 1; ++i )
              {
                *v57++ = a8;
                v104 = v57;
              }
              break;
            case 5:
              v52 = *(_BYTE **)(v48 + 80);
              v103 = v52;
              v78 = *(_DWORD *)(v48 + 88);
              v53 = &v52[v78 * *(_DWORD *)(v48 + 60)];
              while ( v52 != v53 )
              {
                v54 = v52;
                v92 = v52;
                v55 = 3 * *(_DWORD *)(v48 + 56) - 2LL;
                while ( v54 < &v52[v55] )
                {
                  *v54 = a8;
                  v56 = v54 + 1;
                  *v56++ = BYTE1(a8);
                  *v56 = BYTE2(a8);
                  v54 = v56 + 1;
                  v92 = v54;
                }
                v48 = *(_QWORD *)a6;
                v77 = *(_DWORD *)(*(_QWORD *)a6 + 88LL);
                v52 += v77;
                v103 = v52;
              }
              break;
            case 6:
              v50 = *(_DWORD **)(v48 + 72);
              v106 = v50;
              for ( j = 0; j < (unsigned int)v49 >> 2; ++j )
              {
                *v50++ = a8;
                v106 = v50;
              }
              break;
          }
          goto LABEL_94;
      }
      memset(v59, v60, v49);
    }
LABEL_94:
    v37 = v76[0];
LABEL_46:
    if ( DIB )
    {
      pptlHTOrg = 0LL;
      prclDest = *a3;
      ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v116);
      v38 = 0LL;
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v98, v39);
      if ( !v98[0] )
        goto LABEL_102;
      prclDest.left -= v37;
      v40 = prclDest.right - v37;
      prclDest.right -= v37;
      v41 = prclDest.top - v71;
      prclDest.top -= v71;
      v42 = prclDest.bottom - v71;
      prclDest.bottom -= v71;
      if ( prclDest.left < 0
        || (v43 = *(_QWORD *)a6, v40 > *(_DWORD *)(*(_QWORD *)a6 + 56LL))
        || v41 < 0
        || v42 > *(_DWORD *)(v43 + 60) )
      {
        v44 = *(_DWORD *)(*(_QWORD *)a6 + 60LL);
        v45 = *(_DWORD *)(*(_QWORD *)a6 + 56LL);
        *(_QWORD *)&v114.left = 0LL;
        v114.right = v45;
        v114.bottom = v44;
        RGNOBJ::vSet((RGNOBJ *)v98, &v114);
        v38 = (CLIPOBJ *)v116;
        v115 = prclDest;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v116, v98[0], (struct ERECTL *)&v115, 0);
        v43 = *(_QWORD *)v94;
      }
      *(_QWORD *)(v43 + 48) = *((_QWORD *)v9 + 6);
      if ( EngStretchBlt(
             (SURFOBJ *)((*(_QWORD *)a6 + 24LL) & -(__int64)(*(_QWORD *)a6 != 0LL)),
             (SURFOBJ *)((char *)v83 + 24),
             0LL,
             v38,
             pxlo,
             0LL,
             &pptlHTOrg,
             &prclDest,
             prclSrc,
             0LL,
             3u) )
      {
        *(_QWORD *)&prclSrc->left = 0LL;
        prclSrc->right = v86;
        prclSrc->bottom = v87;
        *a3 = v84;
        if ( !IsSourceBGRA && !a7 )
        {
          v61 = *(_QWORD *)a6;
          v62 = *(RECTL **)(*(_QWORD *)a6 + 80LL);
          v63 = (XLATEOBJ *)((char *)v62 + *(_DWORD *)(*(_QWORD *)a6 + 88LL) * *(_DWORD *)(*(_QWORD *)a6 + 60LL));
          pxlo = v63;
          while ( 1 )
          {
            v79 = v62;
            if ( v62 == (RECTL *)v63 )
              break;
            v64 = v62;
            v80 = v62;
            v65 = (struct SURFMEM *)(&v62->left + *(int *)(v61 + 56));
            v94 = v65;
            while ( v64 != (RECTL *)v65 )
            {
              v64->left ^= 0xFF000000;
              v64 = (RECTL *)((char *)v64 + 4);
              v80 = v64;
            }
            v61 = *(_QWORD *)a6;
            v62 = (RECTL *)((char *)v62 + *(int *)(*(_QWORD *)a6 + 88LL));
          }
        }
        v9 = *(struct SURFACE **)a6;
      }
      else
      {
LABEL_102:
        v9 = 0LL;
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v98);
      return v9;
    }
    return 0LL;
  }
  return 0LL;
}
