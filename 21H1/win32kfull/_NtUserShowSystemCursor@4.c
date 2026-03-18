/*
 * XREFs of _NtUserShowSystemCursor@4 @ 0x16A6D8
 * Callers:
 *     <none>
 * Callees:
 *     _CheckWinstaAttributeAccess@4 @ 0x7FB22 (_CheckWinstaAttributeAccess@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _GreHidePointer@4 @ 0xB02B2 (_GreHidePointer@4.c)
 */

int __stdcall NtUserShowSystemCursor(int a1)
{
  int v1; // esi

  v1 = 0;
  EnterSharedCrit(0, 1);
  if ( CheckWinstaAttributeAccess(0x10u) )
    v1 = GreHidePointer(a1 == 0);
  else
    UserSetLastError((struct _NT_TIB *)5);
  UserSessionSwitchLeaveCrit();
  return v1;
}
