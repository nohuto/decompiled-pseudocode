/*
 * XREFs of ?GetSystemPowerAction@FxPkgPnp@@QEAA?AW4POWER_ACTION@@XZ @ 0x1C0018E48
 * Callers:
 *     ?GetTargetDevicePowerStateFromPendingDevicePowerDownIrp@FxPkgPnp@@QEAA?AW4_WDF_POWER_DEVICE_STATE@@XZ @ 0x1C000D280 (-GetTargetDevicePowerStateFromPendingDevicePowerDownIrp@FxPkgPnp@@QEAA-AW4_WDF_POWER_DEVICE_STAT.c)
 *     imp_WdfDeviceGetSystemPowerAction @ 0x1C00188F0 (imp_WdfDeviceGetSystemPowerAction.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0019824 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 */

__int64 __fastcall FxPkgPnp::GetSystemPowerAction(FxPkgPnp *this, unsigned int a2)
{
  unsigned __int8 IsVersionGreaterThanOrEqualTo; // al
  __int64 v3; // r9
  unsigned int v4; // r8d
  _DWORD *v6; // rdx

  IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, a2, 0x1Fu);
  v4 = 0;
  if ( !IsVersionGreaterThanOrEqualTo )
    return *(unsigned __int8 *)(v3 + 1137);
  v6 = *(_DWORD **)(v3 + 888);
  if ( !v6 )
    return *(unsigned __int8 *)(v3 + 1137);
  if ( v6[184] == 2 )
  {
    return (unsigned int)v6[185];
  }
  else if ( v6[184] == 3 )
  {
    return (unsigned int)v6[186];
  }
  return v4;
}
