/*
 * XREFs of _NtGdiEngPlgBlt@44 @ 0x218A7F
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _EngPlgBlt@44 @ 0x1ECC18 (_EngPlgBlt@44.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QAEPAU_XLATEOBJ@@PAU1@@Z @ 0x216116 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QAEPAU_XLATEOBJ@@PAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QAE@PAU_SURFOBJ@@PAVUMPDOBJ@@@Z @ 0x216194 (--0UMPDSURFOBJ@@QAE@PAU_SURFOBJ@@PAVUMPDOBJ@@@Z.c)
 *     ?CaptureCOLORADJUSTMENT@@YGXPAPAUtagCOLORADJUSTMENT@@PAU1@@Z @ 0x21630B (-CaptureCOLORADJUSTMENT@@YGXPAPAUtagCOLORADJUSTMENT@@PAU1@@Z.c)
 *     ?CapturePOINTL@@YGXPAPAU_POINTL@@PAU1@@Z @ 0x216335 (-CapturePOINTL@@YGXPAPAU_POINTL@@PAU1@@Z.c)
 *     ?CaptureRECTL@@YGXPAPAU_RECTL@@PAU1@@Z @ 0x21635A (-CaptureRECTL@@YGXPAPAU_RECTL@@PAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU2@PAUtagSIZE@@@Z @ 0x21637D (-GetDDIOBJ@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU2@PAUtagSIZE@@@Z.c)
 *     ?bCheckMask@@YGHPAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x2169C0 (-bCheckMask@@YGHPAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YGHPAU_SURFOBJ@@PAU_RECTL@@PAU_CLIPOBJ@@PAK3H@Z @ 0x216B45 (-bCheckSurfaceRectSize@@YGHPAU_SURFOBJ@@PAU_RECTL@@PAU_CLIPOBJ@@PAK3H@Z.c)
 *     ?bCheckXlate@@YGHPAU_SURFOBJ@@PAU_XLATEOBJ@@@Z @ 0x216D04 (-bCheckXlate@@YGHPAU_SURFOBJ@@PAU_XLATEOBJ@@@Z.c)
 *     ?pRect@@YGPAU_RECTL@@PAU_POINTL@@PAU1@KK@Z @ 0x216F4D (-pRect@@YGPAU_RECTL@@PAU_POINTL@@PAU1@KK@Z.c)
 */

