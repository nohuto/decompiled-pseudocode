/*
 * XREFs of sub_180027128 @ 0x180027128
 * Callers:
 *     sub_180027128 @ 0x180027128 (sub_180027128.c)
 *     sub_180028A2C @ 0x180028A2C (sub_180028A2C.c)
 *     sub_180028A8C @ 0x180028A8C (sub_180028A8C.c)
 *     sub_18002C008 @ 0x18002C008 (sub_18002C008.c)
 * Callees:
 *     sub_180027128 @ 0x180027128 (sub_180027128.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_180027128(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_180027128(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}
