/*
 * XREFs of sub_1800D52B4 @ 0x1800D52B4
 * Callers:
 *     sub_1800D6B2C @ 0x1800D6B2C (sub_1800D6B2C.c)
 * Callees:
 *     sub_180010F3C @ 0x180010F3C (sub_180010F3C.c)
 *     sub_1800D5AE4 @ 0x1800D5AE4 (sub_1800D5AE4.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800D52B4(_QWORD *a1, __int64 a2, int a3)
{
  _QWORD *v5; // rsi
  _QWORD *i; // rdi
  _QWORD *v7; // rdx
  __int64 v8; // rax

  *(_OWORD *)a1 = 0LL;
  a1[2] = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v5 = *(_QWORD **)(a2 + 8);
  for ( i = *(_QWORD **)a2; i != v5; i += 2 )
  {
    if ( *(_BYTE *)(*i + 136LL) && !*(_DWORD *)(*i + 176LL) )
    {
      v7 = (_QWORD *)a1[1];
      if ( (_QWORD *)a1[2] == v7 )
      {
        sub_180010F3C(a1, v7, i);
      }
      else
      {
        *v7 = 0LL;
        v7[1] = 0LL;
        v8 = i[1];
        if ( v8 )
          _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
        *v7 = *i;
        v7[1] = i[1];
        a1[1] += 16LL;
      }
    }
  }
  if ( a3 == 1 )
    sub_1800D5AE4(*a1, a1[1], (__int64)(a1[1] - *a1) >> 4, sub_180104750, 1, a1);
  return a1;
}
