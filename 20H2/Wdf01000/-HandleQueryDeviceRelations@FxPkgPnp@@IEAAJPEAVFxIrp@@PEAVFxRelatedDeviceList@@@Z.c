/*
 * XREFs of ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x1C007FCF4
 * Callers:
 *     ?PnpQueryDeviceRelations@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0004568 (-PnpQueryDeviceRelations@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpQueryDeviceRelations@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0004A78 (-PnpQueryDeviceRelations@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0010CEC (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0010DB0 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001CA80 (memset.c)
 *     memmove @ 0x1C001CB80 (memmove.c)
 *     WPP_IFR_SF_qdd @ 0x1C003BFE8 (WPP_IFR_SF_qdd.c)
 *     ?GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z @ 0x1C0090B24 (-GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z.c)
 */

__int64 __fastcall FxPkgPnp::HandleQueryDeviceRelations(FxPkgPnp *this, FxIrp *Irp, FxRelatedDeviceList *List)
{
  __int64 result; // rax
  _IRP *m_Irp; // rdi
  unsigned int v8; // r12d
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  unsigned __int64 ObjectHandleUnchecked; // rcx
  void (__fastcall *m_Method)(WDFDEVICE__ *, _DEVICE_RELATION_TYPE); // rax
  _DWORD *Information; // rdi
  int v13; // ebx
  FxRelatedDevice *NextEntry; // rax
  SIZE_T v15; // rbx
  _DWORD *PoolWithTag; // rax
  _DWORD *v17; // rbp
  __int64 i; // rbx
  unsigned __int8 m_Retries; // bl
  const void *_a1; // rax
  bool v21; // bl
  FxRelatedDevice *v22; // rbx
  FxRelatedDevice *v23; // rax
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  DEVICE_RELATION_TYPE Type; // [rsp+98h] [rbp+20h]

  if ( !List )
    return 3221225659LL;
  m_Irp = Irp->m_Irp;
  v8 = 0;
  m_Globals = this->m_Globals;
  Type = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.QueryDeviceRelations.Type;
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  m_Method = this->m_DeviceRelationsQuery.m_Method;
  if ( m_Method )
  {
    ((void (__fastcall *)(unsigned __int64))m_Method)(ObjectHandleUnchecked);
    m_Irp = Irp->m_Irp;
  }
  Information = (_DWORD *)m_Irp->IoStatus.Information;
  v13 = 0;
  FxTransactionedList::LockForEnum(List, m_Globals);
  NextEntry = 0LL;
  while ( 1 )
  {
    NextEntry = FxRelatedDeviceList::GetNextEntry(List, NextEntry);
    if ( !NextEntry )
      break;
    ++v13;
  }
  if ( v13 )
  {
    if ( Information )
      v13 += *Information;
    if ( v13 )
    {
      v15 = 8LL * (unsigned int)(v13 - 1) + 16;
      goto LABEL_17;
    }
  }
  else if ( !List->m_NeedReportMissing || Information )
  {
    FxTransactionedList::UnlockFromEnum(List, m_Globals);
    return 3221225659LL;
  }
  v15 = 4LL;
LABEL_17:
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v15, m_Globals->Tag);
  v17 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v15);
    if ( Information && *Information )
      memmove(v17, Information, 8LL * (unsigned int)(*Information - 1) + 16);
    v22 = 0LL;
    while ( 1 )
    {
      v23 = FxRelatedDeviceList::GetNextEntry(List, v22);
      v22 = v23;
      if ( !v23 )
        break;
      m_DeviceObject = v23->m_DeviceObject;
      if ( v23->m_State == RelatedDeviceStateNeedsReportPresent )
        v23->m_State = RelatedDeviceStateReportedPresent;
      *(_QWORD *)&v17[2 * *v17 + 2] = m_DeviceObject;
      ObfReferenceObject(m_DeviceObject);
      ++*v17;
    }
    List->m_Retries = 0;
    v21 = 0;
  }
  else
  {
    if ( Information )
    {
      for ( i = 0LL; (unsigned int)i < *Information; i = (unsigned int)(i + 1) )
        ObfDereferenceObject(*(PVOID *)&Information[2 * i + 2]);
    }
    ++List->m_Retries;
    v8 = -1073741670;
    m_Retries = List->m_Retries;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qdd(m_Globals, 2u, 0xCu, 0x1Eu, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, _a1, Type, 0xC000009A);
    v21 = m_Retries < 3u;
  }
  FxTransactionedList::UnlockFromEnum(List, this->m_Globals);
  if ( Information )
    ExFreePoolWithTag(Information, 0);
  if ( v21 )
    IoInvalidateDeviceRelations(this->m_DeviceBase->m_PhysicalDevice.m_DeviceObject, Type);
  result = v8;
  Irp->m_Irp->IoStatus.Status = v8;
  Irp->m_Irp->IoStatus.Information = (unsigned __int64)v17;
  return result;
}
