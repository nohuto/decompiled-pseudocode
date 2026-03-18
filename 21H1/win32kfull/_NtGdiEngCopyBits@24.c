/*
 * XREFs of _NtGdiEngCopyBits@24 @ 0x217AED
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _EngCopyBits@24 @ 0x519F0 (_EngCopyBits@24.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QAEPAU_XLATEOBJ@@PAU1@@Z @ 0x216116 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QAEPAU_XLATEOBJ@@PAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QAE@PAU_SURFOBJ@@PAVUMPDOBJ@@@Z @ 0x216194 (--0UMPDSURFOBJ@@QAE@PAU_SURFOBJ@@PAVUMPDOBJ@@@Z.c)
 *     ?CapturePOINTL@@YGXPAPAU_POINTL@@PAU1@@Z @ 0x216335 (-CapturePOINTL@@YGXPAPAU_POINTL@@PAU1@@Z.c)
 *     ?CaptureRECTL@@YGXPAPAU_RECTL@@PAU1@@Z @ 0x21635A (-CaptureRECTL@@YGXPAPAU_RECTL@@PAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU2@PAUtagSIZE@@@Z @ 0x21637D (-GetDDIOBJ@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU2@PAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YGHPAU_SURFOBJ@@PAU_RECTL@@PAU_CLIPOBJ@@@Z @ 0x216A83 (-bCheckSurfaceRect@@YGHPAU_SURFOBJ@@PAU_RECTL@@PAU_CLIPOBJ@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YGHPAU_SURFOBJ@@PAU_RECTL@@PAU_CLIPOBJ@@PAK3H@Z @ 0x216B45 (-bCheckSurfaceRectSize@@YGHPAU_SURFOBJ@@PAU_RECTL@@PAU_CLIPOBJ@@PAK3H@Z.c)
 *     ?bCheckXlate@@YGHPAU_SURFOBJ@@PAU_XLATEOBJ@@@Z @ 0x216D04 (-bCheckXlate@@YGHPAU_SURFOBJ@@PAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YGHPAU_RECTL@@@Z @ 0x216D49 (-bOrder@@YGHPAU_RECTL@@@Z.c)
 *     ?pRect@@YGPAU_RECTL@@PAU_POINTL@@PAU1@KK@Z @ 0x216F4D (-pRect@@YGPAU_RECTL@@PAU_POINTL@@PAU1@KK@Z.c)
 */

int __stdcall NtGdiEngCopyBits(CLIPOBJ *a1, XLATEOBJ *a2, struct _CLIPOBJ *a3, int a4, RECTL *a5, POINTL *a6)
{
  int v6; // edi
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  struct UMPDOBJ *v10; // esi
  SURFOBJ *v12; // edi
  unsigned int *v13; // ecx
  struct _RECTL *v14; // eax
  SURFOBJ *v15; // ebx
  unsigned int *v16; // [esp+0h] [ebp-90h]
  unsigned int v17; // [esp+0h] [ebp-90h]
  struct _RECTL *v18; // [esp+0h] [ebp-90h]
  int v19; // [esp+4h] [ebp-8Ch]
  unsigned int v20; // [esp+4h] [ebp-8Ch]
  struct _CLIPOBJ *v21; // [esp+4h] [ebp-8Ch]
  _DWORD v22[2]; // [esp+10h] [ebp-80h] BYREF
  int v23; // [esp+18h] [ebp-78h]
  struct _CLIPOBJ *v24; // [esp+1Ch] [ebp-74h]
  struct UMPDOBJ *v25; // [esp+20h] [ebp-70h]
  POINTL *v26; // [esp+24h] [ebp-6Ch]
  RECTL *v27; // [esp+28h] [ebp-68h]
  struct _RECTL v28; // [esp+2Ch] [ebp-64h] BYREF
  POINTL *pptlSrc; // [esp+3Ch] [ebp-54h] BYREF
  SURFOBJ *psoDest[2]; // [esp+40h] [ebp-50h] BYREF
  CLIPOBJ *pco; // [esp+48h] [ebp-48h]
  XLATEOBJ *pxlo; // [esp+4Ch] [ebp-44h]
  RECTL *prclDest; // [esp+50h] [ebp-40h] BYREF
  _DWORD v34[4]; // [esp+54h] [ebp-3Ch] BYREF
  _DWORD v35[5]; // [esp+64h] [ebp-2Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+78h] [ebp-18h]

  pco = a1;
  pxlo = a2;
  v24 = a3;
  v23 = a4;
  v27 = a5;
  prclDest = a5;
  v26 = a6;
  pptlSrc = a6;
  memset(v35, 0, 16);
  v22[0] = 0;
  v22[1] = 0;
  v28.left = 0;
  v28.top = 0;
  v6 = 1;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v10 = ThreadCurrentObj;
  v25 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0;
  ++*((_DWORD *)ThreadCurrentObj + 57);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, (struct _SURFOBJ *)pco, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&v28.right, (struct _SURFOBJ *)pxlo, v10);
  if ( !psoDest[0] || !v28.right || psoDest[0]->iType || !v27 || !v26 )
  {
LABEL_14:
    v6 = 0;
    goto LABEL_15;
  }
  ms_exc.registration.TryLevel = 0;
  CaptureRECTL((_DWORD **)&prclDest, v35);
  CapturePOINTL((_DWORD **)&pptlSrc, v22);
  ms_exc.registration.TryLevel = -2;
  if ( bOrder(prclDest) )
  {
    v12 = psoDest[0];
    pco = UMPDOBJ::GetDDIOBJ(v10, v24, (struct _CLIPOBJ *)&psoDest[0]->sizlBitmap);
    pxlo = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v10, v23);
    if ( bCheckSurfaceRectSize(
           (HSURF *)prclDest,
           v12,
           (struct _SURFOBJ *)pco,
           &v28,
           (struct _CLIPOBJ *)&v28.top,
           v13,
           v16,
           v19)
      && bCheckXlate(v28.right, (int)pxlo) )
    {
      memset(v34, 0, sizeof(v34));
      v14 = pRect(v34, pptlSrc, (struct _POINTL *)v28.left, (struct _RECTL *)v28.top, v17, v20);
      v6 = bCheckSurfaceRect((HSURF *)v14, (_DWORD *)v28.right, 0, v18, v21);
      v15 = psoDest[0];
      if ( v6 )
        v6 = EngCopyBits(psoDest[0], (SURFOBJ *)v28.right, pco, pxlo, prclDest, pptlSrc);
      goto LABEL_16;
    }
    goto LABEL_14;
  }
LABEL_15:
  v15 = psoDest[0];
LABEL_16:
  if ( v28.bottom )
    EngUnlockSurface((SURFOBJ *)v28.right);
  if ( psoDest[1] )
    EngUnlockSurface(v15);
  --*((_DWORD *)v10 + 57);
  return v6;
}
