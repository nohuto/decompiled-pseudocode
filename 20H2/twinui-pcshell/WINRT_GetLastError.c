/*
 * XREFs of WINRT_GetLastError @ 0x18008DCDE
 * Callers:
 *     ?throw_last_error@winrt@@YAXXZ @ 0x1801F4DB8 (-throw_last_error@winrt@@YAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
DWORD __stdcall WINRT_GetLastError()
{
  return GetLastError();
}
