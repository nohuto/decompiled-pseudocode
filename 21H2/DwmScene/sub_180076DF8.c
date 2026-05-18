/*
 * XREFs of sub_180076DF8 @ 0x180076DF8
 * Callers:
 *     sub_18007D258 @ 0x18007D258 (sub_18007D258.c)
 *     sub_18007E228 @ 0x18007E228 (sub_18007E228.c)
 *     sub_1800C3C50 @ 0x1800C3C50 (sub_1800C3C50.c)
 * Callees:
 *     sub_180010BEC @ 0x180010BEC (sub_180010BEC.c)
 */

_QWORD *__fastcall sub_180076DF8(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // r8
  _QWORD *i; // rdx
  __int64 v9; // rcx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = a2[1];
  if ( *a2 != v4 )
  {
    v5 = (v4 - *a2) >> 4;
    v6 = sub_180010BEC((__int64)a1, v5);
    *a1 = v6;
    a1[1] = v6;
    a1[2] = &v6[2 * v5];
    v7 = (_QWORD *)a2[1];
    for ( i = (_QWORD *)*a2; i != v7; i += 2 )
    {
      *v6 = 0LL;
      v6[1] = 0LL;
      v9 = i[1];
      if ( v9 )
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      *v6 = *i;
      v6[1] = i[1];
      v6 += 2;
    }
    a1[1] = v6;
  }
  return a1;
}
