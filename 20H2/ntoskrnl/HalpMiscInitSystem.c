/*
 * XREFs of HalpMiscInitSystem @ 0x1409A3D00
 * Callers:
 *     <none>
 * Callees:
 *     HalpMiscInitializeKsr @ 0x1407C4968 (HalpMiscInitializeKsr.c)
 *     HalpMiscInitializeTelemetry @ 0x1407C49B0 (HalpMiscInitializeTelemetry.c)
 *     HalpMiscGetParameters @ 0x140A70008 (HalpMiscGetParameters.c)
 *     HalpMiscInitDiscard @ 0x140A703F8 (HalpMiscInitDiscard.c)
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
