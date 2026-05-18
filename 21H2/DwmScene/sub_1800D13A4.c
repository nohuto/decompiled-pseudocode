/*
 * XREFs of sub_1800D13A4 @ 0x1800D13A4
 * Callers:
 *     sub_180080AA4 @ 0x180080AA4 (sub_180080AA4.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800D13A4(__int64 a1)
{
  _QWORD *v1; // r8
  _QWORD *v2; // rcx
  _QWORD *v3; // rdx
  __int64 v4; // rax
  _QWORD *result; // rax

  v1 = (_QWORD *)(a1 + 2400);
  v2 = (_QWORD *)(a1 + 160);
  do
  {
    v3 = v2 - 18;
    do
    {
      v4 = *(v3 - 2);
      *v3 += v4;
      *(v3 - 1) = v4;
      if ( v3[1] >= v4 )
        v4 = v3[1];
      v3[1] = v4;
      v3 += 4;
      _InterlockedExchange64(v3 - 6, 0LL);
    }
    while ( v3 - 2 != v2 );
    v2 += 20;
    result = v2 - 20;
  }
  while ( v2 - 20 != v1 );
  return result;
}
