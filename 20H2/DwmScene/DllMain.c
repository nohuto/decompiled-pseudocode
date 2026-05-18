/*
 * XREFs of DllMain @ 0x18000EF94
 * Callers:
 *     ?dllmain_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z @ 0x18011E99C (-dllmain_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  qword_18021AB40 = (__int64)guard_check_icall_nop;
  return 1;
}
