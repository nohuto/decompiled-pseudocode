/*
 * XREFs of _NtGdiEngLineTo@36 @ 0x21873E
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     _EngLineTo@36 @ 0xBDF44 (_EngLineTo@36.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QAEPAU_BRUSHOBJ@@PAU1@@Z @ 0x215EDE (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QAEPAU_BRUSHOBJ@@PAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QAE@PAU_SURFOBJ@@PAVUMPDOBJ@@@Z @ 0x216194 (--0UMPDSURFOBJ@@QAE@PAU_SURFOBJ@@PAVUMPDOBJ@@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YGPAU_BRUSHOBJ@@PAU1@0@Z @ 0x2161F8 (-CaptureAndFakeBRUSHOBJ@@YGPAU_BRUSHOBJ@@PAU1@0@Z.c)
 *     ?CaptureRECTL@@YGXPAPAU_RECTL@@PAU1@@Z @ 0x21635A (-CaptureRECTL@@YGXPAPAU_RECTL@@PAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU2@PAUtagSIZE@@@Z @ 0x21637D (-GetDDIOBJ@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU2@PAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YGHPAU_SURFOBJ@@PAU_RECTL@@PAU_CLIPOBJ@@@Z @ 0x216A83 (-bCheckSurfaceRect@@YGHPAU_SURFOBJ@@PAU_RECTL@@PAU_CLIPOBJ@@@Z.c)
 */

int __stdcall NtGdiEngLineTo(
        BRUSHOBJ *a1,
        CLIPOBJ *a2,
        _DWORD *a3,
        HSURF x1,
        HSURF y1,
        HSURF x2,
        HSURF y2,
        RECTL *a8,
        MIX mix)
{
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  UMPDOBJ *v12; // esi
  BRUSHOBJ *v14; // eax
  SURFOBJ *v15; // edi
  int v16; // ebx
  struct _RECTL *v17; // [esp+0h] [ebp-74h]
  struct _CLIPOBJ *v18; // [esp+4h] [ebp-70h]
  _DWORD v19[4]; // [esp+10h] [ebp-64h] BYREF
  _DWORD *v20; // [esp+20h] [ebp-54h]
  SURFOBJ *pso[2]; // [esp+24h] [ebp-50h] BYREF
  RECTL *prclBounds; // [esp+2Ch] [ebp-48h] BYREF
  CLIPOBJ *pco; // [esp+30h] [ebp-44h]
  BRUSHOBJ *pbo; // [esp+34h] [ebp-40h]
  _DWORD v25[4]; // [esp+38h] [ebp-3Ch] BYREF
  HSURF v26[5]; // [esp+48h] [ebp-2Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+5Ch] [ebp-18h]

  pbo = a1;
  pco = a2;
  v20 = a3;
  prclBounds = a8;
  memset(v25, 0, sizeof(v25));
  v26[0] = x1;
  v26[1] = y1;
  v26[2] = x2;
  v26[3] = y2;
  memset(v19, 0, 12);
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v12 = ThreadCurrentObj;
  v19[3] = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0;
  ++*((_DWORD *)ThreadCurrentObj + 57);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, (struct _SURFOBJ *)pbo, ThreadCurrentObj);
  v14 = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v12, (int)v20);
  if ( !v14 )
    v14 = CaptureAndFakeBRUSHOBJ(v20, v19);
  pbo = v14;
  if ( pso[0] && v14 )
  {
    ms_exc.registration.TryLevel = 0;
    CaptureRECTL((_DWORD **)&prclBounds, v25);
    ms_exc.registration.TryLevel = -2;
    v15 = pso[0];
    pco = UMPDOBJ::GetDDIOBJ(v12, pco, (struct _CLIPOBJ *)&pso[0]->sizlBitmap);
    v16 = bCheckSurfaceRect(v26, v15, (struct _SURFOBJ *)pco, v17, v18);
    if ( v16 )
      v16 = EngLineTo(v15, pco, pbo, (LONG)x1, (LONG)y1, (LONG)x2, (LONG)y2, prclBounds, mix);
  }
  else
  {
    v16 = 0;
  }
  if ( pso[1] )
    EngUnlockSurface(pso[0]);
  --*((_DWORD *)v12 + 57);
  return v16;
}
