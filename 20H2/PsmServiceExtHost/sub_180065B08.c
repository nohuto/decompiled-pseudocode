/*
 * XREFs of sub_180065B08 @ 0x180065B08
 * Callers:
 *     sub_18006527C @ 0x18006527C (sub_18006527C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180065B08(int a1)
{
  dword_1800B3FC8 = a1;
  return (unsigned int)_InterlockedIncrement(&dword_1800B429C);
}
