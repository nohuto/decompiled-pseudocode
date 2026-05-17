/*
 * XREFs of _LdrQueryInLoadOrderModuleList@12 @ 0x4B32E8E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall LdrQueryInLoadOrderModuleList(int a1, _DWORD *a2, _DWORD *a3)
{
  *a2 = &dword_4B3A5D8C;
  if ( a3 )
    *a3 = &dword_4B3A5D9C;
  return 0;
}
