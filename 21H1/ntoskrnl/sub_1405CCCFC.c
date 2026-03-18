/*
 * XREFs of sub_1405CCCFC @ 0x1405CCCFC
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x1405CC48C (WbAddWarbirdEncryptionSegment.c)
 *     sub_1405CCAD4 @ 0x1405CCAD4 (sub_1405CCAD4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405CCCFC(volatile signed __int64 *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
  {
    if ( !_InterlockedAdd64(a1, 1uLL) )
      return 3221225701LL;
  }
  return result;
}
