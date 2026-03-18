/*
 * XREFs of ?PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C002684C
 * Callers:
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0020D0C (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C002693C (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C00347EC (-ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C0024C4C (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     memset @ 0x1C0036C00 (memset.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall FxPkgGeneral::PostCreateDeviceInitialize(FxPkgGeneral *this, WDFDEVICE_INIT *Init)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  unsigned __int8 Flags; // cl
  NTSTATUS _a2; // ebx
  _WDF_EXECUTION_LEVEL m_ExecutionLevel; // eax
  FxDeviceBase *v9; // rax
  FxPkgIo *Blink; // rcx
  FxDeviceBase *m_DeviceBase; // rax
  _DEVICE_OBJECT *m_DeviceObject; // rsi
  const void *_a1; // rax
  _WDF_OBJECT_ATTRIBUTES attributes; // [rsp+40h] [rbp-61h] BYREF
  __int64 v15; // [rsp+78h] [rbp-29h]
  _WDF_IO_QUEUE_CONFIG queueConfig_8; // [rsp+88h] [rbp-19h] OVERLAPPED BYREF

  m_Globals = this->m_Globals;
  Flags = Init->Control.Flags;
  _a2 = 0;
  if ( Flags )
  {
    m_DeviceBase = this->m_DeviceBase;
    m_DeviceObject = m_DeviceBase->m_DeviceObject.m_DeviceObject;
    if ( (Flags & 1) != 0
      && (_a2 = IoRegisterShutdownNotification(m_DeviceBase->m_DeviceObject.m_DeviceObject), _a2 < 0)
      || (Init->Control.Flags & 2) != 0 && (_a2 = IoRegisterLastChanceShutdownNotification(m_DeviceObject), _a2 < 0) )
    {
      IoUnregisterShutdownNotification(m_DeviceObject);
      return (unsigned int)_a2;
    }
    this->m_EvtDeviceShutdown.m_Method = Init->Control.ShutdownNotification;
  }
  if ( (this->m_Flags & 0xC) != 0 )
  {
    memset(&queueConfig_8.PowerManaged, 0, 88);
    queueConfig_8.Size = 96;
    v15 = 0LL;
    m_ExecutionLevel = this->m_ExecutionLevel;
    memset(&attributes.ExecutionLevel, 0, 32);
    LODWORD(attributes.ParentObject) = m_ExecutionLevel;
    HIDWORD(attributes.ParentObject) = this->m_SynchronizationScope;
    v9 = this->m_DeviceBase;
    *(_OWORD *)&attributes.EvtCleanupCallback = 0LL;
    queueConfig_8.DispatchType = WdfIoQueueDispatchManual;
    Blink = (FxPkgIo *)v9[3].m_ChildListHead.Blink;
    LODWORD(attributes.EvtCleanupCallback) = 56;
    _a2 = FxPkgIo::CreateQueue(
            Blink,
            &queueConfig_8,
            (_WDF_OBJECT_ATTRIBUTES *)&attributes.EvtCleanupCallback,
            0LL,
            &this->m_DefaultQueueForCreates);
    if ( _a2 < 0 )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_qL(m_Globals, 2u, 0xDu, 0x11u, WPP_FxPkgGeneral_cpp_Traceguids, _a1, _a2);
    }
  }
  return (unsigned int)_a2;
}
