/*
 * XREFs of _NtGdiEngPaint@20 @ 0x21894A
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _EngPaint@20 @ 0x1EBF08 (_EngPaint@20.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QAEPAU_BRUSHOBJ@@PAU1@@Z @ 0x215EDE (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QAEPAU_BRUSHOBJ@@PAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QAE@PAU_SURFOBJ@@PAVUMPDOBJ@@@Z @ 0x216194 (--0UMPDSURFOBJ@@QAE@PAU_SURFOBJ@@PAVUMPDOBJ@@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YGPAU_BRUSHOBJ@@PAU1@0@Z @ 0x2161F8 (-CaptureAndFakeBRUSHOBJ@@YGPAU_BRUSHOBJ@@PAU1@0@Z.c)
 *     ?CapturePOINTL@@YGXPAPAU_POINTL@@PAU1@@Z @ 0x216335 (-CapturePOINTL@@YGXPAPAU_POINTL@@PAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU2@PAUtagSIZE@@@Z @ 0x21637D (-GetDDIOBJ@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU2@PAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YGHPAU_SURFOBJ@@PAU_RECTL@@PAU_CLIPOBJ@@@Z @ 0x216A83 (-bCheckSurfaceRect@@YGHPAU_SURFOBJ@@PAU_RECTL@@PAU_CLIPOBJ@@@Z.c)
 */

int __stdcall NtGdiEngPaint(struct _SURFOBJ *a1, CLIPOBJ *pco, BRUSHOBJ *pbo, POINTL *pptlBrushOrg, MIX mix)
{
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  SURFOBJ *ThreadCurrentObj; // eax
  SURFOBJ *v8; // esi
  SURFOBJ *v10; // edi
  unsigned int v11; // eax
  int v12; // ebx
  struct _RECTL *v13; // [esp+0h] [ebp-48h]
  struct _CLIPOBJ *v14; // [esp+4h] [ebp-44h]
  _DWORD v15[3]; // [esp+10h] [ebp-38h] BYREF
  _DWORD v16[2]; // [esp+1Ch] [ebp-2Ch] BYREF
  SURFOBJ *pso[3]; // [esp+24h] [ebp-24h] BYREF
  CPPEH_RECORD ms_exc; // [esp+30h] [ebp-18h]
  CLIPOBJ *pcoa; // [esp+54h] [ebp+Ch]
  BRUSHOBJ *pboa; // [esp+58h] [ebp+10h]

  v16[0] = 0;
  v16[1] = 0;
  memset(v15, 0, sizeof(v15));
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = (SURFOBJ *)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v8 = ThreadCurrentObj;
  pso[2] = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0;
  ++ThreadCurrentObj[4].sizlBitmap.cy;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct UMPDOBJ *)ThreadCurrentObj);
  v10 = pso[0];
  if ( pso[0] )
    pcoa = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v8, pco, (struct _CLIPOBJ *)&pso[0]->sizlBitmap);
  else
    pcoa = 0;
  v11 = UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v8, (int)pbo);
  if ( !v11 )
    v11 = (unsigned int)CaptureAndFakeBRUSHOBJ(pbo, v15);
  pboa = (BRUSHOBJ *)v11;
  if ( v10 && pcoa && !pcoa->iMode && (mix & 0xFF00) != 0 )
  {
    ms_exc.registration.TryLevel = 0;
    CapturePOINTL((_DWORD **)&pptlBrushOrg, v16);
    ms_exc.registration.TryLevel = -2;
    v12 = bCheckSurfaceRect(0, v10, (struct _SURFOBJ *)pcoa, v13, v14);
    if ( v12 )
      v12 = EngPaint(v10, pcoa, pboa, pptlBrushOrg, mix);
  }
  else
  {
    v12 = 0;
  }
  if ( pso[1] )
    EngUnlockSurface(v10);
  --v8[4].sizlBitmap.cy;
  return v12;
}
