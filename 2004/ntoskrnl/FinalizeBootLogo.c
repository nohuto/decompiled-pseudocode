/*
 * XREFs of FinalizeBootLogo @ 0x1404F9D8C
 * Callers:
 *     StartFirstUserProcess @ 0x140A44218 (StartFirstUserProcess.c)
 * Callees:
 *     InbvAcquireLock @ 0x1404F9ACC (InbvAcquireLock.c)
 *     InbvGetDisplayState @ 0x1404F9B5C (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x1404F9BFC (InbvReleaseLock.c)
 */

__int64 (*FinalizeBootLogo())(void)
{
  InbvAcquireLock();
  if ( !(unsigned int)InbvGetDisplayState() )
    VidSolidColorFill(0LL, 0LL, 639LL, 479LL, 0);
  PltRotBarStatus = 3;
  return InbvReleaseLock();
}
