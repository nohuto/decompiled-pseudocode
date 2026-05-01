/*
 * XREFs of ?ResultFromWin32Bool@@YAJH@Z @ 0x18016C1C8
 * Callers:
 *     ?IsTempProfile@ShellFeedsAvailabilityHelpers@@YAEXZ @ 0x1800ED5B0 (-IsTempProfile@ShellFeedsAvailabilityHelpers@@YAEXZ.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180150574 (-ResultFromKnownLastError@@YAJXZ.c)
 */

signed int __fastcall ResultFromWin32Bool(int a1)
{
  signed int result; // eax

  result = 0;
  if ( !a1 )
    return ResultFromKnownLastError();
  return result;
}
