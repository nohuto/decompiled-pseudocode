/*
 * XREFs of _NtUserExcludeUpdateRgn@8 @ 0x1616C9
 * Callers:
 *     <none>
 * Callees:
 *     __ExcludeUpdateRgn@8 @ 0x1964AE (__ExcludeUpdateRgn@8.c)
 */

int __stdcall NtUserExcludeUpdateRgn(HDC a1, int a2)
{
  int updated; // esi

  updated = 0;
  EnterCrit(0, 1);
  if ( ValidateHwnd(a2) && a1 )
    updated = _ExcludeUpdateRgn(a1);
  UserSessionSwitchLeaveCrit();
  return updated;
}
