/*
 * XREFs of sub_180035B88 @ 0x180035B88
 * Callers:
 *     sub_18000DF0C @ 0x18000DF0C (sub_18000DF0C.c)
 *     sub_180079A1C @ 0x180079A1C (sub_180079A1C.c)
 *     sub_18008431C @ 0x18008431C (sub_18008431C.c)
 * Callees:
 *     sub_18000EDAC @ 0x18000EDAC (sub_18000EDAC.c)
 *     sub_18000F9F0 @ 0x18000F9F0 (sub_18000F9F0.c)
 */

__int64 __fastcall sub_180035B88(char *a1, __int64 a2, void *a3, __int64 a4, int a5, unsigned int a6, __int64 a7)
{
  __int64 result; // rax

  result = sub_18000F9F0(a2, a3, a4, a4, a6, a7);
  if ( (int)result < 0 )
  {
    if ( (unsigned int)(result + 1073741585) <= 5 )
      return (unsigned int)(result + 1);
  }
  else
  {
    sub_18000EDAC(a2, a3, a5, a6, a7, a1);
    return 0LL;
  }
  return result;
}
