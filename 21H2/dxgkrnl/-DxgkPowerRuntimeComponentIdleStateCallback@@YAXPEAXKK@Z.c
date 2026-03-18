/*
 * XREFs of ?DxgkPowerRuntimeComponentIdleStateCallback@@YAXPEAXKK@Z @ 0x1C001A910
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z @ 0x1C001A928 (-PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z.c)
 */

void __fastcall DxgkPowerRuntimeComponentIdleStateCallback(DXGADAPTER *a1, unsigned int a2, unsigned int a3)
{
  DXGADAPTER::PowerRuntimeComponentIdleStateCallback(a1, a2, a3, 0);
}
