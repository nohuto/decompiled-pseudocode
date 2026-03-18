/*
 * XREFs of _strupr @ 0x1403CDA20
 * Callers:
 *     HalInitializeBios @ 0x1403C1BE0 (HalInitializeBios.c)
 *     InbvDetermineFunction @ 0x1403C53AC (InbvDetermineFunction.c)
 *     KdInitSystem @ 0x1409B2160 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140A36F64 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 *     InbvDriverInitialize @ 0x140A67DE0 (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x140A67E90 (BvgaDriverInitialize.c)
 *     RamdiskStart @ 0x140A92778 (RamdiskStart.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140398100 (xHalTimerWatchdogStop.c)
 */

char *__cdecl strupr(char *String)
{
  char v3; // cl
  char *v4; // r8

  if ( String )
  {
    v3 = *String;
    v4 = String;
    while ( v3 )
    {
      if ( (unsigned __int8)(v3 - 97) <= 0x19u )
        *v4 = v3 - 32;
      v3 = *++v4;
    }
    return String;
  }
  else
  {
    xHalTimerWatchdogStop();
    return 0LL;
  }
}
