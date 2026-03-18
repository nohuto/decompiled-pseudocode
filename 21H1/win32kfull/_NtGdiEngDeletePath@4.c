/*
 * XREFs of _NtGdiEngDeletePath@4 @ 0x218152
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     ?DeleteCLIPOBJPath@UMPDOBJ@@QAEXPAU_PATHOBJ@@@Z @ 0x1F3A4D (-DeleteCLIPOBJPath@UMPDOBJ@@QAEXPAU_PATHOBJ@@@Z.c)
 */

int __stdcall NtGdiEngDeletePath(struct _PATHOBJ *a1)
{
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  struct UMPDOBJ *v4; // esi
  int result; // eax

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v4 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 57);
    UMPDOBJ::DeleteCLIPOBJPath(ThreadCurrentObj, a1);
    result = 0;
  }
  else
  {
    result = -1073741811;
  }
  if ( v4 )
    --*((_DWORD *)v4 + 57);
  return result;
}
