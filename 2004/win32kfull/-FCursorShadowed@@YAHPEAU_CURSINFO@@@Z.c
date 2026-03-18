/*
 * XREFs of ?FCursorShadowed@@YAHPEAU_CURSINFO@@@Z @ 0x1C0088868
 * Callers:
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C004DA10 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     zzzUpdateCursorImage @ 0x1C0087670 (zzzUpdateCursorImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FCursorShadowed(struct _CURSINFO *a1)
{
  unsigned int v1; // r8d

  v1 = 0;
  if ( !gbDisableAlpha && ((unsigned int)gpdwCPUserPreferencesMask & 0x80002000) == 0x80002000 )
    return (*(_DWORD *)a1 & 0x200) != 0;
  return v1;
}
