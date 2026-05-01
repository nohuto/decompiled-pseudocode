/*
 * XREFs of _DllMainCRTStartup @ 0x180009FE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_init_cookie @ 0x18000A4B0 (__security_init_cookie.c)
 */

BOOL __stdcall DllMainCRTStartup(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  if ( fdwReason == 1 )
    _security_init_cookie();
  return _DllMainCRTStartup(hinstDLL, fdwReason);
}
