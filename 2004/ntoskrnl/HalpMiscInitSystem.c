/*
 * XREFs of HalpMiscInitSystem @ 0x14099DC00
 * Callers:
 *     <none>
 * Callees:
 *     HalpMiscInitializeKsr @ 0x1407B5F0C (HalpMiscInitializeKsr.c)
 *     HalpMiscInitializeTelemetry @ 0x1407B5F54 (HalpMiscInitializeTelemetry.c)
 *     HalpMiscGetParameters @ 0x140A69688 (HalpMiscGetParameters.c)
 *     HalpMiscInitDiscard @ 0x140A6999C (HalpMiscInitDiscard.c)
 */

__int64 __fastcall HalpMiscInitSystem(int a1, __int64 a2, __int64 a3)
{
  if ( a1 )
  {
    if ( a1 == 7 )
    {
      HalpMiscInitDiscard();
    }
    else if ( a1 == 31 )
    {
      HalpMiscInitializeTelemetry();
      HalpMiscInitializeKsr();
    }
  }
  else
  {
    HalpMiscGetParameters(a3);
  }
  return 0LL;
}
