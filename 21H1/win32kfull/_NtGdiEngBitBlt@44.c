/*
 * XREFs of _NtGdiEngBitBlt@44 @ 0x217630
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _EngBitBlt@44 @ 0x53EF2 (_EngBitBlt@44.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QAEPAU_BRUSHOBJ@@PAU1@@Z @ 0x215EDE (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QAEPAU_BRUSHOBJ@@PAU1@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QAEPAU_XLATEOBJ@@PAU1@@Z @ 0x216116 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QAEPAU_XLATEOBJ@@PAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QAE@PAU_SURFOBJ@@PAVUMPDOBJ@@@Z @ 0x216194 (--0UMPDSURFOBJ@@QAE@PAU_SURFOBJ@@PAVUMPDOBJ@@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YGPAU_BRUSHOBJ@@PAU1@0@Z @ 0x2161F8 (-CaptureAndFakeBRUSHOBJ@@YGPAU_BRUSHOBJ@@PAU1@0@Z.c)
 *     ?CapturePOINTL@@YGXPAPAU_POINTL@@PAU1@@Z @ 0x216335 (-CapturePOINTL@@YGXPAPAU_POINTL@@PAU1@@Z.c)
 *     ?CaptureRECTL@@YGXPAPAU_RECTL@@PAU1@@Z @ 0x21635A (-CaptureRECTL@@YGXPAPAU_RECTL@@PAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU2@PAUtagSIZE@@@Z @ 0x21637D (-GetDDIOBJ@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU2@PAUtagSIZE@@@Z.c)
 *     ?bCheckMask@@YGHPAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x2169C0 (-bCheckMask@@YGHPAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?bCheckSurfaceRect@@YGHPAU_SURFOBJ@@PAU_RECTL@@PAU_CLIPOBJ@@@Z @ 0x216A83 (-bCheckSurfaceRect@@YGHPAU_SURFOBJ@@PAU_RECTL@@PAU_CLIPOBJ@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YGHPAU_SURFOBJ@@PAU_RECTL@@PAU_CLIPOBJ@@PAK3H@Z @ 0x216B45 (-bCheckSurfaceRectSize@@YGHPAU_SURFOBJ@@PAU_RECTL@@PAU_CLIPOBJ@@PAK3H@Z.c)
 *     ?bCheckXlate@@YGHPAU_SURFOBJ@@PAU_XLATEOBJ@@@Z @ 0x216D04 (-bCheckXlate@@YGHPAU_SURFOBJ@@PAU_XLATEOBJ@@@Z.c)
 *     ?pRect@@YGPAU_RECTL@@PAU_POINTL@@PAU1@KK@Z @ 0x216F4D (-pRect@@YGPAU_RECTL@@PAU_POINTL@@PAU1@KK@Z.c)
 */

