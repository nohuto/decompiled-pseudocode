/*
 * XREFs of ?SpTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PAU_POINTL@@K@Z @ 0x66420
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?bEnum@ENUMUNDERLAYS@@QAEHPAPAU_SURFOBJ@@PAU_POINTL@@PAPAU_CLIPOBJ@@@Z @ 0x66A00 (-bEnum@ENUMUNDERLAYS@@QAEHPAPAU_SURFOBJ@@PAU_POINTL@@PAPAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z @ 0x66EB0 (--0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z.c)
 *     ?bAllowShareAccess@@YGHPAU_SURFOBJ@@@Z @ 0xE51B4 (-bAllowShareAccess@@YGHPAU_SURFOBJ@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __stdcall SpTextOut(
        struct _SURFOBJ *a1,
        struct _STROBJ *a2,
        struct _FONTOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        struct _POINTL *a9,
        MIX a10)
{
  struct _STROBJ *v10; // ebx
  FLONG flFontType; // edx
  HDEV hdev; // eax
  RECTL *p_rclBkGround; // eax
  struct _SURFOBJ *v14; // esi
  LONG *p_lDelta; // edi
  PKTHREAD CurrentThread; // eax
  PKTHREAD v17; // eax
  PKTHREAD v18; // eax
  PKTHREAD v19; // eax
  PKTHREAD v20; // eax
  PKTHREAD v21; // eax
  PKTHREAD v22; // eax
  PKTHREAD v23; // eax
  PKTHREAD v24; // eax
  PKTHREAD v25; // eax
  LONG *v26; // esi
  HSURF hsurf; // eax
  int v28; // edi
  LONG y; // ecx
  LONG x; // eax
  int v31; // edi
  LONG v32; // edx
  LONG left; // ecx
  LONG v34; // eax
  ULONG v35; // edx
  _DWORD *v36; // edi
  LONG v37; // esi
  _DWORD *v38; // ecx
  ULONG v39; // ecx
  int v40; // eax
  CLIPOBJ *v41; // edi
  LONG v42; // eax
  bool v43; // zf
  int v44; // edx
  int v45; // edi
  LONG v46; // ecx
  LONG v47; // eax
  _DWORD *v48; // ebx
  ULONG v49; // edx
  _DWORD *v50; // ecx
  ULONG v51; // ecx
  int v52; // eax
  CLIPOBJ *v53; // ecx
  struct _SURFOBJ *v55; // [esp+1Ch] [ebp-338h]
  LONG v56; // [esp+2Ch] [ebp-328h]
  LONG v57; // [esp+2Ch] [ebp-328h]
  LONG v58; // [esp+30h] [ebp-324h]
  LONG v59; // [esp+30h] [ebp-324h]
  BOOL (__stdcall *v60)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // [esp+34h] [ebp-320h]
  struct _SURFOBJ *v61; // [esp+38h] [ebp-31Ch] BYREF
  RECTL *v62; // [esp+3Ch] [ebp-318h]
  struct _STROBJ *v63; // [esp+40h] [ebp-314h]
  CLIPOBJ *ppco; // [esp+44h] [ebp-310h] BYREF
  LONG v65; // [esp+48h] [ebp-30Ch]
  int v66; // [esp+4Ch] [ebp-308h]
  BOOL v67; // [esp+50h] [ebp-304h]
  LONG *v68; // [esp+54h] [ebp-300h]
  int v69; // [esp+58h] [ebp-2FCh]
  CLIPOBJ *v70; // [esp+5Ch] [ebp-2F8h]
  struct _POINTL v71; // [esp+60h] [ebp-2F4h] BYREF
  struct _POINTL v72; // [esp+68h] [ebp-2ECh] BYREF
  struct _POINTL v73; // [esp+70h] [ebp-2E4h] BYREF
  ULONG cGlyphs; // [esp+78h] [ebp-2DCh]
  struct _RECTL *v75; // [esp+7Ch] [ebp-2D8h]
  struct _POINTL *v76; // [esp+80h] [ebp-2D4h]
  struct _BRUSHOBJ *v77; // [esp+84h] [ebp-2D0h]
  struct _BRUSHOBJ *v78; // [esp+88h] [ebp-2CCh]
  struct _RECTL *v79; // [esp+8Ch] [ebp-2C8h]
  struct _FONTOBJ *v80; // [esp+90h] [ebp-2C4h]
  int v81; // [esp+94h] [ebp-2C0h] BYREF
  int v82; // [esp+98h] [ebp-2BCh]
  int v83; // [esp+9Ch] [ebp-2B8h]
  int v84; // [esp+A0h] [ebp-2B4h]
  _BYTE v85[684]; // [esp+A4h] [ebp-2B0h] BYREF

  v79 = a5;
  v78 = a7;
  v10 = a2;
  v77 = a8;
  v76 = a9;
  flFontType = a3->flFontType;
  v61 = a1;
  v63 = a2;
  v80 = a3;
  ppco = a4;
  v69 = 1;
  v71.x = 0;
  v71.y = 0;
  v67 = 0;
  v75 = a6;
  if ( (flFontType & 0x10000) != 0 )
  {
    hdev = a1->hdev;
    if ( (flFontType & 0x10000000) != 0 )
      v67 = ((_DWORD)hdev[354] & 0x4000) == 0;
    else
      v67 = ((_DWORD)hdev[280] & 0x1000000) == 0;
  }
  cGlyphs = a2[1].cGlyphs;
  p_rclBkGround = a6;
  if ( !a6 )
    p_rclBkGround = &a2->rclBkGround;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v85, a1, a4, p_rclBkGround);
  if ( ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v85, &v61, &v71, &ppco) )
  {
    while ( 1 )
    {
      v14 = v61;
      p_lDelta = &v61[-1].lDelta;
      v10[1].cGlyphs = cGlyphs;
      if ( (p_lDelta[19] & 1) == 0 && (p_lDelta[18] & 0x800) != 0 && *((_WORD *)p_lDelta + 32) == 3 )
      {
        v60 = RedirTextOut;
        goto LABEL_30;
      }
      if ( v67 )
        goto LABEL_29;
      if ( v14->iType == 1 )
      {
        if ( bAllowShareAccess(v55) )
        {
          CurrentThread = KeGetCurrentThread();
          if ( W32GetThreadWin32Thread(CurrentThread) )
          {
            v17 = KeGetCurrentThread();
            if ( *(_DWORD *)(W32GetThreadWin32Thread(v17) + 156) )
            {
              v18 = KeGetCurrentThread();
              if ( *(_DWORD *)(W32GetThreadWin32Thread(v18) + 52)
                || (v19 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v19) + 56)) )
              {
                v20 = KeGetCurrentThread();
                if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(v20) + 156) + 20) & 8) != 0 )
                {
                  v21 = KeGetCurrentThread();
                  v60 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*(_DWORD *)(W32GetThreadWin32Thread(v21) + 156) + 60);
                  goto LABEL_30;
                }
              }
            }
          }
        }
        if ( v14->iType == 1 )
        {
          if ( bAllowShareAccess(v55) )
          {
            v22 = KeGetCurrentThread();
            if ( W32GetThreadWin32Thread(v22) )
            {
              v23 = KeGetCurrentThread();
              if ( *(_DWORD *)(W32GetThreadWin32Thread(v23) + 156) )
              {
                v24 = KeGetCurrentThread();
                if ( *(_DWORD *)(W32GetThreadWin32Thread(v24) + 52) )
                  goto LABEL_29;
                v25 = KeGetCurrentThread();
                if ( *(_DWORD *)(W32GetThreadWin32Thread(v25) + 56) )
                  goto LABEL_29;
              }
            }
          }
        }
      }
      if ( ((int)v14[1].hsurf & 8) == 0 )
LABEL_29:
        v60 = EngTextOut;
      else
        v60 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))*((_DWORD *)v14->hdev + 211);
LABEL_30:
      v26 = 0;
      v68 = 0;
      if ( v61
        && (hsurf = v61[1].hsurf, ((unsigned int)hsurf & 0x80004000) != 0)
        && ((unsigned __int16)hsurf & 0x200) == 0
        && (v26 = p_lDelta, v68 = p_lDelta, GreLockDisplayDevice(p_lDelta[7]), *((_WORD *)p_lDelta + 32) == 1)
        && !EngUpdateDeviceSurface((SURFOBJ *)(p_lDelta + 4), &ppco) )
      {
        GreUnlockDisplayDevice(p_lDelta[7]);
        v28 = v69;
      }
      else
      {
        v70 = ppco;
        y = v71.y;
        v81 = 0;
        v82 = 0;
        v83 = 0;
        v84 = 0;
        x = v71.x;
        v62 = v75;
        v56 = v71.y;
        v58 = v71.x;
        if ( v75 )
        {
          v81 = v71.x + v75->left;
          v83 = v71.x + v75->right;
          v82 = v71.y + v75->top;
          v84 = v71.y + v75->bottom;
          v62 = (RECTL *)&v81;
          x = v71.x;
        }
        v31 = x;
        v65 = v71.y;
        v66 = x;
        v32 = v71.y;
        if ( x || v71.y )
        {
          v10->rclBkGround.left += x;
          v10->rclBkGround.right += x;
          v10->rclBkGround.top += y;
          v10->rclBkGround.bottom += y;
          left = v10[5].rclBkGround.left;
          if ( (left & 0x100) != 0 )
          {
            v31 = 16 * x;
            v32 *= 16;
            v66 = 16 * x;
            v65 = v32;
          }
          v34 = v10[1].rclBkGround.left;
          if ( (left & 0x1400) != 0 )
          {
            v35 = v10->cGlyphs;
            v36 = (_DWORD *)v10[5].cGlyphs;
            if ( v10->cGlyphs )
            {
              v37 = v65;
              v38 = (_DWORD *)(v34 + 12);
              do
              {
                if ( *v36 == v10[5].rclBkGround.top )
                {
                  --v35;
                  *(v38 - 1) += v66;
                  *v38 += v37;
                }
                v38 += 4;
                ++v36;
              }
              while ( v35 );
              v26 = v68;
            }
          }
          else if ( v10->ulCharInc )
          {
            *(_DWORD *)(v34 + 8) += v31;
            *(_DWORD *)(v34 + 12) += v32;
          }
          else
          {
            v39 = v10->cGlyphs;
            if ( v10->cGlyphs )
            {
              v40 = v34 + 12;
              do
              {
                *(_DWORD *)(v40 - 4) += v31;
                v40 += 16;
                *(_DWORD *)(v40 - 16) += v32;
                --v39;
              }
              while ( v39 );
            }
          }
          y = v56;
          x = v58;
        }
        v41 = v70;
        v72.x = 0;
        v72.y = 0;
        if ( v70 && (x || y) )
        {
          v70->rclBounds.left += x;
          v41->rclBounds.right += x;
          v41->rclBounds.top += y;
          v41->rclBounds.bottom += y;
          if ( v41->iDComplexity )
          {
            v72.x = x;
            v72.y = y;
            RGNOBJ::bOffset((RGNOBJ *)&v41[2], &v72);
          }
        }
        v65 = v60(v61, v10, v80, v41, v79, v62, v78, v77, v76, a10);
        v42 = -v56;
        v44 = -v58;
        v43 = v58 == 0;
        v57 = v42;
        v45 = v42;
        v59 = v44;
        v62 = (RECTL *)v44;
        if ( !v43 || v42 )
        {
          v10->rclBkGround.left += v44;
          v10->rclBkGround.right += v44;
          v10->rclBkGround.top += v42;
          v10->rclBkGround.bottom += v42;
          v46 = v10[5].rclBkGround.left;
          if ( (v46 & 0x100) != 0 )
          {
            v44 *= 16;
            v62 = (RECTL *)v44;
            v45 = 16 * v42;
          }
          v47 = v10[1].rclBkGround.left;
          v66 = v47;
          if ( (v46 & 0x1400) != 0 )
          {
            v48 = (_DWORD *)v10[5].cGlyphs;
            v49 = v63->cGlyphs;
            if ( v63->cGlyphs )
            {
              v50 = (_DWORD *)(v66 + 12);
              do
              {
                if ( *v48 == v63[5].rclBkGround.top )
                {
                  *(v50 - 1) += v62;
                  --v49;
                  *v50 += v45;
                }
                v50 += 4;
                ++v48;
              }
              while ( v49 );
              v26 = v68;
              v10 = v63;
            }
            else
            {
              v10 = v63;
            }
          }
          else if ( v10->ulCharInc )
          {
            *(_DWORD *)(v47 + 8) += v44;
            *(_DWORD *)(v47 + 12) += v45;
          }
          else
          {
            v51 = v10->cGlyphs;
            if ( v10->cGlyphs )
            {
              v52 = v47 + 12;
              do
              {
                *(_DWORD *)(v52 - 4) += v44;
                v52 += 16;
                *(_DWORD *)(v52 - 16) += v45;
                --v51;
              }
              while ( v51 );
            }
          }
          v42 = v57;
        }
        v53 = v70;
        v73.x = 0;
        v73.y = 0;
        if ( v70 && (v59 || v42) )
        {
          v70->rclBounds.left += v59;
          v53->rclBounds.right += v59;
          v53->rclBounds.top += v42;
          v53->rclBounds.bottom += v42;
          if ( v53->iDComplexity )
          {
            v73.y = v42;
            v73.x = v59;
            RGNOBJ::bOffset((RGNOBJ *)&v53[2], &v73);
          }
        }
        v28 = v65 & v69;
        v69 &= v65;
        if ( v26 )
          GreUnlockDisplayDevice(v26[7]);
      }
      if ( !ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v85, &v61, &v71, &ppco) )
        return v28;
    }
  }
  return 1;
}
