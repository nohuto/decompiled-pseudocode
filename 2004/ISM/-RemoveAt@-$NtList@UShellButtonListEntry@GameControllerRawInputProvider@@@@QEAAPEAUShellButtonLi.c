/*
 * XREFs of ?RemoveAt@?$NtList@UShellButtonListEntry@GameControllerRawInputProvider@@@@QEAAPEAUShellButtonListEntry@GameControllerRawInputProvider@@PEAU23@@Z @ 0x180040BF0
 * Callers:
 *     ?OnSystemCommand@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z @ 0x180088BB0 (-OnSystemCommand@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall NtList<GameControllerRawInputProvider::ShellButtonListEntry>::RemoveAt(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *v3; // rax
  _QWORD *result; // rax

  v2 = *a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v3 = (_QWORD *)a2[1], (_QWORD *)*v3 != a2) )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  result = a2;
  --*(_QWORD *)(a1 + 16);
  return result;
}
