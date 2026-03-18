/*
 * XREFs of _NtGdiEngEraseSurface@12 @ 0x2181D1
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _EngEraseSurface@12 @ 0x93A4A (_EngEraseSurface@12.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     ??0UMPDSURFOBJ@@QAE@PAU_SURFOBJ@@PAVUMPDOBJ@@@Z @ 0x216194 (--0UMPDSURFOBJ@@QAE@PAU_SURFOBJ@@PAVUMPDOBJ@@@Z.c)
 *     ?CaptureRECTL@@YGXPAPAU_RECTL@@PAU1@@Z @ 0x21635A (-CaptureRECTL@@YGXPAPAU_RECTL@@PAU1@@Z.c)
 *     ?bCheckSurfaceRect@@YGHPAU_SURFOBJ@@PAU_RECTL@@PAU_CLIPOBJ@@@Z @ 0x216A83 (-bCheckSurfaceRect@@YGHPAU_SURFOBJ@@PAU_RECTL@@PAU_CLIPOBJ@@@Z.c)
 */

int __stdcall NtGdiEngEraseSurface(struct _SURFOBJ *a1, RECTL *a2, ULONG iColor)
{
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  struct UMPDOBJ *v6; // esi
  int v8; // ebx
  struct _RECTL *v9; // [esp+0h] [ebp-4Ch]
  struct _CLIPOBJ *v10; // [esp+4h] [ebp-48h]
  SURFOBJ *pso; // [esp+14h] [ebp-38h] BYREF
  struct _SURFOBJ *v12; // [esp+18h] [ebp-34h]
  RECTL *prcl; // [esp+1Ch] [ebp-30h] BYREF
  _DWORD v14[5]; // [esp+20h] [ebp-2Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  v12 = a1;
  prcl = a2;
  memset(v14, 0, 16);
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v6 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0;
  ++*((_DWORD *)ThreadCurrentObj + 57);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&pso, v12, ThreadCurrentObj);
  if ( pso )
  {
    ms_exc.registration.TryLevel = 0;
    CaptureRECTL((_DWORD **)&prcl, v14);
    ms_exc.registration.TryLevel = -2;
    if ( (*((_DWORD *)v6 + 55) & 0x100) != 0 && !prcl )
    {
      if ( gfUMPDDebug )
        _DbgPrint(
          "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngEraseSurface:prcl == NULL\n",
          2494);
      if ( v12 )
        EngUnlockSurface(pso);
      --*((_DWORD *)v6 + 57);
      return 0;
    }
    v8 = bCheckSurfaceRect((HSURF *)prcl, pso, 0, v9, v10);
    if ( v8 )
      v8 = EngEraseSurface(pso, prcl, iColor);
  }
  else
  {
    v8 = 0;
  }
  if ( v12 )
    EngUnlockSurface(pso);
  --*((_DWORD *)v6 + 57);
  return v8;
}
