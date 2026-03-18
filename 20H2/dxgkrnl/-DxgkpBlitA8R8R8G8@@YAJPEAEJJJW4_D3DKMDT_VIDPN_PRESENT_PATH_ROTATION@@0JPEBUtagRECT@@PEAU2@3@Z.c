/*
 * XREFs of ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C01585F4
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00DC870 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C018FE24 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z @ 0x1C022D250 (-DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z.c)
 *     ?DxgkpGetBilinearLineFromSource@@YAXPEAEJJPEAU_PIXEL@@PEAU_UFIXPOINT_PIXEL@@JJJ@Z @ 0x1C022D3C4 (-DxgkpGetBilinearLineFromSource@@YAXPEAEJJPEAU_PIXEL@@PEAU_UFIXPOINT_PIXEL@@JJJ@Z.c)
 */

__int64 __fastcall DxgkpBlitA8R8R8G8(
        unsigned __int8 *a1,
        int a2,
        int a3,
        int a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a5,
        unsigned __int8 *a6,
        int a7,
        const struct tagRECT *a8,
        struct tagRECT *a9,
        struct tagRECT *a10)
{
  int v10; // r12d
  int v11; // r11d
  LONG left; // r15d
  LONG right; // esi
  LONG top; // r8d
  LONG bottom; // r10d
  LONG v18; // r14d
  LONG v19; // r13d
  int v20; // edi
  int v21; // r14d
  int v22; // edi
  int v23; // r10d
  int v24; // eax
  unsigned __int64 v25; // r8
  LONG v26; // ecx
  LONG v27; // r10d
  unsigned __int8 *v28; // r13
  int v29; // ecx
  unsigned __int8 *v30; // rbx
  size_t v31; // r14
  __int64 v32; // rdi
  __int64 v33; // r12
  int v35; // eax
  int v36; // r10d
  unsigned __int8 *v37; // rax
  int v38; // eax
  unsigned __int8 *v39; // r14
  __int64 v40; // r15
  int v41; // r10d
  SIZE_T v42; // rax
  struct _UFIXPOINT_PIXEL *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  int v47; // edi
  __int64 v48; // rax
  int v49; // ecx
  unsigned __int8 *v50; // r10
  struct _UFIXPOINT_PIXEL *v51; // r13
  unsigned __int8 *v52; // rcx
  int v53; // r12d
  struct _UFIXPOINT_PIXEL *v54; // r9
  unsigned int v55; // r8d
  unsigned int *v56; // r11
  int v57; // r10d
  unsigned int v58; // edx
  signed __int64 v59; // r9
  _BYTE *v60; // r8
  unsigned int v61; // ecx
  unsigned int v62; // eax
  unsigned __int8 *v63; // r8
  unsigned __int8 *v64; // r8
  int v65; // eax
  bool v66; // cc
  struct _UFIXPOINT_PIXEL *v67; // rdx
  int *v68; // r11
  int v69; // r9d
  _BYTE *v70; // rdx
  int v71; // eax
  unsigned int v72; // r9d
  _BYTE *v73; // r11
  unsigned int *v74; // rdx
  unsigned int v75; // r10d
  unsigned int v76; // r9d
  signed __int64 v77; // r8
  unsigned int v78; // ecx
  unsigned int v79; // eax
  int v80; // r11d
  int v81; // r15d
  int v82; // r9d
  int v83; // r8d
  _DWORD *v84; // rdx
  unsigned int v85; // eax
  int v86; // r11d
  int v87; // ecx
  int v88; // edx
  unsigned __int8 *v89; // rsi
  int v90; // r9d
  int v91; // ecx
  int v92; // r8d
  struct _UFIXPOINT_PIXEL *v93; // r8
  _DWORD *v94; // rdx
  unsigned int v95; // r9d
  signed __int64 v96; // r10
  int v97; // r15d
  unsigned int v98; // eax
  unsigned int v99; // eax
  _BYTE *v100; // r11
  _DWORD *v101; // rdx
  unsigned int v102; // r9d
  unsigned int v103; // r12d
  signed __int64 v104; // r10
  int v105; // r15d
  unsigned int v106; // eax
  int v107; // eax
  _DWORD *v108; // rdx
  int v109; // r9d
  _BYTE *v110; // rsi
  signed __int64 v111; // r8
  int v112; // ecx
  LONG v113; // [rsp+48h] [rbp-69h]
  unsigned int v114; // [rsp+48h] [rbp-69h]
  int v115; // [rsp+48h] [rbp-69h]
  LONG v116; // [rsp+4Ch] [rbp-65h]
  int v117; // [rsp+4Ch] [rbp-65h]
  int v118; // [rsp+50h] [rbp-61h]
  int v119; // [rsp+54h] [rbp-5Dh]
  int v120; // [rsp+58h] [rbp-59h]
  struct tagRECT v121; // [rsp+60h] [rbp-51h]
  __int64 v122; // [rsp+60h] [rbp-51h]
  unsigned __int8 *v123; // [rsp+60h] [rbp-51h]
  int v124; // [rsp+70h] [rbp-41h]
  LONG v125; // [rsp+74h] [rbp-3Dh]
  int v126; // [rsp+74h] [rbp-3Dh]
  int v127; // [rsp+78h] [rbp-39h]
  unsigned __int8 *v128; // [rsp+80h] [rbp-31h]
  unsigned __int8 *v129; // [rsp+80h] [rbp-31h]
  unsigned __int8 *v130; // [rsp+88h] [rbp-29h]
  int v131; // [rsp+90h] [rbp-21h]
  struct _UFIXPOINT_PIXEL *v132; // [rsp+98h] [rbp-19h]
  struct _UFIXPOINT_PIXEL *v133; // [rsp+A0h] [rbp-11h]
  unsigned int v134; // [rsp+A8h] [rbp-9h]
  int v135; // [rsp+100h] [rbp+4Fh]
  int v136; // [rsp+110h] [rbp+5Fh]
  LONG v137; // [rsp+138h] [rbp+87h]
  int v138; // [rsp+138h] [rbp+87h]

