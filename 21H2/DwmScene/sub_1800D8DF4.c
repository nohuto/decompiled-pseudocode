/*
 * XREFs of sub_1800D8DF4 @ 0x1800D8DF4
 * Callers:
 *     sub_18006A8C8 @ 0x18006A8C8 (sub_18006A8C8.c)
 * Callees:
 *     sub_1800D8CF0 @ 0x1800D8CF0 (sub_1800D8CF0.c)
 *     memset @ 0x18012396A (memset.c)
 */

// Hidden C++ exception states: #wind=1
void *__fastcall sub_1800D8DF4(void *a1)
{
  memset(a1, 0, 0xC8uLL);
  sub_1800D8CF0((__int64)a1);
  sub_1800D8CF0((__int64)a1 + 200);
  return a1;
}
