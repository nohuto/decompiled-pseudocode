/*
 * XREFs of PiCslIsConsoleLocked @ 0x1408AF130
 * Callers:
 *     PipDmgEnforceEnumerationPolicy @ 0x1408AE2E4 (PipDmgEnforceEnumerationPolicy.c)
 *     PipDmgReevaluateQueue @ 0x1408AE42C (PipDmgReevaluateQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

char PiCslIsConsoleLocked()
{
  char v0; // dl

  v0 = 0;
  if ( !PipCslInitialized )
    KeBugCheckEx(0xCAu, 0x10uLL, 0LL, 0LL, 0LL);
  if ( !PipCslConsoleLockState )
    return 1;
  if ( PipCslConsoleLockState != 1 )
  {
    if ( PipCslConsoleLockState != 2 )
      __fastfail(5u);
    return 1;
  }
  return v0;
}
