/*
 * XREFs of sub_180002010 @ 0x180002010
 * Callers:
 *     sub_180002BE8 @ 0x180002BE8 (sub_180002BE8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180002010(int a1)
{
  dword_18005AD98 = a1;
  return (unsigned int)_InterlockedIncrement(&dword_18005AD30);
}
