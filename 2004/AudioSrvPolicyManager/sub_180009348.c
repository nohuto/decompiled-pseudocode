/*
 * XREFs of sub_180009348 @ 0x180009348
 * Callers:
 *     sub_18003B57E @ 0x18003B57E (sub_18003B57E.c)
 * Callees:
 *     sub_180009888 @ 0x180009888 (sub_180009888.c)
 */

__int64 __fastcall sub_180009348(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    sub_180009888(v2, a1[1]);
    return _o_free(*a1);
  }
  return result;
}
