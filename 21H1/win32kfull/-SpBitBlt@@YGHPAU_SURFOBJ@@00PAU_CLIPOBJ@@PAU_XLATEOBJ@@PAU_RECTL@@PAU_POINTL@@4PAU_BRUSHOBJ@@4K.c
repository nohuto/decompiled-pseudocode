/*
 * XREFs of ?SpBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x65C80
 * Callers:
 *     ?SpCopyBits@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@@Z @ 0x5681C (-SpCopyBits@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@@Z.c)
 *     ?bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z @ 0xA0A28 (-bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?bEnum@ENUMUNDERLAYS@@QAEHPAPAU_SURFOBJ@@PAU_POINTL@@PAPAU_CLIPOBJ@@@Z @ 0x66A00 (-bEnum@ENUMUNDERLAYS@@QAEHPAPAU_SURFOBJ@@PAU_POINTL@@PAPAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z @ 0x66EB0 (--0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YGHPAU_POINTL@@PAU_SURFOBJ@@01PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@0@Z @ 0x92B62 (-INVOKEOFFCOPYBITS@@YGHPAU_POINTL@@PAU_SURFOBJ@@01PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@0@Z.c)
 *     ?bAllowShareAccess@@YGHPAU_SURFOBJ@@@Z @ 0xE51B4 (-bAllowShareAccess@@YGHPAU_SURFOBJ@@@Z.c)
 *     _OffBitBlt@56 @ 0xE9E3E (_OffBitBlt@56.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bSpBltScreenToScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x1DD39B (-bSpBltScreenToScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_.c)
 */

