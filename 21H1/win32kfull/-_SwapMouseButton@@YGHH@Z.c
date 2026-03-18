/*
 * XREFs of ?_SwapMouseButton@@YGHH@Z @ 0x15520E
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 * Callees:
 *     _CheckGrantedAccess@8 @ 0x2A3D4 (_CheckGrantedAccess@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall _SwapMouseButton(int a1)
{
  int CurrentProcessWin32Process; // esi

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  if ( !CheckGrantedAccess(*(_DWORD *)(CurrentProcessWin32Process + 364), 0x12u) )
    return 0;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 8) & 0x40000) == 0 )
  {
    UserSetLastError((struct _NT_TIB *)0x5B3);
    return 0;
  }
  return (unsigned __int8)SetSwapMouseButton(a1 != 0);
}
