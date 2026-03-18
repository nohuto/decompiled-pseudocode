/*
 * XREFs of NtGdiEngBitBlt @ 0x1C012F4E0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CC86C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     EngBitBlt @ 0x1C00CD5F0 (EngBitBlt.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C01301A4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C0130290 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C01302BC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C01302E8 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C0130360 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C01303D8 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C0130440 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C013110C (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C0131224 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C013137C (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C0131394 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngBitBlt(
        struct _SURFOBJ *a1,
        XLATEOBJ *a2,
        struct _SURFOBJ *a3,
        CLIPOBJ *a4,
        __int64 a5,
        RECTL *a6,
        POINTL *a7,
        POINTL *a8,
        struct _BRUSHOBJ *a9,
        POINTL *a10,
        ROP4 rop4)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v14; // rdi
  struct _BRUSHOBJ *pbo; // rsi
  struct _XLATEOBJ *v16; // r13
  char v17; // al
  SURFOBJ *v18; // r15
  unsigned int v19; // r9d
  unsigned int v20; // r8d
  POINTL *pptlSrc; // r13
  struct _RECTL *v22; // r11
  POINTL *pptlMask; // r14
  struct _CLIPOBJ *v24; // r8
  int v25; // edx
  unsigned int v26; // r14d
  int prclTrg; // [rsp+28h] [rbp-160h]
  POINTL *v29; // [rsp+60h] [rbp-128h] BYREF
  unsigned int v30[2]; // [rsp+68h] [rbp-120h] BYREF
  unsigned int v31[2]; // [rsp+70h] [rbp-118h] BYREF
  RECTL *v32; // [rsp+78h] [rbp-110h] BYREF
  XLATEOBJ *pxlo; // [rsp+80h] [rbp-108h]
  SURFOBJ *psoSrc; // [rsp+88h] [rbp-100h] BYREF
  int v35; // [rsp+90h] [rbp-F8h]
  SURFOBJ *psoMask; // [rsp+98h] [rbp-F0h] BYREF
  int v37; // [rsp+A0h] [rbp-E8h]
  ROP4 v38; // [rsp+A8h] [rbp-E0h]
  POINTL *v39; // [rsp+B0h] [rbp-D8h] BYREF
  POINTL *pptlBrush; // [rsp+B8h] [rbp-D0h] BYREF
  CLIPOBJ *pco; // [rsp+C0h] [rbp-C8h]
  SURFOBJ *psoTrg; // [rsp+C8h] [rbp-C0h] BYREF
  int v43; // [rsp+D0h] [rbp-B8h]
  struct _SURFOBJ *v44; // [rsp+D8h] [rbp-B0h]
  struct _POINTL v45; // [rsp+E0h] [rbp-A8h] BYREF
  struct _POINTL v46; // [rsp+E8h] [rbp-A0h] BYREF
  struct _POINTL v47; // [rsp+F0h] [rbp-98h] BYREF
  struct _CLIPOBJ *v48; // [rsp+F8h] [rbp-90h]
  struct _BRUSHOBJ v49; // [rsp+100h] [rbp-88h] BYREF
  struct _RECTL v50; // [rsp+118h] [rbp-70h] BYREF
  struct _RECTL v51; // [rsp+128h] [rbp-60h] BYREF
  struct _RECTL v52; // [rsp+138h] [rbp-50h] BYREF

  v48 = a4;
  v44 = a3;
  pxlo = a2;
  pco = a4;
  v32 = a6;
  v29 = a7;
  v39 = a8;
  pptlBrush = a10;
  v38 = rop4;
  v50 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  memset(&v49, 0, sizeof(v49));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v14 = ThreadCurrentObj;
  *(_QWORD *)v31 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoTrg, a1, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoSrc, (struct _SURFOBJ *)pxlo, v14);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoMask, v44, v14);
  pbo = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v14, a9);
  if ( !pbo )
    pbo = CaptureAndFakeBRUSHOBJ(a9, &v49);
  *(_QWORD *)v30 = pbo;
  v16 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v14, a5);
  pxlo = v16;
  if ( (rop4 & 0xFFFF0000) != 0
    || !v32
    || (v17 = gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)], (v17 & 0xE8) != 0)
    && (!pbo || pbo->iSolidColor == -1 && !pptlBrush)
    || (v17 & 0xD4) != 0 && (!v29 || !psoSrc)
    || (unsigned __int8)rop4 != BYTE1(rop4) && !psoMask && (!pbo || pbo->iSolidColor != -1) )
  {
    if ( v37 )
      EngUnlockSurface(psoMask);
    if ( v35 )
      EngUnlockSurface(psoSrc);
    if ( v43 )
      EngUnlockSurface(psoTrg);
    --*((_DWORD *)v14 + 105);
    return 0LL;
  }
  v18 = psoTrg;
  if ( !psoTrg )
    goto LABEL_49;
  CaptureRECTL(&v32, &v50);
  CapturePOINTL(&v29, &v45);
  CapturePOINTL(&v39, &v46);
  CapturePOINTL(&pptlBrush, &v47);
  v31[0] = 0;
  v30[0] = 0;
  pco = UMPDOBJ::GetDDIOBJ(v14, v48, &v18->sizlBitmap);
  if ( !(unsigned int)bCheckSurfaceRectSize(v18, v32, pco, v31, v30, prclTrg) || !(unsigned int)bCheckXlate(psoSrc, v16) )
    goto LABEL_49;
  v51 = 0LL;
  v52 = 0LL;
  v19 = v30[0];
  v20 = v31[0];
  pptlSrc = v29;
  v22 = psoSrc ? pRect(v29, &v51, v31[0], v30[0]) : 0LL;
  pptlMask = v39;
  v29 = psoMask ? (POINTL *)pRect(v39, &v52, v20, v19) : 0LL;
  if ( !(unsigned int)bCheckSurfaceRect(psoSrc, v22, 0LL) )
    goto LABEL_49;
  v25 = (_DWORD)v24 + 1;
  if ( psoMask )
  {
    v25 = psoMask->iBitmapFormat == 1;
    if ( psoMask->iBitmapFormat == 1 )
      v25 = bCheckSurfaceRect(psoMask, (struct _RECTL *)v29, v24);
  }
  if ( v25 )
    v26 = EngBitBlt(v18, psoSrc, psoMask, pco, pxlo, v32, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
  else
LABEL_49:
    v26 = 0;
  if ( v37 )
    EngUnlockSurface(psoMask);
  if ( v35 )
    EngUnlockSurface(psoSrc);
  if ( v43 )
    EngUnlockSurface(v18);
  --*((_DWORD *)v14 + 105);
  return v26;
}