int __stdcall SpBitBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  HDEV hdev; // eax
  int (__stdcall *v12)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // eax
  void (__stdcall *v14)(HDEV); // edx
  struct _SURFOBJ *v15; // ebx
  LONG *p_lDelta; // esi
  HSURF hsurf; // eax
  LONG *v18; // edi
  HSURF v19; // eax
  int v20; // eax
  PKTHREAD v21; // eax
  PKTHREAD v22; // eax
  PKTHREAD v23; // eax
  PKTHREAD v24; // eax
  PKTHREAD v25; // eax
  PKTHREAD v26; // eax
  PKTHREAD v27; // eax
  PKTHREAD v28; // eax
  PKTHREAD v29; // eax
  PKTHREAD v30; // eax
  CLIPOBJ *v31; // ebx
  LONG y; // ecx
  LONG x; // edx
  struct _POINTL *v34; // eax
  LONG v35; // ecx
  LONG v36; // edx
  ULONG iUniq; // ecx
  LONG left; // edx
  ULONG v39; // ecx
  int v40; // edx
  PKTHREAD CurrentThread; // eax
  PKTHREAD v42; // eax
  PKTHREAD v43; // eax
  PKTHREAD v44; // eax
  PKTHREAD v45; // eax
  PKTHREAD v46; // eax
  PKTHREAD v47; // eax
  PKTHREAD v48; // eax
  PKTHREAD v49; // eax
  LONG v50; // eax
  void (__stdcall *v51)(LONG); // edi
  int v52; // eax
  struct _RECTL *v53; // [esp+14h] [ebp-360h]
  struct _POINTL *v54; // [esp+18h] [ebp-35Ch]
  CLIPOBJ *ppco; // [esp+24h] [ebp-350h] BYREF
  int v56; // [esp+28h] [ebp-34Ch]
  struct _POINTL *v57; // [esp+2Ch] [ebp-348h]
  int v58; // [esp+30h] [ebp-344h]
  int v59; // [esp+34h] [ebp-340h]
  struct _POINTL *v60; // [esp+38h] [ebp-33Ch]
  struct _SURFOBJ *v61; // [esp+3Ch] [ebp-338h]
  struct _SURFOBJ *v62; // [esp+40h] [ebp-334h]
  struct _SURFOBJ *v63; // [esp+44h] [ebp-330h] BYREF
  BOOL (__stdcall *v64)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // [esp+48h] [ebp-32Ch]
  struct _BRUSHOBJ *v65; // [esp+4Ch] [ebp-328h]
  struct _SURFOBJ *v66; // [esp+50h] [ebp-324h]
  int v67; // [esp+54h] [ebp-320h]
  struct _POINTL v68; // [esp+58h] [ebp-31Ch] BYREF
  struct _POINTL *v69; // [esp+60h] [ebp-314h]
  struct _POINTL v70; // [esp+64h] [ebp-310h] BYREF
  int v71; // [esp+6Ch] [ebp-308h] BYREF
  int v72; // [esp+70h] [ebp-304h]
  int v73; // [esp+74h] [ebp-300h] BYREF
  int v74; // [esp+78h] [ebp-2FCh]
  struct _POINTL v75; // [esp+7Ch] [ebp-2F8h] BYREF
  ULONG v76; // [esp+84h] [ebp-2F0h] BYREF
  int v77; // [esp+88h] [ebp-2ECh]
  ULONG v78; // [esp+8Ch] [ebp-2E8h] BYREF
  int v79; // [esp+90h] [ebp-2E4h]
  struct _CLIPOBJ v80; // [esp+94h] [ebp-2E0h] BYREF
  LONG top; // [esp+ACh] [ebp-2C8h]
  LONG right; // [esp+B0h] [ebp-2C4h]
  _DWORD v83[4]; // [esp+B4h] [ebp-2C0h] BYREF
  _BYTE v84[684]; // [esp+C4h] [ebp-2B0h] BYREF

  v66 = a3;
  v61 = (struct _SURFOBJ *)a5;
  v60 = a8;
  v65 = a9;
  v57 = a10;
  v63 = a1;
  v62 = a2;
  ppco = a4;
  v68.x = 0;
  v68.y = 0;
  v80.rclBounds.bottom = 0;
  *(_DWORD *)&v80.iDComplexity = 0;
  top = 0;
  right = 0;
  v76 = 0;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  v56 = 1;
  if ( !a2 || (hdev = a2->hdev) == 0 || a2 != *((struct _SURFOBJ **)hdev + 20) )
  {
    v80.iUniq = a6->left;
    v80.rclBounds.left = a6->top;
    v80.rclBounds.top = a6->right;
    v80.rclBounds.right = a6->bottom;
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v84, a1, a4, a6);
    if ( !ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v84, &v63, &v68, &ppco) )
      return 1;
    v14 = (void (__stdcall *)(HDEV))GreLockDisplayDevice;
    while ( 1 )
    {
      v15 = v63;
      p_lDelta = 0;
      if ( v63 )
      {
        hsurf = v63[1].hsurf;
        if ( ((unsigned int)hsurf & 0x80004000) != 0 && ((unsigned __int16)hsurf & 0x200) == 0 )
        {
          p_lDelta = &v63[-1].lDelta;
          v14(v63->hdev);
          v14 = (void (__stdcall *)(HDEV))GreLockDisplayDevice;
        }
      }
      v18 = 0;
      if ( v62 )
      {
        v19 = v62[1].hsurf;
        if ( ((unsigned int)v19 & 0x80004000) != 0 && ((unsigned __int16)v19 & 0x200) == 0 )
        {
          v18 = &v62[-1].lDelta;
          v14(v62->hdev);
        }
      }
      if ( !p_lDelta || *((_WORD *)p_lDelta + 32) != 1 || EngUpdateDeviceSurface((SURFOBJ *)(p_lDelta + 4), &ppco) )
        break;
      if ( v18 )
        GreUnlockDisplayDevice(v18[7]);
      GreUnlockDisplayDevice(p_lDelta[7]);
LABEL_85:
      v52 = ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v84, &v63, &v68, &ppco);
      v14 = (void (__stdcall *)(HDEV))GreLockDisplayDevice;
      if ( !v52 )
        return v56;
    }
    if ( a11 == 52428 )
    {
      v20 = INVOKEOFFCOPYBITS(&gptlZero, v62, (struct _POINTL *)ppco, v61, &v80, (struct _XLATEOBJ *)a7, v53, v54);
      goto LABEL_79;
    }
    if ( (unsigned __int8)a11 != a11 >> 8 )
    {
      iUniq = v80.iUniq;
      left = v80.rclBounds.left;
      top = v80.rclBounds.top;
      right = v80.rclBounds.right;
      v80.rclBounds.bottom = v80.iUniq;
      *(_DWORD *)&v80.iDComplexity = v80.rclBounds.left;
      if ( ppco )
      {
        if ( !bIntersect(&ppco->rclBounds, (const struct _RECTL *)&v80, (struct _RECTL *)&v80.rclBounds.bottom) )
          goto LABEL_80;
        left = *(_DWORD *)&v80.iDComplexity;
        iUniq = v80.rclBounds.bottom;
      }
      v39 = iUniq - v80.iUniq;
      v40 = left - v80.rclBounds.left;
      v58 = 0;
      if ( a7 )
      {
        v76 = v39 + a7->x;
        v77 = v40 + a7->y;
        v58 = (int)&v76;
      }
      v59 = 0;
      if ( v60 )
      {
        v78 = v39 + v60->x;
        v79 = v40 + v60->y;
        v59 = (int)&v78;
      }
      if ( v15->iType == 1 )
      {
        if ( bAllowShareAccess((struct _SURFOBJ *)v53) )
        {
          CurrentThread = KeGetCurrentThread();
          if ( W32GetThreadWin32Thread(CurrentThread) )
          {
            v42 = KeGetCurrentThread();
            if ( *(_DWORD *)(W32GetThreadWin32Thread(v42) + 156) )
            {
              v43 = KeGetCurrentThread();
              if ( *(_DWORD *)(W32GetThreadWin32Thread(v43) + 52)
                || (v44 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v44) + 56)) )
              {
                v45 = KeGetCurrentThread();
                if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(v45) + 156) + 20) & 1) != 0 )
                  goto LABEL_77;
              }
            }
          }
        }
        if ( v15->iType == 1 )
        {
          if ( bAllowShareAccess((struct _SURFOBJ *)v53) )
          {
            v46 = KeGetCurrentThread();
            if ( W32GetThreadWin32Thread(v46) )
            {
              v47 = KeGetCurrentThread();
              if ( *(_DWORD *)(W32GetThreadWin32Thread(v47) + 156) )
              {
                v48 = KeGetCurrentThread();
                if ( !*(_DWORD *)(W32GetThreadWin32Thread(v48) + 52) )
                {
LABEL_77:
                  v49 = KeGetCurrentThread();
                  W32GetThreadWin32Thread(v49);
                }
              }
            }
          }
        }
      }
      v20 = OffBitBlt(
              (int)v15,
              (int)&gptlZero,
              (int)v62,
              (int)v66,
              ppco,
              (int)v61,
              (int)&v80.rclBounds.bottom,
              v58,
              v59,
              (int)v65,
              (int)v57,
              a11);
