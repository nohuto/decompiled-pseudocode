/*
 * XREFs of _vSpEnableMultiMon@12 @ 0x1E3F21
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall vSpEnableMultiMon(int a1, int a2, int a3)
{
  int result; // eax

  *(_DWORD *)(a1 + 104) = a2;
  result = a3;
  *(_DWORD *)(a1 + 108) = a3;
  return result;
}
