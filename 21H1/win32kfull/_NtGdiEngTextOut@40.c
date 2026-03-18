/*
 * XREFs of _NtGdiEngTextOut@40 @ 0x21998C
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _EngTextOut@40 @ 0x54580 (_EngTextOut@40.c)
 *     ??1RFONTTMPOBJ@@QAE@XZ @ 0x869E4 (--1RFONTTMPOBJ@@QAE@XZ.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QAE@PAVPFT@@@Z @ 0xAB9A0 (--0PUBLIC_PFTOBJ@@QAE@PAVPFT@@@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QAEPAU_FONTOBJ@@PAU1@@Z @ 0x1F3854 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QAEPAU_FONTOBJ@@PAU1@@Z.c)
 *     ?UMPDAcquireRFONTSem@@YGXAAVRFONTOBJ@@PAVUMPDOBJ@@KKPBH@Z @ 0x210A97 (-UMPDAcquireRFONTSem@@YGXAAVRFONTOBJ@@PAVUMPDOBJ@@KKPBH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YGHAAVRFONTOBJ@@PAVUMPDOBJ@@PAK2PAPAH@Z @ 0x210CB8 (-UMPDReleaseRFONTSem@@YGHAAVRFONTOBJ@@PAVUMPDOBJ@@PAK2PAPAH@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QAEPAU_BRUSHOBJ@@PAU1@@Z @ 0x215EDE (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QAEPAU_BRUSHOBJ@@PAU1@@Z.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QAEPAU_STROBJ@@PAU1@@Z @ 0x216004 (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QAEPAU_STROBJ@@PAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QAE@PAU_SURFOBJ@@PAVUMPDOBJ@@@Z @ 0x216194 (--0UMPDSURFOBJ@@QAE@PAU_SURFOBJ@@PAVUMPDOBJ@@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YGPAU_BRUSHOBJ@@PAU1@0@Z @ 0x2161F8 (-CaptureAndFakeBRUSHOBJ@@YGPAU_BRUSHOBJ@@PAU1@0@Z.c)
 *     ?CapturePOINTL@@YGXPAPAU_POINTL@@PAU1@@Z @ 0x216335 (-CapturePOINTL@@YGXPAPAU_POINTL@@PAU1@@Z.c)
 *     ?CaptureRECTL@@YGXPAPAU_RECTL@@PAU1@@Z @ 0x21635A (-CaptureRECTL@@YGXPAPAU_RECTL@@PAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU2@PAUtagSIZE@@@Z @ 0x21637D (-GetDDIOBJ@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU2@PAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YGHPAU_SURFOBJ@@PAU_RECTL@@PAU_CLIPOBJ@@@Z @ 0x216A83 (-bCheckSurfaceRect@@YGHPAU_SURFOBJ@@PAU_RECTL@@PAU_CLIPOBJ@@@Z.c)
 */

