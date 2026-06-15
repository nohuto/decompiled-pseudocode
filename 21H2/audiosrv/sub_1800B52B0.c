/*
 * XREFs of sub_1800B52B0 @ 0x1800B52B0
 * Callers:
 *     sub_18004BEE8 @ 0x18004BEE8 (sub_18004BEE8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800B52B0(int a1)
{
  dword_18019E414 = a1;
  return (unsigned int)_InterlockedIncrement(&dword_18019E810);
}
