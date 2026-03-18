/*
 * XREFs of ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0010DB0
 * Callers:
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C0004BD4 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C000FA30 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ @ 0x1C0010AE8 (-PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ.c)
 *     ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEXZ @ 0x1C001C014 (-PowerDmaEnableAndScan@FxPkgPnp@@IEAAEXZ.c)
 *     imp_WdfDeviceClearRemovalRelationsDevices @ 0x1C0048ED0 (imp_WdfDeviceClearRemovalRelationsDevices.c)
 *     ?SetFilterIoType@FxDevice@@AEAAXXZ @ 0x1C00525DC (-SetFilterIoType@FxDevice@@AEAAXXZ.c)
 *     ?ClearEjectionDevicesList@FxPkgPdo@@QEAAXXZ @ 0x1C0078EF0 (-ClearEjectionDevicesList@FxPkgPdo@@QEAAXXZ.c)
 *     ?PnpEventRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007AEA0 (-PnpEventRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ @ 0x1C007B370 (-PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ.c)
 *     ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x1C00805D4 (-HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z.c)
 *     ?NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ @ 0x1C0080FAC (-NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C008105C (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ @ 0x1C0088880 (-PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxTransactionedList::LockForEnum(FxTransactionedList *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  FxTransactionedList_vtbl *v2; // rax
  FxTransactionedList_vtbl *v5; // rax
  __int64 v6; // r8
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  v2 = this->__vftable;
  irql = 0;
  v2->AcquireLock(this, FxDriverGlobals, &irql);
  v5 = this->__vftable;
  ++this->m_ListLockedRecursionCount;
  LOBYTE(v6) = irql;
  v5->ReleaseLock(this, FxDriverGlobals, v6);
}
