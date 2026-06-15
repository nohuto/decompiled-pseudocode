/*
 * XREFs of sub_180022604 @ 0x180022604
 * Callers:
 *     sub_180022584 @ 0x180022584 (sub_180022584.c)
 * Callees:
 *     sub_180022584 @ 0x180022584 (sub_180022584.c)
 */

__int64 __fastcall sub_180022604(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  bool v3; // zf

  result = *(_QWORD *)(a1 + 32);
  *a2 = result;
  v3 = (*(_QWORD *)(a1 + 16))-- == 1LL;
  *(_QWORD *)(a1 + 32) = a2;
  if ( v3 )
    return sub_180022584(a1);
  return result;
}
