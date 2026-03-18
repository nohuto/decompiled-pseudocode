/*
 * XREFs of ?IsPenQuickLaunchHotKey@@YA_NII@Z @ 0x1C005554C
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C0054B90 (xxxDoHotKeyStuff.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsPenQuickLaunchHotKey(int a1, int a2)
{
  return a1 == 8 && (unsigned int)(a2 - 129) <= 2;
}
