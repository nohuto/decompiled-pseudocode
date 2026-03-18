/*
 * XREFs of ?SwapReasonToString@InputTraceLogging@@CGPBDW4InputTracing_SetSystemCursorReason@@@Z @ 0x143144
 * Callers:
 *     ?zzzInternalSetSystemCursor@@YGXPAUtagCURSOR@@IPAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0xD8F80 (-zzzInternalSetSystemCursor@@YGXPAUtagCURSOR@@IPAU_UNICODE_STRING@@W4InputTracing_SetSystemCurso.c)
 * Callees:
 *     <none>
 */

const char *__thiscall InputTraceLogging::SwapReasonToString(char *this)
{
  char *v1; // ecx
  char *v2; // ecx
  char *v3; // ecx
  char *v4; // ecx

  if ( !this )
    return "Session Init";
  v1 = this - 1;
  if ( !v1 )
    return "User Login";
  v2 = v1 - 1;
  if ( !v2 )
    return "App called SPI_SETCURSORS";
  v3 = v2 - 1;
  if ( !v3 )
    return "App called SetSystemCursor";
  v4 = v3 - 1;
  if ( !v4 )
    return "Restore Mouse Cursors";
  if ( v4 == (char *)1 )
    return "Replace Mouse With Pen";
  return "UNKNOWN";
}
