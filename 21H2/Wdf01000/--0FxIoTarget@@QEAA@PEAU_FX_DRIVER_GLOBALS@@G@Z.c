/*
 * XREFs of ??0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x1C0026E08
 * Callers:
 *     ?AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z @ 0x1C0026C24 (-AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z.c)
 *     ??0FxIoTargetRemote@@IEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E008 (--0FxIoTargetRemote@@IEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 * Callees:
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0007A14 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxCREvent@@QEAA@E@Z @ 0x1C001AC84 (--0FxCREvent@@QEAA@E@Z.c)
 *     ?Construct@FxIoTarget@@AEAAXXZ @ 0x1C0026E8C (-Construct@FxIoTarget@@AEAAXXZ.c)
 */

void __fastcall FxIoTarget::FxIoTarget(
        FxIoTarget *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int16 ObjectSize)
{
  unsigned __int8 v4; // dl

  FxNonPagedObject::FxNonPagedObject(this, (_FX_DRIVER_GLOBALS *)0x1200, ObjectSize, FxDriverGlobals);
  this->__vftable = (FxIoTarget_vtbl *)FxIoTarget::`vftable';
  this->m_TransactionedEntry.m_TransactionedObject = 0LL;
  this->m_TransactionedEntry.m_Transaction = FxTransactionActionNothing;
  this->m_TransactionedEntry.m_ListLink.Blink = &this->m_TransactionedEntry.m_ListLink;
  this->m_TransactionedEntry.m_ListLink.Flink = &this->m_TransactionedEntry.m_ListLink;
  this->m_TransactionedEntry.m_TransactionLink.Blink = &this->m_TransactionedEntry.m_TransactionLink;
  this->m_TransactionedEntry.m_TransactionLink.Flink = &this->m_TransactionedEntry.m_TransactionLink;
  FxCREvent::FxCREvent(&this->m_SentIoEvent, v4);
  this->m_PendedQueue.m_LockObject = 0LL;
  this->m_PendedQueue.m_CancelCallback = 0LL;
  this->m_PendedQueue.m_RequestCount = 0;
  this->m_PendedQueue.m_Queue.Blink = &this->m_PendedQueue.m_Queue;
  this->m_PendedQueue.m_Queue.Flink = &this->m_PendedQueue.m_Queue;
  FxIoTarget::Construct(this);
}
