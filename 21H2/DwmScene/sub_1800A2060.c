/*
 * XREFs of sub_1800A2060 @ 0x1800A2060
 * Callers:
 *     sub_1800A1F2C @ 0x1800A1F2C (sub_1800A1F2C.c)
 *     sub_1800A2060 @ 0x1800A2060 (sub_1800A2060.c)
 *     sub_1800A74D0 @ 0x1800A74D0 (sub_1800A74D0.c)
 * Callees:
 *     sub_1800A2060 @ 0x1800A2060 (sub_1800A2060.c)
 *     sub_1800A4740 @ 0x1800A4740 (sub_1800A4740.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800A2060(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_1800A2060(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    sub_1800A4740(v6 + 4);
  }
  return result;
}
