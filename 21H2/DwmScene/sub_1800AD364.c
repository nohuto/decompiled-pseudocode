/*
 * XREFs of sub_1800AD364 @ 0x1800AD364
 * Callers:
 *     sub_1800AEC10 @ 0x1800AEC10 (sub_1800AEC10.c)
 * Callees:
 *     sub_180083CB4 @ 0x180083CB4 (sub_180083CB4.c)
 */

_OWORD *__fastcall sub_1800AD364(_OWORD *a1, __int64 a2)
{
  _OWORD *v4; // rdi
  __int64 v5; // rbp
  _OWORD *v6; // rsi
  __int64 v7; // r15

  v4 = a1;
  v5 = 4LL;
  do
  {
    v6 = v4;
    v7 = 4LL;
    do
    {
      sub_180083CB4(v6, (_OWORD *)((char *)v6 + a2 - (_QWORD)a1));
      v6 += 4;
      --v7;
    }
    while ( v7 );
    v4 += 16;
    --v5;
  }
  while ( v5 );
  return a1;
}
