/*
 * XREFs of ?PowerD0StartingStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0031190
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C0012A38 (-PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z.c)
 *     ?PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ @ 0x1C0015164 (-PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ.c)
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x1C0018474 (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1C0018E80 (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerD0StartingStartSelfManagedIo(FxPkgPnp *This)
{
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx
  __int64 v3; // rdx
  unsigned __int8 v4; // r8
  FxCxCallbackProgress progress; // [rsp+30h] [rbp+8h] BYREF

  FxPkgIo::ResumeProcessingForPower((FxPkgIo *)This->m_DeviceBase[3].m_ChildListHead.Blink);
  m_SelfManagedIoMachine = This->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine )
  {
    progress = FxCxCallbackProgressInitialized;
    if ( (int)FxSelfManagedIoMachine::ProcessEvent(m_SelfManagedIoMachine, (_FX_DRIVER_GLOBALS *)1, &progress) < 0 )
      return (unsigned __int8)progress < FxCxCallbackProgressClientSucceeded ? 835 : 864;
  }
  FxPkgPnp::PowerSetDevicePowerState(This, 1);
  FxPkgPnp::PowerSendPowerUpEvents(This, v3, v4);
  return 787LL;
}
