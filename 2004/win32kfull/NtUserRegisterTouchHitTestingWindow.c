/*
 * XREFs of NtUserRegisterTouchHitTestingWindow @ 0x1C0115010
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     _SetTargetingWindowValue @ 0x1C011508C (_SetTargetingWindowValue.c)
 */

__int64 __fastcall NtUserRegisterTouchHitTestingWindow(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // r8

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0;
  v8 = v4;
  if ( v4 )
  {
    if ( gptiCurrent == *(_QWORD *)(v4 + 16) )
      v7 = SetTargetingWindowValue(v4, a2);
    else
      UserSetLastError(5LL, v5, v4);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v8);
  return v7;
}
