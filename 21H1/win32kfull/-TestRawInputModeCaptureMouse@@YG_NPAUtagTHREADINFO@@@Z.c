/*
 * XREFs of ?TestRawInputModeCaptureMouse@@YG_NPAUtagTHREADINFO@@@Z @ 0x7494E
 * Callers:
 *     _zzzUpdateCursorImage@0 @ 0x745FA (_zzzUpdateCursorImage@0.c)
 *     ?SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0xB1576 (-SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 * Callees:
 *     _HasHidTable@4 @ 0x7498A (_HasHidTable@4.c)
 */

bool __thiscall TestRawInputModeCaptureMouse(_DWORD *this)
{
  return !(unsigned __int8)IsSpatialDelegationEnabledForThread(this)
      && HasHidTable(this)
      && (*(_DWORD *)(*(_DWORD *)(this[58] + 472) + 52) & 0x100) != 0;
}
