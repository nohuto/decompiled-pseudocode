/*
 * XREFs of FinalizeBootLogo @ 0x1404FF1BC
 * Callers:
 *     StartFirstUserProcess @ 0x140A4BB74 (StartFirstUserProcess.c)
 * Callees:
 *     InbvAcquireLock @ 0x1404FEEFC (InbvAcquireLock.c)
 *     InbvGetDisplayState @ 0x1404FEF8C (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x1404FF02C (InbvReleaseLock.c)
 */

__int64 (*FinalizeBootLogo())(void)
{
  InbvAcquireLock();
  if ( !(unsigned int)InbvGetDisplayState() )
    VidSolidColorFill(0LL, 0LL, 639LL, 479LL, 0);
  PltRotBarStatus = 3;
  return InbvReleaseLock();
}
