/*
 * XREFs of sub_18000D7AC @ 0x18000D7AC
 * Callers:
 *     sub_18000D284 @ 0x18000D284 (sub_18000D284.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000D7AC(int a1)
{
  dword_18021F570 = a1;
  return (unsigned int)_InterlockedIncrement(&dword_18021F574);
}
