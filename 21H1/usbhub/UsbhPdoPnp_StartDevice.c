/*
 * XREFs of UsbhPdoPnp_StartDevice @ 0x1C0057020
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDecHubBusy @ 0x1C0003610 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C0004060 (UsbhIncHubBusy.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhDisableTimerObject @ 0x1C0011260 (UsbhDisableTimerObject.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C0013F80 (UsbhEtwLogDeviceIrpEvent.c)
 *     memset @ 0x1C001D340 (memset.c)
 *     WPP_RECORDER_SF_q @ 0x1C002E62C (WPP_RECORDER_SF_q.c)
 *     Usbh__TestPoint__Ulong @ 0x1C002FED0 (Usbh__TestPoint__Ulong.c)
 *     UsbhSetPdo_AllowIo @ 0x1C003D218 (UsbhSetPdo_AllowIo.c)
 *     UsbhReadPdoRegistryKeys @ 0x1C0045F90 (UsbhReadPdoRegistryKeys.c)
 *     UsbhPdoRegisterWmi @ 0x1C0049850 (UsbhPdoRegisterWmi.c)
 *     UsbhException @ 0x1C004A608 (UsbhException.c)
 *     SET_PDO_SWPNPSTATE @ 0x1C0053CC8 (SET_PDO_SWPNPSTATE.c)
 *     UsbhPdoCreateSymbolicLink @ 0x1C00554E0 (UsbhPdoCreateSymbolicLink.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C0055C3C (UsbhPdoPnp_EnablePdo.c)
 *     UsbhPdoSetDeviceData @ 0x1C0057830 (UsbhPdoSetDeviceData.c)
 *     UsbhEtwLogDeviceDescription @ 0x1C005C07C (UsbhEtwLogDeviceDescription.c)
 *     UsbhUpdateSqmFlags @ 0x1C0073540 (UsbhUpdateSqmFlags.c)
 */

