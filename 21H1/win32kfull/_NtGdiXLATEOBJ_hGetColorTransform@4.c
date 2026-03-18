/*
 * XREFs of _NtGdiXLATEOBJ_hGetColorTransform@4 @ 0x21B531
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QAEPAU_XLATEOBJ@@PAU1@@Z @ 0x216116 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QAEPAU_XLATEOBJ@@PAU1@@Z.c)
 *     _XLATEOBJ_hGetColorTransform@4 @ 0x225847 (_XLATEOBJ_hGetColorTransform@4.c)
 */

HANDLE __stdcall NtGdiXLATEOBJ_hGetColorTransform(int a1)
{
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  struct UMPDOBJ *v4; // esi
  XLATEOBJ *v5; // eax
  HANDLE result; // eax

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v4 = ThreadCurrentObj;
  if ( ThreadCurrentObj
    && (++*((_DWORD *)ThreadCurrentObj + 57), (v5 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(ThreadCurrentObj, a1)) != 0) )
  {
    result = XLATEOBJ_hGetColorTransform(v5);
  }
  else
  {
    result = 0;
  }
  if ( v4 )
    --*((_DWORD *)v4 + 57);
  return result;
}
