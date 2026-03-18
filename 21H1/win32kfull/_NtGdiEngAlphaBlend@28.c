/*
 * XREFs of _NtGdiEngAlphaBlend@28 @ 0x2173F0
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _EngAlphaBlend@28 @ 0x526B0 (_EngAlphaBlend@28.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     ??$GetDDIOBJ@U_BLENDOBJ@@@UMPDOBJ@@QAEPAU_BLENDOBJ@@PAU1@@Z @ 0x215E5A (--$GetDDIOBJ@U_BLENDOBJ@@@UMPDOBJ@@QAEPAU_BLENDOBJ@@PAU1@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QAEPAU_XLATEOBJ@@PAU1@@Z @ 0x216116 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QAEPAU_XLATEOBJ@@PAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QAE@PAU_SURFOBJ@@PAVUMPDOBJ@@@Z @ 0x216194 (--0UMPDSURFOBJ@@QAE@PAU_SURFOBJ@@PAVUMPDOBJ@@@Z.c)
 *     ?CaptureRECTL@@YGXPAPAU_RECTL@@PAU1@@Z @ 0x21635A (-CaptureRECTL@@YGXPAPAU_RECTL@@PAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU2@PAUtagSIZE@@@Z @ 0x21637D (-GetDDIOBJ@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU2@PAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YGHPAU_SURFOBJ@@PAU_RECTL@@PAU_CLIPOBJ@@@Z @ 0x216A83 (-bCheckSurfaceRect@@YGHPAU_SURFOBJ@@PAU_RECTL@@PAU_CLIPOBJ@@@Z.c)
 *     ?bCheckXlate@@YGHPAU_SURFOBJ@@PAU_XLATEOBJ@@@Z @ 0x216D04 (-bCheckXlate@@YGHPAU_SURFOBJ@@PAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YGHPAU_RECTL@@@Z @ 0x216D49 (-bOrder@@YGHPAU_RECTL@@@Z.c)
 */

BOOL __stdcall NtGdiEngAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        CLIPOBJ *a3,
        int a4,
        RECTL *a5,
        RECTL *a6,
        BLENDOBJ *a7)
{
  BOOL v7; // ebx
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  struct UMPDOBJ *v11; // esi
  BLENDOBJ *v13; // eax
  SURFOBJ *v14; // ebx
  XLATEOBJ *v15; // edi
  struct _RECTL *v16; // [esp+0h] [ebp-7Ch]
  struct _CLIPOBJ *v17; // [esp+4h] [ebp-78h]
  SURFOBJ *psoDest; // [esp+20h] [ebp-5Ch] BYREF
  struct _SURFOBJ *v19; // [esp+24h] [ebp-58h]
  CLIPOBJ *pco; // [esp+28h] [ebp-54h]
  BLENDOBJ *pBlendObj; // [esp+2Ch] [ebp-50h]
  RECTL *prclDest; // [esp+30h] [ebp-4Ch] BYREF
  SURFOBJ *psoSrc; // [esp+34h] [ebp-48h] BYREF
  struct _SURFOBJ *v24; // [esp+38h] [ebp-44h]
  RECTL *prclSrc; // [esp+3Ch] [ebp-40h] BYREF
  _DWORD v26[4]; // [esp+40h] [ebp-3Ch] BYREF
  _DWORD v27[5]; // [esp+50h] [ebp-2Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+64h] [ebp-18h]

  v19 = a1;
  v24 = a2;
  pco = a3;
  prclDest = a5;
  prclSrc = a6;
  pBlendObj = a7;
  v7 = 1;
  memset(v26, 0, sizeof(v26));
  memset(v27, 0, 16);
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v11 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0;
  ++*((_DWORD *)ThreadCurrentObj + 57);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoDest, v19, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoSrc, v24, v11);
  v13 = (BLENDOBJ *)UMPDOBJ::GetDDIOBJ<_BLENDOBJ>(v11, (int)pBlendObj);
  pBlendObj = v13;
  if ( !psoDest || !psoSrc || !v13 || !a5 || !a6 )
    goto LABEL_14;
  ms_exc.registration.TryLevel = 0;
  CaptureRECTL((_DWORD **)&prclSrc, v27);
  CaptureRECTL((_DWORD **)&prclDest, v26);
  ms_exc.registration.TryLevel = -2;
  if ( !bOrder(prclSrc) || !bOrder(prclDest) )
    goto LABEL_15;
  v14 = psoDest;
  pco = UMPDOBJ::GetDDIOBJ(v11, pco, (struct _CLIPOBJ *)&psoDest->sizlBitmap);
  v15 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v11, a4);
  if ( bCheckSurfaceRect((HSURF *)prclSrc, psoSrc, 0, v16, v17) && bCheckXlate((int)psoSrc, (int)v15) )
    v7 = EngAlphaBlend(v14, psoSrc, pco, v15, prclDest, prclSrc, pBlendObj);
  else
LABEL_14:
    v7 = 0;
LABEL_15:
  if ( v24 )
    EngUnlockSurface(psoSrc);
  if ( v19 )
    EngUnlockSurface(psoDest);
  --*((_DWORD *)v11 + 57);
  return v7;
}
