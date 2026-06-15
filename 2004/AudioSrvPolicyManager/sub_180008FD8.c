/*
 * XREFs of sub_180008FD8 @ 0x180008FD8
 * Callers:
 *     sub_18003B16C @ 0x18003B16C (sub_18003B16C.c)
 * Callees:
 *     sub_18000A300 @ 0x18000A300 (sub_18000A300.c)
 */

__int64 __fastcall sub_180008FD8(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return sub_18000A300(result);
  }
  return result;
}
