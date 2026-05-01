/*
 * XREFs of LoadLibraryExW @ 0x180046144
 * Callers:
 *     sub_1800872E8 @ 0x1800872E8 (sub_1800872E8.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HMODULE __stdcall LoadLibraryExW(LPCWSTR lpLibFileName, HANDLE hFile, DWORD dwFlags)
{
  return __imp_LoadLibraryExW(lpLibFileName, hFile, dwFlags);
}
