/*
 * XREFs of ?SpStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x1DBF6E
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _EngStretchBlt@44 @ 0x4BF90 (_EngStretchBlt@44.c)
 *     ?vOrder@ERECTL@@QAEXXZ @ 0x4E19C (-vOrder@ERECTL@@QAEXXZ.c)
 *     ?bEnum@ENUMUNDERLAYS@@QAEHPAPAU_SURFOBJ@@PAU_POINTL@@PAPAU_CLIPOBJ@@@Z @ 0x66A00 (-bEnum@ENUMUNDERLAYS@@QAEHPAPAU_SURFOBJ@@PAU_POINTL@@PAPAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z @ 0x66EB0 (--0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QAEHPAPAU_CLIPOBJ@@@Z @ 0xCAC18 (-bRender@NEEDDDILOCK@@QAEHPAPAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YGHPAU_SURFOBJ@@@Z @ 0xE51B4 (-bAllowShareAccess@@YGHPAU_SURFOBJ@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _OffStretchBlt@56 @ 0x22F2C1 (_OffStretchBlt@56.c)
 */

BOOL __stdcall SpStretchBlt(
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
        ULONG iMode)
{
  int v11; // ebx
  HDEV hdev; // eax
  struct _RECTL *v13; // ecx
  struct _SURFOBJ *v14; // ebx
  LONG *p_lDelta; // esi
  HSURF hsurf; // eax
  LONG *v17; // edi
  HSURF v18; // eax
  PKTHREAD CurrentThread; // eax
  PKTHREAD v21; // eax
  PKTHREAD v22; // eax
  PKTHREAD v23; // eax
  PKTHREAD v24; // eax
  PKTHREAD v25; // eax
  BOOL (__stdcall *v26)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // ecx
  PKTHREAD v27; // eax
  PKTHREAD v28; // eax
  PKTHREAD v29; // eax
  PKTHREAD v30; // eax
  HDEV v31; // [esp-4h] [ebp-30Ch]
  int v32; // [esp+10h] [ebp-2F8h]
  struct _CLIPOBJ *v33; // [esp+14h] [ebp-2F4h] BYREF
  struct _SURFOBJ *v34; // [esp+18h] [ebp-2F0h] BYREF
  LONG *v35; // [esp+1Ch] [ebp-2ECh] BYREF
  POINTL *pptlMask; // [esp+20h] [ebp-2E8h]
  RECTL *prclSrc; // [esp+24h] [ebp-2E4h]
  POINTL *pptlHTOrg; // [esp+28h] [ebp-2E0h]
  COLORADJUSTMENT *pca; // [esp+2Ch] [ebp-2DCh]
  XLATEOBJ *pxlo; // [esp+30h] [ebp-2D8h]
  SURFOBJ *psoMask; // [esp+34h] [ebp-2D4h]
  SURFOBJ *v42; // [esp+38h] [ebp-2D0h]
  struct _POINTL v43; // [esp+3Ch] [ebp-2CCh] BYREF
  RECTL *v44; // [esp+44h] [ebp-2C4h]
  RECTL v45; // [esp+48h] [ebp-2C0h] BYREF
  struct _RECTL v46[42]; // [esp+58h] [ebp-2B0h] BYREF

  psoMask = a3;
  pxlo = a5;
  pca = a6;
  pptlHTOrg = a7;
  prclSrc = a9;
  pptlMask = a10;
  v43.x = 0;
  v43.y = 0;
  v11 = 1;
  hdev = psoSrc->hdev;
  v34 = psoDest;
  v42 = psoSrc;
  v44 = prclDest;
  v32 = 1;
  v33 = pco;
  if ( !hdev || *((SURFOBJ **)hdev + 20) != psoSrc )
  {
    v45 = *prclDest;
    ERECTL::vOrder((ERECTL *)&v45);
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v46, psoDest, pco, v13);
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !ENUMUNDERLAYS::bEnum(v46, &v34, &v43, &v33) )
          return v11;
        v14 = v34;
        p_lDelta = 0;
        v35 = 0;
        if ( v34 )
        {
          hsurf = v34[1].hsurf;
          if ( ((unsigned int)hsurf & 0x80004000) != 0 && ((unsigned __int16)hsurf & 0x200) == 0 )
          {
            p_lDelta = &v34[-1].lDelta;
            v31 = v34->hdev;
            v35 = &v34[-1].lDelta;
            GreLockDisplayDevice(v31);
          }
        }
        v17 = 0;
        v18 = v42[1].hsurf;
        if ( ((unsigned int)v18 & 0x80004000) != 0 && ((unsigned __int16)v18 & 0x200) == 0 )
        {
          v17 = &v42[-1].lDelta;
          GreLockDisplayDevice(v42->hdev);
        }
        if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v35, &v33) )
          break;
        if ( v17 )
          GreUnlockDisplayDevice(v17[7]);
        if ( p_lDelta )
          GreUnlockDisplayDevice(p_lDelta[7]);
        v11 = v32;
      }
      if ( v14->iType == 1 )
      {
        if ( bAllowShareAccess(v14) )
        {
          CurrentThread = KeGetCurrentThread();
          if ( W32GetThreadWin32Thread(CurrentThread) )
          {
            v21 = KeGetCurrentThread();
            if ( *(_DWORD *)(W32GetThreadWin32Thread(v21) + 156) )
            {
              v22 = KeGetCurrentThread();
              if ( *(_DWORD *)(W32GetThreadWin32Thread(v22) + 52)
                || (v23 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v23) + 56)) )
              {
                v24 = KeGetCurrentThread();
                if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(v24) + 156) + 20) & 2) != 0 )
                {
                  v25 = KeGetCurrentThread();
                  v26 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(*(_DWORD *)(W32GetThreadWin32Thread(v25) + 156) + 56);
                  goto LABEL_37;
                }
              }
            }
          }
        }
        if ( v14->iType == 1 )
        {
          if ( bAllowShareAccess(v14) )
          {
            v27 = KeGetCurrentThread();
            if ( W32GetThreadWin32Thread(v27) )
            {
              v28 = KeGetCurrentThread();
              if ( *(_DWORD *)(W32GetThreadWin32Thread(v28) + 156) )
              {
                v29 = KeGetCurrentThread();
                if ( *(_DWORD *)(W32GetThreadWin32Thread(v29) + 52) )
                  goto LABEL_36;
                v30 = KeGetCurrentThread();
                if ( *(_DWORD *)(W32GetThreadWin32Thread(v30) + 56) )
                  goto LABEL_36;
              }
            }
          }
        }
      }
      if ( ((int)v14[1].hsurf & 2) == 0 )
LABEL_36:
        v26 = EngStretchBlt;
      else
        v26 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))*((_DWORD *)v14->hdev + 210);
LABEL_37:
      v11 = OffStretchBlt(v14, v26, v42, psoMask, v33, pxlo, pca, pptlHTOrg, v44, prclSrc, pptlMask, iMode) & v32;
      v32 = v11;
      if ( v17 )
        GreUnlockDisplayDevice(v17[7]);
      if ( p_lDelta )
        GreUnlockDisplayDevice(p_lDelta[7]);
    }
  }
  return EngStretchBlt(psoDest, psoSrc, psoMask, pco, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode);
}
