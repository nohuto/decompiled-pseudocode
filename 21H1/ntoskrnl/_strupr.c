/*
 * XREFs of _strupr @ 0x1403CCBE0
 * Callers:
 *     HalInitializeBios @ 0x1403C0D20 (HalInitializeBios.c)
 *     InbvDetermineFunction @ 0x1403C443C (InbvDetermineFunction.c)
 *     KdInitSystem @ 0x1409B2160 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140A37A74 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 *     InbvDriverInitialize @ 0x140A67958 (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x140A67A10 (BvgaDriverInitialize.c)
 *     RamdiskStart @ 0x140A93068 (RamdiskStart.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403974F0 (xHalTimerWatchdogStop.c)
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
