/*
 * XREFs of sub_1405D4570 @ 0x1405D4570
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x1405D3D00 (WbAddWarbirdEncryptionSegment.c)
 *     sub_1405D4348 @ 0x1405D4348 (sub_1405D4348.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405D4570(volatile signed __int64 *a1)
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
