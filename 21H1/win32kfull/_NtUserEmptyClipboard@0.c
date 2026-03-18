/*
 * XREFs of _NtUserEmptyClipboard@0 @ 0x161354
 * Callers:
 *     <none>
 * Callees:
 *     _xxxEmptyClipboard@4 @ 0xACB3A (_xxxEmptyClipboard@4.c)
 */

int __stdcall NtUserEmptyClipboard()
{
  int v0; // esi

  EnterCrit(0, 1);
  v0 = xxxEmptyClipboard(0);
  UserSessionSwitchLeaveCrit();
  return v0;
}
