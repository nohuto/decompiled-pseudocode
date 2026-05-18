/*
 * XREFs of sub_1800A65B0 @ 0x1800A65B0
 * Callers:
 *     sub_1800A6544 @ 0x1800A6544 (sub_1800A6544.c)
 *     sub_1800A65B0 @ 0x1800A65B0 (sub_1800A65B0.c)
 *     sub_1800AE2D0 @ 0x1800AE2D0 (sub_1800AE2D0.c)
 *     sub_180127204 @ 0x180127204 (sub_180127204.c)
 * Callees:
 *     sub_180072BF0 @ 0x180072BF0 (sub_180072BF0.c)
 *     sub_1800A65B0 @ 0x1800A65B0 (sub_1800A65B0.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800A65B0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_1800A65B0(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    sub_180072BF0(v6 + 4, 0);
  }
  return result;
}
