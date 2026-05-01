/*
 * XREFs of DllEntryPoint @ 0x180044B90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180045020 @ 0x180045020 (sub_180045020.c)
 */

BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  if ( fdwReason == 1 )
    sub_180045020();
  return sub_180044BD4(hinstDLL, fdwReason, lpReserved);
}
