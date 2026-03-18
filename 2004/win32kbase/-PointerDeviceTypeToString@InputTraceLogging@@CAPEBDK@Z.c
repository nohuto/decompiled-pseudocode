/*
 * XREFs of ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01547B4
 * Callers:
 *     ?RimDevicePointerData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0154E94 (-RimDevicePointerData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1C0168D00 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     ?CopyPointerFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@AEBUtagPOINTEREVENTINT@@@Z @ 0x1C0171A10 (-CopyPointerFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@AEBUtagPOINTEREVENTINT@@@Z.c)
 *     ?ReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z @ 0x1C0175508 (-ReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z.c)
 *     ?SkipReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z @ 0x1C0175730 (-SkipReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z.c)
 *     rimInputApc @ 0x1C0175DE0 (rimInputApc.c)
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOINTEREVENTINT@@W4ContactPopulationSource@12@@Z @ 0x1C01787EC (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOIN.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::PointerDeviceTypeToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  if ( !a1 )
    return "Unknown";
  v1 = a1 - 1;
  if ( !v1 )
    return "SingleTouch";
  v2 = v1 - 1;
  if ( !v2 )
    return "SerialTouch";
  v3 = v2 - 1;
  if ( !v3 )
    return "ParallelACTouch";
  v4 = v3 - 1;
  if ( !v4 )
    return "ParallelNullTouch";
  v5 = v4 - 1;
  if ( !v5 )
    return "IntegratedPen";
  v6 = v5 - 1;
  if ( !v6 )
    return "ExternalPen";
  if ( v6 == 1 )
    return "Touchpad";
  return "UNKNOWN";
}
