/*
 * XREFs of _NtGdiCLIPOBJ_cEnumStart@20 @ 0x21730D
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?cEnumStart@XCLIPOBJ@@QAEKHKKK@Z @ 0x948B4 (-cEnumStart@XCLIPOBJ@@QAEKHKKK@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU1@@Z @ 0x1F37D6 (--$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU1@@Z.c)
 */

unsigned int __stdcall NtGdiCLIPOBJ_cEnumStart(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  struct UMPDOBJ *v8; // esi
  unsigned int v9; // edi
  XCLIPOBJ *v10; // eax

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v8 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
    ++*((_DWORD *)ThreadCurrentObj + 57);
  v9 = -1;
  if ( ThreadCurrentObj )
  {
    v10 = (XCLIPOBJ *)UMPDOBJ::GetDDIOBJ<_CLIPOBJ>(ThreadCurrentObj, a1);
    if ( v10 )
    {
      if ( (*((_DWORD *)v8 + 55) & 0x100) == 0 || *((_DWORD *)v10 + 12) )
      {
        v9 = XCLIPOBJ::cEnumStart(v10, a2, a3, a4, a5);
      }
      else if ( gfUMPDDebug )
      {
        _DbgPrint(
          "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiCLIPOBJ_cEnumStart:!peco->bValid()\n",
          2574);
      }
    }
    if ( v8 )
      --*((_DWORD *)v8 + 57);
  }
  return v9;
}
