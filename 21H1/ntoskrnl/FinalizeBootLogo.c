/*
 * XREFs of FinalizeBootLogo @ 0x1404F973C
 * Callers:
 *     StartFirstUserProcess @ 0x140A3E9B4 (StartFirstUserProcess.c)
 * Callees:
 *     InbvAcquireLock @ 0x1404F947C (InbvAcquireLock.c)
 *     InbvGetDisplayState @ 0x1404F950C (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x1404F95AC (InbvReleaseLock.c)
 */

__int64 (*FinalizeBootLogo())(void)
{
  InbvAcquireLock();
  if ( !(unsigned int)InbvGetDisplayState() )
    VidSolidColorFill(0LL, 0LL, 639LL, 479LL, 0);
  PltRotBarStatus = 3;
  return InbvReleaseLock();
}
