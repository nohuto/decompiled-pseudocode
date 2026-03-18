/*
 * XREFs of _NtGdiCLIPOBJ_ppoGetPath@4 @ 0x2173A4
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     ?GetCLIPOBJPath@UMPDOBJ@@QAEPAU_PATHOBJ@@PAU_CLIPOBJ@@@Z @ 0x1F3AFC (-GetCLIPOBJPath@UMPDOBJ@@QAEPAU_PATHOBJ@@PAU_CLIPOBJ@@@Z.c)
 */

struct _CLIPOBJ *__stdcall NtGdiCLIPOBJ_ppoGetPath(struct _CLIPOBJ *a1)
{
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  struct UMPDOBJ *v4; // esi
  struct _CLIPOBJ *result; // eax

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v4 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 57);
    result = UMPDOBJ::GetCLIPOBJPath(ThreadCurrentObj, a1);
  }
  else
  {
    result = 0;
  }
  if ( v4 )
    --*((_DWORD *)v4 + 57);
  return result;
}
