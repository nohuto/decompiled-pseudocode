/*
 * XREFs of ?PushBack@?$NtList@UShellButtonListEntry@GameControllerRawInputProvider@@@@QEAAXPEAUShellButtonListEntry@GameControllerRawInputProvider@@@Z @ 0x1800411F0
 * Callers:
 *     ?OnSystemCommand@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z @ 0x180089070 (-OnSystemCommand@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall NtList<GameControllerRawInputProvider::ShellButtonListEntry>::PushBack(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax

  result = *(_QWORD **)(a1 + 8);
  if ( *result != a1 )
    __fastfail(3u);
  *a2 = a1;
  a2[1] = result;
  *result = a2;
  ++*(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = a2;
  return result;
}
