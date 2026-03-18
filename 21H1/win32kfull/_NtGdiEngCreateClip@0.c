/*
 * XREFs of _NtGdiEngCreateClip@0 @ 0x217EB8
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     ?CreateCLIPOBJ@UMPDOBJ@@QAEPAU_CLIPOBJ@@XZ @ 0x1F397D (-CreateCLIPOBJ@UMPDOBJ@@QAEPAU_CLIPOBJ@@XZ.c)
 */

struct _CLIPOBJ *__stdcall NtGdiEngCreateClip()
{
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  struct UMPDOBJ *v3; // esi
  struct _CLIPOBJ *result; // eax

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v3 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 57);
    result = UMPDOBJ::CreateCLIPOBJ(ThreadCurrentObj);
  }
  else
  {
    result = 0;
  }
  if ( v3 )
    --*((_DWORD *)v3 + 57);
  return result;
}