int __stdcall NtGdiEngPlgBlt(
        int a1,
        int a2,
        struct _SURFOBJ *a3,
        CLIPOBJ *a4,
        int a5,
        COLORADJUSTMENT *a6,
        _DWORD *a7,
        int a8,
        RECTL *a9,
        POINTL *a10,
        ULONG iMode)
{
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  struct UMPDOBJ *v14; // esi
  char *v16; // edi
  unsigned int v17; // ecx
  int v18; // edx
  RECTL *v19; // edi
  unsigned int *v20; // ecx
  int v21; // ebx
  unsigned int *v22; // [esp+0h] [ebp-D0h]
  unsigned int v23; // [esp+0h] [ebp-D0h]
  struct _SURFOBJ *v24; // [esp+0h] [ebp-D0h]
  int v25; // [esp+4h] [ebp-CCh]
  unsigned int v26; // [esp+4h] [ebp-CCh]
  struct _RECTL *v27; // [esp+4h] [ebp-CCh]
  _DWORD v28[2]; // [esp+10h] [ebp-C0h] BYREF
  POINTL pptlBrushOrg; // [esp+18h] [ebp-B8h] BYREF
  int v30; // [esp+20h] [ebp-B0h]
  _DWORD *v31; // [esp+24h] [ebp-ACh] BYREF
  int v32; // [esp+28h] [ebp-A8h]
  RECTL *v33; // [esp+2Ch] [ebp-A4h]
  SURFOBJ *psoTrg[2]; // [esp+30h] [ebp-A0h] BYREF
  COLORADJUSTMENT *pca; // [esp+38h] [ebp-98h] BYREF
  SURFOBJ *psoSrc[2]; // [esp+3Ch] [ebp-94h] BYREF
  CLIPOBJ *pco; // [esp+44h] [ebp-8Ch]
  SURFOBJ *psoMsk; // [esp+48h] [ebp-88h] BYREF
  struct _SURFOBJ *v39; // [esp+4Ch] [ebp-84h]
  POINTL *pptl; // [esp+50h] [ebp-80h] BYREF
  RECTL *prcl; // [esp+54h] [ebp-7Ch] BYREF
  _BYTE v42[36]; // [esp+58h] [ebp-78h] BYREF
  _DWORD v43[4]; // [esp+7Ch] [ebp-54h] BYREF
  _DWORD v44[4]; // [esp+8Ch] [ebp-44h] BYREF
  POINTFIX pptfx[3]; // [esp+9Ch] [ebp-34h] BYREF
  CPPEH_RECORD ms_exc; // [esp+B8h] [ebp-18h]

  v33 = a9;
  v32 = a8;
  *(_DWORD *)v42 = a1;
  *(_DWORD *)&v42[4] = a2;
  v39 = a3;
  pco = a4;
  v30 = a5;
  pca = a6;
  v31 = a7;
  prcl = a9;
  pptl = a10;
  memset(v44, 0, sizeof(v44));
  v28[0] = 0;
  v28[1] = 0;
  pptlBrushOrg.x = 0;
  pptlBrushOrg.y = 0;
  memset(&v42[12], 0, 0x18u);
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v14 = ThreadCurrentObj;
  *(_DWORD *)&v42[8] = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0;
  ++*((_DWORD *)ThreadCurrentObj + 57);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoTrg, *(struct _SURFOBJ **)v42, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, *(struct _SURFOBJ **)&v42[4], v14);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoMsk, v39, v14);
  if ( !psoTrg[0] )
    goto LABEL_23;
  if ( !psoSrc[0] )
    goto LABEL_23;
  if ( !v33 )
    goto LABEL_23;
  v16 = (char *)v32;
  if ( !v32 )
    goto LABEL_23;
  ms_exc.registration.TryLevel = 0;
  CaptureRECTL((_DWORD **)&prcl, v44);
  CaptureCOLORADJUSTMENT((const void **)&pca, &v42[12]);
  CapturePOINTL((_DWORD **)&pptl, v28);
  CapturePOINTL(&v31, &pptlBrushOrg);
  if ( v16 + 24 < v16 || (unsigned int)(v16 + 24) > _MmUserProbeAddress )
    *(_BYTE *)_MmUserProbeAddress = 0;
  qmemcpy(pptfx, v16, sizeof(pptfx));
  ms_exc.registration.TryLevel = -2;
  v14 = *(struct UMPDOBJ **)&v42[8];
  pco = UMPDOBJ::GetDDIOBJ(*(UMPDOBJ **)&v42[8], pco, (struct _CLIPOBJ *)&psoTrg[0]->sizlBitmap);
  v17 = UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v14, v30);
  *(_DWORD *)&v42[8] = v17;
  v18 = 1;
  v19 = prcl;
  if ( prcl )
  {
    if ( prcl->left > prcl->right || prcl->top > prcl->bottom )
      v18 = 0;
    v17 = *(_DWORD *)&v42[8];
  }
  if ( v18 && bCheckXlate((int)psoSrc[0], v17) )
  {
    v21 = 1;
    if ( !psoMsk )
      goto LABEL_21;
    memset(v43, 0, sizeof(v43));
    *(_DWORD *)v42 = 0;
    *(_DWORD *)&v42[4] = 0;
    v19 = prcl;
    v21 = bCheckSurfaceRectSize(
            (HSURF *)prcl,
            &psoSrc[0]->dhsurf,
            0,
            (struct _RECTL *)v42,
            (struct _CLIPOBJ *)&v42[4],
            v20,
            v22,
            v25);
    if ( v21 )
    {
      pRect(v43, pptl, *(struct _POINTL **)v42, *(struct _RECTL **)&v42[4], v23, v26);
      v21 = bCheckMask(v24, v27);
LABEL_21:
      if ( v21 )
        v21 = EngPlgBlt(
                psoTrg[0],
                psoSrc[0],
                psoMsk,
                pco,
                *(XLATEOBJ **)&v42[8],
                pca,
                &pptlBrushOrg,
                pptfx,
                v19,
                pptl,
                iMode);
    }
  }
  else
  {
LABEL_23:
    v21 = 0;
  }
  if ( v39 )
    EngUnlockSurface(psoMsk);
  if ( psoSrc[1] )
    EngUnlockSurface(psoSrc[0]);
  if ( psoTrg[1] )
    EngUnlockSurface(psoTrg[0]);
  --*((_DWORD *)v14 + 57);
  return v21;
}
