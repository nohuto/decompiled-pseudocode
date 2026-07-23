/*
 * XREFs of HalpMiscInitSystem @ 0x1409A2450
 * Callers:
 *     <none>
 * Callees:
 *     HalpMiscInitializeKsr @ 0x1407C8F48 (HalpMiscInitializeKsr.c)
 *     HalpMiscInitializeTelemetry @ 0x1407C8F90 (HalpMiscInitializeTelemetry.c)
 *     HalpMiscGetParameters @ 0x140A6DF88 (HalpMiscGetParameters.c)
 *     HalpMiscInitDiscard @ 0x140A6E378 (HalpMiscInitDiscard.c)
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
