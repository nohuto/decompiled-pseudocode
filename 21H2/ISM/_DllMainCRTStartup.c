/*
 * XREFs of _DllMainCRTStartup @ 0x18003B730
 * Callers:
 *     <none>
 * Callees:
 *     __security_init_cookie @ 0x18003B774 (__security_init_cookie.c)
 */

BOOL __stdcall DllMainCRTStartup(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  if ( fdwReason == 1 )
    _security_init_cookie();
  return dllmain_dispatch(hinstDLL, fdwReason, lpReserved);
}