  v136 = a4;
  v135 = a2;
  v10 = a2;
  v11 = a4;
  left = a9->left;
  right = a9->right;
  v137 = left;
  if ( left == right
    || (top = a9->top, bottom = a9->bottom, top == bottom)
    || (v18 = a8->right, v116 = a8->left, a8->left == v18)
    || (v19 = a8->bottom, v113 = a8->top, v113 == v19) )
  {
    DxgkpConvertRects(v10, a3, a5, a8, 1u, a9, a10);
    return 0LL;
  }
  switch ( a5 )
  {
    case D3DKMDT_VPPR_IDENTITY:
      break;
    case D3DKMDT_VPPR_ROTATE90:
      v38 = v10;
      v135 = a3;
      v121.left = a9->top;
      left = v10 - right;
      v20 = v121.left;
      right = v10 - v137;
      v10 = a3;
      a3 = v38;
      a4 = -4;
      v37 = &a1[4 * v38 - 4];
      goto LABEL_21;
    case D3DKMDT_VPPR_ROTATE180:
      v20 = v10 - right;
      left = a3 - bottom;
      right = a3 - top;
      bottom = v10 - v137;
      a4 = -a4;
      v11 = -4;
      v37 = &a1[4 * v10 - 4 + v136 * (a3 - 1)];
      goto LABEL_19;
    case D3DKMDT_VPPR_ROTATE270:
      v35 = v10;
      v135 = a3;
      v10 = a3;
      a4 = 4;
      v11 = -v11;
      v20 = a3 - bottom;
      v36 = a3;
      a3 = v35;
      bottom = v36 - top;
      v37 = &a1[v136 * (v10 - 1)];
LABEL_19:
      v121.left = v20;
LABEL_21:
      v121.top = left;
      *(_QWORD *)&v121.right = __PAIR64__(right, bottom);
      v124 = a4;
      v128 = v37;
      goto LABEL_7;
  }
  v11 = 4;
  v128 = a1;
  v124 = a4;
  v121 = *a9;
  right = HIDWORD(*(unsigned __int128 *)a9);
  bottom = *(_QWORD *)&a9->right;
  left = HIDWORD(*(_QWORD *)&a9->left);
  v20 = (int)*a9;
LABEL_7:
  v21 = v18 - v116;
  v22 = v21 * v20;
  v23 = v21 * bottom;
  v118 = v21;
  v131 = v19 - v113;
  v138 = v11;
  v119 = (v22 - v22 % v10 + v21 - 1) / v21;
  v24 = (v10 + v23 - 1 - (v23 - 1) % v10) / v21;
  v120 = v24;
  v125 = v22 / v10 + v116;
  a10->left = v125;
  v25 = HIDWORD(*(_QWORD *)&v121.left);
  v26 = (v19 - v113) * v121.top / a3 + v113;
  a10->top = v26;
  v27 = (v10 + v23 - 1) / v10 + v116;
  *(_QWORD *)&v121.left = HIDWORD(*(_QWORD *)&v121.right);
  a10->right = v27;
  a10->bottom = v113 + (a3 + (v19 - v113) * v121.bottom - 1) / a3;
  v28 = &a6[4 * v125 + a7 * v26];
  v29 = v21;
  v130 = v28;
  if ( a5 == D3DKMDT_VPPR_IDENTITY && v21 == v10 )
  {
    if ( v131 == a3 )
    {
      v30 = &v128[a4 * (int)v25 + v119 * v11];
      if ( (int)v25 < v121.left )
      {
        v31 = (unsigned int)(4 * (v24 - v119));
        v32 = (unsigned int)(right - v25);
        v33 = a4;
        do
        {
          memmove(v28, v30, v31);
          v28 += a7;
          v30 += v33;
          --v32;
        }
        while ( v32 );
      }
      return 0LL;
    }
  }
  else if ( v131 == a3 )
  {
    v39 = &v128[a4 * left];
    if ( left < right )
    {
      v40 = (unsigned int)(right - left);
      v122 = a4;
      do
      {
        DxgkpGetBilinearLineFromSource(v39, v11, v10, (struct _PIXEL *)v28, 0LL, v29, v119, v120);
        v39 += v122;
        v28 += a7;
        v11 = v138;
        v29 = v118;
        --v40;
      }
      while ( v40 );
    }
    return 0LL;
  }
  v41 = v27 - v125;
  v42 = 16LL * (2 * v41 + 2);
  if ( !is_mul_ok(2 * v41 + 2, 0x10uLL) )
    v42 = -1LL;
  v43 = (struct _UFIXPOINT_PIXEL *)operator new[](v42, 0x4B677844u, PagedPool);
  v47 = 0;
  v133 = v43;
  if ( v43 )
  {
    v49 = a10->right - a10->left;
    v50 = v128;
    v132 = v43;
    v51 = (struct _UFIXPOINT_PIXEL *)((char *)v43 + 16 * v49 + 16);
    *((_OWORD *)v43 + v49) = 0LL;
    *((_OWORD *)v51 + a10->right - a10->left) = 0LL;
    v52 = &v128[v124 * left];
    v129 = v52;
    if ( v131 > a3 )
    {
      v53 = left * v131 % a3;
      if ( v53 )
      {
        DxgkpGetBilinearLineFromSource(&v52[-v124], v138, v135, 0LL, v51, v21, v119, v120);
        v52 = v129;
      }
      DxgkpGetBilinearLineFromSource(v52, v138, v135, 0LL, v133, v21, v119, v120);
      if ( left < right )
      {
        v54 = v132;
        while ( 1 )
        {
          if ( v53 && v53 < a3 )
          {
            v55 = (unsigned __int16)((v53 << 16) / (unsigned int)a3);
            if ( a10->right - a10->left > 0 )
            {
              v56 = (unsigned int *)((char *)v51 + 12);
              v57 = 0;
              v58 = (0x10000 - v55) >> 8;
              v114 = v55 >> 8;
              v59 = v54 - v51;
              v60 = v130 + 2;
              do
              {
                v61 = *(unsigned int *)((char *)v56 + v59);
                ++v57;
                v62 = *v56;
                v56 += 4;
                v60[1] = (v58 * (v61 >> 8) + 0x8000 + v114 * (v62 >> 8)) >> 16;
                *v60 = (v58 * (*(unsigned int *)((char *)v56 + v59 - 20) >> 8) + 0x8000 + v114 * (*(v56 - 5) >> 8)) >> 16;
                v60 += 4;
                *(v60 - 5) = (v58 * (*(unsigned int *)((char *)v56 + v59 - 24) >> 8) + 0x8000 + v114 * (*(v56 - 6) >> 8)) >> 16;
                *(v60 - 6) = (v58 * (*(unsigned int *)((char *)v56 + v59 - 28) >> 8) + 0x8000 + v114 * (*(v56 - 7) >> 8)) >> 16;
              }
              while ( v57 < a10->right - a10->left );
              v54 = v132;
            }
          }
          else if ( a10->right - a10->left > 0 )
          {
            v63 = v130;
            v68 = (int *)((char *)v54 + 8);
            v69 = 0;
            v70 = v130 + 2;
            do
            {
              ++v69;
              v70[1] = (unsigned int)(v68[1] + 0x8000) >> 16;
              v71 = *v68;
              v68 += 4;
              *v70 = (unsigned int)(v71 + 0x8000) >> 16;
              v70 += 4;
              *(v70 - 5) = (unsigned int)(*(v68 - 5) + 0x8000) >> 16;
              *(v70 - 6) = (unsigned int)(*(v68 - 6) + 0x8000) >> 16;
            }
            while ( v69 < a10->right - a10->left );
            v54 = v132;
            goto LABEL_43;
          }
          v63 = v130;
LABEL_43:
          v64 = &v63[a7];
          v65 = v53 - a3 + v131;
          v130 = v64;
          v66 = v53 < a3;
          v53 -= a3;
          if ( v66 )
            v53 = v65;
          if ( v53 < a3 )
          {
            v67 = v51;
            ++left;
            v132 = v51;
            v51 = v54;
            if ( left < right || v53 )
            {
              v129 += v124;
              DxgkpGetBilinearLineFromSource(v129, v138, v135, 0LL, v67, v21, v119, v120);
              v64 = v130;
              v54 = v132;
            }
            else
            {
              v54 = v67;
            }
          }
          if ( left >= right )
            goto LABEL_57;
        }
      }
      v64 = v130;
LABEL_57:
      if ( v53 )
      {
        v72 = (unsigned __int16)((v53 << 16) / a3);
        if ( a10->right - a10->left > 0 )
        {
          v73 = v64 + 2;
          v74 = (unsigned int *)((char *)v51 + 12);
          v75 = (0x10000 - v72) >> 8;
          v76 = v72 >> 8;
          v77 = v132 - v51;
          do
          {
            v78 = *(unsigned int *)((char *)v74 + v77);
            ++v47;
            v79 = *v74;
            v74 += 4;
            v73[1] = (v75 * (v78 >> 8) + 0x8000 + v76 * (v79 >> 8)) >> 16;
            *v73 = (v75 * (*(unsigned int *)((char *)v74 + v77 - 20) >> 8) + 0x8000 + v76 * (*(v74 - 5) >> 8)) >> 16;
            v73 += 4;
            *(v73 - 5) = (v75 * (*(unsigned int *)((char *)v74 + v77 - 24) >> 8) + 0x8000 + v76 * (*(v74 - 6) >> 8)) >> 16;
            *(v73 - 6) = (v75 * (*(unsigned int *)((char *)v74 + v77 - 28) >> 8) + 0x8000 + v76 * (*(v74 - 7) >> 8)) >> 16;
          }
          while ( v47 < a10->right - a10->left );
        }
      }
      goto LABEL_91;
    }
    v134 = (unsigned __int16)((v131 << 16) / a3);
    v80 = (v131 * left - v131 * left % a3 + v131 - 1) / v131;
    v117 = v80;
    v123 = &v50[v80 * v124];
    v126 = (a3 + v131 * right - 1 - (v131 * right - 1) % a3) / v131;
    v115 = v131 * v80 % a3;
    if ( v115 <= 0 )
    {
      memset(v51, 0, 16LL * (a10->right - a10->left));
      v81 = v138;
    }
    else
    {
      v81 = v138;
      DxgkpGetBilinearLineFromSource(&v50[v80 * v124 - v124], v138, v10, 0LL, v51, v21, v119, v120);
      v82 = 0;
      if ( a10->right - a10->left > 0 )
      {
        v83 = (unsigned __int16)((v115 << 16) / a3) >> 8;
        v84 = (_DWORD *)((char *)v51 + 8);
        do
        {
          ++v82;
          v84[1] = v83 * (v84[1] >> 8);
          *v84 = v83 * (*v84 >> 8);
          v85 = *(v84 - 1);
          v84 += 4;
          *(v84 - 5) = v83 * (v85 >> 8);
          *(v84 - 6) = v83 * (*(v84 - 6) >> 8);
        }
        while ( v82 < a10->right - a10->left );
      }
    }
    DxgkpGetBilinearLineFromSource(v123, v81, v10, 0LL, v133, v21, v119, v120);
    v86 = v117;
    if ( v117 >= v126 )
    {
      v89 = v130;
LABEL_87:
      if ( v115 && a10->right - a10->left > 0 )
      {
        v108 = (_DWORD *)((char *)v51 + 12);
        v109 = (unsigned __int16)(((a3 - v115) << 16) / a3) >> 8;
        v110 = v89 + 2;
        v111 = v133 - v51;
        do
        {
          ++v47;
          v112 = *v108 + v109 * (*(_DWORD *)((char *)v108 + v111) >> 8) + 0x8000;
          v108 += 4;
          v110[1] = BYTE2(v112);
          *v110 = (unsigned int)(*(v108 - 5) + v109 * (*(_DWORD *)((char *)v108 + v111 - 20) >> 8) + 0x8000) >> 16;
          v110 += 4;
          *(v110 - 5) = (unsigned int)(*(v108 - 6) + v109 * (*(_DWORD *)((char *)v108 + v111 - 24) >> 8) + 0x8000) >> 16;
          *(v110 - 6) = (unsigned int)(*(v108 - 7) + v109 * (*(_DWORD *)((char *)v108 + v111 - 28) >> 8) + 0x8000) >> 16;
        }
        while ( v47 < a10->right - a10->left );
      }
LABEL_91:
      operator delete[](v133);
      return 0LL;
    }
    v87 = v115 << 16;
    v88 = v115;
    v89 = v130;
    v90 = a3 << 16;
    while ( 1 )
    {
      v88 += v131;
      v91 = (v131 << 16) + v87;
      v92 = a10->right - a10->left;
      v115 = v88;
      v127 = v91;
      if ( v88 >= a3 )
      {
        v115 = v88 - a3;
        v127 = v91 - v90;
        v66 = v92 <= 0;
        v93 = v133;
        v99 = (unsigned __int16)((v91 - v90) / a3);
        if ( !v66 )
        {
          v100 = v89 + 2;
          v101 = (_DWORD *)((char *)v51 + 12);
          v102 = (v134 - v99) >> 8;
          v103 = v99 >> 8;
          v104 = v133 - v51;
          v105 = 0;
          do
          {
            ++v105;
            v100[1] = (*v101 + 0x8000 + v102 * (*(_DWORD *)((char *)v101 + v104) >> 8)) >> 16;
            *v100 = (*(v101 - 1) + 0x8000 + v102 * (*(_DWORD *)((char *)v101 + v104 - 4) >> 8)) >> 16;
            v100 += 4;
            *(v100 - 5) = (*(v101 - 2) + 0x8000 + v102 * (*(_DWORD *)((char *)v101 + v104 - 8) >> 8)) >> 16;
            *(v100 - 6) = (*(v101 - 3) + 0x8000 + v102 * (*(_DWORD *)((char *)v101 + v104 - 12) >> 8)) >> 16;
            *v101 = v103 * (*(_DWORD *)((char *)v101 + v104) >> 8);
            v106 = *(_DWORD *)((char *)v101 + v104 - 4);
            v101 += 4;
            *(v101 - 5) = v103 * (v106 >> 8);
            *(v101 - 6) = v103 * (*(_DWORD *)((char *)v101 + v104 - 24) >> 8);
            *(v101 - 7) = v103 * (*(_DWORD *)((char *)v101 + v104 - 28) >> 8);
          }
          while ( v105 < a10->right - a10->left );
          v10 = v135;
          v81 = v138;
          v86 = v117;
        }
        v89 += a7;
      }
      else
      {
        v66 = v92 <= 0;
        v93 = v133;
        if ( v66 )
          goto LABEL_81;
        v94 = (_DWORD *)((char *)v51 + 12);
        v95 = v134 >> 8;
        v96 = v133 - v51;
        v97 = 0;
        do
        {
          ++v97;
          *v94 += v95 * (*(_DWORD *)((char *)v94 + v96) >> 8);
          v98 = *(_DWORD *)((char *)v94 + v96 - 4);
          v94 += 4;
          *(v94 - 5) += v95 * (v98 >> 8);
          *(v94 - 6) += v95 * (*(_DWORD *)((char *)v94 + v96 - 24) >> 8);
          *(v94 - 7) += v95 * (*(_DWORD *)((char *)v94 + v96 - 28) >> 8);
        }
        while ( v97 < a10->right - a10->left );
        v81 = v138;
      }
      v88 = v115;
LABEL_81:
      v107 = v126;
      v117 = ++v86;
      if ( v86 < v126 || v88 )
      {
        v123 += v124;
        DxgkpGetBilinearLineFromSource(v123, v81, v10, 0LL, v93, v21, v119, v120);
        v88 = v115;
        v86 = v117;
        v107 = v126;
      }
      v87 = v127;
      v90 = a3 << 16;
      if ( v86 >= v107 )
        goto LABEL_87;
    }
  }
  v48 = WdLogNewEntry5_WdLowResource(v44, 0LL, v45, v46);
  *(_QWORD *)(v48 + 24) = -1073741670LL;
  WdLogEvent5_WdLowResource(v48);
  return 3221225626LL;
}
