/*
 * XREFs of _NtGdiEngStretchBltROP@52 @ 0x219109
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _EngStretchBltROP@52 @ 0x7AF4C (_EngStretchBltROP@52.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QAEPAU_BRUSHOBJ@@PAU1@@Z @ 0x215EDE (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QAEPAU_BRUSHOBJ@@PAU1@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QAEPAU_XLATEOBJ@@PAU1@@Z @ 0x216116 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QAEPAU_XLATEOBJ@@PAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QAE@PAU_SURFOBJ@@PAVUMPDOBJ@@@Z @ 0x216194 (--0UMPDSURFOBJ@@QAE@PAU_SURFOBJ@@PAVUMPDOBJ@@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YGPAU_BRUSHOBJ@@PAU1@0@Z @ 0x2161F8 (-CaptureAndFakeBRUSHOBJ@@YGPAU_BRUSHOBJ@@PAU1@0@Z.c)
 *     ?CaptureCOLORADJUSTMENT@@YGXPAPAUtagCOLORADJUSTMENT@@PAU1@@Z @ 0x21630B (-CaptureCOLORADJUSTMENT@@YGXPAPAUtagCOLORADJUSTMENT@@PAU1@@Z.c)
 *     ?CapturePOINTL@@YGXPAPAU_POINTL@@PAU1@@Z @ 0x216335 (-CapturePOINTL@@YGXPAPAU_POINTL@@PAU1@@Z.c)
 *     ?CaptureRECTL@@YGXPAPAU_RECTL@@PAU1@@Z @ 0x21635A (-CaptureRECTL@@YGXPAPAU_RECTL@@PAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU2@PAUtagSIZE@@@Z @ 0x21637D (-GetDDIOBJ@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU2@PAUtagSIZE@@@Z.c)
 *     ?PROBEDISPATBRUSH@@YGHPAU_BRUSHOBJ@@@Z @ 0x216579 (-PROBEDISPATBRUSH@@YGHPAU_BRUSHOBJ@@@Z.c)
 *     ?bCheckDestSurfaceOverlap@@YGHPAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x216945 (-bCheckDestSurfaceOverlap@@YGHPAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?bCheckMask@@YGHPAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x2169C0 (-bCheckMask@@YGHPAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YGHPAU_SURFOBJ@@PAU_RECTL@@PAU_CLIPOBJ@@PAK3H@Z @ 0x216B45 (-bCheckSurfaceRectSize@@YGHPAU_SURFOBJ@@PAU_RECTL@@PAU_CLIPOBJ@@PAK3H@Z.c)
 *     ?bCheckXlate@@YGHPAU_SURFOBJ@@PAU_XLATEOBJ@@@Z @ 0x216D04 (-bCheckXlate@@YGHPAU_SURFOBJ@@PAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YGHPAU_RECTL@@@Z @ 0x216D49 (-bOrder@@YGHPAU_RECTL@@@Z.c)
 *     ?pRect@@YGPAU_RECTL@@PAU_POINTL@@PAU1@KK@Z @ 0x216F4D (-pRect@@YGPAU_RECTL@@PAU_POINTL@@PAU1@KK@Z.c)
 */

