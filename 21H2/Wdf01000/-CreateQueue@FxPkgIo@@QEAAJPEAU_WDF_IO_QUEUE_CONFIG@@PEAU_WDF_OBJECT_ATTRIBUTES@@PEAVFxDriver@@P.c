/*
 * XREFs of ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C0024C4C
 * Callers:
 *     imp_WdfIoQueueCreate @ 0x1C0024AC0 (imp_WdfIoQueueCreate.c)
 *     ?PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C002684C (-PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C00193BC (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     ?AddIoQueue@FxPkgIo@@AEAAXPEAVFxIoQueue@@@Z @ 0x1C0024D94 (-AddIoQueue@FxPkgIo@@AEAAXPEAVFxIoQueue@@@Z.c)
 *     ?_Create@FxIoQueue@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_IO_QUEUE_CONFIG@@PEAVFxDriver@@PEAVFxPkgIo@@EPEAPEAV1@@Z @ 0x1C0024E8C (-_Create@FxIoQueue@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_IO_QUEUE_CON.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00532C0 (WPP_IFR_SF_qqqd.c)
 */

int __fastcall FxPkgIo::CreateQueue(
        FxPkgIo *this,
        _WDF_IO_QUEUE_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *QueueAttributes,
        FxDriver *Caller,
        FxIoQueue **ppQueue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  WDFDRIVER__ *Driver; // rdx
  int result; // eax
  FxIoQueue *v12; // rbx
  int v13; // esi
  void *ParentObject; // rdx
  FxDeviceBase *v15; // rax
  FxDeviceBase *m_DeviceBase; // rcx
  FxObject *v17; // r8
  const void *ObjectHandleUnchecked; // rax
  __int64 _a3; // rdx
  FxCxDeviceInfo **p_m_ExecutionLevel; // rcx
  FxCxDeviceInfo *i; // rax
  FxDriver *pDriver; // [rsp+50h] [rbp-28h] BYREF
  FxObject *pParent; // [rsp+80h] [rbp+8h] BYREF
  FxIoQueue *pQueue; // [rsp+90h] [rbp+18h] BYREF

  pParent = 0LL;
  pQueue = 0LL;
  pDriver = 0LL;
  m_Globals = this->m_Globals;
  if ( QueueAttributes && (ParentObject = QueueAttributes->ParentObject) != 0LL )
  {
    FxObjectHandleGetPtr(this->m_Globals, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent);
    v15 = FxDeviceBase::_SearchForDevice(pParent, 0LL);
    if ( !v15 )
    {
      WPP_IFR_SF_qL(m_Globals, 2u, 0xDu, 0x1Bu, WPP_FxPkgIo_cpp_Traceguids, QueueAttributes->ParentObject, 0xC0000010);
      return -1073741808;
    }
    m_DeviceBase = this->m_DeviceBase;
    if ( v15 != m_DeviceBase )
    {
      FxObject::GetObjectHandleUnchecked(m_DeviceBase);
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(v17);
      WPP_IFR_SF_qqqd(
        m_Globals,
        2u,
        0xDu,
        0x1Cu,
        WPP_FxPkgIo_cpp_Traceguids,
        QueueAttributes->ParentObject,
        ObjectHandleUnchecked,
        _a3,
        -1073741808);
      return -1073741808;
    }
  }
  else
  {
    pParent = this;
  }
  if ( Config->Size > 0x58 )
  {
    Driver = Config->Driver;
    if ( Driver )
      FxObjectHandleGetPtr(this->m_Globals, (unsigned __int64)Driver, 0x1001u, (void **)&pDriver);
  }
  result = FxIoQueue::_Create(m_Globals, QueueAttributes, Config, Caller, this, this->m_PowerStateOn, &pQueue);
  if ( result >= 0 )
  {
    v12 = pQueue;
    if ( pDriver )
    {
      p_m_ExecutionLevel = (FxCxDeviceInfo **)&this->m_DeviceBase[1].m_ExecutionLevel;
      for ( i = *p_m_ExecutionLevel; i != (FxCxDeviceInfo *)p_m_ExecutionLevel; i = (FxCxDeviceInfo *)i->ListEntry.Flink )
      {
        if ( i->Driver == pDriver )
          goto LABEL_23;
      }
      i = 0LL;
LABEL_23:
      pQueue->m_CxDeviceInfo = i;
    }
    v13 = FxObject::Commit(v12, (_FX_DRIVER_GLOBALS *)QueueAttributes, 0LL, pParent, 1u);
    if ( v13 < 0 )
    {
      FxObject::ClearEvtCallbacks(v12);
      ((void (*)(void))v12->DeleteObject)();
    }
    else
    {
      FxPkgIo::AddIoQueue(this, v12);
      *ppQueue = v12;
    }
    return v13;
  }
  return result;
}
