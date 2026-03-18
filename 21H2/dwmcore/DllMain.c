/*
 * XREFs of DllMain @ 0x18010350C
 * Callers:
 *     dllmain_dispatch @ 0x180100E1C (dllmain_dispatch.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  return DwmCoreDllMain(hinstDLL, fdwReason);
}
