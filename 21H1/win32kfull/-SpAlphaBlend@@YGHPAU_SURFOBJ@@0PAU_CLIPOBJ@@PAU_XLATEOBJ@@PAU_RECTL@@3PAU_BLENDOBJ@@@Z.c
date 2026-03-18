/*
 * XREFs of ?SpAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z @ 0xE4EFE
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _EngAlphaBlend@28 @ 0x526B0 (_EngAlphaBlend@28.c)
 *     ?bEnum@ENUMUNDERLAYS@@QAEHPAPAU_SURFOBJ@@PAU_POINTL@@PAPAU_CLIPOBJ@@@Z @ 0x66A00 (-bEnum@ENUMUNDERLAYS@@QAEHPAPAU_SURFOBJ@@PAU_POINTL@@PAPAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z @ 0x66EB0 (--0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QAEHPAPAU_CLIPOBJ@@@Z @ 0xCAC18 (-bRender@NEEDDDILOCK@@QAEHPAPAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YGHPAU_SURFOBJ@@@Z @ 0xE51B4 (-bAllowShareAccess@@YGHPAU_SURFOBJ@@@Z.c)
 *     _OffAlphaBlend@40 @ 0xE51D2 (_OffAlphaBlend@40.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

BOOL __stdcall SpAlphaBlend(
        struct _SURFOBJ *psoDest,
        struct _SURFOBJ *psoSrc,
        struct _CLIPOBJ *pco,
        struct _XLATEOBJ *a4,
        struct _RECTL *prclDest,
        struct _RECTL *a6,
        struct _BLENDOBJ *a7)
{
  int v7; // esi
  HDEV hdev; // eax
  struct _SURFOBJ *v9; // ebx
  LONG *p_lDelta; // esi
  HSURF hsurf; // eax
  int v12; // edi
  int v13; // eax
  PKTHREAD CurrentThread; // eax
  PKTHREAD v15; // eax
  PKTHREAD v16; // eax
  PKTHREAD v17; // eax
  PKTHREAD v18; // eax
  PKTHREAD v19; // eax
  PKTHREAD v20; // eax
  PKTHREAD v21; // eax
  PKTHREAD v22; // eax
  int v23; // eax
  HDEV v25; // [esp-4h] [ebp-2ECh]
  struct _SURFOBJ *v26; // [esp+0h] [ebp-2E8h]
  struct _CLIPOBJ *v27; // [esp+Ch] [ebp-2DCh] BYREF
  struct _SURFOBJ *v28; // [esp+10h] [ebp-2D8h] BYREF
  int v29; // [esp+14h] [ebp-2D4h]
  LONG *v30; // [esp+18h] [ebp-2D0h] BYREF
  BLENDOBJ *pBlendObj; // [esp+1Ch] [ebp-2CCh]
  RECTL *prclSrc; // [esp+20h] [ebp-2C8h]
  XLATEOBJ *pxlo; // [esp+24h] [ebp-2C4h]
  int v34; // [esp+28h] [ebp-2C0h]
  struct _POINTL v35; // [esp+2Ch] [ebp-2BCh] BYREF
  int v36; // [esp+34h] [ebp-2B4h]
  struct _RECTL v37[42]; // [esp+38h] [ebp-2B0h] BYREF

  pxlo = a4;
  prclSrc = a6;
  pBlendObj = a7;
  v35.x = 0;
  v35.y = 0;
  v7 = 1;
  v28 = psoDest;
  hdev = psoSrc->hdev;
  v34 = (int)psoSrc;
  v27 = pco;
  v29 = 1;
  v36 = (int)prclDest;
  if ( hdev && *((struct _SURFOBJ **)hdev + 20) == psoSrc )
    return EngAlphaBlend(psoDest, psoSrc, pco, pxlo, prclDest, prclSrc, pBlendObj);
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v37, psoDest, pco, prclDest);
  if ( ENUMUNDERLAYS::bEnum(v37, &v28, &v35, &v27) )
  {
    do
    {
      v9 = v28;
      p_lDelta = 0;
      v30 = 0;
      if ( v28 )
      {
        hsurf = v28[1].hsurf;
        if ( ((unsigned int)hsurf & 0x80004000) != 0 && ((unsigned __int16)hsurf & 0x200) == 0 )
        {
          p_lDelta = &v28[-1].lDelta;
          v25 = v28->hdev;
          v30 = &v28[-1].lDelta;
          GreLockDisplayDevice(v25);
        }
      }
      v12 = 0;
      v13 = *(_DWORD *)(v34 + 56);
      if ( (v13 & 0x80004000) != 0 && (v13 & 0x200) == 0 )
      {
        v12 = v34 - 16;
        GreLockDisplayDevice(*(_DWORD *)(v34 - 16 + 28));
      }
      if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v30, &v27) )
      {
        if ( v9->iType == 1 )
        {
          if ( bAllowShareAccess(v26) )
          {
            CurrentThread = KeGetCurrentThread();
            if ( W32GetThreadWin32Thread(CurrentThread) )
            {
              v15 = KeGetCurrentThread();
              if ( *(_DWORD *)(W32GetThreadWin32Thread(v15) + 156) )
              {
                v16 = KeGetCurrentThread();
                if ( *(_DWORD *)(W32GetThreadWin32Thread(v16) + 52)
                  || (v17 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v17) + 56)) )
                {
                  v18 = KeGetCurrentThread();
                  if ( (*(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(v18) + 156) + 20) & 0x10000) != 0 )
                    goto LABEL_25;
                }
              }
            }
          }
          if ( v9->iType == 1 )
          {
            if ( bAllowShareAccess(v26) )
            {
              v19 = KeGetCurrentThread();
              if ( W32GetThreadWin32Thread(v19) )
              {
                v20 = KeGetCurrentThread();
                if ( *(_DWORD *)(W32GetThreadWin32Thread(v20) + 156) )
                {
                  v21 = KeGetCurrentThread();
                  if ( !*(_DWORD *)(W32GetThreadWin32Thread(v21) + 52) )
                  {
LABEL_25:
                    v22 = KeGetCurrentThread();
                    W32GetThreadWin32Thread(v22);
                  }
                }
              }
            }
          }
        }
        v23 = OffAlphaBlend((int)v9, (int)&gptlZero, v34, v27, (int)pxlo, v36, (int)prclSrc, (int)pBlendObj);
        v29 &= v23;
      }
      if ( v12 )
        GreUnlockDisplayDevice(*(_DWORD *)(v12 + 28));
      if ( p_lDelta )
        GreUnlockDisplayDevice(p_lDelta[7]);
    }
    while ( ENUMUNDERLAYS::bEnum(v37, &v28, &v35, &v27) );
    return v29;
  }
  return v7;
}
