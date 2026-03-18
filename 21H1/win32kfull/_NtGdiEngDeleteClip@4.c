/*
 * XREFs of _NtGdiEngDeleteClip@4 @ 0x2180E5
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     ?DeleteCLIPOBJ@UMPDOBJ@@QAEXPAU_CLIPOBJ@@@Z @ 0x1F3A23 (-DeleteCLIPOBJ@UMPDOBJ@@QAEXPAU_CLIPOBJ@@@Z.c)
 */

int __stdcall NtGdiEngDeleteClip(struct _CLIPOBJ *a1)
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
    UMPDOBJ::DeleteCLIPOBJ((CLIPOBJ **)ThreadCurrentObj, a1);
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
