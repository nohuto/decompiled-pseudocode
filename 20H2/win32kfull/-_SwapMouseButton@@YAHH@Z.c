/*
 * XREFs of ?_SwapMouseButton@@YAHH@Z @ 0x1C01E9B40
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C002F978 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     CheckGrantedAccess @ 0x1C00BD804 (CheckGrantedAccess.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall _SwapMouseButton(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 CurrentProcessWin32Process; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8

  v3 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2, a3);
  if ( !(unsigned int)CheckGrantedAccess(*(_DWORD *)(CurrentProcessWin32Process + 680), 0x12u) )
    return 0LL;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x40000) == 0 )
  {
    UserSetLastError(1459LL, v5, v7);
    return 0LL;
  }
  LOBYTE(v6) = v3 != 0;
  return (unsigned __int8)SetSwapMouseButton(v6);
}
