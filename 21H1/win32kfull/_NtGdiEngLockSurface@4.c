/*
 * XREFs of _NtGdiEngLockSurface@4 @ 0x218894
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     ?LockSurface@UMPDOBJ@@QAEPAU_SURFOBJ@@PAUHSURF__@@@Z @ 0x1F3D38 (-LockSurface@UMPDOBJ@@QAEPAU_SURFOBJ@@PAUHSURF__@@@Z.c)
 */

struct _SURFOBJ *__stdcall NtGdiEngLockSurface(HSURF a1)
{
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  UMPDOBJ *v4; // ecx
  struct UMPDOBJ *v5; // esi
  struct _SURFOBJ *result; // eax

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v5 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 57);
    result = UMPDOBJ::LockSurface(v4, a1);
  }
  else
  {
    result = 0;
  }
  if ( v5 )
    --*((_DWORD *)v5 + 57);
  return result;
}
