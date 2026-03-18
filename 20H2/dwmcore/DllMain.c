/*
 * XREFs of DllMain @ 0x1800E5188
 * Callers:
 *     dllmain_dispatch @ 0x1800E31B0 (dllmain_dispatch.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  return DwmCoreDllMain(hinstDLL, fdwReason);
}
