/*
 * XREFs of sub_18000D77C @ 0x18000D77C
 * Callers:
 *     sub_18000D284 @ 0x18000D284 (sub_18000D284.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000D77C(int a1)
{
  dword_18021F560 = a1;
  return (unsigned int)_InterlockedIncrement(&dword_18021F564);
}
