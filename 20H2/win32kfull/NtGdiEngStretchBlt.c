/*
 * XREFs of NtGdiEngStretchBlt @ 0x1C0132090
 * Callers:
 *     <none>
 * Callees:
 *     EngStretchBlt @ 0x1C006ADB0 (EngStretchBlt.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0087F2C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0132444 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C01324B4 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C01324E0 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C0132584 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C01325DC (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C01325FC (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C0132664 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C01326D0 (-bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C013332C (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C0133444 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C01335B4 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngStretchBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        XLATEOBJ *a5,
        COLORADJUSTMENT *a6,
        POINTL *a7,
        RECTL *a8,
        RECTL *a9,
        POINTL *a10,
        ULONG iMode)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v15; // rdi
  SURFOBJ *v16; // r15
  __int128 *v17; // r14
  XLATEOBJ *pxlo; // r13
  struct _RECTL *v19; // r10
  unsigned int v20; // esi
  SURFOBJ *v21; // r13
  __int64 result; // rax
  struct _RECTL *v23; // rax
  int pca; // [rsp+28h] [rbp-160h]
  unsigned int v25; // [rsp+60h] [rbp-128h] BYREF
  XLATEOBJ *v26; // [rsp+68h] [rbp-120h]
  SURFOBJ *psoSrc; // [rsp+70h] [rbp-118h] BYREF
  int v28; // [rsp+78h] [rbp-110h]
  unsigned int v29[2]; // [rsp+80h] [rbp-108h] BYREF
  RECTL *prclSrc; // [rsp+88h] [rbp-100h] BYREF
  RECTL *prclDest; // [rsp+90h] [rbp-F8h] BYREF
  SURFOBJ *psoMask; // [rsp+98h] [rbp-F0h] BYREF
  int v33; // [rsp+A0h] [rbp-E8h]
  COLORADJUSTMENT *v34; // [rsp+A8h] [rbp-E0h]
  POINTL *pptlMask; // [rsp+B0h] [rbp-D8h] BYREF
  CLIPOBJ *pco; // [rsp+B8h] [rbp-D0h]
  SURFOBJ *psoDest; // [rsp+C0h] [rbp-C8h] BYREF
  int v38; // [rsp+C8h] [rbp-C0h]
  POINTL *pptlHTOrg; // [rsp+D0h] [rbp-B8h] BYREF
  struct _SURFOBJ *v40; // [rsp+D8h] [rbp-B0h]
  struct _SURFOBJ *v41; // [rsp+E0h] [rbp-A8h]
  struct _POINTL v42; // [rsp+E8h] [rbp-A0h] BYREF
  struct _POINTL v43; // [rsp+F0h] [rbp-98h] BYREF
  __int128 v44; // [rsp+F8h] [rbp-90h] BYREF
  __int64 v45; // [rsp+108h] [rbp-80h]
  struct _RECTL v46; // [rsp+110h] [rbp-78h] BYREF
  struct _RECTL v47; // [rsp+120h] [rbp-68h] BYREF
  struct _RECTL v48; // [rsp+130h] [rbp-58h] BYREF

  v41 = a3;
  v40 = a2;
  pco = a4;
  v26 = a5;
  v34 = a6;
  pptlHTOrg = a7;
  prclDest = a8;
  prclSrc = a9;
  pptlMask = a10;
  v46 = 0LL;
  v47 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v15 = ThreadCurrentObj;
  *(_QWORD *)v29 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoDest, a1, ThreadCurrentObj);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoSrc, v40, v15);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoMask, v41, v15);
    if ( !a7 && iMode == 4 )
    {
      if ( v33 )
        EngUnlockSurface(psoMask);
      if ( v28 )
        EngUnlockSurface(psoSrc);
      if ( v38 )
        EngUnlockSurface(psoDest);
      --*((_DWORD *)v15 + 105);
      return 0LL;
    }
    v16 = psoDest;
    if ( psoDest && psoSrc && prclDest && prclSrc )
    {
      CaptureRECTL(&prclDest, &v46);
      CapturePOINTL(&pptlMask, &v42);
      CaptureRECTL(&prclSrc, &v47);
      v17 = (__int128 *)v34;
      if ( v34 )
      {
        if ( (unsigned __int64)v34 >= MmUserProbeAddress )
          v17 = (__int128 *)MmUserProbeAddress;
        v44 = *v17;
        v45 = *((_QWORD *)v17 + 2);
        v17 = &v44;
        v34 = (COLORADJUSTMENT *)&v44;
      }
      CapturePOINTL(&pptlHTOrg, &v43);
      if ( !(unsigned int)bCheckDestSurfaceOverlap(v16, prclDest) )
      {
        if ( v33 )
          EngUnlockSurface(psoMask);
        if ( v28 )
          EngUnlockSurface(psoSrc);
        if ( v38 )
          EngUnlockSurface(v16);
        result = 1LL;
        goto LABEL_25;
      }
      pco = UMPDOBJ::GetDDIOBJ(v15, a4, &v16->sizlBitmap);
      pxlo = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v15, v26);
      v26 = pxlo;
      if ( (unsigned int)bOrder(prclSrc) && (unsigned int)bCheckXlate(psoSrc, pxlo) )
      {
        v20 = 1;
        v21 = psoMask;
        if ( psoMask )
        {
          v48 = 0LL;
          v29[0] = 0;
          v25 = 0;
          v20 = bCheckSurfaceRectSize(psoSrc, v19, 0LL, v29, &v25, pca);
          if ( v20 )
          {
            v23 = pRect(pptlMask, &v48, v29[0], v25);
            v20 = v21->iBitmapFormat == 1;
            if ( v21->iBitmapFormat == 1 )
              v20 = bCheckSurfaceRect(v21, v23, 0LL);
          }
        }
        pxlo = v26;
      }
      else
      {
        v20 = 0;
      }
      if ( v20 )
        v20 = EngStretchBlt(
                v16,
                psoSrc,
                psoMask,
                pco,
                pxlo,
                (COLORADJUSTMENT *)v17,
                pptlHTOrg,
                prclDest,
                prclSrc,
                pptlMask,
                iMode);
    }
    else
    {
      v20 = 0;
    }
    if ( v33 )
      EngUnlockSurface(psoMask);
    if ( v28 )
      EngUnlockSurface(psoSrc);
    if ( v38 )
      EngUnlockSurface(v16);
    result = v20;
LABEL_25:
    --*((_DWORD *)v15 + 105);
    return result;
  }
  return 0LL;
}
