/*
 * XREFs of ??0FxRelatedDevice@@QEAA@PEAU_DEVICE_OBJECT@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00916D4
 * Callers:
 *     ?AddEjectionDevice@FxPkgPdo@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0083284 (-AddEjectionDevice@FxPkgPdo@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?AddRemovalDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0087BE0 (-AddRemovalDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?AddUsageDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0087DCC (-AddUsageDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0016188 (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxRelatedDevice::FxRelatedDevice(
        FxRelatedDevice *this,
        _DEVICE_OBJECT *DeviceObject,
        _FX_DRIVER_GLOBALS *Globals)
{
  FxObject::FxObject(this, 0x1021u, 0, Globals);
  this->__vftable = (FxRelatedDevice_vtbl *)FxRelatedDevice::`vftable';
  this->m_TransactionedEntry.m_TransactionedObject = 0LL;
  this->m_TransactionedEntry.m_Transaction = FxTransactionActionNothing;
  this->m_TransactionedEntry.m_ListLink.Blink = &this->m_TransactionedEntry.m_ListLink;
  this->m_TransactionedEntry.m_ListLink.Flink = &this->m_TransactionedEntry.m_ListLink;
  this->m_State = RelatedDeviceStateNeedsReportPresent;
  this->m_TransactionedEntry.m_TransactionLink.Blink = &this->m_TransactionedEntry.m_TransactionLink;
  this->m_TransactionedEntry.m_TransactionLink.Flink = &this->m_TransactionedEntry.m_TransactionLink;
  this->m_DeviceObject = DeviceObject;
  this->m_TransactionedEntry.m_TransactionedObject = this;
  ObfReferenceObject(DeviceObject);
}
