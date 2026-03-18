/*
 * XREFs of ?PnpQueryDeviceRelations@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0004A78
 * Callers:
 *     ?_PnpQueryDeviceRelations@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0004A60 (-_PnpQueryDeviceRelations@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0004B54 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C000FA30 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x1C007FCF4 (-HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z.c)
 */

int __fastcall FxPkgPdo::PnpQueryDeviceRelations(FxPkgPdo *this, FxIrp *Irp)
{
  int Status; // ebx
  unsigned int Length; // ecx
  _QWORD *PoolWithTag; // r14
  _DEVICE_OBJECT *m_DeviceObject; // rbx
  const void *_a1; // rax
  FxRelatedDeviceList *m_RemovalDeviceList; // r8

  Status = Irp->m_Irp->IoStatus.Status;
  Length = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( Length )
  {
    if ( Length == 1 || Length == 3 )
    {
      if ( Length == 3 )
        m_RemovalDeviceList = this->m_RemovalDeviceList;
      else
        m_RemovalDeviceList = this->m_EjectionDeviceList;
      Status = FxPkgPnp::HandleQueryDeviceRelations(this, Irp, m_RemovalDeviceList);
      if ( Status == -1073741637 )
        Status = Irp->m_Irp->IoStatus.Status;
    }
    else if ( Length == 4 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, this->m_Globals->Tag);
      if ( PoolWithTag )
      {
        m_DeviceObject = this->m_DeviceBase->m_DeviceObject.m_DeviceObject;
        ObfReferenceObject(m_DeviceObject);
        PoolWithTag[1] = m_DeviceObject;
        Status = 0;
        *(_DWORD *)PoolWithTag = 1;
        Irp->m_Irp->IoStatus.Information = (unsigned __int64)PoolWithTag;
      }
      else
      {
        Status = -1073741670;
        Irp->m_Irp->IoStatus.Information = 0LL;
        _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
        WPP_IFR_SF_qL(this->m_Globals, 2u, 0xCu, 0xBu, (const _GUID *)&WPP_FxPkgPdo_cpp_Traceguids, _a1, 0xC000009A);
      }
    }
  }
  else
  {
    Status = FxPkgPnp::HandleQueryBusRelations(this, Irp);
  }
  return FxPkgPnp::CompletePnpRequest(this, Irp, Status);
}
