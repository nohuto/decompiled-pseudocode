/*
 * XREFs of ?GetSystemPowerAction@FxDevicePowerIrpTracker@@QEAA?AW4POWER_ACTION@@XZ @ 0x1C001C91C
 * Callers:
 *     ?GetSystemPowerAction@FxPkgPnp@@QEAA?AW4POWER_ACTION@@XZ @ 0x1C007FBD4 (-GetSystemPowerAction@FxPkgPnp@@QEAA-AW4POWER_ACTION@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxDevicePowerIrpTracker::GetSystemPowerAction(FxDevicePowerIrpTracker *this)
{
  if ( this->m_DIrpRequestedForSIrp == RequestD0ForS0 )
    return (unsigned int)this->m_S0PowerAction;
  if ( this->m_DIrpRequestedForSIrp == RequestDxForSx )
    return (unsigned int)this->m_SxPowerAction;
  return 0LL;
}
