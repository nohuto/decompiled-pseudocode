/*
 * XREFs of _NtGdiPATHOBJ_vEnumStart@4 @ 0x21AA1F
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QAEPAU_PATHOBJ@@PAU1@@Z @ 0x215F66 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QAEPAU_PATHOBJ@@PAU1@@Z.c)
 */

int __stdcall NtGdiPATHOBJ_vEnumStart(int a1)
{
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  struct UMPDOBJ *v4; // esi
  int v5; // edi
  PATHOBJ *v6; // eax

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v4 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 57);
    v6 = (PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>(ThreadCurrentObj, a1);
    v5 = 0;
    if ( v6 )
    {
      if ( (*((_DWORD *)v4 + 55) & 0x100) == 0 || v6[1].fl )
      {
        PATHOBJ_vEnumStart(v6);
      }
      else if ( gfUMPDDebug )
      {
        _DbgPrint(
          "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_vEnumStart:Invalid EPATHOBJ.\n",
          3938);
      }
    }
  }
  else
  {
    v5 = -1073741811;
  }
  if ( v4 )
    --*((_DWORD *)v4 + 57);
  return v5;
}
