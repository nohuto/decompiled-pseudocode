/*
 * XREFs of _LdrGetDllPath@16 @ 0x4B2B27B0
 * Callers:
 *     <none>
 * Callees:
 *     _LdrpGetDllPath@28 @ 0x4B2B27D0 (_LdrpGetDllPath@28.c)
 */

int __stdcall LdrGetDllPath(int a1, int a2, int a3, int a4)
{
  return LdrpGetDllPath(a3, 0, 0, 0, a4);
}
