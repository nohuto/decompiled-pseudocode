/*
 * XREFs of FinalizeBootLogo @ 0x1404FD61C
 * Callers:
 *     StartFirstUserProcess @ 0x140A4A4B8 (StartFirstUserProcess.c)
 * Callees:
 *     InbvAcquireLock @ 0x1404FD35C (InbvAcquireLock.c)
 *     InbvGetDisplayState @ 0x1404FD3EC (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x1404FD48C (InbvReleaseLock.c)
 */

__int64 (*FinalizeBootLogo())(void)
{
  InbvAcquireLock();
  if ( !(unsigned int)InbvGetDisplayState() )
    VidSolidColorFill(0LL, 0LL, 639LL, 479LL, 0);
  PltRotBarStatus = 3;
  return InbvReleaseLock();
}
