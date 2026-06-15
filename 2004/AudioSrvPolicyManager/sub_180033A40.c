/*
 * XREFs of sub_180033A40 @ 0x180033A40
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800361E8 @ 0x1800361E8 (sub_1800361E8.c)
 */

__int64 __fastcall sub_180033A40(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = a1[3];
  if ( v2 )
  {
    sub_1800361E8(v2, a1[4]);
    _o_free(a1[3]);
    a1[3] = 0LL;
  }
  a1[4] = 0LL;
  a1[5] = 0LL;
  result = _o_free(a1[1]);
  a1[1] = 0LL;
  return result;
}
