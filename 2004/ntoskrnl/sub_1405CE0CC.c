/*
 * XREFs of sub_1405CE0CC @ 0x1405CE0CC
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x1405CD85C (WbAddWarbirdEncryptionSegment.c)
 *     sub_1405CDEA4 @ 0x1405CDEA4 (sub_1405CDEA4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405CE0CC(volatile signed __int64 *a1)
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
