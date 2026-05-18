/*
 * XREFs of sub_18006D0C0 @ 0x18006D0C0
 * Callers:
 *     sub_18006CEA4 @ 0x18006CEA4 (sub_18006CEA4.c)
 *     sub_18006D0C0 @ 0x18006D0C0 (sub_18006D0C0.c)
 *     sub_180127E78 @ 0x180127E78 (sub_180127E78.c)
 * Callees:
 *     sub_180065AF4 @ 0x180065AF4 (sub_180065AF4.c)
 *     sub_18006D0C0 @ 0x18006D0C0 (sub_18006D0C0.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18006D0C0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_18006D0C0(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    sub_180065AF4(v6 + 4, 0);
  }
  return result;
}
