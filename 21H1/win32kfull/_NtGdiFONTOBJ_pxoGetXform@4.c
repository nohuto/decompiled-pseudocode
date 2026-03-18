/*
 * XREFs of _NtGdiFONTOBJ_pxoGetXform@4 @ 0x21A4A9
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     ?GetFONTOBJXform@UMPDOBJ@@QAEPAU_XFORMOBJ@@PAU_FONTOBJ@@@Z @ 0x1F3B64 (-GetFONTOBJXform@UMPDOBJ@@QAEPAU_XFORMOBJ@@PAU_FONTOBJ@@@Z.c)
 */

struct _FONTOBJ *__stdcall NtGdiFONTOBJ_pxoGetXform(struct _FONTOBJ *a1)
{
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  struct UMPDOBJ *v4; // esi
  struct _FONTOBJ *result; // eax

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v4 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 57);
    result = UMPDOBJ::GetFONTOBJXform(ThreadCurrentObj, (unsigned int)ThreadCurrentObj, a1);
  }
  else
  {
    result = 0;
  }
  if ( v4 )
    --*((_DWORD *)v4 + 57);
  return result;
}
