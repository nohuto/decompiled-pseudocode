/*
 * XREFs of _NtUserCreateEmptyCursorObject@4 @ 0x9D742
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateEmptyCursorObject@@YGPAUHICON__@@_N@Z @ 0x9D76E (-_CreateEmptyCursorObject@@YGPAUHICON__@@_N@Z.c)
 */

HICON __stdcall NtUserCreateEmptyCursorObject(int a1)
{
  HICON EmptyCursorObject; // esi
  bool v3; // [esp+0h] [ebp-4h]

  EnterCrit(0, 1);
  EmptyCursorObject = _CreateEmptyCursorObject(v3);
  UserSessionSwitchLeaveCrit();
  return EmptyCursorObject;
}
