/*
 * XREFs of ?RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C015AC18
 * Callers:
 *     RIMStartDeviceSpecificRead @ 0x1C0059A04 (RIMStartDeviceSpecificRead.c)
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C00A324C (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C017C48C (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::RimDevTypeToString(int a1)
{
  int v1; // ecx
  int v2; // ecx

  if ( !a1 )
    return "Mouse";
  v1 = a1 - 1;
  if ( !v1 )
    return "Keyboard";
  v2 = v1 - 1;
  if ( !v2 )
    return "Hid";
  if ( v2 == 1 )
    return "Config";
  return "UNKNOWN";
}
