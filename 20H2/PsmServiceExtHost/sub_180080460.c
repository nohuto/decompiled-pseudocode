/*
 * XREFs of sub_180080460 @ 0x180080460
 * Callers:
 *     <none>
 * Callees:
 *     sub_180079C30 @ 0x180079C30 (sub_180079C30.c)
 */

__int64 __fastcall sub_180080460(__int64 a1, void *a2, unsigned int a3, unsigned int a4)
{
  __int64 result; // rax

  result = sub_180079C30(a1, a2, a3, a4);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
