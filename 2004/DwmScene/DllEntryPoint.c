/*
 * XREFs of DllEntryPoint @ 0x18011EAD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_init_cookie @ 0x18011F60C (__security_init_cookie.c)
 */

BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  if ( fdwReason == 1 )
    _security_init_cookie();
  return dllmain_dispatch(hinstDLL, fdwReason, lpReserved);
}
