/*
 * XREFs of ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C008A030
 * Callers:
 *     EngBitBlt @ 0x1C0088370 (EngBitBlt.c)
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1C0089310 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C0087EF8 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1C008A870 (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C008B520 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C008BCC0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C008BDE8 (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     EngCopyBits @ 0x1C009C350 (EngCopyBits.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

__int64 __fastcall BltLnk(
        struct SURFACE *a1,
        struct SURFACE *a2,
        struct SURFACE *a3,
        struct ECLIPOBJ *a4,
        XLATEOBJ *a5,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  struct _RECTL *v11; // r13
  XLATEOBJ *v13; // rbx
  struct SURFACE *v14; // r8
  struct _BRUSHOBJ *v15; // rdi
  struct _RECTL v16; // xmm0
  struct SURFACE *v17; // r9
  unsigned int v18; // ebx
  int v19; // r10d
  char v20; // r12
  char v21; // r15
  char v22; // si
  char v23; // r14
  int v24; // r11d
  int v25; // edx
  LONG y; // ecx
  int v27; // eax
  unsigned int v28; // r9d
  int v29; // r10d
  __int64 v30; // rsi
  struct _POINTL *v31; // rdx
  XCLIPOBJ *v32; // r10
  struct _RECTL v33; // xmm0
  int v34; // r14d
  unsigned int v35; // r14d
  LONG left; // eax
  __int64 v37; // rdi
  LONG *v38; // r12
  LONG v39; // ecx
  LONG right; // esi
  LONG v41; // r8d
  LONG v42; // eax
  LONG v43; // eax
  LONG bottom; // edx
  int v45; // r15d
  struct _BRUSHOBJ *EngRbrush; // rax
  ULONG iSolidColor; // ecx
  int v49; // ecx
  struct SURFACE *v50; // r14
  unsigned int v51; // ecx
  int x; // r10d
  int v53; // r8d
  int v54; // r9d
  int v55; // eax
  int v56; // edx
  int v57; // edx
  int v58; // edx
  int v59; // edx
  LONG top; // r10d
  int v61; // eax
  int v62; // ecx
  LONG v63; // eax
  int v64; // r9d
  int v65; // ecx
  unsigned int v66; // r10d
  signed int v67; // r8d
  int flColorType; // edi
  unsigned __int8 v69; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v70; // [rsp+61h] [rbp-9Fh]
  int v71; // [rsp+64h] [rbp-9Ch]
  int v72; // [rsp+68h] [rbp-98h]
  int v73; // [rsp+68h] [rbp-98h]
  unsigned int v74; // [rsp+70h] [rbp-90h]
  POINTL pptlSrc; // [rsp+78h] [rbp-88h] BYREF
  BOOL v76; // [rsp+80h] [rbp-80h]
  struct SURFACE *v77; // [rsp+88h] [rbp-78h]
  struct _POINTL *v78; // [rsp+90h] [rbp-70h]
  __int64 v79; // [rsp+98h] [rbp-68h]
  BOOL v80; // [rsp+A0h] [rbp-60h]
  __int64 v81; // [rsp+A4h] [rbp-5Ch]
  BOOL v82; // [rsp+ACh] [rbp-54h]
  struct SURFACE *v83; // [rsp+B0h] [rbp-50h]
  XCLIPOBJ *v84; // [rsp+B8h] [rbp-48h]
  __int64 v85; // [rsp+C0h] [rbp-40h] BYREF
  char v86; // [rsp+C8h] [rbp-38h]
  int v87; // [rsp+CCh] [rbp-34h]
  struct _POINTL *v88; // [rsp+D0h] [rbp-30h]
  struct SURFACE *v89; // [rsp+D8h] [rbp-28h]
  struct _POINTL *v90; // [rsp+E0h] [rbp-20h]
  struct _BRUSHOBJ *v91; // [rsp+E8h] [rbp-18h]
  int v92; // [rsp+F0h] [rbp-10h] BYREF
  LONG v93; // [rsp+F4h] [rbp-Ch]
  LONG v94; // [rsp+F8h] [rbp-8h]
  int v95; // [rsp+FCh] [rbp-4h]
  __int64 v96; // [rsp+100h] [rbp+0h]
  __int64 v97; // [rsp+108h] [rbp+8h]
  struct _RECTL *v98; // [rsp+110h] [rbp+10h]
  _OWORD v99[15]; // [rsp+120h] [rbp+20h] BYREF
  RECTL prclDest; // [rsp+210h] [rbp+110h] BYREF
  _DWORD v101[84]; // [rsp+220h] [rbp+120h] BYREF

  v11 = a6;
  v13 = a5;
  v77 = a1;
  v90 = a8;
  v88 = a7;
  v78 = a10;
  v89 = a3;
  v83 = a2;
  v84 = a4;
  v98 = a6;
  v91 = a9;
  v71 = 0;
  memset(v99, 0, 0xE8uLL);
  memset(v101, 0, 0x144uLL);
  v14 = v77;
  v15 = 0LL;
  v85 = 0LL;
  v86 = 0;
  v87 = 0;
  switch ( *((_DWORD *)v77 + 24) )
  {
    case 1:
      v71 = 1986;
      break;
    case 2:
      v71 = 498;
      break;
    case 3:
      v71 = 250;
      break;
    case 4:
      v71 = 126;
      break;
    case 5:
      v71 = 83;
      break;
    case 6:
      v71 = 64;
      break;
  }
  v16 = *a6;
  if ( !a5 )
    v13 = xloIdent;
  v17 = v83;
  *((_QWORD *)&v99[2] + 1) = a4;
  *(_QWORD *)&v99[3] = v13;
  v74 = a11 >> 8;
  *(_QWORD *)&v99[1] = v77;
  *((_QWORD *)&v99[1] + 1) = v83;
  *((_QWORD *)&v99[3] + 1) = v91;
  v69 = a11 & 0xA5 | (8 * (a11 & 0xA)) | ((unsigned __int8)a11 >> 3) & 0xA;
  v70 = BYTE1(a11) & 0xA5 | (8 * (BYTE1(a11) & 0xA)) | (BYTE1(a11) >> 3) & 0xA;
  v76 = (unsigned __int8)a11 != a11 >> 8;
  v99[0] = v16;
  v80 = (a11 & 0xF) != (unsigned __int8)a11 >> 4;
  v82 = (BYTE1(a11) & 0xF) != BYTE1(a11) >> 4;
  v18 = 1;
  if ( (a11 & 0xF) != (unsigned __int8)a11 >> 4 || (v19 = 0, (BYTE1(a11) & 0xF) != BYTE1(a11) >> 4) )
    v19 = 1;
  v72 = v19;
  v20 = (unsigned __int8)(a11 & 0xC3 | (4 * (a11 & 0xC)) | ((unsigned __int8)a11 >> 2) & 0xC) >> 4;
  v21 = a11 & 3 | (4 * (a11 & 0xC)) & 0xF | ((unsigned __int8)a11 >> 2) & 0xC;
  v22 = BYTE1(a11) & 3 | (4 * (BYTE1(a11) & 0xC)) & 0xF | (BYTE1(a11) >> 2) & 0xC;
  LODWORD(v79) = v21 != v20;
  v23 = (unsigned __int8)(BYTE1(a11) & 0xC3 | (4 * (BYTE1(a11) & 0xC)) | (BYTE1(a11) >> 2) & 0xC) >> 4;
  LODWORD(v81) = v22 != v23;
  pptlSrc.x = v21 != v20 || v22 != v23;
  HIDWORD(v79) = (v69 & 0xF) != v69 >> 4;
  HIDWORD(v81) = (v70 & 0xF) != v70 >> 4;
  if ( v19 || (unsigned __int8)a11 != v74 && !v89 )
  {
    if ( v91 && v91->iSolidColor == -1 )
    {
      EngRbrush = (struct _BRUSHOBJ *)pvGetEngRbrush(v91);
      v14 = v77;
      v15 = EngRbrush;
      v17 = v83;
    }
    else
    {
      v15 = v91;
    }
  }
  v24 = 1;
  *(_QWORD *)((char *)&v99[6] + 4) = 0x100000001LL;
  LODWORD(v99[6]) = 4;
  if ( pptlSrc.x )
  {
    v25 = *((_DWORD *)v17 + 22);
    *(_QWORD *)&v99[4] = *((_QWORD *)v17 + 10);
    pptlSrc.x = v88->x;
    HIDWORD(v99[8]) = pptlSrc.x;
    y = v88->y;
    LODWORD(v99[9]) = y;
    HIDWORD(v99[6]) = v25;
    if ( *(_QWORD *)&v99[4] != *((_QWORD *)v14 + 10) )
      goto LABEL_18;
    top = a6->top;
    if ( y < top )
    {
      v24 = -1;
      DWORD2(v99[6]) = -1;
      LODWORD(v99[6]) = 2;
    }
    v61 = 1;
    DWORD1(v99[6]) = 1;
    if ( y == top )
    {
      if ( pptlSrc.x < a6->left )
        v61 = -1;
      DWORD1(v99[6]) = v61;
    }
    if ( (unsigned __int8)a11 != v74 && v21 != v20 && v22 != v23
      || (v61 == -1 || v24 == -1) && a6->right - a6->left > v71 )
    {
      v62 = a6->right - a6->left;
      v92 = *((_DWORD *)v17 + 24);
      v63 = a6->bottom - top;
      v93 = v62;
      v95 = 0;
      v97 = 1LL;
      v94 = v63;
      v96 = 0LL;
      SURFMEM::bCreateDIB((SURFMEM *)&v85, (struct _DEVBITMAPINFO *)&v92, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !v85 )
        goto LABEL_97;
      *(_QWORD *)&prclDest.left = 0LL;
      pptlSrc = *v88;
      prclDest.right = v93;
      prclDest.bottom = v94;
      if ( !EngCopyBits(
              (SURFOBJ *)(v85 + 24),
              (SURFOBJ *)(((unsigned __int64)v83 + 24) & -(__int64)(v83 != 0LL)),
              0LL,
              xloIdent,
              &prclDest,
              &pptlSrc) )
        goto LABEL_97;
      v24 = DWORD2(v99[6]);
      v14 = v77;
      *(_QWORD *)&v99[4] = *(_QWORD *)(v85 + 80);
      v25 = *(_DWORD *)(v85 + 88);
      HIDWORD(v99[6]) = v25;
      *(_QWORD *)((char *)&v99[8] + 12) = 0LL;
    }
    if ( v24 == 1 )
LABEL_18:
      HIDWORD(v99[7]) = v25;
    else
      HIDWORD(v99[7]) = -v25;
  }
  else
  {
    *(_QWORD *)&v99[4] = 0LL;
  }
  *((_QWORD *)&v99[4] + 1) = *((_QWORD *)v14 + 10);
  v27 = *((_DWORD *)v14 + 22);
  LODWORD(v99[7]) = v27;
  if ( v24 != 1 )
    v27 = -v27;
  v28 = a11 >> 8;
  v29 = (unsigned __int8)a11;
  LODWORD(v99[8]) = v27;
  if ( (unsigned __int8)a11 == v74 || (v50 = v89) == 0LL )
  {
    *(_QWORD *)&v99[2] = 0LL;
    v30 = 0LL;
    *(_QWORD *)&v99[5] = 0LL;
  }
  else
  {
    if ( bUMPDSecurityGateEx() && !v90 )
    {
      if ( gfUMPDDebug )
        DbgPrint("clientcore\\windows\\core\\ntgdi\\gre\\windows\\bltlnk.cxx:%d:BltLnk:pptlMask == NULL\n", 619);
      goto LABEL_97;
    }
    v51 = *((_DWORD *)v50 + 14);
    x = v90->x;
    v30 = *((_QWORD *)v50 + 10);
    v53 = *((_DWORD *)v50 + 15);
    v54 = v90->y;
    *(_QWORD *)&v99[5] = v30;
    *(_QWORD *)&v99[2] = v50;
    *((_QWORD *)&v99[10] + 1) = __PAIR64__(v53, v51);
    *(_QWORD *)&v99[11] = __PAIR64__(v54, x);
    if ( x >= (int)v51 )
    {
      LODWORD(v99[11]) = x % v51;
    }
    else if ( x < 0 )
    {
      LODWORD(v99[11]) = v51 - (-1 - x) % v51 - 1;
    }
    if ( v54 >= v53 )
    {
      DWORD1(v99[11]) = v54 % v53;
    }
    else if ( v54 < 0 )
    {
      DWORD1(v99[11]) = v53 - ~v54 % v53 - 1;
    }
    v24 = DWORD2(v99[6]);
    v55 = *((_DWORD *)v50 + 22);
    v14 = v77;
    v28 = a11 >> 8;
    v29 = (unsigned __int8)a11;
    DWORD2(v99[7]) = v55;
    if ( DWORD2(v99[6]) != 1 )
      v55 = -v55;
    DWORD2(v99[8]) = v55;
  }
  if ( !v72 )
  {
    *((_QWORD *)&v99[5] + 1) = 0LL;
LABEL_25:
    v31 = v78;
    goto LABEL_26;
  }
  if ( !v91 )
    goto LABEL_97;
  iSolidColor = v91->iSolidColor;
  if ( v91->iSolidColor != -1 )
  {
    v56 = *((_DWORD *)v14 + 24);
    *((_QWORD *)&v99[5] + 1) = 0LL;
    v57 = v56 - 1;
    if ( !v57 )
    {
      if ( iSolidColor )
        iSolidColor = -1;
      goto LABEL_96;
    }
    v58 = v57 - 1;
    if ( v58 )
    {
      v59 = v58 - 1;
      if ( v59 )
      {
        if ( v59 != 1 )
        {
LABEL_96:
          DWORD1(v99[9]) = iSolidColor;
          goto LABEL_25;
        }
LABEL_102:
        iSolidColor |= iSolidColor << 16;
        goto LABEL_96;
      }
    }
    else
    {
      iSolidColor |= 16 * iSolidColor;
    }
    iSolidColor |= iSolidColor << 8;
    goto LABEL_102;
  }
  if ( !v15 )
    goto LABEL_97;
  DWORD1(v99[9]) = -1;
  if ( !v15[1].pvRbrush )
    goto LABEL_25;
  v49 = *(&v15[1].iSolidColor + 1);
  v31 = v78;
  DWORD1(v99[7]) = v49;
  *((_QWORD *)&v99[5] + 1) = v15[1].pvRbrush;
  *((_QWORD *)&v99[9] + 1) = *(_QWORD *)(&v15->flColorType + 1);
  *(struct _POINTL *)&v99[10] = *v78;
  if ( v24 != 1 )
    v49 = -v49;
  DWORD1(v99[8]) = v49;
LABEL_26:
  if ( v29 != v28 && !v30 )
  {
    if ( !v15 || !v15[2].pvRbrush )
      goto LABEL_97;
    v64 = a6->left - v31->x;
    v65 = a6->top - v31->y;
    *(_QWORD *)&v99[5] = v15[2].pvRbrush;
    v66 = *(&v15[1].flColorType + 1);
    DWORD2(v99[10]) = v66;
    v67 = v15[2].iSolidColor;
    HIDWORD(v99[10]) = v67;
    flColorType = v15[2].flColorType;
    DWORD2(v99[7]) = flColorType;
    *(_QWORD *)&v99[11] = __PAIR64__(v65, v64);
    if ( v64 < (int)v66 )
    {
      if ( v64 < 0 )
        LODWORD(v99[11]) = v66 - ~v64 % v66 - 1;
    }
    else
    {
      LODWORD(v99[11]) = v64 % v66;
    }
    if ( v65 < v67 )
    {
      if ( v65 < 0 )
        DWORD1(v99[11]) = v67 - ~v65 % v67 - 1;
    }
    else
    {
      DWORD1(v99[11]) = v65 % v67;
    }
    if ( v24 != 1 )
      flColorType = -flColorType;
    DWORD2(v99[8]) = flColorType;
  }
  v32 = v84;
  if ( v84 && *((_BYTE *)v84 + 20) )
  {
    if ( *((_BYTE *)v84 + 20) == 1 )
    {
      v33 = *(struct _RECTL *)((char *)v84 + 4);
      goto LABEL_30;
    }
    if ( *((_BYTE *)v84 + 20) == 3 )
    {
      v73 = 1;
      v34 = 1;
      XCLIPOBJ::cEnumStart(v84, 0, 0, v99[6], 0x14u);
      v32 = v84;
      goto LABEL_31;
    }
LABEL_97:
    v18 = 0;
    goto LABEL_54;
  }
  v33 = *a6;
LABEL_30:
  v34 = 0;
  v73 = 0;
  v101[0] = 1;
  *(struct _RECTL *)&v101[1] = v33;
LABEL_31:
  if ( v34 )
    goto LABEL_100;
  while ( 1 )
  {
    pptlSrc.x = 0;
    if ( v101[0] )
    {
      v35 = 0;
      do
      {
        left = v11->left;
        v37 = 4LL * v35;
        v38 = &v101[v37 + 1];
        v39 = v101[v37 + 1];
        if ( v39 < v11->left )
        {
          *v38 = left;
          v39 = left;
        }
        right = v11->right;
        if ( v101[4 * v35 + 3] > right )
          v101[4 * v35 + 3] = right;
        else
          right = v101[4 * v35 + 3];
        v41 = v101[4 * v35 + 2];
        v42 = v11->top;
        if ( v41 < v42 )
        {
          v101[4 * v35 + 2] = v42;
          v41 = v42;
        }
        v43 = v101[4 * v35 + 4];
        bottom = v11->bottom;
        if ( v43 > bottom )
        {
          v101[4 * v35 + 4] = bottom;
          v43 = bottom;
        }
        if ( v41 < v43 && right - v39 > 0 )
        {
          do
          {
            v45 = right;
            if ( right - v39 > v71 )
            {
              v45 = v39 + v71;
              v101[4 * v35 + 3] = v39 + v71;
            }
            if ( (_BYTE)a11 != 0xAA )
            {
              WORD2(v99[14]) = (unsigned __int8)a11;
              HIDWORD(v99[12]) = a11 & 0xC3 | (unsigned __int8)((4 * (a11 & 0xC)) | ((unsigned __int8)a11 >> 2) & 0xC);
              LODWORD(v99[13]) = v69;
              *(_QWORD *)((char *)&v99[13] + 4) = v79;
              HIDWORD(v99[13]) = v80;
              LODWORD(v99[14]) = v76;
              BltLnkRect((struct _BLTLNKINFO *)v99, (struct _RECTL *)&v101[v37 + 1]);
            }
            if ( (unsigned __int8)a11 != v74 && BYTE1(a11) != 0xAA )
            {
              HIDWORD(v99[12]) = BYTE1(a11) & 0xC3 | (unsigned __int8)((4 * (BYTE1(a11) & 0xC)) | (BYTE1(a11) >> 2) & 0xC);
              LODWORD(v99[13]) = v70;
              *(_QWORD *)((char *)&v99[13] + 4) = v81;
              HIDWORD(v99[13]) = v82;
              LODWORD(v99[14]) = v76;
              BYTE4(v99[14]) = BYTE1(a11);
              BYTE5(v99[14]) = -1;
              BltLnkRect((struct _BLTLNKINFO *)v99, (struct _RECTL *)&v101[v37 + 1]);
            }
            *v38 = v45;
            v101[4 * v35 + 3] = right;
            v39 = v45;
          }
          while ( right - v45 > 0 );
          v11 = v98;
          v18 = 1;
          v35 = pptlSrc.x;
        }
        pptlSrc.x = ++v35;
      }
      while ( v35 < v101[0] );
      v34 = v73;
    }
    v32 = v84;
    if ( !v34 )
      break;
LABEL_100:
    v34 = XCLIPOBJ::bEnum(v32, 0x144u, v101, 0LL);
    v73 = v34;
  }
LABEL_54:
  SURFMEM::~SURFMEM((SURFMEM *)&v85);
  return v18;
}
