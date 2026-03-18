/*
 * XREFs of ?CursorToString@InputTraceLogging@@CGPBDPAUtagCURSOR@@@Z @ 0x142FDC
 * Callers:
 *     _zzzUpdateCursorImage@0 @ 0x745FA (_zzzUpdateCursorImage@0.c)
 *     _LockQCursor@8 @ 0x9C34C (_LockQCursor@8.c)
 *     ?SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0xB1576 (-SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 * Callees:
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

const char *__thiscall InputTraceLogging::CursorToString(void *this)
{
  unsigned int v3; // ecx
  void **i; // eax

  if ( !this )
    return "Empty";
  v3 = 0;
  for ( i = (void **)&_gasyscur[1]; *i != this; i += 134 )
  {
    if ( (int)++v3 >= 19 )
      return "Custom";
  }
  if ( v3 < 0x13 )
    return `InputTraceLogging::CurIndexName'::`2'::typenames[v3];
  MicrosoftTelemetryAssertTriggeredNoArgsKM();
  return "ERROR BAD INDEX";
}
