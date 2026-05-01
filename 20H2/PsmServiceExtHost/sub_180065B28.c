/*
 * XREFs of sub_180065B28 @ 0x180065B28
 * Callers:
 *     sub_18006527C @ 0x18006527C (sub_18006527C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180065B28(int a1)
{
  dword_1800B3FFC = a1;
  return (unsigned int)_InterlockedIncrement(&dword_1800B4298);
}
