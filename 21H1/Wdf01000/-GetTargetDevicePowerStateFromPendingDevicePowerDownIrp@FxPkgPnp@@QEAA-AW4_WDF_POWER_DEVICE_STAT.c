/*
 * XREFs of ?GetTargetDevicePowerStateFromPendingDevicePowerDownIrp@FxPkgPnp@@QEAA?AW4_WDF_POWER_DEVICE_STATE@@XZ @ 0x1C001BED8
 * Callers:
 *     ?PowerGotoDx@FxPkgPnp@@IEAAXXZ @ 0x1C00114C4 (-PowerGotoDx@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerGotoDxIoStoppedCommon@FxPkgPnp@@IEAAEE@Z @ 0x1C001C10C (-PowerGotoDxIoStoppedCommon@FxPkgPnp@@IEAAEE@Z.c)
 * Callees:
 *     ?GetSystemPowerAction@FxPkgPnp@@QEAA?AW4POWER_ACTION@@XZ @ 0x1C00804B4 (-GetSystemPowerAction@FxPkgPnp@@QEAA-AW4POWER_ACTION@@XZ.c)
 */

__int64 __fastcall FxPkgPnp::GetTargetDevicePowerStateFromPendingDevicePowerDownIrp(FxPkgPnp *this)
{
  __int64 result; // rax
  __int64 v2; // r9
  __int64 v3; // r10

  if ( !this->m_PendingDevicePowerIrp )
    return 5LL;
  if ( (unsigned int)(FxPkgPnp::GetSystemPowerAction(this) - 4) > 2 )
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
