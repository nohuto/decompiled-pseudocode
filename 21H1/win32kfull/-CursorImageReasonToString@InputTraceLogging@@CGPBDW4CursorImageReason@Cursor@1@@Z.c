/*
 * XREFs of ?CursorImageReasonToString@InputTraceLogging@@CGPBDW4CursorImageReason@Cursor@1@@Z @ 0x142F51
 * Callers:
 *     _zzzUpdateCursorImage@0 @ 0x745FA (_zzzUpdateCursorImage@0.c)
 *     ?SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0xB1576 (-SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 * Callees:
 *     <none>
 */

const char *__thiscall InputTraceLogging::CursorImageReasonToString(char *this)
{
  char *v1; // ecx
  char *v2; // ecx
  char *v3; // ecx
  char *v4; // ecx
  char *v5; // ecx

  if ( !this )
    return "HiddenByForeground";
  v1 = this - 1;
  if ( !v1 )
    return "ForceAutoRun";
  v2 = v1 - 1;
  if ( !v2 )
    return "ForceAppStarting";
  v3 = v2 - 1;
  if ( !v3 )
    return "SetFromQueue";
  v4 = v3 - 1;
  if ( !v4 )
    return "HiddenByQueue";
  v5 = v4 - 1;
  if ( !v5 )
    return "SizeChange";
  if ( v5 == (char *)1 )
    return "ExplicitSetPointer";
  return "UNKNOWN";
}