__int64 __fastcall UsbhPdoPnp_StartDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _DWORD *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  _DWORD *v8; // rax
  _QWORD *v9; // r12
  int DeviceProperty; // ebp
  _DWORD *v11; // rbx
  void *v12; // rcx
  __int64 v13; // rcx
  PVOID PoolWithTag; // rax
  void *v15; // rbx
  const EVENT_DESCRIPTOR *v16; // r8
  GUID *v17; // rdx
  __int64 v18; // rdx
  ULONG ResultLength; // [rsp+88h] [rbp+10h] BYREF

  ResultLength = 0;
  v4 = PdoExt((__int64)DeviceObject);
  UsbhEtwLogDeviceIrpEvent((__int64)v4, (__int64)Irp, &USBHUB_ETW_EVENT_DEVICE_START_DISPATCH, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v5,
      1u,
      0xEu,
      (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids,
      DeviceObject);
  if ( PdoExt((__int64)DeviceObject)[280] == 101 )
  {
    v7 = 0;
    goto LABEL_32;
  }
  UsbhSetPdo_AllowIo(v6, (__int64)DeviceObject);
  UsbhDisableTimerObject(*((_QWORD *)v4 + 148), (__int64)(v4 + 426));
  v8 = PdoExt((__int64)DeviceObject);
  v9 = (_QWORD *)UsbhIncHubBusy(*((_QWORD *)v4 + 148), (__int64)(v8 + 236), (__int64)DeviceObject, 1346728819, 1);
  KeWaitForSingleObject(v4 + 724, Executive, 0, 0, 0LL);
  DeviceProperty = UsbhPdoPnp_EnablePdo((__int64)DeviceObject);
  if ( PdoExt((__int64)DeviceObject)[280] == 103 || PdoExt((__int64)DeviceObject)[280] == 102 )
  {
    v11 = PdoExt((__int64)DeviceObject);
    IoSetDevicePropertyData(DeviceObject, &DEVPKEY_Device_DriverProblemDesc, 0, 0, 0, 0, 0LL);
    v11[705] = 0;
    if ( (v4[283] & 4) != 0 )
    {
      DeviceProperty = 0;
      goto LABEL_28;
    }
  }
  if ( (DeviceProperty & 0xC0000000) != 0xC0000000 && PdoExt((__int64)DeviceObject)[280] != 103 )
  {
    v12 = (void *)*((_QWORD *)v4 + 280);
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0);
      *((_QWORD *)v4 + 280) = 0LL;
    }
    DeviceProperty = IoGetDeviceProperty(DeviceObject, DevicePropertyDeviceDescription, 0, 0LL, &ResultLength);
    if ( DeviceProperty == -1073741789 && ResultLength )
    {
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, ResultLength, 0x42554855u);
      v15 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_28;
      memset(PoolWithTag, 0, ResultLength);
      DeviceProperty = IoGetDeviceProperty(
                         DeviceObject,
                         DevicePropertyDeviceDescription,
                         ResultLength,
                         v15,
                         &ResultLength);
      if ( DeviceProperty < 0 )
      {
        ExFreePoolWithTag(v15, 0);
        goto LABEL_28;
      }
      *((_QWORD *)v4 + 280) = v15;
      v4[562] = ResultLength;
      UsbhEtwLogDeviceDescription(v4, &USBHUB_ETW_EVENT_DEVICE_START_DEVICE_DESCRIPTION);
    }
    DeviceProperty = UsbhReadPdoRegistryKeys(v13, DeviceObject);
    if ( (DeviceProperty & 0xC0000000) == 0xC0000000 )
    {
      v16 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_DEVICE_START_REGISTRY_FAILURE;
LABEL_22:
      UsbhEtwLogDeviceIrpEvent((__int64)v4, (__int64)Irp, v16, DeviceProperty);
      goto LABEL_28;
    }
    v17 = &GUID_DEVINTERFACE_USB_HUB;
    if ( (v4[355] & 4) == 0 )
      v17 = &GUID_DEVINTERFACE_USB_DEVICE;
    DeviceProperty = UsbhPdoCreateSymbolicLink(DeviceObject, v17);
    if ( (DeviceProperty & 0xC0000000) == 0xC0000000 )
    {
      v16 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_DEVICE_START_SYMBOLIC_LINK_FAILURE;
      goto LABEL_22;
    }
    UsbhPdoRegisterWmi(DeviceObject);
  }
LABEL_28:
  SET_PDO_SWPNPSTATE((__int64)DeviceObject, 101, 1);
  KeSetEvent((PRKEVENT)(v4 + 724), 0, 0);
  PdoExt((__int64)DeviceObject);
  UsbhDecHubBusy(*((_QWORD *)v4 + 148), v18, v9);
  UsbhPdoSetDeviceData(*((_QWORD *)v4 + 148), DeviceObject, DeviceObject);
  v7 = Usbh__TestPoint__Ulong(*((_QWORD *)v4 + 148), 2u, DeviceProperty, *((unsigned __int16 *)v4 + 714));
  if ( v7 < 0 )
  {
    UsbhException(*((_QWORD *)v4 + 148), *((_WORD *)v4 + 714), 0x67u, 0LL, 0, v7, 0, usbfile_pdo_c, 1564, 0);
  }
  else if ( (v4[355] & 1) != 0 )
  {
    UsbhException(*((_QWORD *)v4 + 148), *((_WORD *)v4 + 714), 0x2Au, 0LL, 0, v7, 0, usbfile_pdo_c, 1548, 0);
  }
LABEL_32:
  Log(*((_QWORD *)v4 + 148), 256, 1398035004, (__int64)Irp, v7);
  UsbhEtwLogDeviceIrpEvent((__int64)v4, (__int64)Irp, &USBHUB_ETW_EVENT_DEVICE_START_COMPLETE, 0);
  Irp->IoStatus.Status = v7;
  IofCompleteRequest(Irp, 0);
  UsbhUpdateSqmFlags(DeviceObject);
  return (unsigned int)v7;
}