LABEL_79:
      v56 &= v20;
LABEL_80:
      if ( v18 )
      {
        v50 = v18[7];
        v51 = (void (__stdcall *)(LONG))GreUnlockDisplayDevice;
        GreUnlockDisplayDevice(v50);
      }
      else
      {
        v51 = (void (__stdcall *)(LONG))GreUnlockDisplayDevice;
      }
      if ( p_lDelta )
        v51(p_lDelta[7]);
      goto LABEL_85;
    }
    if ( v15->iType != 1 )
      goto LABEL_41;
    if ( bAllowShareAccess((struct _SURFOBJ *)v53) )
    {
      v21 = KeGetCurrentThread();
      if ( W32GetThreadWin32Thread(v21) )
      {
        v22 = KeGetCurrentThread();
        if ( *(_DWORD *)(W32GetThreadWin32Thread(v22) + 156) )
        {
          v23 = KeGetCurrentThread();
          if ( *(_DWORD *)(W32GetThreadWin32Thread(v23) + 52)
            || (v24 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v24) + 56)) )
          {
            v25 = KeGetCurrentThread();
            if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(v25) + 156) + 20) & 1) != 0 )
            {
              v26 = KeGetCurrentThread();
              v64 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_DWORD *)(W32GetThreadWin32Thread(v26) + 156) + 48);
