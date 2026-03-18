/*
 * XREFs of ?GetTargetDeviceRelations@FxIoTargetRemote@@QEAAJPEAE@Z @ 0x1C0067684
 * Callers:
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C0066750 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0040A34 (-SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

__int64 __fastcall FxIoTargetRemote::GetTargetDeviceRelations(FxIoTargetRemote *this, unsigned __int8 *Close)
{
  _IRP *v4; // rbx
  PDEVICE_OBJECT AttachedDeviceReference; // r14
  PIRP v6; // rax
  PIRP v7; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  NTSTATUS v9; // edi
  _DEVICE_OBJECT **Information; // rcx
  const void *_a1; // rax
  FxAutoIrp irp; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0LL;
  AttachedDeviceReference = IoGetAttachedDeviceReference(this->m_TargetDevice);
  v6 = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
  v7 = v6;
  if ( v6 )
  {
    CurrentStackLocation = v6->Tail.Overlay.CurrentStackLocation;
    v4 = v6;
    irp.m_Irp = v6;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 1819;
    CurrentStackLocation[-1].Parameters.Read.Length = 4;
    v6->IoStatus.Status = -1073741637;
    v9 = FxIrp::SendIrpSynchronously(&irp, AttachedDeviceReference);
    if ( v9 >= 0 )
    {
      Information = (_DEVICE_OBJECT **)v4->IoStatus.Information;
      this->m_TargetPdo = Information[1];
      ExFreePoolWithTag(Information, 0);
    }
  }
  else
  {
    v9 = -1073741670;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qL(this->m_Globals, 2u, 0xEu, 0x14u, WPP_FxIoTargetRemotekm_cpp_Traceguids, _a1, 0xC000009A);
    v7 = 0LL;
  }
  if ( v9 == -1073741670 )
    *Close = 1;
  else
    v9 = 0;
  ObfDereferenceObject(AttachedDeviceReference);
  if ( v7 )
    IoFreeIrp(v4);
  return (unsigned int)v9;
}