int __stdcall NtGdiEngStretchBltROP(
        XLATEOBJ *a1,
        LONG a2,
        int a3,
        CLIPOBJ *a4,
        int a5,
        COLORADJUSTMENT *a6,
        POINTL *a7,
        RECTL *a8,
        LONG a9,
        LONG a10,
        ULONG iMode,
        _DWORD *a12,
        DWORD a13)
{
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  struct UMPDOBJ *v16; // esi
  int v18; // edi
  SURFOBJ *v19; // edi
  unsigned int *v20; // ecx
  int v21; // eax
  BRUSHOBJ *v22; // eax
  unsigned int *v23; // [esp+0h] [ebp-F0h]
  unsigned int v24; // [esp+0h] [ebp-F0h]
  struct _SURFOBJ *v25; // [esp+0h] [ebp-F0h]
  int v26; // [esp+4h] [ebp-ECh]
  unsigned int v27; // [esp+4h] [ebp-ECh]
  struct _RECTL *v28; // [esp+4h] [ebp-ECh]
  _DWORD v29[3]; // [esp+10h] [ebp-E0h] BYREF
  _DWORD v30[2]; // [esp+1Ch] [ebp-D4h] BYREF
  _DWORD v31[2]; // [esp+24h] [ebp-CCh] BYREF
  DWORD v32; // [esp+2Ch] [ebp-C4h]
  int v33; // [esp+30h] [ebp-C0h]
  struct UMPDOBJ *v34; // [esp+34h] [ebp-BCh]
  int v35; // [esp+38h] [ebp-B8h]
  LONG v36; // [esp+3Ch] [ebp-B4h]
  RECTL *v37; // [esp+40h] [ebp-B0h]
  COLORADJUSTMENT *pca; // [esp+44h] [ebp-ACh] BYREF
  POINTL *pptlHTOrg; // [esp+48h] [ebp-A8h] BYREF
  CLIPOBJ *pco; // [esp+4Ch] [ebp-A4h]
  RECTL *prclDest; // [esp+50h] [ebp-A0h] BYREF
  DWORD rop4; // [esp+54h] [ebp-9Ch]
  _DWORD *v43; // [esp+58h] [ebp-98h]
  XLATEOBJ *pxlo; // [esp+5Ch] [ebp-94h]
  struct _RECTL v45; // [esp+60h] [ebp-90h] BYREF
  int v46; // [esp+70h] [ebp-80h]
  SURFOBJ *psoDest; // [esp+74h] [ebp-7Ch] BYREF
  int v48; // [esp+78h] [ebp-78h]
  SURFOBJ *pso; // [esp+7Ch] [ebp-74h] BYREF
  int v50; // [esp+80h] [ebp-70h]
  _BYTE v51[32]; // [esp+84h] [ebp-6Ch] BYREF
  _DWORD v52[4]; // [esp+A4h] [ebp-4Ch] BYREF
  _DWORD v53[4]; // [esp+B4h] [ebp-3Ch] BYREF
  _DWORD v54[5]; // [esp+C4h] [ebp-2Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+D8h] [ebp-18h]

  *(_DWORD *)&v51[4] = a7;
  pxlo = a1;
  v45.left = a2;
  *(_DWORD *)v51 = a3;
  pco = a4;
  v33 = a5;
  pca = a6;
  pptlHTOrg = a7;
  v37 = a8;
  prclDest = a8;
  v36 = a9;
  v45.top = a9;
  v45.right = a10;
  v43 = a12;
  rop4 = a13;
  v32 = a13;
  v35 = 1;
  memset(v54, 0, 16);
  memset(v53, 0, sizeof(v53));
  v31[0] = 0;
  v31[1] = 0;
  v30[0] = 0;
  v30[1] = 0;
  memset(&v51[8], 0, 0x18u);
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v16 = ThreadCurrentObj;
  v34 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0;
  ++*((_DWORD *)ThreadCurrentObj + 57);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&psoDest, (struct _SURFOBJ *)pxlo, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&v45.bottom, (struct _SURFOBJ *)v45.left, v16);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&pso, *(struct _SURFOBJ **)v51, v16);
  if ( !*(_DWORD *)&v51[4] && iMode == 4 )
  {
    if ( v50 )
      EngUnlockSurface(pso);
    if ( v46 )
      EngUnlockSurface((SURFOBJ *)v45.bottom);
    if ( v48 )
      EngUnlockSurface(psoDest);
    --*((_DWORD *)v16 + 57);
    return 0;
  }
  if ( !psoDest || !v45.bottom || !v37 || !v36 )
    goto LABEL_50;
  ms_exc.registration.TryLevel = 0;
  CaptureRECTL((_DWORD **)&prclDest, v54);
  CaptureRECTL((_DWORD **)&v45.top, v53);
  CapturePOINTL((_DWORD **)&v45.right, v31);
  CapturePOINTL((_DWORD **)&pptlHTOrg, v30);
  CaptureCOLORADJUSTMENT((const void **)&pca, &v51[8]);
  ms_exc.registration.TryLevel = -2;
  v18 = v35;
  if ( v35 )
  {
    if ( !bCheckDestSurfaceOverlap((int)psoDest, &prclDest->left) )
    {
      if ( v50 )
        EngUnlockSurface(pso);
      if ( v46 )
        EngUnlockSurface((SURFOBJ *)v45.bottom);
      if ( v48 )
        EngUnlockSurface(psoDest);
      --*((_DWORD *)v16 + 57);
      return 1;
    }
    memset(v29, 0, sizeof(v29));
    v19 = psoDest;
    pco = UMPDOBJ::GetDDIOBJ(v16, pco, (struct _CLIPOBJ *)&psoDest->sizlBitmap);
    pxlo = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v16, v33);
    *(_DWORD *)v51 = BYTE1(rop4);
    *(_DWORD *)&v51[4] = (unsigned __int8)rop4;
    if ( ((((unsigned __int8)gajRop3[BYTE1(rop4)] | (unsigned __int8)gajRop3[(unsigned __int8)rop4]) & 0xD4) == 0
       || bOrder((_DWORD *)v45.top))
      && bCheckXlate(v45.bottom, (int)pxlo) )
    {
      v20 = *(unsigned int **)&v51[4];
      if ( *(_DWORD *)&v51[4] == *(_DWORD *)v51 || pso )
        goto LABEL_33;
      if ( PROBEDISPATBRUSH(v43) )
      {
        v20 = *(unsigned int **)&v51[4];
LABEL_33:
        v21 = 1;
LABEL_35:
        *(_DWORD *)&v51[4] = v21;
        if ( v20 != *(unsigned int **)v51 && (!pso || !v45.right) )
        {
          v21 = 0;
          *(_DWORD *)&v51[4] = 0;
        }
        if ( v21 && rop4 == 43724 && pso )
        {
          memset(v52, 0, sizeof(v52));
          v45.left = 0;
          *(_DWORD *)v51 = 0;
          *(_DWORD *)&v51[4] = bCheckSurfaceRectSize(
                                 (HSURF *)v45.top,
                                 (_DWORD *)v45.bottom,
                                 0,
                                 &v45,
                                 (struct _CLIPOBJ *)v51,
                                 v20,
                                 v23,
                                 v26);
          if ( *(_DWORD *)&v51[4] )
          {
            pRect(v52, (_DWORD *)v45.right, (struct _POINTL *)v45.left, *(struct _RECTL **)v51, v24, v27);
            *(_DWORD *)&v51[4] = bCheckMask(v25, v28);
          }
          v19 = psoDest;
        }
        v22 = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v16, (int)v43);
        if ( !v22 )
          v22 = CaptureAndFakeBRUSHOBJ(v43, v29);
        if ( *(_DWORD *)&v51[4]
          && EngStretchBltROP(
               v19,
               (SURFOBJ *)v45.bottom,
               pso,
               pco,
               pxlo,
               pca,
               pptlHTOrg,
               prclDest,
               (RECTL *)v45.top,
               (POINTL *)v45.right,
               iMode,
               v22,
               rop4) )
        {
          v18 = 1;
          goto LABEL_51;
        }
LABEL_50:
        v18 = 0;
        goto LABEL_51;
      }
    }
    v21 = 0;
    v20 = (unsigned int *)(unsigned __int8)v32;
    goto LABEL_35;
  }
LABEL_51:
  if ( v50 )
    EngUnlockSurface(pso);
  if ( v46 )
    EngUnlockSurface((SURFOBJ *)v45.bottom);
  if ( v48 )
    EngUnlockSurface(psoDest);
  --*((_DWORD *)v16 + 57);
  return v18;
}
