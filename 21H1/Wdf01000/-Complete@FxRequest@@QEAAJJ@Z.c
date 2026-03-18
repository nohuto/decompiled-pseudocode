/*
 * XREFs of ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C0049A94
 * Callers:
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0005CA0 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0005FD0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008440 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0008E30 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000A1C0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C00154AC (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C0075A34 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?_CreateCompletionRoutine2@FxPkgGeneral@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C008E110 (-_CreateCompletionRoutine2@FxPkgGeneral@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0007EE0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     WPP_IFR_SF_qqqd @ 0x1C002EAD0 (WPP_IFR_SF_qqqd.c)
 */

__int64 __fastcall FxRequest::Complete(FxRequest *this, unsigned int Status, __int64 a3, unsigned __int16 a4)
{
  FxDeviceBase *m_DeviceBase; // rsi
  char m_Globals_high; // di
  const void *_a1; // rax
  int _a4; // edx
  _FX_DRIVER_GLOBALS *v10; // r10

  m_DeviceBase = this->m_DeviceBase;
  m_Globals_high = 0;
  if ( this->m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qqqd(
      v10,
      5u,
      0x10u,
      0xBu,
      WPP_FxRequest_hpp_Traceguids,
      _a1,
      this->m_Irp.m_Irp,
      this->m_Irp.m_Irp->IoStatus.Information,
      _a4);
  }
  if ( m_DeviceBase )
    m_Globals_high = HIBYTE(m_DeviceBase[1].m_Globals);
  this->m_PriorityBoost = m_Globals_high;
  return FxRequest::CompleteInternal(this, (_FX_DRIVER_GLOBALS *)Status, a3, a4);
}
