/*
 * XREFs of sub_18000D6E4 @ 0x18000D6E4
 * Callers:
 *     sub_18000D1A4 @ 0x18000D1A4 (sub_18000D1A4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000D6E4(int a1)
{
  dword_180218438 = a1;
  return (unsigned int)_InterlockedIncrement(&dword_18021843C);
}
