/*
 * XREFs of NtGdiEngCopyBits @ 0x1C0130F60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0087F2C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     EngCopyBits @ 0x1C009C350 (EngCopyBits.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0132444 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C01324B4 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C01324E0 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C0132584 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C01325DC (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C01325FC (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C0132664 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C013332C (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C0133444 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C01335B4 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngCopyBits(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        CLIPOBJ *a4,
        RECTL *a5,
        POINTL *a6)
{
  unsigned int v10; // esi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v13; // rdi
  SURFOBJ *v14; // r14
  RECTL *prclDest; // r12
  struct _CLIPOBJ *DDIOBJ; // rsi
  struct _XLATEOBJ *v17; // r13
  SURFOBJ *v18; // r15
  struct _RECTL *v19; // rax
  int pptlSrc; // [rsp+28h] [rbp-C0h]
  unsigned int v22; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int v23; // [rsp+34h] [rbp-B4h] BYREF
  POINTL *v24; // [rsp+38h] [rbp-B0h] BYREF
  RECTL *v25; // [rsp+40h] [rbp-A8h] BYREF
  CLIPOBJ *pco; // [rsp+48h] [rbp-A0h]
  SURFOBJ *psoSrc; // [rsp+50h] [rbp-98h] BYREF
  int v28; // [rsp+58h] [rbp-90h]
  struct _POINTL v29; // [rsp+60h] [rbp-88h] BYREF
  struct _CLIPOBJ *v30; // [rsp+68h] [rbp-80h]
  SURFOBJ *psoDest; // [rsp+70h] [rbp-78h] BYREF
  int v32; // [rsp+78h] [rbp-70h]
  struct _RECTL v33; // [rsp+80h] [rbp-68h] BYREF
  struct _RECTL v34; // [rsp+90h] [rbp-58h] BYREF

  v30 = a3;
  pco = a4;
  v25 = a5;
  v24 = a6;
  v34 = 0LL;
  v29 = 0LL;
  v23 = 0;
  v22 = 0;
  v10 = 1;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v13 = ThreadCurrentObj;
  *(_QWORD *)&v33.left = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoDest, a1, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoSrc, a2, v13);
  v14 = psoDest;
  if ( !psoDest || !psoSrc || psoDest->iType || !v25 || !v24 )
  {
LABEL_18:
    v10 = 0;
    goto LABEL_12;
  }
  CaptureRECTL(&v25, &v34);
  CapturePOINTL(&v24, &v29);
  prclDest = v25;
  if ( (unsigned int)bOrder(v25) )
  {
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v13, a3, &v14->sizlBitmap);
    pco = DDIOBJ;
    v17 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v13, a4);
    if ( (unsigned int)bCheckSurfaceRectSize(v14, prclDest, DDIOBJ, &v23, &v22, pptlSrc) )
    {
      v18 = psoSrc;
      if ( (unsigned int)bCheckXlate(psoSrc, v17) )
      {
        v33 = 0LL;
        v19 = pRect(v24, &v33, v23, v22);
        v10 = bCheckSurfaceRect(v18, v19, 0LL);
        if ( v10 )
          v10 = EngCopyBits(v14, v18, pco, v17, prclDest, v24);
        goto LABEL_12;
      }
    }
    goto LABEL_18;
  }
LABEL_12:
  if ( v28 )
    EngUnlockSurface(psoSrc);
  if ( v32 )
    EngUnlockSurface(v14);
  --*((_DWORD *)v13 + 105);
  return v10;
}
