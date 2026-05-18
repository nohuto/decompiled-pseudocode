/*
 * XREFs of sub_1800A7BAC @ 0x1800A7BAC
 * Callers:
 *     sub_1800A7B28 @ 0x1800A7B28 (sub_1800A7B28.c)
 *     sub_1800A7BAC @ 0x1800A7BAC (sub_1800A7BAC.c)
 * Callees:
 *     sub_1800258BC @ 0x1800258BC (sub_1800258BC.c)
 *     sub_180081170 @ 0x180081170 (sub_180081170.c)
 *     sub_1800A7BAC @ 0x1800A7BAC (sub_1800A7BAC.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800A7BAC(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rsi
  __int64 *v6; // rdi
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_1800A7BAC(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    sub_1800258BC(v6 + 7, (__int64)(v6 + 7));
    sub_180081170(v6 + 5);
  }
  return result;
}
