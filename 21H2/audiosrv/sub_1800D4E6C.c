/*
 * XREFs of sub_1800D4E6C @ 0x1800D4E6C
 * Callers:
 *     sub_180075BCA @ 0x180075BCA (sub_180075BCA.c)
 * Callees:
 *     sub_1800D569C @ 0x1800D569C (sub_1800D569C.c)
 */

__int64 __fastcall sub_1800D4E6C(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    sub_1800D569C(v2, a1[1]);
    return _o_free(*a1);
  }
  return result;
}
