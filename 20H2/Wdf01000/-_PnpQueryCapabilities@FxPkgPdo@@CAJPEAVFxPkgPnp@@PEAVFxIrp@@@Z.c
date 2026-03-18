/*
 * XREFs of ?_PnpQueryCapabilities@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0015BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0013F40 (-Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ?HandleQueryCapabilities@FxPkgPdo@@AEAAXPEAU_DEVICE_CAPABILITIES@@0@Z @ 0x1C0015D00 (-HandleQueryCapabilities@FxPkgPdo@@AEAAXPEAU_DEVICE_CAPABILITIES@@0@Z.c)
 *     ?GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERFACE@@PEAU_STACK_DEVICE_CAPABILITIES@@@Z @ 0x1C0016040 (-GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERF.c)
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 *     memset @ 0x1C001CA80 (memset.c)
 */

__int64 __fastcall FxPkgPdo::_PnpQueryCapabilities(FxPkgPdo *This, FxIrp *Irp)
{
  int StackCapabilities; // edi
  _DEVICE_CAPABILITIES *v5; // rbx
  void *v6; // r8
  FxDeviceBase *m_DeviceBase; // rcx
  _IRP *m_Irp; // rbx
  _DEVICE_OBJECT *m_DeviceObject; // rdx
  _DEVICE_OBJECT *v11; // rcx
  MxDeviceObject DeviceInStack; // [rsp+20h] [rbp-59h] BYREF
  unsigned __int64 HighLimit; // [rsp+28h] [rbp-51h] BYREF
  unsigned __int64 LowLimit; // [rsp+30h] [rbp-49h] BYREF
  _STACK_DEVICE_CAPABILITIES Capabilities; // [rsp+40h] [rbp-39h] BYREF

  memset(&Capabilities, 0, sizeof(Capabilities));
  StackCapabilities = -1073741823;
  v5 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.DeviceCapabilities.Capabilities;
  if ( v5->Version == 1 && v5->Size >= 0x40u )
  {
    HighLimit = 0LL;
    LowLimit = 0LL;
    IoGetStackLimits(&LowLimit, &HighLimit);
    m_DeviceBase = This->m_DeviceBase;
    if ( (unsigned __int64)&HighLimit - LowLimit < 0x3000 )
    {
      m_DeviceObject = m_DeviceBase->m_DeviceObject.m_DeviceObject;
      DeviceInStack.m_DeviceObject = 0LL;
      if ( (int)MxWorkItem::Allocate((MxWorkItem *)&DeviceInStack, m_DeviceObject, v6) >= 0 )
      {
        v11 = DeviceInStack.m_DeviceObject;
        Irp->m_Irp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = (_LIST_ENTRY *)DeviceInStack.m_DeviceObject;
        Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        IoQueueWorkItem((PIO_WORKITEM)v11, FxPkgPdo::_QueryCapsWorkItem, DelayedWorkQueue, Irp->m_Irp);
        return 259;
      }
      StackCapabilities = -1073741670;
    }
    else
    {
      DeviceInStack.m_DeviceObject = *(_DEVICE_OBJECT **)(*(_QWORD *)&m_DeviceBase[1].m_ObjectFlags + 144LL);
      StackCapabilities = GetStackCapabilities(This->m_Globals, &DeviceInStack, 0LL, &Capabilities);
      if ( StackCapabilities >= 0 )
      {
        FxPkgPdo::HandleQueryCapabilities(This, v5, &Capabilities.DeviceCaps);
        StackCapabilities = 0;
      }
    }
  }
  m_Irp = Irp->m_Irp;
  Irp->m_Irp->IoStatus.Status = StackCapabilities;
  IofCompleteRequest(Irp->m_Irp, 0);
  Irp->m_Irp = 0LL;
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&This->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], m_Irp, 0x20u);
  return (unsigned int)StackCapabilities;
}
