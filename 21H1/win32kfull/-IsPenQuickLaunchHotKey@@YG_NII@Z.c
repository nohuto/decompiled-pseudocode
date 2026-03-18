/*
 * XREFs of ?IsPenQuickLaunchHotKey@@YG_NII@Z @ 0xC5744
 * Callers:
 *     _xxxDoHotKeyStuff@16 @ 0xB182C (_xxxDoHotKeyStuff@16.c)
 *     ?IsPenQuickLaunchAndShouldBeDisabled@@YG_NII@Z @ 0xC5696 (-IsPenQuickLaunchAndShouldBeDisabled@@YG_NII@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsPenQuickLaunchHotKey(int a1, int a2)
{
  return a1 == 8 && (a2 == 129 || a2 == 130 || a2 == 131);
}
