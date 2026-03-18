/*
 * XREFs of NtUserSetKeyboardState @ 0x1C0145160
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     _SetKeyboardState @ 0x1C0145228 (_SetKeyboardState.c)
 */

__int64 __fastcall NtUserSetKeyboardState(__int64 a1)
{
  __int64 v2; // rsi
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8

  EnterCrit(0LL, 1LL);
  v2 = *(_QWORD *)(gptiCurrent + 424LL);
  v3 = 0;
  if ( (unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 416LL) + 880LL, v2 + 428)
    || (*(_DWORD *)(v2 + 388) & 0x2000000) != 0 )
  {
    v3 = SetKeyboardState(a1);
  }
  else
  {
    EtwTraceUIPIInputError(gptiCurrent, 0LL, v2, *(_QWORD *)(v2 + 428), 3);
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6);
  return v3;
}
