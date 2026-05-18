/*
 * XREFs of sub_180064820 @ 0x180064820
 * Callers:
 *     sub_1800646EC @ 0x1800646EC (sub_1800646EC.c)
 *     sub_180064820 @ 0x180064820 (sub_180064820.c)
 *     sub_1800D1E24 @ 0x1800D1E24 (sub_1800D1E24.c)
 *     sub_180124B14 @ 0x180124B14 (sub_180124B14.c)
 * Callees:
 *     sub_180064820 @ 0x180064820 (sub_180064820.c)
 *     sub_180065AF4 @ 0x180065AF4 (sub_180065AF4.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_180064820(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_180064820(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    sub_180065AF4(v6 + 4, 0LL);
  }
  return result;
}
