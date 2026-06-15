/*
 * XREFs of sub_1800602AC @ 0x1800602AC
 * Callers:
 *     sub_18005F1D4 @ 0x18005F1D4 (sub_18005F1D4.c)
 *     sub_18005FE9C @ 0x18005FE9C (sub_18005FE9C.c)
 * Callees:
 *     sub_180060310 @ 0x180060310 (sub_180060310.c)
 */

unsigned __int64 __fastcall sub_1800602AC(_QWORD *a1)
{
  unsigned __int64 result; // rax
  void *v3; // rdi
  unsigned __int64 v4; // rcx

  sub_180060310(a1, a1[1]);
  *(_QWORD *)a1[1] = a1[1];
  *(_QWORD *)(a1[1] + 8LL) = a1[1];
  result = 0LL;
  a1[2] = 0LL;
  v3 = (void *)a1[3];
  v4 = (unsigned __int64)(a1[4] - (_QWORD)v3 + 7LL) >> 3;
  if ( (unsigned __int64)v3 > a1[4] )
    v4 = 0LL;
  if ( v4 )
  {
    result = a1[1];
    memset64(v3, result, v4);
  }
  return result;
}
