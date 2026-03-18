/*
 * XREFs of ?BltLnk@@YGHPAVSURFACE@@00PAVECLIPOBJ@@PAVXLATE@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x94E94
 * Callers:
 *     _EngBitBlt@44 @ 0x53EF2 (_EngBitBlt@44.c)
 *     ?vExpandAndCopyText@@YGXPAVSURFACE@@PAU_FONTOBJ@@PAU_GLYPHPOS@@KPAEKK00PAU_RECTL@@4HHK44KPAU_BRUSHOBJ@@PAU_POINTL@@@Z @ 0x553A0 (-vExpandAndCopyText@@YGXPAVSURFACE@@PAU_FONTOBJ@@PAU_GLYPHPOS@@KPAEKK00PAU_RECTL@@4HHK44KPAU_BRU.c)
 * Callees:
 *     ?BltLnkRect@@YGXPAU_BLTLNKINFO@@PAU_RECTL@@@Z @ 0x4F4D0 (-BltLnkRect@@YGXPAU_BLTLNKINFO@@PAU_RECTL@@@Z.c)
 *     _EngCopyBits@24 @ 0x519F0 (_EngCopyBits@24.c)
 *     ?pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ @ 0x55814 (-pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ.c)
 *     ?bEnum@XCLIPOBJ@@QAEHKPAXPAK@Z @ 0x8E412 (-bEnum@XCLIPOBJ@@QAEHKPAXPAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QAEKHKKK@Z @ 0x948B4 (-cEnumStart@XCLIPOBJ@@QAEKHKKK@Z.c)
 *     ?bUMPDSecurityGateEx@@YGHXZ @ 0x9591E (-bUMPDSecurityGateEx@@YGHXZ.c)
 *     ?pvGetEngRbrush@@YGPAXPAU_BRUSHOBJ@@@Z @ 0x95952 (-pvGetEngRbrush@@YGPAXPAU_BRUSHOBJ@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __userpurge BltLnk@<eax>(
        _DWORD *a1@<edx>,
        int a2@<ecx>,
        struct SURFACE *a3,
        struct SURFACE *a4,
        struct SURFACE *a5,
        struct ECLIPOBJ *a6,
        POINTL *a7,
        struct _RECTL *a8,
        struct _POINTL *a9,
        struct _POINTL *a10,
        struct _BRUSHOBJ *a11,
        struct _POINTL *a12,
        unsigned int a13)
{
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  unsigned __int8 v20; // bl
  unsigned __int8 v21; // ch
  struct _POINTL *v22; // ebx
  BOOL v23; // edi
  struct _POINTL *EngRbrush; // eax
  int v25; // edx
  int v26; // eax
  int v27; // ecx
  bool v28; // zf
  LONG y; // edi
  int v30; // eax
  _DWORD *v31; // edi
  SURFOBJ *v32; // eax
  CLIPOBJ *v33; // edx
  int v34; // eax
  struct SURFACE *v35; // edi
  int v36; // esi
  unsigned int v38; // ecx
  int v39; // esi
  int left; // edx
  int top; // edi
  struct SURFACE *v42; // edi
  int v43; // eax
  int x; // ecx
  int v45; // ecx
  LONG v46; // eax
  unsigned int v47; // edi
  int v48; // eax
  int v49; // ecx
  int v50; // esi
  int v51; // ebx
  XCLIPOBJ *v52; // ecx
  int v53; // ebx
  struct ECLIPOBJ *v54; // esi
  _DWORD *v55; // esi
  int *v56; // esi
  struct ECLIPOBJ *v57; // edx
  int v58; // ecx
  int v59; // eax
  int v60; // edi
  int v61; // ebx
  int v62; // eax
  int v63; // eax
  int v64; // edx
  int i; // eax
  int v66; // ebx
  struct _BRUSHOBJ *v67; // [esp+0h] [ebp-2BCh]
  int v68; // [esp+Ch] [ebp-2B0h] BYREF
  LONG v69; // [esp+10h] [ebp-2ACh]
  LONG v70; // [esp+14h] [ebp-2A8h]
  int v71; // [esp+18h] [ebp-2A4h]
  int v72; // [esp+1Ch] [ebp-2A0h]
  int v73; // [esp+20h] [ebp-29Ch]
  BOOL v74; // [esp+24h] [ebp-298h]
  BOOL v75; // [esp+28h] [ebp-294h]
  BOOL v76; // [esp+2Ch] [ebp-290h]
  BOOL v77; // [esp+30h] [ebp-28Ch]
  BOOL v78; // [esp+34h] [ebp-288h]
  BOOL v79; // [esp+38h] [ebp-284h]
  SURFACE *v80; // [esp+3Ch] [ebp-280h] BYREF
  char v81; // [esp+40h] [ebp-27Ch]
  int v82; // [esp+44h] [ebp-278h]
  BOOL v83; // [esp+48h] [ebp-274h]
  _DWORD *v84; // [esp+4Ch] [ebp-270h]
  POINTL pptlSrc; // [esp+50h] [ebp-26Ch] BYREF
  struct _POINTL *v86; // [esp+58h] [ebp-264h]
  BOOL v87; // [esp+5Ch] [ebp-260h]
  struct _POINTL *v88; // [esp+60h] [ebp-25Ch]
  XCLIPOBJ *v89; // [esp+64h] [ebp-258h]
  struct SURFACE *v90; // [esp+68h] [ebp-254h]
  POINTL *v91; // [esp+6Ch] [ebp-250h]
  struct _RECTL *v92; // [esp+70h] [ebp-24Ch]
  int v93; // [esp+74h] [ebp-248h]
  unsigned int v94; // [esp+78h] [ebp-244h]
  struct SURFACE *v95; // [esp+7Ch] [ebp-240h]
  unsigned __int8 v96; // [esp+83h] [ebp-239h]
  char v97; // [esp+84h] [ebp-238h]
  char v98; // [esp+85h] [ebp-237h]
  char v99; // [esp+86h] [ebp-236h]
  char v100; // [esp+87h] [ebp-235h]
  int v101; // [esp+88h] [ebp-234h]
  struct ECLIPOBJ *v102; // [esp+8Ch] [ebp-230h]
  int v103; // [esp+90h] [ebp-22Ch]
  unsigned __int8 v104; // [esp+95h] [ebp-227h]
  unsigned __int8 v105; // [esp+96h] [ebp-226h]
  unsigned __int8 v106; // [esp+97h] [ebp-225h]
  _DWORD v107[48]; // [esp+98h] [ebp-224h] BYREF
  _DWORD v108[83]; // [esp+158h] [ebp-164h] BYREF
  RECTL prclDest; // [esp+2A4h] [ebp-18h] BYREF

  v84 = a1;
  v103 = a2;
  v90 = a3;
  v89 = a4;
  v102 = a6;
  v91 = a7;
  v92 = a8;
  v88 = a9;
  v86 = a10;
  v101 = 0;
  memset(v107, 0, sizeof(v107));
  memset(v108, 0, 0x144u);
  v80 = 0;
  v81 = 0;
  v82 = 0;
  v14 = *(_DWORD *)(v103 + 60);
  v95 = 0;
  v15 = v14 - 1;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            if ( v19 == 1 )
              v101 = 64;
          }
          else
          {
            v101 = 83;
          }
        }
        else
        {
          v101 = 126;
        }
      }
      else
      {
        v101 = 250;
      }
    }
    else
    {
      v101 = 498;
    }
  }
  else
  {
    v101 = 1986;
  }
  if ( a5 )
    v107[8] = a5;
  else
    v107[8] = xloIdent;
  v107[7] = v89;
  v107[4] = v103;
  v20 = (unsigned __int8)a11;
  v107[5] = a1;
  v107[0] = *(_DWORD *)v102;
  v107[1] = *((_DWORD *)v102 + 1);
  v94 = (unsigned int)a11 >> 8;
  v107[2] = *((_DWORD *)v102 + 2);
  v107[3] = *((_DWORD *)v102 + 3);
  v107[9] = v88;
  v21 = v20 & 0xC3 | (4 * (v20 & 0xC)) | ((unsigned __int8)a11 >> 2) & 0xC;
  v96 = v21;
  v104 = v20 & 0xA5 | (8 * (v20 & 0xA)) | ((unsigned __int8)a11 >> 3) & 0xA;
  v106 = BYTE1(a11) & 0xC3 | (4 * (BYTE1(a11) & 0xC)) | (BYTE1(a11) >> 2) & 0xC;
  v93 = (unsigned __int8)a11;
  v105 = BYTE1(a11) & 0xA5 | (8 * (BYTE1(a11) & 0xA)) | (BYTE1(a11) >> 3) & 0xA;
  v83 = (unsigned __int8)a11 != (unsigned int)a11 >> 8;
  v77 = (v20 & 0xF) != v20 >> 4;
  v74 = (BYTE1(a11) & 0xF) != BYTE1(a11) >> 4;
  v87 = ((unsigned __int8)a11 & 0xF) != (unsigned __int8)a11 >> 4 || (BYTE1(a11) & 0xF) != BYTE1(a11) >> 4;
  v100 = v21 >> 4;
  v99 = (unsigned __int8)a11 & 3 | (4 * ((unsigned __int8)a11 & 0xC)) & 0xF | ((unsigned __int8)a11 >> 2) & 0xC;
  v79 = (v21 & 0xF) != v21 >> 4;
  v98 = v106 >> 4;
  v97 = v106 & 0xF;
  v76 = (v106 & 0xF) != v106 >> 4;
  v22 = (struct _POINTL *)v95;
  v23 = (v21 & 0xF) != v21 >> 4 || (v106 & 0xF) != v106 >> 4;
  v78 = (v104 & 0xF) != v104 >> 4;
  v75 = (v105 & 0xF) != v105 >> 4;
  if ( (struct SURFACE *)v87 != v95 || v93 != v94 && v90 == v95 )
  {
    EngRbrush = v88;
    if ( v88 && v88->x == -1 )
      EngRbrush = (struct _POINTL *)pvGetEngRbrush(v67);
    v22 = EngRbrush;
  }
  v107[15] = 1;
  v25 = 1;
  v107[16] = 1;
  v107[14] = 4;
  if ( v23 )
  {
    v26 = v84[12];
    v27 = v84[13];
    v28 = v26 == *(_DWORD *)(v103 + 48);
    v25 = 1;
    pptlSrc.y = v91->x;
    v107[25] = pptlSrc.y;
    v107[10] = v26;
    v107[17] = v27;
    y = v91->y;
    v107[26] = y;
    if ( v28 )
    {
      v95 = (struct SURFACE *)*((_DWORD *)v102 + 1);
      if ( y < (int)v95 )
      {
        v25 = -1;
        v107[14] = 2;
        v107[16] = -1;
      }
      v30 = 1;
      v107[15] = 1;
      if ( (struct SURFACE *)y == v95 )
      {
        v107[15] = 1;
        v25 = v107[16];
        if ( pptlSrc.y < *(_DWORD *)v102 )
        {
          v30 = -1;
          v107[15] = -1;
        }
      }
      if ( v93 != v94 && (v25 = v107[16], v99 != v100) && (v25 = v107[16], v97 != v98)
        || (v30 == -1 || v25 == -1) && *((_DWORD *)v102 + 2) - *(_DWORD *)v102 > v101 )
      {
        v31 = v84;
        v68 = v84[15];
        v69 = *((_DWORD *)v102 + 2) - *(_DWORD *)v102;
        v70 = *((_DWORD *)v102 + 3) - (_DWORD)v95;
        v71 = 0;
        v72 = 0;
        v73 = 1;
        SURFMEM::bCreateDIB((SURFMEM *)&v80, (struct _DEVBITMAPINFO *)&v68, 0, 0, 0, 0, 0, 0, 1, 0, 0);
        if ( !v80 )
          goto LABEL_59;
        pptlSrc = *v91;
        prclDest.right = v69;
        prclDest.left = 0;
        prclDest.top = 0;
        prclDest.bottom = v70;
        v32 = SURFACE::pSurfobj(v80);
        if ( !EngCopyBits(v32, v31 != 0 ? (SURFOBJ *)(v31 + 4) : 0, v33, xloIdent, &prclDest, &pptlSrc) )
          goto LABEL_59;
        v25 = v107[16];
        v107[10] = *((_DWORD *)v80 + 12);
        v27 = *((_DWORD *)v80 + 13);
        v107[25] = 0;
        v107[26] = 0;
        v107[17] = v27;
      }
      if ( v25 != 1 )
        v27 = -v27;
    }
    v107[21] = v27;
  }
  else
  {
    v107[10] = 0;
  }
  v107[11] = *(_DWORD *)(v103 + 48);
  v34 = *(_DWORD *)(v103 + 52);
  v107[18] = v34;
  if ( v25 != 1 )
    v34 = -v34;
  v107[22] = v34;
  if ( v93 == v94 || (v35 = v90) == 0 )
  {
    v107[6] = 0;
    v42 = 0;
    v107[12] = 0;
  }
  else
  {
    if ( bUMPDSecurityGateEx() && !v92 )
    {
      if ( gfUMPDDebug )
        _DbgPrint("clientcore\\windows\\core\\ntgdi\\gre\\windows\\bltlnk.cxx:%d:BltLnk:pptlMask == NULL\n", 619);
      goto LABEL_59;
    }
    v38 = *((_DWORD *)v35 + 8);
    v39 = *((_DWORD *)v35 + 9);
    v95 = (struct SURFACE *)*((_DWORD *)v35 + 12);
    v107[12] = v95;
    v107[6] = v35;
    v107[32] = v38;
    v107[33] = v39;
    left = v92->left;
    top = v92->top;
    v107[34] = left;
    v107[35] = top;
    if ( left < (int)v38 )
    {
      if ( left < 0 )
        v107[34] = v38 - (-1 - left) % v38 - 1;
    }
    else
    {
      v107[34] = left % v38;
    }
    if ( top < v39 )
    {
      if ( top < 0 )
        v107[35] = v39 - ~top % v39 - 1;
    }
    else
    {
      v107[35] = top % v39;
    }
    v25 = v107[16];
    v42 = v95;
    v43 = *((_DWORD *)v90 + 13);
    v107[20] = v43;
    if ( v107[16] != 1 )
      v43 = -v43;
    v107[24] = v43;
  }
  if ( !v87 )
  {
    v107[13] = 0;
    goto LABEL_93;
  }
  if ( !v88 )
  {
LABEL_59:
    v36 = 0;
    goto LABEL_60;
  }
  x = v88->x;
  if ( v88->x != -1 )
  {
    v107[13] = 0;
    switch ( *(_DWORD *)(v103 + 60) )
    {
      case 1:
        if ( x )
          x = -1;
        goto LABEL_92;
      case 2:
        x |= 16 * x;
        break;
      case 3:
        break;
      case 4:
        goto LABEL_89;
      default:
        goto LABEL_92;
    }
    x |= x << 8;
LABEL_89:
    x |= x << 16;
LABEL_92:
    v107[27] = x;
    goto LABEL_93;
  }
  if ( !v22 )
    goto LABEL_59;
  v107[27] = -1;
  if ( v22[4].x )
  {
    v45 = v22[3].y;
    v107[19] = v45;
    v107[13] = v22[4].x;
    v107[28] = v22[2].y;
    v107[29] = v22[3].x;
    v107[30] = v86->x;
    v107[31] = v86->y;
    if ( v25 != 1 )
      v45 = -v45;
    v107[23] = v45;
  }
LABEL_93:
  if ( v93 != v94 && !v42 )
  {
    if ( !v22 )
      goto LABEL_59;
    v46 = v22[6].x;
    pptlSrc.y = v46;
    if ( !v46 )
      goto LABEL_59;
    v107[12] = v46;
    v47 = v22[5].x;
    v48 = *(_DWORD *)v102 - v86->x;
    v49 = *((_DWORD *)v102 + 1) - v86->y;
    v107[32] = v47;
    v50 = v22[5].y;
    v107[33] = v50;
    v51 = v22[6].y;
    v107[20] = v51;
    v107[34] = v48;
    v107[35] = v49;
    if ( v48 < (int)v47 )
    {
      if ( v48 < 0 )
        v107[34] = v47 - ~v48 % v47 - 1;
    }
    else
    {
      v107[34] = v48 % v47;
    }
    if ( v49 < v50 )
    {
      if ( v49 < 0 )
        v107[35] = v50 - ~v49 % v50 - 1;
    }
    else
    {
      v107[35] = v49 % v50;
    }
    if ( v107[16] != 1 )
      v51 = -v51;
    v107[24] = v51;
    if ( !pptlSrc.y )
      goto LABEL_59;
  }
  v52 = v89;
  if ( !v89 || !*((_BYTE *)v89 + 20) )
  {
    v108[0] = 1;
    v54 = v102;
    goto LABEL_115;
  }
  if ( *((_BYTE *)v89 + 20) == 1 )
  {
    v108[0] = 1;
    v54 = (XCLIPOBJ *)((char *)v89 + 4);
LABEL_115:
    v53 = 0;
    v108[1] = *(_DWORD *)v54;
    v55 = (_DWORD *)((char *)v54 + 4);
    v103 = 0;
    v108[2] = *v55++;
    v108[3] = *v55;
    v108[4] = v55[1];
    goto LABEL_116;
  }
  if ( *((_BYTE *)v89 + 20) != 3 )
    goto LABEL_59;
  v53 = 1;
  v103 = 1;
  XCLIPOBJ::cEnumStart(v89, 0, 0, v107[14], 0x14u);
LABEL_116:
  if ( !v53 )
    goto LABEL_118;
  do
  {
    v53 = XCLIPOBJ::bEnum(v52, 0x144u, (char *)v108, 0);
    v103 = v53;
LABEL_118:
    v92 = 0;
    if ( v108[0] )
    {
      v56 = &v108[1];
      do
      {
        v57 = v102;
        v58 = *v56;
        v59 = *(_DWORD *)v102;
        if ( *v56 < *(_DWORD *)v102 )
        {
          *v56 = v59;
          v58 = v59;
        }
        v60 = *((_DWORD *)v57 + 2);
        if ( v56[2] <= v60 )
          v60 = v56[2];
        else
          v56[2] = v60;
        v61 = v56[1];
        v62 = *((_DWORD *)v57 + 1);
        if ( v61 < v62 )
        {
          v56[1] = v62;
          v61 = v62;
        }
        v63 = v56[3];
        v64 = *((_DWORD *)v57 + 3);
        if ( v63 > v64 )
        {
          v56[3] = v64;
          v63 = v64;
        }
        if ( v61 < v63 )
        {
          for ( i = v60 - v58; i > 0; i = v60 - v66 )
          {
            v66 = v60;
            if ( v60 - v58 > v101 )
            {
              v66 = v58 + v101;
              v56[2] = v58 + v101;
            }
            if ( (_BYTE)a11 != 0xAA )
            {
              LOWORD(v107[47]) = (unsigned __int8)a11;
              v107[41] = v96;
              v107[42] = v104;
              v107[43] = v79;
              v107[44] = v78;
              v107[45] = v77;
              v107[46] = v83;
              BltLnkRect((int)v107, v56);
            }
            if ( v93 != v94 && (_BYTE)v94 != 0xAA )
            {
              LOBYTE(v107[47]) = v94;
              v107[41] = v106;
              v107[42] = v105;
              v107[43] = v76;
              v107[44] = v75;
              v107[45] = v74;
              v107[46] = v83;
              BYTE1(v107[47]) = -1;
              BltLnkRect((int)v107, v56);
            }
            *v56 = v66;
            v56[2] = v60;
            v58 = v66;
          }
        }
        v56 += 4;
        v92 = (struct _RECTL *)((char *)v92 + 1);
      }
      while ( (unsigned int)v92 < v108[0] );
      v53 = v103;
      v52 = v89;
    }
  }
  while ( v53 );
  v36 = 1;
LABEL_60:
  SURFMEM::~SURFMEM((SURFMEM *)&v80);
  return v36;
}
