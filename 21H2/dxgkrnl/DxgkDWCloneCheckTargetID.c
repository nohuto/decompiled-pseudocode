/*
 * XREFs of DxgkDWCloneCheckTargetID @ 0x1C020EA70
 * Callers:
 *     DpiFdoEnumChildDevices @ 0x1C020E59C (DpiFdoEnumChildDevices.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 */

_BOOL8 __fastcall DxgkDWCloneCheckTargetID(int a1)
{
  DXGGLOBAL_GetGlobal();
  return (a1 & 0xFF000000) == 0;
}
