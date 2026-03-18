/*
 * XREFs of NtGdiEngTransparentBlt @ 0x1C02B44D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     EngTransparentBlt @ 0x1C00C9450 (EngTransparentBlt.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CC86C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C01301A4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C01302BC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C0130360 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C01303B8 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C01303D8 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C0130440 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C013110C (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        CLIPOBJ *a4,
        RECTL *a5,
        RECTL *a6,
        ULONG iTransColor,
        ULONG ulReserved)
{
  unsigned int v12; // edi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v15; // rbx
  SURFOBJ *v17; // rsi
  RECTL *prclDst; // r15
  RECTL *prclSrc; // r14
  struct _XLATEOBJ *v20; // r12
  SURFOBJ *v21; // rdi
  RECTL *v22; // [rsp+40h] [rbp-A8h] BYREF
  CLIPOBJ *pco; // [rsp+48h] [rbp-A0h]
  RECTL *v24; // [rsp+50h] [rbp-98h] BYREF
  SURFOBJ *psoSrc; // [rsp+58h] [rbp-90h] BYREF
  int v26; // [rsp+60h] [rbp-88h]
  struct UMPDOBJ *v27; // [rsp+68h] [rbp-80h]
  struct _CLIPOBJ *v28; // [rsp+70h] [rbp-78h]
  SURFOBJ *psoDst; // [rsp+78h] [rbp-70h] BYREF
  int v30; // [rsp+80h] [rbp-68h]
  struct _RECTL v31; // [rsp+88h] [rbp-60h] BYREF
  struct _RECTL v32; // [rsp+98h] [rbp-50h] BYREF

  v28 = a3;
  pco = a4;
  v24 = a5;
  v22 = a6;
  v12 = 1;
  v32 = 0LL;
  v31 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v15 = ThreadCurrentObj;
  v27 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoDst, a1, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoSrc, a2, v15);
  v17 = psoDst;
  if ( !psoDst || !psoSrc || !a5 || !v22 )
    goto LABEL_13;
  CaptureRECTL(&v22, &v31);
  CaptureRECTL(&v24, &v32);
  prclDst = v24;
  if ( !bOrder(v24) )
    goto LABEL_14;
  prclSrc = v22;
  if ( !bOrder(v22) )
    goto LABEL_14;
  pco = UMPDOBJ::GetDDIOBJ(v15, a3, &v17->sizlBitmap);
  v20 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v15, (__int64)a4);
  v21 = psoSrc;
  if ( (unsigned int)bCheckSurfaceRect(psoSrc, prclSrc, 0LL) && (unsigned int)bCheckXlate(v21, v20) )
    v12 = EngTransparentBlt(v17, v21, pco, v20, prclDst, prclSrc, iTransColor, ulReserved);
  else
LABEL_13:
    v12 = 0;
LABEL_14:
  if ( v26 )
    EngUnlockSurface(psoSrc);
  if ( v30 )
    EngUnlockSurface(v17);
  --*((_DWORD *)v15 + 105);
  return v12;
}
