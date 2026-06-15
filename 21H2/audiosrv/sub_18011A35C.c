/*
 * XREFs of sub_18011A35C @ 0x18011A35C
 * Callers:
 *     sub_180058F74 @ 0x180058F74 (sub_180058F74.c)
 *     sub_18011F504 @ 0x18011F504 (sub_18011F504.c)
 * Callees:
 *     sub_18011FDC4 @ 0x18011FDC4 (sub_18011FDC4.c)
 */

__int64 __fastcall sub_18011A35C(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*(_QWORD *)(a1 + 232) || (result = sub_18011FDC4(a1, 3LL), (int)result >= 0) )
  {
    if ( *(_QWORD *)(a1 + 224) )
      return sub_18011FDC4(a1, 0LL);
  }
  return result;
}
