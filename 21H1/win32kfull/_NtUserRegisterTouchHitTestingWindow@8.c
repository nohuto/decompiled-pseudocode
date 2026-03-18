/*
 * XREFs of _NtUserRegisterTouchHitTestingWindow@8 @ 0xB39E8
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SetTargetingWindowValue@8 @ 0xB3A30 (__SetTargetingWindowValue@8.c)
 */

int __stdcall NtUserRegisterTouchHitTestingWindow(int a1, int a2)
{
  int v2; // esi
  int v3; // ecx

  v2 = 0;
  EnterCrit(0, 1);
  v3 = ValidateHwnd(a1);
  if ( v3 )
  {
    if ( _gptiCurrent == *(_DWORD *)(v3 + 8) )
      v2 = _SetTargetingWindowValue();
    else
      UserSetLastError((struct _NT_TIB *)5);
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