BOOL __stdcall NtGdiEngTextOut(
        STROBJ *a1,
        BRUSHOBJ *a2,
        FONTOBJ *a3,
        CLIPOBJ *a4,
        _DWORD *a5,
        RECTL *a6,
        BRUSHOBJ *a7,
        _DWORD *a8,
        POINTL *a9,
        MIX mix)
{
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  UMPDOBJ *v13; // esi
  BRUSHOBJ *v15; // edi
  BRUSHOBJ *v16; // eax
  _DWORD *v17; // edi
  BRUSHOBJ *v18; // eax
  RECTL *v19; // edi
  CLIPOBJ *DDIOBJ; // eax
  BOOL v21; // edi
  int *v22; // ecx
  struct _RECTL *v23; // [esp+0h] [ebp-A4h]
  unsigned int v24; // [esp+0h] [ebp-A4h]
  unsigned int *v25; // [esp+0h] [ebp-A4h]
  struct _CLIPOBJ *v26; // [esp+4h] [ebp-A0h]
  const int *v27; // [esp+4h] [ebp-A0h]
  int **v28; // [esp+4h] [ebp-A0h]
  _DWORD v29[3]; // [esp+10h] [ebp-94h] BYREF
  _DWORD v30[3]; // [esp+1Ch] [ebp-88h] BYREF
  _DWORD v31[3]; // [esp+28h] [ebp-7Ch] BYREF
  POINTL *v32; // [esp+34h] [ebp-70h]
  _DWORD *v33; // [esp+38h] [ebp-6Ch]
  int v34; // [esp+3Ch] [ebp-68h]
  POINTL *pptlOrg; // [esp+40h] [ebp-64h] BYREF
  SURFOBJ *pso[2]; // [esp+44h] [ebp-60h] BYREF
  CLIPOBJ *pco; // [esp+4Ch] [ebp-58h]
  RECTL *prclOpaque; // [esp+50h] [ebp-54h] BYREF
  STROBJ *pstro; // [esp+54h] [ebp-50h]
  BRUSHOBJ *pboOpaque; // [esp+58h] [ebp-4Ch]
  FONTOBJ *pfo; // [esp+5Ch] [ebp-48h]
  _DWORD *v42; // [esp+60h] [ebp-44h] BYREF
  BRUSHOBJ *pboFore; // [esp+64h] [ebp-40h]
  _DWORD v44[4]; // [esp+68h] [ebp-3Ch] BYREF
  _DWORD v45[5]; // [esp+78h] [ebp-2Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+8Ch] [ebp-18h]

  pstro = a1;
  pboOpaque = a2;
  pfo = a3;
  pco = a4;
  v42 = a5;
  prclOpaque = a6;
  pboFore = a7;
  v33 = a8;
  v32 = a9;
  pptlOrg = a9;
  v34 = 1;
  memset(v45, 0, 16);
  memset(v44, 0, sizeof(v44));
  v31[0] = 0;
  v31[1] = 0;
  memset(v30, 0, sizeof(v30));
  memset(v29, 0, sizeof(v29));
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v13 = ThreadCurrentObj;
  v31[2] = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0;
  ++*((_DWORD *)ThreadCurrentObj + 57);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, (struct _SURFOBJ *)pstro, ThreadCurrentObj);
  pstro = (STROBJ *)UMPDOBJ::GetDDIOBJ<_STROBJ>(v13, (int)pboOpaque);
  pfo = (FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>(v13, (int)pfo);
  v15 = pboFore;
  v16 = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v13, (int)pboFore);
  if ( !v16 )
    v16 = CaptureAndFakeBRUSHOBJ(v15, v30);
  pboFore = v16;
  v17 = v33;
  v18 = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v13, (int)v33);
  if ( !v18 )
    v18 = CaptureAndFakeBRUSHOBJ(v17, v29);
  pboOpaque = v18;
  if ( !pso[0] )
    goto LABEL_16;
  if ( !pstro )
    goto LABEL_16;
  if ( !pfo )
    goto LABEL_16;
  if ( !pboFore )
    goto LABEL_16;
  if ( !v32 )
    goto LABEL_16;
  ms_exc.registration.TryLevel = 0;
  CaptureRECTL(&v42, v45);
  CaptureRECTL((_DWORD **)&prclOpaque, v44);
  CapturePOINTL((_DWORD **)&pptlOrg, v31);
  ms_exc.registration.TryLevel = -2;
  v19 = (*((_DWORD *)v13 + 55) & 0x100) == 0 ? (RECTL *)v42 : 0;
  DDIOBJ = UMPDOBJ::GetDDIOBJ(v13, pco, (struct _CLIPOBJ *)&pso[0]->sizlBitmap);
  pco = DDIOBJ;
  if ( (((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) != 0 && pboFore->iSolidColor != -1 )
    goto LABEL_16;
  if ( bCheckSurfaceRect((HSURF *)prclOpaque, &pso[0]->dhsurf, (struct _SURFOBJ *)DDIOBJ, v23, v26) )
  {
    PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v42, (struct PFT *)pfo);
    UMPDAcquireRFONTSem(v13, v22, 0, 0, 0, v24, v27);
    v21 = EngTextOut(pso[0], pstro, pfo, pco, v19, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
    UMPDReleaseRFONTSem(v13, (int *)&v42, 0, 0, 0, v25, v28);
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v42);
  }
  else
  {
LABEL_16:
    v21 = 0;
  }
  if ( pso[1] )
    EngUnlockSurface(pso[0]);
  --*((_DWORD *)v13 + 57);
  return v21;
}