BOOL __stdcall NtGdiEngBitBlt(
        XLATEOBJ *a1,
        struct _SURFOBJ *a2,
        BRUSHOBJ *a3,
        CLIPOBJ *a4,
        LONG a5,
        RECTL *a6,
        POINTL *a7,
        POINTL *a8,
        LONG a9,
        POINTL *a10,
        ROP4 a11)
{
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  struct UMPDOBJ *v14; // ebx
  BRUSHOBJ *v15; // eax
  BRUSHOBJ *v16; // edi
  char v17; // al
  SURFOBJ *v18; // esi
  unsigned int *v19; // ecx
  SURFOBJ *v20; // esi
  LONG left; // edi
  bool v22; // zf
  struct _RECTL *top; // esi
  POINTL *v24; // edi
  SURFOBJ *v25; // esi
  BOOL v26; // edi
  struct _POINTL *v28; // [esp-8h] [ebp-DCh]
  unsigned int *v29; // [esp+0h] [ebp-D4h]
  struct _RECTL *v30; // [esp+0h] [ebp-D4h]
  struct _SURFOBJ *v31; // [esp+0h] [ebp-D4h]
  int v32; // [esp+4h] [ebp-D0h]
  struct _CLIPOBJ *v33; // [esp+4h] [ebp-D0h]
  struct _RECTL *v34; // [esp+4h] [ebp-D0h]
  _DWORD v35[3]; // [esp+10h] [ebp-C4h] BYREF
  _DWORD v36[2]; // [esp+1Ch] [ebp-B8h] BYREF
  _DWORD v37[2]; // [esp+24h] [ebp-B0h] BYREF
  _DWORD v38[3]; // [esp+2Ch] [ebp-A8h] BYREF
  POINTL *v39; // [esp+38h] [ebp-9Ch]
  POINTL *v40; // [esp+3Ch] [ebp-98h]
  RECTL *v41; // [esp+40h] [ebp-94h]
  POINTL *pptlBrush; // [esp+44h] [ebp-90h] BYREF
  ROP4 rop4; // [esp+48h] [ebp-8Ch]
  SURFOBJ *psoTrg; // [esp+4Ch] [ebp-88h] BYREF
  int v45; // [esp+50h] [ebp-84h]
  SURFOBJ *psoSrc; // [esp+54h] [ebp-80h] BYREF
  int v47; // [esp+58h] [ebp-7Ch]
  CLIPOBJ *pco; // [esp+5Ch] [ebp-78h]
  RECTL *prclTrg; // [esp+60h] [ebp-74h] BYREF
  POINTL *pptlSrc; // [esp+64h] [ebp-70h] BYREF
  POINTL *pptlMask; // [esp+68h] [ebp-6Ch] BYREF
  SURFOBJ *psoMask; // [esp+6Ch] [ebp-68h] BYREF
  int v53; // [esp+70h] [ebp-64h]
  XLATEOBJ *pxlo; // [esp+74h] [ebp-60h]
  struct _SURFOBJ *v55; // [esp+78h] [ebp-5Ch]
  BRUSHOBJ *pbo; // [esp+7Ch] [ebp-58h]
  struct _RECTL v57; // [esp+80h] [ebp-54h] BYREF
  int v58; // [esp+90h] [ebp-44h]
  int v59; // [esp+94h] [ebp-40h]
  _DWORD v60[4]; // [esp+98h] [ebp-3Ch] BYREF
  _DWORD v61[5]; // [esp+A8h] [ebp-2Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+BCh] [ebp-18h]

  pxlo = a1;
  v55 = a2;
  pbo = a3;
  pco = a4;
  v57.left = a5;
  v41 = a6;
  prclTrg = a6;
  v39 = a7;
  pptlSrc = a7;
  pptlMask = a8;
  v57.top = a9;
  v40 = a10;
  pptlBrush = a10;
  rop4 = a11;
  memset(v61, 0, 16);
  v38[0] = 0;
  v38[1] = 0;
  v37[0] = 0;
  v37[1] = 0;
  v36[0] = 0;
  v36[1] = 0;
  memset(v35, 0, sizeof(v35));
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v14 = ThreadCurrentObj;
  v38[2] = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0;
  ++*((_DWORD *)ThreadCurrentObj + 57);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoTrg, (struct _SURFOBJ *)pxlo, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoSrc, v55, v14);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoMask, (struct _SURFOBJ *)pbo, v14);
  v15 = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v14, v57.top);
  v16 = v15;
  pbo = v15;
  if ( v15 )
  {
    v57.top = (LONG)v15;
  }
  else
  {
    v16 = CaptureAndFakeBRUSHOBJ((_DWORD *)v57.top, v35);
    pbo = v16;
    v57.top = (LONG)v16;
  }
  pxlo = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v14, v57.left);
  if ( (rop4 & 0xFFFF0000) != 0
    || !v41
    || (v17 = gajRop3[BYTE1(rop4)] | gajRop3[(unsigned __int8)rop4], (v17 & 0xE8) != 0)
    && (!v16 || v16->iSolidColor == -1 && !v40)
    || (v17 & 0xD4) != 0 && (!v39 || !psoSrc)
    || (unsigned __int8)rop4 != BYTE1(rop4) && !psoMask && (!v16 || v16->iSolidColor != -1) )
  {
    if ( v53 )
      EngUnlockSurface(psoMask);
    if ( v47 )
      EngUnlockSurface(psoSrc);
    if ( v45 )
      EngUnlockSurface(psoTrg);
    --*((_DWORD *)v14 + 57);
    return 0;
  }
  if ( psoTrg )
  {
    ms_exc.registration.TryLevel = 0;
    CaptureRECTL((_DWORD **)&prclTrg, v61);
    CapturePOINTL((_DWORD **)&pptlSrc, v38);
    CapturePOINTL((_DWORD **)&pptlMask, v37);
    CapturePOINTL((_DWORD **)&pptlBrush, v36);
    ms_exc.registration.TryLevel = -2;
    v57.left = 0;
    v57.top = 0;
    v18 = psoTrg;
    pco = UMPDOBJ::GetDDIOBJ(v14, pco, (struct _CLIPOBJ *)&psoTrg->sizlBitmap);
    if ( !bCheckSurfaceRectSize(
            (HSURF *)prclTrg,
            v18,
            (struct _SURFOBJ *)pco,
            &v57,
            (struct _CLIPOBJ *)&v57.top,
            v19,
            v29,
            v32) )
      goto LABEL_30;
    v20 = psoSrc;
    if ( !bCheckXlate((int)psoSrc, (int)pxlo) )
      goto LABEL_30;
    memset(v60, 0, sizeof(v60));
    v57.right = 0;
    v57.bottom = 0;
    v58 = 0;
    v59 = 0;
    left = v57.left;
    v22 = v20 == 0;
    top = (struct _RECTL *)v57.top;
    v55 = v22
        ? 0
        : (struct _SURFOBJ *)pRect(
                               v60,
                               pptlSrc,
                               (struct _POINTL *)v57.left,
                               (struct _RECTL *)v57.top,
                               (unsigned int)v30,
                               (unsigned int)v33);
    if ( psoMask )
    {
      v28 = (struct _POINTL *)left;
      v24 = pptlMask;
      v57.top = (LONG)pRect(&v57.right, pptlMask, v28, top, (unsigned int)v30, (unsigned int)v33);
    }
    else
    {
      v57.top = 0;
      v24 = pptlMask;
    }
    v25 = psoSrc;
    if ( bCheckSurfaceRect((HSURF *)v55, psoSrc, 0, v30, v33) && bCheckMask(v31, v34) )
      v26 = EngBitBlt(psoTrg, v25, psoMask, pco, pxlo, prclTrg, pptlSrc, v24, pbo, pptlBrush, rop4);
    else
LABEL_30:
      v26 = 0;
  }
  else
  {
    v26 = 0;
  }
  if ( v53 )
    EngUnlockSurface(psoMask);
  if ( v47 )
    EngUnlockSurface(psoSrc);
  if ( v45 )
    EngUnlockSurface(psoTrg);
  --*((_DWORD *)v14 + 57);
  return v26;
}
