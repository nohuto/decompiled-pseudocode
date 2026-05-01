/*
 * XREFs of sub_180001FF0 @ 0x180001FF0
 * Callers:
 *     sub_180002BE8 @ 0x180002BE8 (sub_180002BE8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180001FF0(int a1)
{
  dword_18005AD44 = a1;
  return (unsigned int)_InterlockedIncrement(&dword_18005AD80);
}
