/*
 * XREFs of _strupr @ 0x1403D06B0
 * Callers:
 *     HalInitializeBios @ 0x1403C4350 (HalInitializeBios.c)
 *     InbvDetermineFunction @ 0x1403C7D9C (InbvDetermineFunction.c)
 *     KdInitSystem @ 0x1409B8160 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140A3CF64 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 *     InbvDriverInitialize @ 0x140A6E608 (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x140A6E6C0 (BvgaDriverInitialize.c)
 *     RamdiskStart @ 0x140A983D8 (RamdiskStart.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14039A580 (xHalTimerWatchdogStop.c)
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
