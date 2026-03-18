/*
 * XREFs of _NtGdiEngUnlockSurface@4 @ 0x219D93
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     ?UnlockSurface@UMPDOBJ@@QAEXPAU_SURFOBJ@@@Z @ 0x1F4071 (-UnlockSurface@UMPDOBJ@@QAEXPAU_SURFOBJ@@@Z.c)
 */

int __stdcall NtGdiEngUnlockSurface(struct _SURFOBJ *a1)
{
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  UMPDOBJ *v4; // ecx
  struct UMPDOBJ *v5; // esi
  int result; // eax

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v5 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 57);
    UMPDOBJ::UnlockSurface(v4, a1);
    result = 0;
  }
  else
  {
    result = -1073741811;
  }
  if ( v5 )
    --*((_DWORD *)v5 + 57);
  return result;
}
