/*
 * XREFs of sub_1800A20BC @ 0x1800A20BC
 * Callers:
 *     sub_1800A1F98 @ 0x1800A1F98 (sub_1800A1F98.c)
 *     sub_1800A20BC @ 0x1800A20BC (sub_1800A20BC.c)
 *     sub_18012C89E @ 0x18012C89E (sub_18012C89E.c)
 * Callees:
 *     sub_18006B3C4 @ 0x18006B3C4 (sub_18006B3C4.c)
 *     sub_1800A20BC @ 0x1800A20BC (sub_1800A20BC.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800A20BC(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_1800A20BC(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    sub_18006B3C4(v6 + 4, 0);
  }
  return result;
}
