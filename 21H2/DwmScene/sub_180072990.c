/*
 * XREFs of sub_180072990 @ 0x180072990
 * Callers:
 *     sub_180072774 @ 0x180072774 (sub_180072774.c)
 *     sub_180072990 @ 0x180072990 (sub_180072990.c)
 *     sub_18012D790 @ 0x18012D790 (sub_18012D790.c)
 * Callees:
 *     sub_18006B3C4 @ 0x18006B3C4 (sub_18006B3C4.c)
 *     sub_180072990 @ 0x180072990 (sub_180072990.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_180072990(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_180072990(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    sub_18006B3C4(v6 + 4, 0);
  }
  return result;
}
