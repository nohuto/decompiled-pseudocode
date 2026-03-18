/*
 * XREFs of DxgkNotifySharedPowerGraphicsPowerTransition @ 0x1C030D504
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C0217840 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?NotifySharedPowerGraphicsPowerTransition@DXGGLOBAL@@QEAAXQEAXW4_DEVICE_POWER_STATE@@E@Z @ 0x1C030AC28 (-NotifySharedPowerGraphicsPowerTransition@DXGGLOBAL@@QEAAXQEAXW4_DEVICE_POWER_STATE@@E@Z.c)
 */

void __fastcall DxgkNotifySharedPowerGraphicsPowerTransition(__int64 *a1, unsigned int a2, char a3)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL_GetGlobal();
  DXGGLOBAL::NotifySharedPowerGraphicsPowerTransition(Global, a1, a2, a3);
}
