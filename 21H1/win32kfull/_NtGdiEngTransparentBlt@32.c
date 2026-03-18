/*
 * XREFs of _NtGdiEngTransparentBlt@32 @ 0x219BED
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     _EngTransparentBlt@32 @ 0xCAC46 (_EngTransparentBlt@32.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QAEPAU_XLATEOBJ@@PAU1@@Z @ 0x216116 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QAEPAU_XLATEOBJ@@PAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QAE@PAU_SURFOBJ@@PAVUMPDOBJ@@@Z @ 0x216194 (--0UMPDSURFOBJ@@QAE@PAU_SURFOBJ@@PAVUMPDOBJ@@@Z.c)
 *     ?CaptureRECTL@@YGXPAPAU_RECTL@@PAU1@@Z @ 0x21635A (-CaptureRECTL@@YGXPAPAU_RECTL@@PAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU2@PAUtagSIZE@@@Z @ 0x21637D (-GetDDIOBJ@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU2@PAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YGHPAU_SURFOBJ@@PAU_RECTL@@PAU_CLIPOBJ@@@Z @ 0x216A83 (-bCheckSurfaceRect@@YGHPAU_SURFOBJ@@PAU_RECTL@@PAU_CLIPOBJ@@@Z.c)
 *     ?bCheckXlate@@YGHPAU_SURFOBJ@@PAU_XLATEOBJ@@@Z @ 0x216D04 (-bCheckXlate@@YGHPAU_SURFOBJ@@PAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YGHPAU_RECTL@@@Z @ 0x216D49 (-bOrder@@YGHPAU_RECTL@@@Z.c)
 */

BOOL __stdcall NtGdiEngTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        CLIPOBJ *a3,
        int a4,
        RECTL *a5,
        RECTL *a6,
        ULONG iTransColor,
        ULONG ulReserved)
{
  BOOL v8; // ebx
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  struct UMPDOBJ *v12; // esi
  SURFOBJ *v14; // ebx
  XLATEOBJ *v15; // edi
  struct _RECTL *v16; // [esp+0h] [ebp-78h]
  struct _CLIPOBJ *v17; // [esp+4h] [ebp-74h]
  SURFOBJ *psoDst; // [esp+20h] [ebp-58h] BYREF
  struct _SURFOBJ *v19; // [esp+24h] [ebp-54h]
  CLIPOBJ *pco; // [esp+28h] [ebp-50h]
  RECTL *prclDst; // [esp+2Ch] [ebp-4Ch] BYREF
  SURFOBJ *psoSrc; // [esp+30h] [ebp-48h] BYREF
  struct _SURFOBJ *v23; // [esp+34h] [ebp-44h]
  RECTL *prclSrc; // [esp+38h] [ebp-40h] BYREF
  _DWORD v25[4]; // [esp+3Ch] [ebp-3Ch] BYREF
  _DWORD v26[5]; // [esp+4Ch] [ebp-2Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+60h] [ebp-18h]

  v19 = a1;
  v23 = a2;
  pco = a3;
  prclDst = a5;
  prclSrc = a6;
  v8 = 1;
  memset(v25, 0, sizeof(v25));
  memset(v26, 0, 16);
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v12 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0;
  ++*((_DWORD *)ThreadCurrentObj + 57);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoDst, v19, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoSrc, v23, v12);
  if ( !psoDst || !psoSrc || !a5 || !a6 )
    goto LABEL_13;
  ms_exc.registration.TryLevel = 0;
  CaptureRECTL((_DWORD **)&prclSrc, v26);
  CaptureRECTL((_DWORD **)&prclDst, v25);
  ms_exc.registration.TryLevel = -2;
  if ( !bOrder(prclDst) || !bOrder(prclSrc) )
    goto LABEL_14;
  v14 = psoDst;
  pco = UMPDOBJ::GetDDIOBJ(v12, pco, (struct _CLIPOBJ *)&psoDst->sizlBitmap);
  v15 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v12, a4);
  if ( bCheckSurfaceRect((HSURF *)prclSrc, psoSrc, 0, v16, v17) && bCheckXlate((int)psoSrc, (int)v15) )
    v8 = EngTransparentBlt(v14, psoSrc, pco, v15, prclDst, prclSrc, iTransColor, ulReserved);
  else
LABEL_13:
    v8 = 0;
LABEL_14:
  if ( v23 )
    EngUnlockSurface(psoSrc);
  if ( v19 )
    EngUnlockSurface(psoDst);
  --*((_DWORD *)v12 + 57);
  return v8;
}
