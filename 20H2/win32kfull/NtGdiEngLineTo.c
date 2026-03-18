/*
 * XREFs of NtGdiEngLineTo @ 0x1C02B2150
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0087F2C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0132444 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C01324E0 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C013250C (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C0132664 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C013332C (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C013359C (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     EngLineTo @ 0x1C013E0A0 (EngLineTo.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngLineTo(
        struct _SURFOBJ *a1,
        RECTL *a2,
        struct _BRUSHOBJ *a3,
        LONG x1,
        LONG y1,
        LONG x2,
        LONG y2,
        RECTL *a8,
        MIX mix)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  RECTL *ThreadCurrentObj; // rax
  RECTL *v15; // rbx
  BRUSHOBJ *v17; // rsi
  SURFOBJ *v18; // r14
  struct _CLIPOBJ *DDIOBJ; // r15
  unsigned int v20; // edi
  RECTL *prclBounds[3]; // [rsp+60h] [rbp-A8h] BYREF
  SURFOBJ *pso; // [rsp+78h] [rbp-90h] BYREF
  int v23; // [rsp+80h] [rbp-88h]
  struct _BRUSHOBJ v24; // [rsp+88h] [rbp-80h] BYREF
  struct _RECTL v25; // [rsp+A0h] [rbp-68h] BYREF
  struct _RECTL v26; // [rsp+B0h] [rbp-58h] BYREF

  prclBounds[2] = a2;
  prclBounds[0] = a8;
  v26 = 0LL;
  v25.left = x1;
  v25.top = y1;
  v25.right = x2;
  v25.bottom = y2;
  memset(&v24, 0, sizeof(v24));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = (RECTL *)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v15 = ThreadCurrentObj;
  prclBounds[1] = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++ThreadCurrentObj[26].top;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&pso, a1, (struct UMPDOBJ *)ThreadCurrentObj);
  v17 = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v15, (__int64)a3);
  if ( !v17 )
    v17 = CaptureAndFakeBRUSHOBJ(a3, &v24);
  v18 = pso;
  if ( pso && v17 )
  {
    CaptureRECTL(prclBounds, &v26);
    DDIOBJ = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v15, (struct _CLIPOBJ *)a2, &v18->sizlBitmap);
    v20 = bCheckSurfaceRect(v18, &v25, DDIOBJ);
    if ( v20 )
      v20 = EngLineTo(v18, DDIOBJ, v17, x1, y1, x2, y2, prclBounds[0], mix);
  }
  else
  {
    v20 = 0;
  }
  if ( v23 )
    EngUnlockSurface(v18);
  --v15[26].top;
  return v20;
}
