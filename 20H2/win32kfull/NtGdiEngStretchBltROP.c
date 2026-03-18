/*
 * XREFs of NtGdiEngStretchBltROP @ 0x1C01312C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0087F2C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     EngStretchBltROP @ 0x1C00FBF80 (EngStretchBltROP.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0132444 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C01324B4 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C01324E0 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C013250C (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C0132584 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C01325DC (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C01325FC (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C0132664 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C01326D0 (-bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C013332C (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C0133444 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C013359C (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C01335B4 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?PROBEDISPATBRUSH@@YAHPEAU_BRUSHOBJ@@@Z @ 0x1C02B0B34 (-PROBEDISPATBRUSH@@YAHPEAU_BRUSHOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiEngStretchBltROP(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        CLIPOBJ *a3,
        struct _CLIPOBJ *a4,
        __int64 a5,
        COLORADJUSTMENT *a6,
        POINTL *a7,
        RECTL *a8,
        RECTL *a9,
        POINTL *a10,
        ULONG iMode,
        struct _BRUSHOBJ *a12,
        unsigned int a13)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v16; // rdi
  SURFOBJ *v17; // r13
  __int128 *v18; // r15
  struct _XLATEOBJ *v19; // r9
  unsigned int v20; // r14d
  int v21; // ecx
  int v22; // esi
  DWORD rop4; // r14d
  BRUSHOBJ *pbo; // rax
  unsigned int v25; // esi
  __int64 result; // rax
  SURFOBJ *v27; // r14
  struct _RECTL *v28; // rax
  int pca; // [rsp+28h] [rbp-1B0h]
  unsigned int v30; // [rsp+80h] [rbp-158h] BYREF
  RECTL *prclSrc; // [rsp+88h] [rbp-150h] BYREF
  SURFOBJ *psoMask; // [rsp+90h] [rbp-148h] BYREF
  int v33; // [rsp+98h] [rbp-140h]
  SURFOBJ *psoSrc; // [rsp+A0h] [rbp-138h] BYREF
  int v35; // [rsp+A8h] [rbp-130h]
  unsigned int v36[2]; // [rsp+B0h] [rbp-128h] BYREF
  struct _BRUSHOBJ *v37; // [rsp+B8h] [rbp-120h]
  POINTL *pptlMask; // [rsp+C0h] [rbp-118h] BYREF
  RECTL *prclDest; // [rsp+C8h] [rbp-110h] BYREF
  unsigned int v40; // [rsp+D0h] [rbp-108h]
  COLORADJUSTMENT *v41; // [rsp+D8h] [rbp-100h]
  CLIPOBJ *pco; // [rsp+E0h] [rbp-F8h]
  XLATEOBJ *pxlo; // [rsp+E8h] [rbp-F0h]
  SURFOBJ *psoDest; // [rsp+F0h] [rbp-E8h] BYREF
  int v45; // [rsp+F8h] [rbp-E0h]
  struct _CLIPOBJ *v46; // [rsp+100h] [rbp-D8h]
  __int64 v47; // [rsp+108h] [rbp-D0h]
  POINTL *pptlHTOrg; // [rsp+110h] [rbp-C8h] BYREF
  struct _SURFOBJ *v49; // [rsp+118h] [rbp-C0h]
  struct _POINTL v50; // [rsp+120h] [rbp-B8h] BYREF
  struct _POINTL v51; // [rsp+128h] [rbp-B0h] BYREF
  struct _BRUSHOBJ v52; // [rsp+130h] [rbp-A8h] BYREF
  __int128 v53; // [rsp+148h] [rbp-90h] BYREF
  __int64 v54; // [rsp+158h] [rbp-80h]
  struct _RECTL v55; // [rsp+160h] [rbp-78h] BYREF
  struct _RECTL v56; // [rsp+170h] [rbp-68h] BYREF
  struct _RECTL v57; // [rsp+180h] [rbp-58h] BYREF

  v46 = a4;
  pco = a3;
  v49 = a2;
  pxlo = (XLATEOBJ *)a4;
  v47 = a5;
  v41 = a6;
  pptlHTOrg = a7;
  prclDest = a8;
  prclSrc = a9;
  pptlMask = a10;
  v37 = a12;
  v40 = a13;
  v55 = 0LL;
  v56 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v16 = ThreadCurrentObj;
  *(_QWORD *)v36 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoDest, a1, ThreadCurrentObj);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoSrc, v49, v16);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoMask, (struct _SURFOBJ *)pco, v16);
    if ( !a7 && iMode == 4 )
    {
      if ( v33 )
        EngUnlockSurface(psoMask);
      if ( v35 )
        EngUnlockSurface(psoSrc);
      if ( v45 )
        EngUnlockSurface(psoDest);
      --*((_DWORD *)v16 + 105);
      return 0LL;
    }
    v17 = psoDest;
    if ( !psoDest || !psoSrc || !prclDest || !prclSrc )
    {
LABEL_32:
      v25 = 0;
LABEL_24:
      if ( v33 )
        EngUnlockSurface(psoMask);
      if ( v35 )
        EngUnlockSurface(psoSrc);
      if ( v45 )
        EngUnlockSurface(v17);
      result = v25;
LABEL_31:
      --*((_DWORD *)v16 + 105);
      return result;
    }
    CaptureRECTL(&prclDest, &v55);
    CaptureRECTL(&prclSrc, &v56);
    CapturePOINTL(&pptlMask, &v50);
    CapturePOINTL(&pptlHTOrg, &v51);
    v18 = (__int128 *)v41;
    if ( v41 )
    {
      if ( (unsigned __int64)v41 >= MmUserProbeAddress )
        v18 = (__int128 *)MmUserProbeAddress;
      v53 = *v18;
      v54 = *((_QWORD *)v18 + 2);
      v18 = &v53;
      v41 = (COLORADJUSTMENT *)&v53;
    }
    if ( !(unsigned int)bCheckDestSurfaceOverlap(v17, prclDest) )
    {
      if ( v33 )
        EngUnlockSurface(psoMask);
      if ( v35 )
        EngUnlockSurface(psoSrc);
      if ( v45 )
        EngUnlockSurface(v17);
      result = 1LL;
      goto LABEL_31;
    }
    memset(&v52, 0, sizeof(v52));
    pco = UMPDOBJ::GetDDIOBJ(v16, v46, &v17->sizlBitmap);
    v19 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v16, v47);
    pxlo = v19;
    if ( (((gajRop3[(unsigned __int8)a13] | gajRop3[BYTE1(a13)]) & 0xD4) == 0 || (unsigned int)bOrder(prclSrc))
      && (unsigned int)bCheckXlate(psoSrc, v19) )
    {
      v20 = a13 >> 8;
      v21 = (unsigned __int8)a13;
      if ( (unsigned __int8)a13 == BYTE1(a13) || psoMask )
        goto LABEL_16;
      if ( (unsigned int)PROBEDISPATBRUSH(v37) )
      {
        v21 = (unsigned __int8)a13;
LABEL_16:
        v22 = 1;
LABEL_17:
        if ( v21 != (unsigned __int8)v20 && (!psoMask || !pptlMask) )
          v22 = 0;
        rop4 = a13;
        if ( v22 && a13 == 43724 )
        {
          v27 = psoMask;
          if ( psoMask )
          {
            v57 = 0LL;
            v36[0] = 0;
            v30 = 0;
            v22 = bCheckSurfaceRectSize(psoSrc, prclSrc, 0LL, v36, &v30, pca);
            if ( v22 )
            {
              v28 = pRect(pptlMask, &v57, v36[0], v30);
              v22 = v27->iBitmapFormat == 1;
              if ( v27->iBitmapFormat == 1 )
                v22 = bCheckSurfaceRect(v27, v28, 0LL);
            }
          }
          rop4 = a13;
        }
        pbo = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v16, v37);
        if ( !pbo )
          pbo = CaptureAndFakeBRUSHOBJ(v37, &v52);
        if ( v22 )
        {
          v25 = 1;
          if ( EngStretchBltROP(
                 v17,
                 psoSrc,
                 psoMask,
                 pco,
                 pxlo,
                 (COLORADJUSTMENT *)v18,
                 pptlHTOrg,
                 prclDest,
                 prclSrc,
                 pptlMask,
                 iMode,
                 pbo,
                 rop4) )
          {
            goto LABEL_24;
          }
        }
        goto LABEL_32;
      }
    }
    v22 = 0;
    v20 = v40 >> 8;
    v21 = (unsigned __int8)v40;
    goto LABEL_17;
  }
  return 0LL;
}
