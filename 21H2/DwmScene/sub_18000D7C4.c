/*
 * XREFs of sub_18000D7C4 @ 0x18000D7C4
 * Callers:
 *     sub_18000D284 @ 0x18000D284 (sub_18000D284.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000D7C4(int a1)
{
  dword_18021F568 = a1;
  return (unsigned int)_InterlockedIncrement(&dword_18021F56C);
}