LABEL_44:
              v31 = ppco;
              y = v68.y;
              x = v68.x;
              v69 = a7;
              v70.x = 0;
              v70.y = 0;
              v58 = v68.y;
              v59 = v68.x;
              if ( ppco && (v68.x || v68.y) )
              {
                ppco->rclBounds.left += v68.x;
                v31->rclBounds.right += x;
                v31->rclBounds.top += y;
                v31->rclBounds.bottom += y;
                if ( v31->iDComplexity )
                {
                  v70.y = y;
                  v70.x = x;
                  RGNOBJ::bOffset((RGNOBJ *)&v31[2], &v70);
                  y = v58;
                  x = v59;
                }
              }
              v71 = 0;
              v83[0] = x + v80.iUniq;
              v72 = 0;
              v83[2] = x + v80.rclBounds.top;
              v83[1] = y + v80.rclBounds.left;
              v83[3] = y + v80.rclBounds.right;
              if ( a7 )
              {
                v71 = gptlZero.x + a7->x;
                v72 = gptlZero.y + a7->y;
                v69 = (struct _POINTL *)&v71;
              }
              v34 = v57;
              v73 = 0;
              v74 = 0;
              if ( v57 )
              {
                v73 = x + v57->x;
                v74 = y + v57->y;
                v34 = (struct _POINTL *)&v73;
              }
              v20 = v64(v63, v62, v66, v31, (XLATEOBJ *)v61, (RECTL *)v83, v69, v60, v65, v34, a11);
              v35 = -v58;
              v36 = -v59;
              v67 = v20;
              v75.x = 0;
              v75.y = 0;
              if ( v31 && (v59 || v58) )
              {
                v31->rclBounds.left -= v59;
                v31->rclBounds.right += v36;
                v31->rclBounds.top += v35;
                v31->rclBounds.bottom += v35;
                if ( v31->iDComplexity )
                {
                  v75.y = v35;
                  v75.x = v36;
                  RGNOBJ::bOffset((RGNOBJ *)&v31[2], &v75);
                  v20 = v67;
                }
              }
              goto LABEL_79;
            }
          }
        }
      }
    }
    if ( v15->iType != 1
      || !bAllowShareAccess((struct _SURFOBJ *)v53)
      || (v27 = KeGetCurrentThread(), !W32GetThreadWin32Thread(v27))
      || (v28 = KeGetCurrentThread(), !*(_DWORD *)(W32GetThreadWin32Thread(v28) + 156))
      || (v29 = KeGetCurrentThread(), !*(_DWORD *)(W32GetThreadWin32Thread(v29) + 52))
      && (v30 = KeGetCurrentThread(), !*(_DWORD *)(W32GetThreadWin32Thread(v30) + 56)) )
    {
LABEL_41:
      if ( ((int)v15[1].hsurf & 1) != 0 )
      {
        v64 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_DWORD *)v15->hdev + 208);
        goto LABEL_44;
      }
    }
    v64 = EngBitBlt;
    goto LABEL_44;
  }
  v12 = bSpBltScreenToScreen;
  if ( a1 != a2 )
    v12 = bSpBltFromScreen;
  return v12(a1, a2, v66, a4, (struct _XLATEOBJ *)v61, a6, a7, v60, v65, v57, a11);
}
