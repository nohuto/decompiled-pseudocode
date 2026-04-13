/*
 * XREFs of DllMain @ 0x18002320C
 * Callers:
 *     __DllMainCRTStartup @ 0x1800CAE04 (__DllMainCRTStartup.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  if ( fdwReason == 1 )
    DisableThreadLibraryCalls(hinstDLL);
  return 1;
}
