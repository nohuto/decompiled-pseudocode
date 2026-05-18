/*
 * XREFs of sub_18006D2B0 @ 0x18006D2B0
 * Callers:
 *     sub_18006D054 @ 0x18006D054 (sub_18006D054.c)
 *     sub_18006D2B0 @ 0x18006D2B0 (sub_18006D2B0.c)
 * Callees:
 *     sub_180065B6C @ 0x180065B6C (sub_180065B6C.c)
 *     sub_18006D2B0 @ 0x18006D2B0 (sub_18006D2B0.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18006D2B0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_18006D2B0(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    sub_180065B6C(v6 + 4, 0);
  }
  return result;
}
