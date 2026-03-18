/*
 * XREFs of ?SpStretchBltROP@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54KPAU_BRUSHOBJ@@K@Z @ 0x1DC279
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?vOrder@ERECTL@@QAEXXZ @ 0x4E19C (-vOrder@ERECTL@@QAEXXZ.c)
 *     ?bEnum@ENUMUNDERLAYS@@QAEHPAPAU_SURFOBJ@@PAU_POINTL@@PAPAU_CLIPOBJ@@@Z @ 0x66A00 (-bEnum@ENUMUNDERLAYS@@QAEHPAPAU_SURFOBJ@@PAU_POINTL@@PAPAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z @ 0x66EB0 (--0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z.c)
 *     _EngStretchBltROP@52 @ 0x7AF4C (_EngStretchBltROP@52.c)
 *     ?bRender@NEEDDDILOCK@@QAEHPAPAU_CLIPOBJ@@@Z @ 0xCAC18 (-bRender@NEEDDDILOCK@@QAEHPAPAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YGHPAU_SURFOBJ@@@Z @ 0xE51B4 (-bAllowShareAccess@@YGHPAU_SURFOBJ@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _OffStretchBltROP@64 @ 0x22F3E8 (_OffStretchBltROP@64.c)
 */

BOOL __stdcall SpStretchBltROP(
        SURFOBJ *psoDest,
        SURFOBJ *psoSrc,
        struct _SURFOBJ *a3,
        CLIPOBJ *pco,
        struct _XLATEOBJ *a5,
        struct tagCOLORADJUSTMENT *a6,
        struct _POINTL *a7,
        RECTL *prclDest,
        struct _RECTL *a9,
        struct _POINTL *a10,
        ULONG iMode,
        struct _BRUSHOBJ *a12,
        DWORD rop4)
{
  int v13; // ebx
  HDEV hdev; // eax
  struct _RECTL *v15; // ecx
  struct _SURFOBJ *v16; // ebx
  LONG *p_lDelta; // esi
  HSURF hsurf; // eax
  int v19; // edi
  int v20; // eax
  PKTHREAD CurrentThread; // eax
  PKTHREAD v23; // eax
  PKTHREAD v24; // eax
  PKTHREAD v25; // eax
  PKTHREAD v26; // eax
  PKTHREAD v27; // eax
  BOOL (__stdcall *v28)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD); // ecx
  PKTHREAD v29; // eax
  PKTHREAD v30; // eax
  PKTHREAD v31; // eax
  PKTHREAD v32; // eax
  HDEV v33; // [esp-4h] [ebp-30Ch]
  int v34; // [esp+Ch] [ebp-2FCh]
  struct _CLIPOBJ *v35; // [esp+10h] [ebp-2F8h] BYREF
  struct _SURFOBJ *v36; // [esp+14h] [ebp-2F4h] BYREF
  LONG *v37; // [esp+18h] [ebp-2F0h] BYREF
  BRUSHOBJ *pbo; // [esp+1Ch] [ebp-2ECh]
  POINTL *pptlMask; // [esp+20h] [ebp-2E8h]
  RECTL *prclSrc; // [esp+24h] [ebp-2E4h]
  POINTL *pptlHTOrg; // [esp+28h] [ebp-2E0h]
  COLORADJUSTMENT *pca; // [esp+2Ch] [ebp-2DCh]
  XLATEOBJ *pxlo; // [esp+30h] [ebp-2D8h]
  SURFOBJ *psoMask; // [esp+34h] [ebp-2D4h]
  int v45; // [esp+38h] [ebp-2D0h]
  struct _POINTL v46; // [esp+3Ch] [ebp-2CCh] BYREF
  int v47; // [esp+44h] [ebp-2C4h]
  RECTL v48; // [esp+48h] [ebp-2C0h] BYREF
  struct _RECTL v49[42]; // [esp+58h] [ebp-2B0h] BYREF

  psoMask = a3;
  pxlo = a5;
  pca = a6;
  pptlHTOrg = a7;
  prclSrc = a9;
  pptlMask = a10;
  pbo = a12;
  v46.x = 0;
  v46.y = 0;
  v13 = 1;
  hdev = psoSrc->hdev;
  v36 = psoDest;
  v45 = (int)psoSrc;
  v47 = (int)prclDest;
  v34 = 1;
  v35 = pco;
  if ( !hdev || *((SURFOBJ **)hdev + 20) != psoSrc )
  {
    v48 = *prclDest;
    ERECTL::vOrder((ERECTL *)&v48);
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v49, psoDest, pco, v15);
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !ENUMUNDERLAYS::bEnum(v49, &v36, &v46, &v35) )
          return v13;
        v16 = v36;
        p_lDelta = 0;
        v37 = 0;
        if ( v36 )
        {
          hsurf = v36[1].hsurf;
          if ( ((unsigned int)hsurf & 0x80004000) != 0 && ((unsigned __int16)hsurf & 0x200) == 0 )
          {
            p_lDelta = &v36[-1].lDelta;
            v33 = v36->hdev;
            v37 = &v36[-1].lDelta;
            GreLockDisplayDevice(v33);
          }
        }
        v19 = 0;
        v20 = *(_DWORD *)(v45 + 56);
        if ( (v20 & 0x80004000) != 0 && (v20 & 0x200) == 0 )
        {
          v19 = v45 - 16;
          GreLockDisplayDevice(*(_DWORD *)(v45 - 16 + 28));
        }
        if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v37, &v35) )
          break;
        if ( v19 )
          GreUnlockDisplayDevice(*(_DWORD *)(v19 + 28));
        if ( p_lDelta )
          GreUnlockDisplayDevice(p_lDelta[7]);
        v13 = v34;
      }
      if ( v16->iType == 1 )
      {
        if ( bAllowShareAccess(v16) )
        {
          CurrentThread = KeGetCurrentThread();
          if ( W32GetThreadWin32Thread(CurrentThread) )
          {
            v23 = KeGetCurrentThread();
            if ( *(_DWORD *)(W32GetThreadWin32Thread(v23) + 156) )
            {
              v24 = KeGetCurrentThread();
              if ( *(_DWORD *)(W32GetThreadWin32Thread(v24) + 52)
                || (v25 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v25) + 56)) )
              {
                v26 = KeGetCurrentThread();
                if ( (*(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(v26) + 156) + 20) & 0x2000) != 0 )
                {
                  v27 = KeGetCurrentThread();
                  v28 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(*(_DWORD *)(W32GetThreadWin32Thread(v27) + 156) + 88);
                  goto LABEL_37;
                }
              }
            }
          }
        }
        if ( v16->iType == 1 )
        {
          if ( bAllowShareAccess(v16) )
          {
            v29 = KeGetCurrentThread();
            if ( W32GetThreadWin32Thread(v29) )
            {
              v30 = KeGetCurrentThread();
              if ( *(_DWORD *)(W32GetThreadWin32Thread(v30) + 156) )
              {
                v31 = KeGetCurrentThread();
                if ( *(_DWORD *)(W32GetThreadWin32Thread(v31) + 52) )
                  goto LABEL_36;
                v32 = KeGetCurrentThread();
                if ( *(_DWORD *)(W32GetThreadWin32Thread(v32) + 56) )
                  goto LABEL_36;
              }
            }
          }
        }
      }
      if ( ((int)v16[1].hsurf & 0x2000) == 0 )
LABEL_36:
        v28 = EngStretchBltROP;
      else
        v28 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))*((_DWORD *)v16->hdev + 218);
LABEL_37:
      v13 = OffStretchBltROP(
              (int)v16,
              (int)v28,
              v45,
              (int)psoMask,
              v35,
              (int)pxlo,
              (int)pca,
              (int)pptlHTOrg,
              v47,
              (int)prclSrc,
              (int)pptlMask,
              iMode,
              (int)pbo,
              rop4) & v34;
      v34 = v13;
      if ( v19 )
        GreUnlockDisplayDevice(*(_DWORD *)(v19 + 28));
      if ( p_lDelta )
        GreUnlockDisplayDevice(p_lDelta[7]);
    }
  }
  return EngStretchBltROP(
           psoDest,
           psoSrc,
           psoMask,
           pco,
           pxlo,
           pca,
           pptlHTOrg,
           prclDest,
           prclSrc,
           pptlMask,
           iMode,
           pbo,
           rop4);
}
