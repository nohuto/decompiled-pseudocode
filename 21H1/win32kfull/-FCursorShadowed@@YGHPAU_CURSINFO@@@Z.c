/*
 * XREFs of ?FCursorShadowed@@YGHPAU_CURSINFO@@@Z @ 0x773DE
 * Callers:
 *     _zzzUpdateCursorImage@0 @ 0x745FA (_zzzUpdateCursorImage@0.c)
 *     ?SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0xB1576 (-SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall FCursorShadowed(_DWORD *this)
{
  int v1; // edx

  v1 = 0;
  if ( !_gbDisableAlpha && ((unsigned int)_gpdwCPUserPreferencesMask & 0x80002000) == 0x80002000 )
    return (*this & 0x200) != 0;
  return v1;
}
