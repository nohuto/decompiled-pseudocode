/*
 * XREFs of NtGdiEngTextOut @ 0x1C012FA90
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CC86C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     EngTextOut @ 0x1C00CDA90 (EngTextOut.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C00E3244 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C01301A4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C0130290 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C01302BC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C01302E8 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C0130440 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C0130AA4 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C0130C7C (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C0130DE4 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C013110C (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1C01311BC (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C013137C (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C01599E8 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 */

__int64 __fastcall NtGdiEngTextOut(
        struct _SURFOBJ *a1,
        __int64 a2,
        __int64 a3,
        struct _CLIPOBJ *a4,
        struct _RECTL *a5,
        RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        POINTL *a9,
        MIX mix)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v14; // rdi
  CLIPOBJ *v15; // r13
  BRUSHOBJ *pboFore; // rsi
  BRUSHOBJ *pboOpaque; // r12
  SURFOBJ *v18; // r15
  RECTL *v19; // rax
  struct _CLIPOBJ *DDIOBJ; // rcx
  unsigned int v21; // r14d
  POINTL *pptlOrg; // [rsp+58h] [rbp-100h] BYREF
  RECTL *prclOpaque; // [rsp+60h] [rbp-F8h] BYREF
  _BYTE v26[8]; // [rsp+68h] [rbp-F0h] BYREF
  CLIPOBJ *pco; // [rsp+70h] [rbp-E8h]
  RECTL *prclExtra; // [rsp+78h] [rbp-E0h]
  BRUSHOBJ *v29; // [rsp+80h] [rbp-D8h]
  struct _RECTL *v30; // [rsp+88h] [rbp-D0h] BYREF
  STROBJ *pstro; // [rsp+90h] [rbp-C8h]
  struct _POINTL v32; // [rsp+98h] [rbp-C0h] BYREF
  struct _CLIPOBJ *v33; // [rsp+A0h] [rbp-B8h]
  struct UMPDOBJ *v34; // [rsp+A8h] [rbp-B0h]
  SURFOBJ *pso; // [rsp+B0h] [rbp-A8h] BYREF
  int v36; // [rsp+B8h] [rbp-A0h]
  struct _BRUSHOBJ v37; // [rsp+C0h] [rbp-98h] BYREF
  struct _BRUSHOBJ v38; // [rsp+D8h] [rbp-80h] BYREF
  struct _RECTL v39; // [rsp+F0h] [rbp-68h] BYREF
  struct _RECTL v40; // [rsp+100h] [rbp-58h] BYREF

  v33 = a4;
  prclExtra = (RECTL *)a4;
  v30 = a5;
  prclOpaque = a6;
  pptlOrg = a9;
  v39 = 0LL;
  v40 = 0LL;
  v32 = 0LL;
  memset(&v37, 0, sizeof(v37));
  memset(&v38, 0, sizeof(v38));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v14 = ThreadCurrentObj;
  v34 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&pso, a1, ThreadCurrentObj);
  pstro = (STROBJ *)UMPDOBJ::GetDDIOBJ<_STROBJ>(v14, a2);
  v15 = (CLIPOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>(v14, a3);
  pco = v15;
  pboFore = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v14, a7);
  if ( !pboFore )
    pboFore = CaptureAndFakeBRUSHOBJ(a7, &v37);
  v29 = pboFore;
  pboOpaque = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v14, a8);
  if ( !pboOpaque )
    pboOpaque = CaptureAndFakeBRUSHOBJ(a8, &v38);
  v18 = pso;
  if ( !pso || !pstro || !v15 || !pboFore || !pptlOrg )
    goto LABEL_20;
  CaptureRECTL(&v30, &v39);
  CaptureRECTL(&prclOpaque, &v40);
  CapturePOINTL(&pptlOrg, &v32);
  v19 = v30;
  if ( (*((_DWORD *)v14 + 103) & 0x100) != 0 )
    v19 = 0LL;
  if ( ((prclExtra = v19,
         DDIOBJ = UMPDOBJ::GetDDIOBJ(v14, v33, &v18->sizlBitmap),
         pco = DDIOBJ,
         (((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0)
     || pboFore->iSolidColor == -1)
    && (unsigned int)bCheckSurfaceRect(v18, prclOpaque, DDIOBJ) )
  {
    PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v26, (struct PFT *)v15);
    UMPDAcquireRFONTSem((struct RFONTOBJ *)v26, v14, 0, 0, 0LL);
    v21 = EngTextOut(v18, pstro, (FONTOBJ *)v15, pco, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
    UMPDReleaseRFONTSem((struct RFONTOBJ *)v26, v14, 0LL, 0LL, 0LL);
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v26);
  }
  else
  {
LABEL_20:
    v21 = 0;
  }
  if ( v36 )
    EngUnlockSurface(v18);
  --*((_DWORD *)v14 + 105);
  return v21;
}
