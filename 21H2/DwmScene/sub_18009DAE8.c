/*
 * XREFs of sub_18009DAE8 @ 0x18009DAE8
 * Callers:
 *     sub_18012C461 @ 0x18012C461 (sub_18012C461.c)
 * Callees:
 *     sub_18009A010 @ 0x18009A010 (sub_18009A010.c)
 */

__int64 __fastcall sub_18009DAE8(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = sub_18009A010(v4);
      v4 += 11;
    }
    while ( v4 != a3 );
  }
  return result;
}
