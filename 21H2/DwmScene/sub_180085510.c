/*
 * XREFs of sub_180085510 @ 0x180085510
 * Callers:
 *     sub_1800855B4 @ 0x1800855B4 (sub_1800855B4.c)
 *     sub_1800C27F0 @ 0x1800C27F0 (sub_1800C27F0.c)
 * Callees:
 *     sub_180089274 @ 0x180089274 (sub_180089274.c)
 */

_QWORD *__fastcall sub_180085510(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx

  sub_180089274(a1);
  v4 = *(_QWORD **)(a1 + 32);
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( v4 != *(_QWORD **)(a1 + 40) )
  {
    v5 = v4[1];
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v5 = v4[1];
    }
    *a2 = *v4;
    a2[1] = v5;
  }
  return a2;
}
