/*
 * XREFs of ?RitWakeReasonToString@InputTraceLogging@@CGPBDK@Z @ 0x147005
 * Callers:
 *     _RawInputThread@4 @ 0xD57F4 (_RawInputThread@4.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::RitWakeReasonToString(unsigned int a1)
{
  unsigned int v1; // ecx
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx

  if ( a1 <= 0x10 )
  {
    if ( a1 == 16 )
      return "DitTakeover";
    v1 = a1 - 1;
    if ( !v1 )
      return "Mouse";
    v2 = v1 - 1;
    if ( !v2 )
      return "Shutdown";
    v3 = v2 - 2;
    if ( !v3 )
      return "EnableMMCSS";
    if ( v3 == 4 )
      return "RitTakeover";
    return "UNKNOWN";
  }
  v5 = a1 - 32;
  if ( !v5 )
    return "ConfigUpdate";
  v6 = v5 - 32;
  if ( !v6 )
    return "GetUserProfile";
  if ( v6 != 64 )
    return "UNKNOWN";
  return "DitInControl";
}
