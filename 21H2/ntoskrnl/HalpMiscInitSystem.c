/*
 * XREFs of HalpMiscInitSystem @ 0x140A5B550
 * Callers:
 *     <none>
 * Callees:
 *     HalpMiscInitializeKsr @ 0x140858BAC (HalpMiscInitializeKsr.c)
 *     HalpMiscInitializeTelemetry @ 0x140858BF8 (HalpMiscInitializeTelemetry.c)
 *     HalpMiscGetParameters @ 0x140B27364 (HalpMiscGetParameters.c)
 *     HalpMiscInitDiscard @ 0x140B27708 (HalpMiscInitDiscard.c)
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
