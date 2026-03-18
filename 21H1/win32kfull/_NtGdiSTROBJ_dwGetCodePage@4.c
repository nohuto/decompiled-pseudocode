/*
 * XREFs of _NtGdiSTROBJ_dwGetCodePage@4 @ 0x21ADBD
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QAEPAU_STROBJ@@PAU1@@Z @ 0x216004 (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QAEPAU_STROBJ@@PAU1@@Z.c)
 */

int __stdcall NtGdiSTROBJ_dwGetCodePage(int a1)
{
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  struct UMPDOBJ *v4; // esi
  unsigned int v5; // eax
  int result; // eax

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v4 = ThreadCurrentObj;
  if ( ThreadCurrentObj
    && (++*((_DWORD *)ThreadCurrentObj + 57), (v5 = UMPDOBJ::GetDDIOBJ<_STROBJ>(ThreadCurrentObj, a1)) != 0) )
  {
    result = *(_DWORD *)(v5 + 104);
  }
  else
  {
    result = 0;
  }
  if ( v4 )
    --*((_DWORD *)v4 + 57);
  return result;
}
