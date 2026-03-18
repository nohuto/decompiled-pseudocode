/*
 * XREFs of PiCslIsConsoleLocked @ 0x140957DE0
 * Callers:
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140808CB4 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     PipDmgEnforceEnumerationPolicy @ 0x1409569F4 (PipDmgEnforceEnumerationPolicy.c)
 *     PipDmgReevaluateQueue @ 0x140956BBC (PipDmgReevaluateQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
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
