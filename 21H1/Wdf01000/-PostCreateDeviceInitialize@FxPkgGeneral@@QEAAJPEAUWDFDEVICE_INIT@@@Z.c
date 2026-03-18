/*
 * XREFs of ?PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C008DF80
 * Callers:
 *     ?ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C00502DC (-ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0050700 (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0050B40 (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     memset @ 0x1C001D340 (memset.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C0074D28 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall FxPkgGeneral::PostCreateDeviceInitialize(FxPkgGeneral *this, WDFDEVICE_INIT *Init)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  unsigned __int8 Flags; // cl
  NTSTATUS _a2; // ebx
  FxDeviceBase *m_DeviceBase; // rax
  _DEVICE_OBJECT *m_DeviceObject; // rsi
  FxDeviceBase *v9; // rcx
  _WDF_EXECUTION_LEVEL m_ExecutionLevel; // eax
  FxPkgIo *Blink; // rcx
  const void *_a1; // rax
  _WDF_OBJECT_ATTRIBUTES attributes; // [rsp+40h] [rbp-61h] BYREF
  __int64 v15; // [rsp+78h] [rbp-29h]
  _WDF_IO_QUEUE_CONFIG queueConfig_8; // [rsp+88h] [rbp-19h] OVERLAPPED BYREF

  m_Globals = this->m_Globals;
  Flags = Init->Control.Flags;
  _a2 = 0;
  if ( !Flags )
    goto LABEL_16;
  m_DeviceBase = this->m_DeviceBase;
  m_DeviceObject = m_DeviceBase->m_DeviceObject.m_DeviceObject;
  if ( (Flags & 1) != 0 )
  {
    _a2 = IoRegisterShutdownNotification(m_DeviceBase->m_DeviceObject.m_DeviceObject);
    if ( _a2 < 0 )
      goto LABEL_8;
  }
  if ( (Init->Control.Flags & 2) != 0 )
    _a2 = IoRegisterLastChanceShutdownNotification(m_DeviceObject);
  if ( _a2 < 0 )
LABEL_8:
    IoUnregisterShutdownNotification(m_DeviceObject);
  else
    this->m_EvtDeviceShutdown.m_Method = Init->Control.ShutdownNotification;
  if ( _a2 >= 0 )
  {
LABEL_16:
    if ( (this->m_Flags & 0xC) != 0 )
    {
      memset(&queueConfig_8.AllowZeroLengthRequests, 0, 0x54uLL);
      v9 = this->m_DeviceBase;
      queueConfig_8.PowerManaged = WdfFalse;
      queueConfig_8.Size = 96;
      v15 = 0LL;
      m_ExecutionLevel = this->m_ExecutionLevel;
      Blink = (FxPkgIo *)v9[3].m_ChildListHead.Blink;
      memset(&attributes.ExecutionLevel, 0, 32);
      LODWORD(attributes.ParentObject) = m_ExecutionLevel;
      HIDWORD(attributes.ParentObject) = this->m_SynchronizationScope;
      *(_OWORD *)&attributes.EvtCleanupCallback = 0LL;
      queueConfig_8.DispatchType = WdfIoQueueDispatchManual;
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
  }
  return (unsigned int)_a2;
}
