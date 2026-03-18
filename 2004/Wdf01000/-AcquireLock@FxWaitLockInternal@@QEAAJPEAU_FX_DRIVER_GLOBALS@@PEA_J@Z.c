/*
 * XREFs of ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C000EC9C
 * Callers:
 *     ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x1C0003E54 (-AcquireLock@FxInterrupt@@QEAAXXZ.c)
 *     ?PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z @ 0x1C000E2E4 (-PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z.c)
 *     ?_ProcessEventInner@FxDevicePwrRequirementMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C000E850 (-_ProcessEventInner@FxDevicePwrRequirementMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@.c)
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x1C000EB04 (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C000EF08 (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 *     ?PowerPolicyCanChildPowerUp@FxPkgPnp@@QEAAJPEAE@Z @ 0x1C0017F48 (-PowerPolicyCanChildPowerUp@FxPkgPnp@@QEAAJPEAE@Z.c)
 *     ?PowerPolicyChildPoweredDown@FxPkgPnp@@QEAAXXZ @ 0x1C0018590 (-PowerPolicyChildPoweredDown@FxPkgPnp@@QEAAXXZ.c)
 *     WdfDeviceSetDeviceInterfaceStateWorker @ 0x1C001B7E0 (WdfDeviceSetDeviceInterfaceStateWorker.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x1C005D110 (imp_WdfDeviceCreateDeviceInterface.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x1C005D340 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     ?CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z @ 0x1C006F8E0 (-CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z.c)
 *     ?PipesGotoRemoveState@FxUsbDevice@@IEAAXE@Z @ 0x1C0070A44 (-PipesGotoRemoveState@FxUsbDevice@@IEAAXE@Z.c)
 *     ?Purge@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z @ 0x1C0070C00 (-Purge@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z.c)
 *     ?Stop@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z @ 0x1C0071860 (-Stop@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z.c)
 *     ?PnpDisableInterfaces@FxPkgPnp@@IEAAXXZ @ 0x1C0079FF4 (-PnpDisableInterfaces@FxPkgPnp@@IEAAXXZ.c)
 *     ?PnpEnableInterfacesAndRegisterWmi@FxPkgPnp@@IEAAJXZ @ 0x1C007A080 (-PnpEnableInterfacesAndRegisterWmi@FxPkgPnp@@IEAAJXZ.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C007BBD8 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?_PnpProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C007C550 (-_PnpProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z.c)
 *     ?AddQueryInterface@FxPkgPnp@@QEAAXPEAUFxQueryInterface@@E@Z @ 0x1C007F200 (-AddQueryInterface@FxPkgPnp@@QEAAXPEAUFxQueryInterface@@E@Z.c)
 *     ?Dispose@FxPkgPnp@@MEAAEXZ @ 0x1C0080290 (-Dispose@FxPkgPnp@@MEAAEXZ.c)
 *     ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x1C0080824 (-HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z.c)
 *     ?PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z @ 0x1C00820B0 (-PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z.c)
 *     ?TryToAcquireLock@FxInterrupt@@QEAAEXZ @ 0x1C0089C08 (-TryToAcquireLock@FxInterrupt@@QEAAEXZ.c)
 *     ?PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C008A76C (-PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C008BA20 (-ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 *     ?_ProcessEventInner@FxWakeInterruptMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C008BDB0 (-_ProcessEventInner@FxWakeInterruptMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxWaitLockInternal::AcquireLock(
        FxWaitLockInternal *this,
        _FX_DRIVER_GLOBALS *Timeout,
        _LARGE_INTEGER *FxDriverGlobals)
{
  unsigned int v5; // ebx
  _LARGE_INTEGER li; // [rsp+48h] [rbp+10h] BYREF

  li.QuadPart = 0LL;
  if ( FxDriverGlobals )
    li = *FxDriverGlobals;
  KeEnterCriticalRegion();
  v5 = KeWaitForSingleObject(
         this,
         Executive,
         0,
         0,
         (PLARGE_INTEGER)((unsigned __int64)&li & -(__int64)(FxDriverGlobals != 0LL)));
  if ( v5 == 258 )
    KeLeaveCriticalRegion();
  else
    this->m_OwningThread = KeGetCurrentThread();
  return v5;
}
