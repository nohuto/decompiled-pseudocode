/*
 * XREFs of ?Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z @ 0x1C00666D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C0012FB0 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 *     ?GetDispatchPackage@FxDevice@@QEAAPEAVFxPackage@@E@Z @ 0x1C0013740 (-GetDispatchPackage@FxDevice@@QEAAPEAVFxPackage@@E@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E5DC (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qcDqd @ 0x1C0066840 (WPP_IFR_SF_qcDqd.c)
 */

void __fastcall FxIoTargetSelf::Send(FxIoTargetSelf *this, _IRP *Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  const void *_a1; // rax
  unsigned int _a2; // r10d
  int v7; // esi
  FxDefaultIrpHandler *DispatchPackage; // rax
  FxObject *v9; // rcx
  FxIoQueue *v10; // r9
  FxPkgIo *v11; // r11
  const void *ObjectHandleUnchecked; // rax
  const void *globals; // rdx
  char v14; // r10
  FxCxDeviceInfo *m_CxDeviceInfo; // rdx
  FxIoInCallerContext *p_IoInCallerContextCallback; // r8
  int v17; // [rsp+48h] [rbp-10h]

  --Irp->Tail.Overlay.CurrentStackLocation;
  --Irp->CurrentLocation;
  Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = this->m_DeviceBase->m_DeviceObject.m_DeviceObject;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( !this->m_DispatchQueue
    && !*((_QWORD *)&this->m_DeviceBase[3].m_ChildListHead.Blink[9].Flink + CurrentStackLocation->MajorFunction) )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qL(this->m_Globals, 2u, 0xEu, 0xAu, WPP_FxIoTargetSelf_cpp_Traceguids, _a1, _a2);
    v7 = -1073741436;
$Fail:
    Irp->IoStatus.Information = 0LL;
    Irp->IoStatus.Status = v7;
    IofCompleteRequest(Irp, 0);
    return;
  }
  DispatchPackage = FxDevice::GetDispatchPackage(this->m_Device, CurrentStackLocation->MajorFunction);
  if ( DispatchPackage != (FxDefaultIrpHandler *)v11 )
  {
    v7 = -1073741811;
    FxObject::GetObjectHandleUnchecked(v9);
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qcDqd(
      this->m_Globals,
      (unsigned __int8)globals,
      0xEu,
      0xBu,
      WPP_FxIoTargetSelf_cpp_Traceguids,
      ObjectHandleUnchecked,
      v14,
      CurrentStackLocation->MinorFunction,
      globals,
      v17);
    FxVerifierDbgBreakPoint(this->m_Globals);
    goto $Fail;
  }
  m_CxDeviceInfo = v10->m_CxDeviceInfo;
  p_IoInCallerContextCallback = &m_CxDeviceInfo->IoInCallerContextCallback;
  if ( !m_CxDeviceInfo )
    p_IoInCallerContextCallback = &v11->m_InCallerContextCallback;
  FxPkgIo::DispatchStep2(v11, Irp, p_IoInCallerContextCallback, v10);
}
