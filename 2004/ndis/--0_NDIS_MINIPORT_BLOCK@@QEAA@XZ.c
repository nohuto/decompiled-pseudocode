/*
 * XREFs of ??0_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C0031AD4
 * Callers:
 *     ?ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0031BA8 (-ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 * Callees:
 *     ??0BindEngine@Ndis@@QEAA@XZ @ 0x1C0107F64 (--0BindEngine@Ndis@@QEAA@XZ.c)
 *     ??0BindStack@Ndis@@QEAA@XZ @ 0x1C0107FF4 (--0BindStack@Ndis@@QEAA@XZ.c)
 *     ??0KPushLock@@QEAA@XZ @ 0x1C0122210 (--0KPushLock@@QEAA@XZ.c)
 */

_NDIS_MINIPORT_BLOCK *__fastcall _NDIS_MINIPORT_BLOCK::_NDIS_MINIPORT_BLOCK(_NDIS_MINIPORT_BLOCK *this)
{
  this->ExportName.__ptr_.__value_ = 0LL;
  this->FilterClass.__ptr_.__value_ = 0LL;
  Ndis::BindStack::BindStack(&this->Bindings);
  Ndis::BindEngine::BindEngine(&this->BindEngine);
  this->MiniportOwner.m_owner = MiniportNotOwned;
  KPushLock::KPushLock(&this->MiniportOwner.m_lock);
  KeInitializeEvent(&this->MiniportOwner.m_isUnowned.m_event, NotificationEvent, 0);
  KeSetEvent(&this->MiniportOwner.m_isUnowned.m_event, 0, 0);
  *(_WORD *)&this->InterfaceUpdateInProgress = 0;
  this->PendingMtuSize = 0;
  this->DevicePowerOnWorkItem.Irp = 0LL;
  this->DevicePowerDownWorkItem.Irp = 0LL;
  this->PoFxDStateReportingEnabled = 0;
  this->MtuUpdateQueued = 0;
  this->PendingOidWatchdog.m_ptr = (NDISWATCHDOG__ *)-1LL;
  this->HookedOidWatchdog.m_ptr = (NDISWATCHDOG__ *)-1LL;
  this->ReenumerateWatchdog.m_ptr = (NDISWATCHDOG__ *)-1LL;
  return this;
}
