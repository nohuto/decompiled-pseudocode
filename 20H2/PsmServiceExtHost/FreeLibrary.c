/*
 * XREFs of FreeLibrary @ 0x180045470
 * Callers:
 *     sub_1800872E8 @ 0x1800872E8 (sub_1800872E8.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall FreeLibrary(HMODULE hLibModule)
{
  return __imp_FreeLibrary(hLibModule);
}
