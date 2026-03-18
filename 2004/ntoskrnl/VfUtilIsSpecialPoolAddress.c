/*
 * XREFs of VfUtilIsSpecialPoolAddress @ 0x1409C38D0
 * Callers:
 *     <none>
 * Callees:
 *     ExIsSpecialPoolAddress @ 0x1405B4B30 (ExIsSpecialPoolAddress.c)
 */

__int64 __fastcall VfUtilIsSpecialPoolAddress(ULONG_PTR a1)
{
  if ( a1 )
    return ExIsSpecialPoolAddress(a1);
  else
    return 0LL;
}
