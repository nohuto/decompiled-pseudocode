/*
 * XREFs of _NtGdiEngStretchBlt@44 @ 0x218D88
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _EngStretchBlt@44 @ 0x4BF90 (_EngStretchBlt@44.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QAEPAU_XLATEOBJ@@PAU1@@Z @ 0x216116 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QAEPAU_XLATEOBJ@@PAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QAE@PAU_SURFOBJ@@PAVUMPDOBJ@@@Z @ 0x216194 (--0UMPDSURFOBJ@@QAE@PAU_SURFOBJ@@PAVUMPDOBJ@@@Z.c)
 *     ?CaptureCOLORADJUSTMENT@@YGXPAPAUtagCOLORADJUSTMENT@@PAU1@@Z @ 0x21630B (-CaptureCOLORADJUSTMENT@@YGXPAPAUtagCOLORADJUSTMENT@@PAU1@@Z.c)
 *     ?CapturePOINTL@@YGXPAPAU_POINTL@@PAU1@@Z @ 0x216335 (-CapturePOINTL@@YGXPAPAU_POINTL@@PAU1@@Z.c)
 *     ?CaptureRECTL@@YGXPAPAU_RECTL@@PAU1@@Z @ 0x21635A (-CaptureRECTL@@YGXPAPAU_RECTL@@PAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU2@PAUtagSIZE@@@Z @ 0x21637D (-GetDDIOBJ@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU2@PAUtagSIZE@@@Z.c)
 *     ?bCheckDestSurfaceOverlap@@YGHPAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x216945 (-bCheckDestSurfaceOverlap@@YGHPAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?bCheckMask@@YGHPAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x2169C0 (-bCheckMask@@YGHPAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YGHPAU_SURFOBJ@@PAU_RECTL@@PAU_CLIPOBJ@@PAK3H@Z @ 0x216B45 (-bCheckSurfaceRectSize@@YGHPAU_SURFOBJ@@PAU_RECTL@@PAU_CLIPOBJ@@PAK3H@Z.c)
 *     ?bCheckXlate@@YGHPAU_SURFOBJ@@PAU_XLATEOBJ@@@Z @ 0x216D04 (-bCheckXlate@@YGHPAU_SURFOBJ@@PAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YGHPAU_RECTL@@@Z @ 0x216D49 (-bOrder@@YGHPAU_RECTL@@@Z.c)
 *     ?pRect@@YGPAU_RECTL@@PAU_POINTL@@PAU1@KK@Z @ 0x216F4D (-pRect@@YGPAU_RECTL@@PAU_POINTL@@PAU1@KK@Z.c)
 */

