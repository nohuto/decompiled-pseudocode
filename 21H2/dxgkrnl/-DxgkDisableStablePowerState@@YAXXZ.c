/*
 * XREFs of ?DxgkDisableStablePowerState@@YAXXZ @ 0x1C0309B90
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C0029028 (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?DisableStablePowerState@DXGGLOBAL@@QEAAXXZ @ 0x1C0309A90 (-DisableStablePowerState@DXGGLOBAL@@QEAAXXZ.c)
 */

void DxgkDisableStablePowerState(void)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL_GetGlobal();
  DXGGLOBAL::DisableStablePowerState(Global);
}
