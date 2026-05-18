/*
 * XREFs of sub_18006A0F0 @ 0x18006A0F0
 * Callers:
 *     sub_180069FBC @ 0x180069FBC (sub_180069FBC.c)
 *     sub_18006A0F0 @ 0x18006A0F0 (sub_18006A0F0.c)
 *     sub_1800D76F4 @ 0x1800D76F4 (sub_1800D76F4.c)
 *     sub_18012A42C @ 0x18012A42C (sub_18012A42C.c)
 * Callees:
 *     sub_18006A0F0 @ 0x18006A0F0 (sub_18006A0F0.c)
 *     sub_18006B3C4 @ 0x18006B3C4 (sub_18006B3C4.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_18006A0F0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_18006A0F0(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    sub_18006B3C4(v6 + 4, 0LL);
  }
  return result;
}
