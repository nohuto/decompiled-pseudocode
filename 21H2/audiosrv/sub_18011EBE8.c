/*
 * XREFs of sub_18011EBE8 @ 0x18011EBE8
 * Callers:
 *     sub_18011E410 @ 0x18011E410 (sub_18011E410.c)
 * Callees:
 *     sub_1800BC5EC @ 0x1800BC5EC (sub_1800BC5EC.c)
 */

__int64 __fastcall sub_18011EBE8(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10)
{
  unsigned int v10; // ebx
  int v12; // [rsp+20h] [rbp-38h]

  v10 = a8;
  if ( a8 > 0 )
    v10 = (unsigned __int16)a8 | 0x80070000;
  sub_1800BC5EC(a1, a2, a3, a4, v12, a6, 2, v10, a9, a10);
  return v10;
}
