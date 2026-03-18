/*
 * XREFs of ?GetTargetDevicePowerStateFromPendingDevicePowerDownIrp@FxPkgPnp@@QEAA?AW4_WDF_POWER_DEVICE_STATE@@XZ @ 0x1C000D280
 * Callers:
 *     ?PowerGotoDxIoStoppedCommon@FxPkgPnp@@IEAAEE@Z @ 0x1C000CFC0 (-PowerGotoDxIoStoppedCommon@FxPkgPnp@@IEAAEE@Z.c)
 *     ?PowerGotoDx@FxPkgPnp@@IEAAXXZ @ 0x1C000F798 (-PowerGotoDx@FxPkgPnp@@IEAAXXZ.c)
 * Callees:
 *     ?GetSystemPowerAction@FxPkgPnp@@QEAA?AW4POWER_ACTION@@XZ @ 0x1C0018E48 (-GetSystemPowerAction@FxPkgPnp@@QEAA-AW4POWER_ACTION@@XZ.c)
 */

__int64 __fastcall FxPkgPnp::GetTargetDevicePowerStateFromPendingDevicePowerDownIrp(FxPkgPnp *this)
{
  POWER_ACTION SystemPowerAction; // eax
  __int64 v2; // r10
  __int64 v3; // r11
  __int64 result; // rax

  if ( !this->m_PendingDevicePowerIrp )
    return 5LL;
  SystemPowerAction = FxPkgPnp::GetSystemPowerAction(this);
  if ( SystemPowerAction < PowerActionShutdown || SystemPowerAction > PowerActionShutdownOff )
    result = *(unsigned int *)(*(_QWORD *)(v2 + 184) + 24LL);
  else
    result = 5LL;
  if ( *(_BYTE *)(v3 + 157) == 5 )
  {
    if ( *(_DWORD *)(v3 + 284) )
      return 6LL;
  }
  return result;
}
