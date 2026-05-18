/*
 * XREFs of sub_1800A7A94 @ 0x1800A7A94
 * Callers:
 *     sub_1800A9340 @ 0x1800A9340 (sub_1800A9340.c)
 * Callees:
 *     sub_18007E3E4 @ 0x18007E3E4 (sub_18007E3E4.c)
 */

_OWORD *__fastcall sub_1800A7A94(_OWORD *a1, __int64 a2)
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
      sub_18007E3E4(v6, (_OWORD *)((char *)v6 + a2 - (_QWORD)a1));
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