int __stdcall NtGdiEngStretchBlt(
        LONG a1,
        LONG a2,
        struct _SURFOBJ *a3,
        CLIPOBJ *a4,
        XLATEOBJ *a5,
        COLORADJUSTMENT *a6,
        POINTL *a7,
        RECTL *a8,
        LONG a9,
        POINTL *a10,
        ULONG iMode)
{
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  struct UMPDOBJ *v14; // esi
  LONG bottom; // edi
  int v17; // edx
  unsigned int *v18; // ecx
  int v19; // ebx
  SURFOBJ *v20; // edi
  unsigned int *v21; // [esp+0h] [ebp-D0h]
  unsigned int v22; // [esp+0h] [ebp-D0h]
  struct _SURFOBJ *v23; // [esp+0h] [ebp-D0h]
  int v24; // [esp+4h] [ebp-CCh]
  unsigned int v25; // [esp+4h] [ebp-CCh]
  struct _RECTL *v26; // [esp+4h] [ebp-CCh]
  _DWORD v27[2]; // [esp+10h] [ebp-C0h] BYREF
  _DWORD v28[3]; // [esp+18h] [ebp-B8h] BYREF
  LONG v29; // [esp+24h] [ebp-ACh]
  RECTL *v30; // [esp+28h] [ebp-A8h]
  POINTL *v31; // [esp+2Ch] [ebp-A4h]
  COLORADJUSTMENT *pca; // [esp+30h] [ebp-A0h] BYREF
  POINTL *pptlHTOrg; // [esp+34h] [ebp-9Ch] BYREF
  XLATEOBJ *pxlo; // [esp+38h] [ebp-98h]
  CLIPOBJ *pco; // [esp+3Ch] [ebp-94h]
  RECTL *prclDest; // [esp+40h] [ebp-90h] BYREF
  POINTL *pptlMask; // [esp+44h] [ebp-8Ch] BYREF
  struct _RECTL v38; // [esp+48h] [ebp-88h] BYREF
  int v39; // [esp+58h] [ebp-78h]
  SURFOBJ *psoSrc; // [esp+5Ch] [ebp-74h] BYREF
  int v41; // [esp+60h] [ebp-70h]
  SURFOBJ *pso; // [esp+64h] [ebp-6Ch] BYREF
  struct _SURFOBJ *v43; // [esp+68h] [ebp-68h]
  _BYTE v44[24]; // [esp+6Ch] [ebp-64h] BYREF
  _DWORD v45[4]; // [esp+84h] [ebp-4Ch] BYREF
  _DWORD v46[4]; // [esp+94h] [ebp-3Ch] BYREF
  _DWORD v47[5]; // [esp+A4h] [ebp-2Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+B8h] [ebp-18h]

  v31 = a7;
  v38.left = a1;
  v38.top = a2;
  v43 = a3;
  pco = a4;
  pxlo = a5;
  pca = a6;
  pptlHTOrg = a7;
  v30 = a8;
  prclDest = a8;
  v29 = a9;
  v38.right = a9;
  pptlMask = a10;
  memset(v47, 0, 16);
  memset(v46, 0, sizeof(v46));
  v28[0] = 0;
  v28[1] = 0;
  v27[0] = 0;
  v27[1] = 0;
  memset(v44, 0, sizeof(v44));
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v14 = ThreadCurrentObj;
  v28[2] = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0;
  ++*((_DWORD *)ThreadCurrentObj + 57);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&v38.bottom, (struct _SURFOBJ *)v38.left, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoSrc, (struct _SURFOBJ *)v38.top, v14);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&pso, v43, v14);
  if ( !v31 && iMode == 4 )
  {
    if ( v43 )
      EngUnlockSurface(pso);
    if ( v41 )
      EngUnlockSurface(psoSrc);
    if ( v39 )
      EngUnlockSurface((SURFOBJ *)v38.bottom);
    --*((_DWORD *)v14 + 57);
    return 0;
  }
  bottom = v38.bottom;
  if ( !v38.bottom || !psoSrc || !v30 || !v29 )
  {
    v19 = 0;
    goto LABEL_34;
  }
  ms_exc.registration.TryLevel = 0;
  CaptureRECTL((_DWORD **)&prclDest, v47);
  CapturePOINTL((_DWORD **)&pptlMask, v28);
  CaptureRECTL((_DWORD **)&v38.right, v46);
  CaptureCOLORADJUSTMENT((const void **)&pca, v44);
  CapturePOINTL((_DWORD **)&pptlHTOrg, v27);
  ms_exc.registration.TryLevel = -2;
  if ( !bCheckDestSurfaceOverlap(bottom, &prclDest->left) )
  {
    if ( v43 )
      EngUnlockSurface(pso);
    if ( v41 )
      EngUnlockSurface(psoSrc);
    if ( v39 )
      EngUnlockSurface((SURFOBJ *)bottom);
    --*((_DWORD *)v14 + 57);
    return 1;
  }
  pco = UMPDOBJ::GetDDIOBJ(v14, pco, (struct _CLIPOBJ *)(bottom + 16));
  pxlo = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v14, (int)pxlo);
  if ( bOrder((_DWORD *)v38.right) && bCheckXlate((int)psoSrc, v17) )
  {
    v19 = 1;
    if ( pso )
    {
      memset(v45, 0, sizeof(v45));
      v38.left = 0;
      v38.top = 0;
      v19 = bCheckSurfaceRectSize((HSURF *)v38.right, psoSrc, 0, &v38, (struct _CLIPOBJ *)&v38.top, v18, v21, v24);
      if ( !v19 )
      {
LABEL_34:
        v20 = (SURFOBJ *)v38.bottom;
        goto LABEL_35;
      }
      pRect(v45, pptlMask, (struct _POINTL *)v38.left, (struct _RECTL *)v38.top, v22, v25);
      v19 = bCheckMask(v23, v26);
    }
  }
  else
  {
    v19 = 0;
  }
  if ( !v19 )
    goto LABEL_34;
  v20 = (SURFOBJ *)v38.bottom;
  v19 = EngStretchBlt(
          (SURFOBJ *)v38.bottom,
          psoSrc,
          pso,
          pco,
          pxlo,
          pca,
          pptlHTOrg,
          prclDest,
          (RECTL *)v38.right,
          pptlMask,
          iMode);
LABEL_35:
  if ( v43 )
    EngUnlockSurface(pso);
  if ( v41 )
    EngUnlockSurface(psoSrc);
  if ( v39 )
    EngUnlockSurface(v20);
  --*((_DWORD *)v14 + 57);
  return v19;
}
