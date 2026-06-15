/*
 * XREFs of sub_18004C0D0 @ 0x18004C0D0
 * Callers:
 *     sub_18004BEE8 @ 0x18004BEE8 (sub_18004BEE8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004C0D0(int a1)
{
  dword_18019E410 = a1;
  return (unsigned int)_InterlockedIncrement(&dword_18019E81C);
}
