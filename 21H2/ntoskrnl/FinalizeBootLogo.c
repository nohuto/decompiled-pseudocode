/*
 * XREFs of FinalizeBootLogo @ 0x140550E2C
 * Callers:
 *     StartFirstUserProcess @ 0x140B263A0 (StartFirstUserProcess.c)
 * Callees:
 *     InbvAcquireLock @ 0x140550B6C (InbvAcquireLock.c)
 *     InbvGetDisplayState @ 0x140550BFC (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x140550C9C (InbvReleaseLock.c)
 */

__int64 (*FinalizeBootLogo())(void)
{
  InbvAcquireLock();
  if ( !(unsigned int)InbvGetDisplayState() )
    VidSolidColorFill(0LL, 0LL, 639LL, 479LL, 0);
  PltRotBarStatus = 3;
  return InbvReleaseLock();
}
