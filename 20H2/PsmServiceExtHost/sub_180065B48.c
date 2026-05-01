/*
 * XREFs of sub_180065B48 @ 0x180065B48
 * Callers:
 *     sub_18006527C @ 0x18006527C (sub_18006527C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180065B48(int a1)
{
  dword_1800B3FF8 = a1;
  return (unsigned int)_InterlockedIncrement(&dword_1800B42A4);
}
