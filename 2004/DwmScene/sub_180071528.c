/*
 * XREFs of sub_180071528 @ 0x180071528
 * Callers:
 *     sub_180077988 @ 0x180077988 (sub_180077988.c)
 *     sub_180078958 @ 0x180078958 (sub_180078958.c)
 *     sub_1800BE380 @ 0x1800BE380 (sub_1800BE380.c)
 * Callees:
 *     sub_180010B0C @ 0x180010B0C (sub_180010B0C.c)
 */

_QWORD *__fastcall sub_180071528(_QWORD *a1, _QWORD *a2)
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
    v6 = sub_180010B0C((__int64)a1, v5);
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
