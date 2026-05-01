/*
 * XREFs of CloseHandle @ 0x180045458
 * Callers:
 *     sub_180087048 @ 0x180087048 (sub_180087048.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall CloseHandle(HANDLE hObject)
{
  return __imp_CloseHandle(hObject);
}
