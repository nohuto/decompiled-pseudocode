/*
 * XREFs of sub_1800C6108 @ 0x1800C6108
 * Callers:
 *     sub_1800C6588 @ 0x1800C6588 (sub_1800C6588.c)
 *     sub_1800D3024 @ 0x1800D3024 (sub_1800D3024.c)
 * Callees:
 *     sub_180003E08 @ 0x180003E08 (sub_180003E08.c)
 *     sub_180064888 @ 0x180064888 (sub_180064888.c)
 *     sub_1800C63BC @ 0x1800C63BC (sub_1800C63BC.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800C6108(_QWORD *a1, __int64 a2, __int64 a3)
{
  sub_180003E08(a1, a3);
  if ( !sub_180064888((__int64)a1, (__int64)MultiByteStr) )
    sub_1800C63BC(a1);
  return a1;
}
