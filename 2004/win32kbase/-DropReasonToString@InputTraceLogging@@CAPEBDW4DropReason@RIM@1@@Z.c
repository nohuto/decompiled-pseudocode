/*
 * XREFs of ?DropReasonToString@InputTraceLogging@@CAPEBDW4DropReason@RIM@1@@Z @ 0x1C0168C64
 * Callers:
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C0168B3C (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::DropReasonToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

  if ( a1 <= 6 )
  {
    if ( a1 == 6 )
      return "DevicePaused";
    if ( !a1 )
      return "NoMonitor";
    v1 = a1 - 1;
    if ( !v1 )
      return "TouchpadDisabled";
    v2 = v1 - 1;
    if ( !v2 )
      return "TouchDisabled";
    v3 = v2 - 1;
    if ( !v3 )
      return "InvalidInputConfig";
    if ( v3 == 2 )
      return "InputSuppressed";
    return "UNKNOWN";
  }
  v5 = a1 - 7;
  if ( !v5 )
    return "FifoOverflow";
  v6 = v5 - 1;
  if ( !v6 )
    return "FifoCleared";
  v7 = v6 - 1;
  if ( !v7 )
    return "UnknownDeviceType";
  if ( v7 != 1 )
    return "UNKNOWN";
  return "DelayedPnp";
}
