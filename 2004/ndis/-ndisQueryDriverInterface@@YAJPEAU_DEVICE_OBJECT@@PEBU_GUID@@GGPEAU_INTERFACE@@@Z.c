/*
 * XREFs of ?ndisQueryDriverInterface@@YAJPEAU_DEVICE_OBJECT@@PEBU_GUID@@GGPEAU_INTERFACE@@@Z @ 0x1C0115C78
 * Callers:
 *     ?ndisQueryReferenceBusInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAUBUS_INTERFACE_REFERENCE@@@Z @ 0x1C005FFF4 (-ndisQueryReferenceBusInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAUBUS_INTERFACE_REFERENCE@@@Z.c)
 *     ?ndisQueryReenumerateSelfInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RESET_INTERFACE_STANDARD@@@Z @ 0x1C0115D98 (-ndisQueryReenumerateSelfInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RESET_INTERFACE_STANDA.c)
 * Callees:
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F86F0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

NTSTATUS __fastcall ndisQueryDriverInterface(
        PDEVICE_OBJECT DeviceObject,
        const struct _GUID *a2,
        unsigned __int16 a3,
        __int64 a4,
        struct _INTERFACE *a5)
{
  PIRP v8; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  NTSTATUS result; // eax
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  IoStatusBlock = 0LL;
  *(_OWORD *)&a5->Size = 0LL;
  *(_OWORD *)&a5->InterfaceReference = 0LL;
  *(_OWORD *)&a5[1].Size = 0LL;
  a5[1].InterfaceReference = 0LL;
  a5->Version = a3;
  a5->Size = 56;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v8 = IoBuildSynchronousFsdRequest(0x1Bu, DeviceObject, 0LL, 0, 0LL, &Event, &IoStatusBlock);
  if ( !v8 )
    return -1073741670;
  CurrentStackLocation = v8->Tail.Overlay.CurrentStackLocation;
  v8->RequestorMode = 0;
  v8->IoStatus.Status = -1073741637;
  CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
  CurrentStackLocation[-1].MinorFunction = 8;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)a2;
  CurrentStackLocation[-1].Parameters.QueryInterface.Size = 56;
  CurrentStackLocation[-1].Parameters.QueryInterface.Version = a3;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)a5;
  result = IofCallDriver(DeviceObject, v8);
  if ( result == 259 )
  {
    ndisWaitForKernelObject(&Event);
    return IoStatusBlock.Status;
  }
  return result;
}
