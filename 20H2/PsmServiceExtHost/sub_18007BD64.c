/*
 * XREFs of sub_18007BD64 @ 0x18007BD64
 * Callers:
 *     sub_18007BF28 @ 0x18007BF28 (sub_18007BF28.c)
 * Callees:
 *     sub_1800286D8 @ 0x1800286D8 (sub_1800286D8.c)
 *     sub_18007BBD8 @ 0x18007BBD8 (sub_18007BBD8.c)
 *     sub_18007BEF8 @ 0x18007BEF8 (sub_18007BEF8.c)
 */

_QWORD *__fastcall sub_18007BD64(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbp
  _QWORD *v5; // rbx
  _QWORD *v6; // r14
  signed __int64 v7; // rax
  unsigned __int64 i; // rcx
  signed __int64 v9; // rtt
  _QWORD *v10; // rsi

  v4 = 0LL;
  sub_18007BBD8(a1, a2);
  if ( a2 )
    v5 = *(_QWORD **)(a2 + 40);
  else
    v5 = *(_QWORD **)(a1 + 272);
  v6 = (_QWORD *)(a1 + 272);
  while ( v5 != v6 )
  {
    v4 = v5 - 5;
    _m_prefetchw(v5 + 7);
    v7 = v5[7];
    for ( i = v7 + 1; i > 1; i = v7 + 1 )
    {
      v9 = v7;
      v7 = _InterlockedCompareExchange64(v4 + 12, i, v7);
      if ( v9 == v7 )
        goto LABEL_13;
    }
    if ( i != 1 )
      __fastfail(0xEu);
    v5 = (_QWORD *)*v5;
  }
LABEL_13:
  sub_18007BEF8(a1);
  v10 = 0LL;
  if ( v5 != v6 )
    v10 = v4;
  if ( a2 )
    sub_1800286D8(a2);
  return v10;
}
