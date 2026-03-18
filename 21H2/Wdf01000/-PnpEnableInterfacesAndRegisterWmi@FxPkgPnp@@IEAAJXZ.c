/*
 * XREFs of ?PnpEnableInterfacesAndRegisterWmi@FxPkgPnp@@IEAAJXZ @ 0x1C002E1A4
 * Callers:
 *     ?PnpEventEnableInterfaces@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C002E180 (-PnpEventEnableInterfaces@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C0017090 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?Register@FxWmiIrpHandler@@QEAAJXZ @ 0x1C002FE34 (-Register@FxWmiIrpHandler@@QEAAJXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpEnableInterfacesAndRegisterWmi(FxPkgPnp *this, _FX_DRIVER_GLOBALS *a2)
{
  FxWaitLockInternal *p_m_DeviceInterfaceLock; // rsi
  _SINGLE_LIST_ENTRY *Next; // rbx
  int v5; // ebx
  bool v7; // zf
  FxDeviceBase *m_DeviceBase; // rcx

  p_m_DeviceInterfaceLock = &this->m_DeviceInterfaceLock;
  FxWaitLockInternal::AcquireLock(&this->m_DeviceInterfaceLock, a2, 0LL);
  Next = this->m_DeviceInterfaceHead.Next;
  this->m_DeviceInterfacesCanBeEnabled = 1;
  while ( Next )
  {
    if ( BYTE1(Next[1].Next) )
    {
      v7 = Next[-1].Next == 0LL;
      LOBYTE(Next[1].Next) = 1;
      if ( !v7 )
        IoSetDeviceInterfaceState((PUNICODE_STRING)&Next[-2], 1u);
    }
    Next = Next->Next;
  }
  p_m_DeviceInterfaceLock->m_OwningThread = 0LL;
  KeSetEvent(&p_m_DeviceInterfaceLock->m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
  v5 = FxWmiIrpHandler::Register((FxWmiIrpHandler *)this->m_DeviceBase[3].m_ParentObject);
  if ( v5 < 0 )
  {
    m_DeviceBase = this->m_DeviceBase;
    this->m_InternalFailure = 1;
    IoInvalidateDeviceState(m_DeviceBase->m_PhysicalDevice.m_DeviceObject);
    this->m_PendingPnPIrp->IoStatus.Status = v5;
  }
  return (unsigned int)v5;
}
