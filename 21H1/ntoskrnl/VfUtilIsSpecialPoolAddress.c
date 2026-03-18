/*
 * XREFs of VfUtilIsSpecialPoolAddress @ 0x1409C38C0
 * Callers:
 *     <none>
 * Callees:
 *     ExIsSpecialPoolAddress @ 0x1405B4410 (ExIsSpecialPoolAddress.c)
 */

__int64 __fastcall VfUtilIsSpecialPoolAddress(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  if ( a1 )
    return ExIsSpecialPoolAddress(a1, a2, a3);
  else
    return 0LL;
}
