/*
 * XREFs of NtGdiEngPlgBlt @ 0x1C02B2510
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0087F2C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0132444 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C01324B4 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C01324E0 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C0132584 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C01325FC (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C0132664 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C013332C (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C0133444 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C01335B4 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     EngPlgBlt @ 0x1C028B9B0 (EngPlgBlt.c)
 */

__int64 __fastcall NtGdiEngPlgBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        CLIPOBJ *a5,
        COLORADJUSTMENT *a6,
        struct _POINTL *a7,
        unsigned __int64 a8,
        RECTL *a9,
        POINTL *a10,
        ULONG iMode)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v14; // rsi
  SURFOBJ *v16; // r13
  __int128 *pca; // r14
  __int64 v18; // r15
  struct _SURFOBJ *v19; // rdx
  int v20; // ecx
  RECTL *prcl; // r15
  XLATEOBJ *pxlo; // rdx
  unsigned int v23; // edi
  struct _RECTL *v24; // r9
  unsigned int v25; // [rsp+60h] [rbp-128h] BYREF
  unsigned int v26; // [rsp+64h] [rbp-124h] BYREF
  struct _SURFOBJ *v27; // [rsp+68h] [rbp-120h]
  COLORADJUSTMENT *v28; // [rsp+70h] [rbp-118h]
  POINTL *pptl; // [rsp+78h] [rbp-110h] BYREF
  CLIPOBJ *pco; // [rsp+80h] [rbp-108h]
  SURFOBJ *psoSrc; // [rsp+88h] [rbp-100h] BYREF
  int v32; // [rsp+90h] [rbp-F8h]
  RECTL *v33; // [rsp+98h] [rbp-F0h] BYREF
  POINTL pptlBrushOrg; // [rsp+A0h] [rbp-E8h] BYREF
  SURFOBJ *psoMsk; // [rsp+A8h] [rbp-E0h] BYREF
  int v36; // [rsp+B0h] [rbp-D8h]
  struct _SURFOBJ *v37; // [rsp+B8h] [rbp-D0h]
  struct _POINTL v38; // [rsp+C0h] [rbp-C8h] BYREF
  struct _POINTL *v39; // [rsp+C8h] [rbp-C0h] BYREF
  struct _CLIPOBJ *v40; // [rsp+D0h] [rbp-B8h]
  CLIPOBJ *v41; // [rsp+D8h] [rbp-B0h]
  struct UMPDOBJ *v42; // [rsp+E0h] [rbp-A8h]
  struct _CLIPOBJ *v43; // [rsp+E8h] [rbp-A0h]
  SURFOBJ *psoTrg; // [rsp+F0h] [rbp-98h] BYREF
  int v45; // [rsp+F8h] [rbp-90h]
  __int128 v46; // [rsp+100h] [rbp-88h] BYREF
  __int64 v47; // [rsp+110h] [rbp-78h]
  struct _RECTL v48; // [rsp+118h] [rbp-70h] BYREF
  struct _RECTL v49; // [rsp+128h] [rbp-60h] BYREF
  POINTFIX pptfx[2]; // [rsp+138h] [rbp-50h] BYREF
  __int64 v51; // [rsp+148h] [rbp-40h]

  v40 = a4;
  v37 = a3;
  v27 = a2;
  v43 = a4;
  v41 = a5;
  pco = a5;
  v28 = a6;
  v39 = a7;
  v33 = a9;
  pptl = a10;
  v48 = 0LL;
  v38 = 0LL;
  pptlBrushOrg = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v14 = ThreadCurrentObj;
  v42 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoTrg, a1, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoSrc, v27, v14);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoMsk, v37, v14);
  v16 = psoTrg;
  if ( !psoTrg || !psoSrc || !a9 || !a8 )
    goto LABEL_28;
  CaptureRECTL(&v33, &v48);
  pca = (__int128 *)v28;
  if ( v28 )
  {
    if ( (unsigned __int64)v28 >= MmUserProbeAddress )
      pca = (__int128 *)MmUserProbeAddress;
    v46 = *pca;
    v47 = *((_QWORD *)pca + 2);
    pca = &v46;
    v28 = (COLORADJUSTMENT *)&v46;
  }
  CapturePOINTL(&pptl, &v38);
  CapturePOINTL(&v39, &pptlBrushOrg);
  if ( a8 + 24 < a8 || a8 + 24 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)&pptfx[0].x = *(_OWORD *)a8;
  v51 = *(_QWORD *)(a8 + 16);
  v18 = (__int64)v41;
  pco = UMPDOBJ::GetDDIOBJ(v14, v40, &v16->sizlBitmap);
  v19 = (struct _SURFOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v14, v18);
  v27 = v19;
  v20 = 1;
  prcl = v33;
  if ( v33 && (v33->left > v33->right || v33->top > v33->bottom) )
    v20 = 0;
  if ( v20 && (unsigned int)bCheckXlate(psoSrc, (struct _XLATEOBJ *)v19) )
  {
    v23 = 1;
    if ( psoMsk )
    {
      v49 = 0LL;
      v26 = 0;
      v25 = 0;
      v23 = bCheckSurfaceRectSize(psoSrc, prcl, 0LL, &v26, &v25);
      if ( v23 )
      {
        v24 = pRect(pptl, &v49, v26, v25);
        v23 = psoMsk->iBitmapFormat == 1;
        if ( psoMsk->iBitmapFormat == 1 )
          v23 = bCheckSurfaceRect(psoMsk, v24, 0LL);
      }
      pxlo = (XLATEOBJ *)v27;
    }
    if ( v23 )
      v23 = EngPlgBlt(v16, psoSrc, psoMsk, pco, pxlo, (COLORADJUSTMENT *)pca, &pptlBrushOrg, pptfx, prcl, pptl, iMode);
  }
  else
  {
LABEL_28:
    v23 = 0;
  }
  if ( v36 )
    EngUnlockSurface(psoMsk);
  if ( v32 )
    EngUnlockSurface(psoSrc);
  if ( v45 )
    EngUnlockSurface(v16);
  --*((_DWORD *)v14 + 105);
  return v23;
}
