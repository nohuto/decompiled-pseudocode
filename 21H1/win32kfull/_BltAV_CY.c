/*
 * XREFs of _BltAV_CY @ 0x1C4298
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl BltAV_CY(int a1)
{
  int result; // eax

  (*(void (__cdecl **)(int))(a1 + 148))(a1);
  result = *(_DWORD *)(a1 + 164);
  *(_DWORD *)(a1 + 156) += result;
  return result;
}
