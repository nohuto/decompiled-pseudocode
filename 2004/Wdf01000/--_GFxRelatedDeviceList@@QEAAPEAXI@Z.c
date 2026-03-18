/*
 * XREFs of ??_GFxRelatedDeviceList@@QEAAPEAXI@Z @ 0x1C0078CD0
 * Callers:
 *     ??1FxPkgPdo@@UEAA@XZ @ 0x1C0078BF8 (--1FxPkgPdo@@UEAA@XZ.c)
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C007EE70 (--1FxPkgPnp@@MEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxTransactionedList@@QEAA@XZ @ 0x1C0061D30 (--1FxTransactionedList@@QEAA@XZ.c)
 */

FxRelatedDeviceList *__fastcall FxRelatedDeviceList::`scalar deleting destructor'(FxRelatedDeviceList *this)
{
  this->m_ListLock.m_DbgFlagIsInitialized = 0;
  FxTransactionedList::~FxTransactionedList(this);
  FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
