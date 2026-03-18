/*
 * XREFs of _NtUserSetKeyboardState@4 @ 0x169768
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     __SetKeyboardState@4 @ 0x15EA90 (__SetKeyboardState@4.c)
 */

int __stdcall NtUserSetKeyboardState(char *a1)
{
  int v1; // esi
  _DWORD *v3; // [esp+18h] [ebp-1Ch]

  v1 = 0;
  EnterCrit(0, 1);
  v3 = *(_DWORD **)(_gptiCurrent + 236);
  if ( (unsigned __int8)CheckAccess(*(_DWORD *)(_gptiCurrent + 232) + 496, v3 + 79) || (v3[71] & 0x2000000) != 0 )
    v1 = _SetKeyboardState(a1);
  else
    EtwTraceUIPIInputError(_gptiCurrent, 0, v3, v3[79], v3[80], 3);
  UserSessionSwitchLeaveCrit();
  return v1;
}
