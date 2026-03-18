/*
 * XREFs of ?SpTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z @ 0xCA866
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?bEnum@ENUMUNDERLAYS@@QAEHPAPAU_SURFOBJ@@PAU_POINTL@@PAPAU_CLIPOBJ@@@Z @ 0x66A00 (-bEnum@ENUMUNDERLAYS@@QAEHPAPAU_SURFOBJ@@PAU_POINTL@@PAPAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z @ 0x66EB0 (--0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z.c)
 *     _OffTransparentBlt@44 @ 0xCAB1A (_OffTransparentBlt@44.c)
 *     ?bRender@NEEDDDILOCK@@QAEHPAPAU_CLIPOBJ@@@Z @ 0xCAC18 (-bRender@NEEDDDILOCK@@QAEHPAPAU_CLIPOBJ@@@Z.c)
 *     _EngTransparentBlt@32 @ 0xCAC46 (_EngTransparentBlt@32.c)
 *     ?bAllowShareAccess@@YGHPAU_SURFOBJ@@@Z @ 0xE51B4 (-bAllowShareAccess@@YGHPAU_SURFOBJ@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

BOOL __stdcall SpTransparentBlt(
        struct _SURFOBJ *psoDst,
        struct _SURFOBJ *psoSrc,
        struct _CLIPOBJ *pco,
        struct _XLATEOBJ *a4,
        struct _RECTL *prclDst,
        struct _RECTL *a6,
        ULONG iTransColor,
        ULONG ulReserved)
{
  int v8; // esi
  HDEV hdev; // eax
  struct _SURFOBJ *v10; // ebx
  LONG *p_lDelta; // esi
  HSURF hsurf; // eax
  int v13; // edi
  int v14; // eax
  PKTHREAD CurrentThread; // eax
  PKTHREAD v16; // eax
  PKTHREAD v17; // eax
  PKTHREAD v18; // eax
  PKTHREAD v19; // eax
  PKTHREAD v20; // eax
  PKTHREAD v21; // eax
  PKTHREAD v22; // eax
  PKTHREAD v23; // eax
  int v24; // eax
  HDEV v26; // [esp-4h] [ebp-2ECh]
  struct _SURFOBJ *v27; // [esp+0h] [ebp-2E8h]
  struct _CLIPOBJ *v28; // [esp+10h] [ebp-2D8h] BYREF
  struct _SURFOBJ *v29; // [esp+14h] [ebp-2D4h] BYREF
  int v30; // [esp+18h] [ebp-2D0h]
  LONG *v31; // [esp+1Ch] [ebp-2CCh] BYREF
  RECTL *prclSrc; // [esp+20h] [ebp-2C8h]
  XLATEOBJ *pxlo; // [esp+24h] [ebp-2C4h]
  int v34; // [esp+28h] [ebp-2C0h]
  struct _POINTL v35; // [esp+2Ch] [ebp-2BCh] BYREF
  int v36; // [esp+34h] [ebp-2B4h]
  struct _RECTL v37[42]; // [esp+38h] [ebp-2B0h] BYREF

  pxlo = a4;
  prclSrc = a6;
  v35.x = 0;
  v35.y = 0;
  v8 = 1;
  v29 = psoDst;
  hdev = psoSrc->hdev;
  v34 = (int)psoSrc;
  v28 = pco;
  v30 = 1;
  v36 = (int)prclDst;
  if ( hdev && *((struct _SURFOBJ **)hdev + 20) == psoSrc )
    return EngTransparentBlt(psoDst, psoSrc, pco, pxlo, prclDst, prclSrc, iTransColor, ulReserved);
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v37, psoDst, pco, prclDst);
  if ( ENUMUNDERLAYS::bEnum(v37, &v29, &v35, &v28) )
  {
    do
    {
      v10 = v29;
      p_lDelta = 0;
      v31 = 0;
      if ( v29 )
      {
        hsurf = v29[1].hsurf;
        if ( ((unsigned int)hsurf & 0x80004000) != 0 && ((unsigned __int16)hsurf & 0x200) == 0 )
        {
          p_lDelta = &v29[-1].lDelta;
          v26 = v29->hdev;
          v31 = &v29[-1].lDelta;
          GreLockDisplayDevice(v26);
        }
      }
      v13 = 0;
      v14 = *(_DWORD *)(v34 + 56);
      if ( (v14 & 0x80004000) != 0 && (v14 & 0x200) == 0 )
      {
        v13 = v34 - 16;
        GreLockDisplayDevice(*(_DWORD *)(v34 - 16 + 28));
      }
      if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v31, &v28) )
      {
        if ( v10->iType == 1 )
        {
          if ( bAllowShareAccess(v27) )
          {
            CurrentThread = KeGetCurrentThread();
            if ( W32GetThreadWin32Thread(CurrentThread) )
            {
              v16 = KeGetCurrentThread();
              if ( *(_DWORD *)(W32GetThreadWin32Thread(v16) + 156) )
              {
                v17 = KeGetCurrentThread();
                if ( *(_DWORD *)(W32GetThreadWin32Thread(v17) + 52)
                  || (v18 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v18) + 56)) )
                {
                  v19 = KeGetCurrentThread();
                  if ( (*(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(v19) + 156) + 20) & 0x8000) != 0 )
                    goto LABEL_25;
                }
              }
            }
          }
          if ( v10->iType == 1 )
          {
            if ( bAllowShareAccess(v27) )
            {
              v20 = KeGetCurrentThread();
              if ( W32GetThreadWin32Thread(v20) )
              {
                v21 = KeGetCurrentThread();
                if ( *(_DWORD *)(W32GetThreadWin32Thread(v21) + 156) )
                {
                  v22 = KeGetCurrentThread();
                  if ( !*(_DWORD *)(W32GetThreadWin32Thread(v22) + 52) )
                  {
LABEL_25:
                    v23 = KeGetCurrentThread();
                    W32GetThreadWin32Thread(v23);
                  }
                }
              }
            }
          }
        }
        v24 = OffTransparentBlt(
                (int)v10,
                (int)&gptlZero,
                v34,
                v28,
                (int)pxlo,
                v36,
                (int)prclSrc,
                iTransColor,
                ulReserved);
        v30 &= v24;
      }
      if ( v13 )
        GreUnlockDisplayDevice(*(_DWORD *)(v13 + 28));
      if ( p_lDelta )
        GreUnlockDisplayDevice(p_lDelta[7]);
    }
    while ( ENUMUNDERLAYS::bEnum(v37, &v29, &v35, &v28) );
    return v30;
  }
  return v8;
}
