/*
 * XREFs of _DllMainCRTStartup @ 0x180100F74
 * Callers:
 *     _DllMainStartup @ 0x1800F1DD0 (_DllMainStartup.c)
 * Callees:
 *     __security_init_cookie @ 0x1801015EC (__security_init_cookie.c)
 */

__int64 __fastcall DllMainCRTStartup(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  if ( fdwReason == 1 )
    _security_init_cookie();
  return dllmain_dispatch(hinstDLL, fdwReason, lpvReserved);
}
