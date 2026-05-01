/*
 * XREFs of sub_180063C68 @ 0x180063C68
 * Callers:
 *     sub_180063BC8 @ 0x180063BC8 (sub_180063BC8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180063C68(unsigned __int64 a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax

  result = -1LL;
  if ( a1 != -1LL )
    result = a1 >> 10;
  *a3 = result;
  return result;
}
