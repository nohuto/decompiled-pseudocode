/*
 * XREFs of _NtGdiEngCheckAbort@4 @ 0x2179E9
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     _EngCheckAbort@4 @ 0x1D88DF (_EngCheckAbort@4.c)
 *     ??0UMPDSURFOBJ@@QAE@PAU_SURFOBJ@@PAVUMPDOBJ@@@Z @ 0x216194 (--0UMPDSURFOBJ@@QAE@PAU_SURFOBJ@@PAVUMPDOBJ@@@Z.c)
 */

BOOL __stdcall NtGdiEngCheckAbort(struct _SURFOBJ *a1)
{
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  struct UMPDOBJ *v4; // esi
  BOOL v5; // edi
  SURFOBJ *pso[2]; // [esp+8h] [ebp-8h] BYREF

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v4 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 57);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, ThreadCurrentObj);
    if ( pso[0] )
      v5 = EngCheckAbort(pso[0]);
    else
      v5 = 1;
    if ( pso[1] )
      EngUnlockSurface(pso[0]);
  }
  else
  {
    v5 = 1;
  }
  if ( v4 )
    --*((_DWORD *)v4 + 57);
  return v5;
}
