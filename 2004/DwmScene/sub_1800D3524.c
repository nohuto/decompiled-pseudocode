/*
 * XREFs of sub_1800D3524 @ 0x1800D3524
 * Callers:
 *     sub_180064FF8 @ 0x180064FF8 (sub_180064FF8.c)
 * Callees:
 *     sub_1800D3420 @ 0x1800D3420 (sub_1800D3420.c)
 *     memset @ 0x18011E09A (memset.c)
 */

// Hidden C++ exception states: #wind=1
void *__fastcall sub_1800D3524(void *a1)
{
  memset(a1, 0, 0xC8uLL);
  sub_1800D3420((__int64)a1);
  sub_1800D3420((__int64)a1 + 200);
  return a1;
}
