/*
 * XREFs of sub_18009C734 @ 0x18009C734
 * Callers:
 *     sub_18009C5F0 @ 0x18009C5F0 (sub_18009C5F0.c)
 *     sub_18009C734 @ 0x18009C734 (sub_18009C734.c)
 *     sub_1800A1B84 @ 0x1800A1B84 (sub_1800A1B84.c)
 * Callees:
 *     sub_18009C734 @ 0x18009C734 (sub_18009C734.c)
 *     sub_18009EE08 @ 0x18009EE08 (sub_18009EE08.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18009C734(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_18009C734(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    sub_18009EE08(v6 + 4);
  }
  return result;
}
