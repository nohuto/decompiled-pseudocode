/*
 * XREFs of _LdrGetDllHandle@16 @ 0x4B2CC810
 * Callers:
 *     <none>
 * Callees:
 *     _LdrGetDllHandleEx@20 @ 0x4B2CABE0 (_LdrGetDllHandleEx@20.c)
 */

int __stdcall LdrGetDllHandle(int a1, int a2, int a3, _DWORD *a4)
{
  return LdrGetDllHandleEx(1, a1, a2, a3, a4);
}
