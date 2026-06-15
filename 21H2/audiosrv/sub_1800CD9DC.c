/*
 * XREFs of sub_1800CD9DC @ 0x1800CD9DC
 * Callers:
 *     sub_180075766 @ 0x180075766 (sub_180075766.c)
 *     sub_1800CDA20 @ 0x1800CDA20 (sub_1800CDA20.c)
 *     sub_1800CDBA8 @ 0x1800CDBA8 (sub_1800CDBA8.c)
 * Callees:
 *     sub_1800CE420 @ 0x1800CE420 (sub_1800CE420.c)
 */

__int64 __fastcall sub_1800CD9DC(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    sub_1800CE420(v2, a1[1]);
    return _o_free(*a1);
  }
  return result;
}
