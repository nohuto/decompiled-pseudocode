/*
 * XREFs of sub_180022584 @ 0x180022584
 * Callers:
 *     sub_1800218C8 @ 0x1800218C8 (sub_1800218C8.c)
 *     sub_1800220B0 @ 0x1800220B0 (sub_1800220B0.c)
 *     sub_180022604 @ 0x180022604 (sub_180022604.c)
 *     sub_18003D1B0 @ 0x18003D1B0 (sub_18003D1B0.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_180022604 @ 0x180022604 (sub_180022604.c)
 */

__int64 __fastcall sub_180022584(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  for ( ; *(_QWORD *)(a1 + 16); result = sub_180022604(a1) )
  {
    if ( !*(_QWORD *)a1 )
      sub_18000A174(-2147467259);
    *(_QWORD *)a1 = **(_QWORD **)a1;
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v3 = *(_QWORD **)(a1 + 24);
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      result = _o_free(v3);
      v3 = v4;
    }
    while ( v4 );
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
