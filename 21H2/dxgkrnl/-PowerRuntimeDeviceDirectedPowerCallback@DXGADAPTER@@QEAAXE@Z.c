/*
 * XREFs of ?PowerRuntimeDeviceDirectedPowerCallback@DXGADAPTER@@QEAAXE@Z @ 0x1C003882C
 * Callers:
 *     ?DxgkPowerRuntimeDeviceDirectedPowerDownCallback@@YAXPEAXK@Z @ 0x1C003EB20 (-DxgkPowerRuntimeDeviceDirectedPowerDownCallback@@YAXPEAXK@Z.c)
 *     ?DxgkPowerRuntimeDeviceDirectedPowerUpCallback@@YAXPEAXK@Z @ 0x1C003EB70 (-DxgkPowerRuntimeDeviceDirectedPowerUpCallback@@YAXPEAXK@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiRequestDevicePowerIrp @ 0x1C0051598 (DpiRequestDevicePowerIrp.c)
 *     ?SetDFxEngaged@DXGGLOBAL@@QEAAXH@Z @ 0x1C02BF614 (-SetDFxEngaged@DXGGLOBAL@@QEAAXH@Z.c)
 */

void __fastcall DXGADAPTER::PowerRuntimeDeviceDirectedPowerCallback(DXGADAPTER *this, __int64 a2)
{
  char v2; // si
  BOOL v4; // ebx
  DXGGLOBAL *Global; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = a2;
  v4 = (_BYTE)a2 == 0;
  Global = DXGGLOBAL::GetGlobal((__int64)this, a2);
  DXGGLOBAL::SetDFxEngaged(Global, v4);
  v6 = 1LL;
  v7 = *(_QWORD *)(*((_QWORD *)this + 27) + 64LL);
  if ( !v2 )
  {
    *(_BYTE *)(v7 + 4144) = 1;
    v6 = 4LL;
  }
  DpiRequestDevicePowerIrp(v7, v6);
}
