/*
 * XREFs of PnpQueryInterface @ 0x140765F44
 * Callers:
 *     PnprQueryReplaceFeatures @ 0x14050F878 (PnprQueryReplaceFeatures.c)
 *     PiProcessNewDeviceNode @ 0x140744650 (PiProcessNewDeviceNode.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x140765058 (PiGetDmaAdapterFromBusInterface.c)
 *     IopQueryInterfaceRecurseUp @ 0x140765548 (IopQueryInterfaceRecurseUp.c)
 *     IoQueryInterface @ 0x140765750 (IoQueryInterface.c)
 *     PiIommuGetInterface @ 0x140765838 (PiIommuGetInterface.c)
 *     PnpGetDeviceLocationStrings @ 0x1407658E4 (PnpGetDeviceLocationStrings.c)
 *     PnprIdentifyUnits @ 0x1408ADA9C (PnprIdentifyUnits.c)
 *     IopQueryBusResourceUpdateInterface @ 0x1408B2CE0 (IopQueryBusResourceUpdateInterface.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x1408B5584 (PiProcessDriversLoadedOnSecureDevice.c)
 *     PipUnprotectDevice @ 0x1408B5654 (PipUnprotectDevice.c)
 * Callees:
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1402F76F0 (IoGetAttachedDeviceReferenceWithTag.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     IofCallDriver @ 0x14035C710 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     memset @ 0x140414300 (memset.c)
 *     IopBuildSynchronousFsdRequest @ 0x1406A8BE0 (IopBuildSynchronousFsdRequest.c)
 */

__int64 __fastcall PnpQueryInterface(
        PDEVICE_OBJECT DeviceObject,
        ULONG_PTR a2,
        USHORT a3,
        USHORT a4,
        struct _NAMED_PIPE_CREATE_PARAMETERS *a5,
        USHORT *a6)
{
  struct _DEVICE_OBJECT *AttachedDeviceReferenceWithTag; // rdi
  IRP *v11; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int Status; // ebx
  struct _IO_STATUS_BLOCK v15; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+0h]

  memset(&Event, 0, sizeof(Event));
  v15 = 0LL;
  if ( a4 < 0x20u )
    return 3221225485LL;
  memset(a6, 0, a4);
  *a6 = a4;
  a6[1] = a3;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag(DeviceObject, 0x49706E50u);
  v11 = IopBuildSynchronousFsdRequest(
          0x1Bu,
          (__int64)AttachedDeviceReferenceWithTag,
          0LL,
          0,
          0LL,
          &Event,
          &v15,
          retaddr);
  if ( v11 )
  {
    CurrentStackLocation = v11->Tail.Overlay.CurrentStackLocation;
    v11->RequestorMode = 0;
    v11->IoStatus.Status = -1073741637;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = a5;
    CurrentStackLocation[-1].MinorFunction = 8;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = a2;
    CurrentStackLocation[-1].Parameters.QueryInterface.Size = a4;
    CurrentStackLocation[-1].Parameters.QueryInterface.Version = a3;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)a6;
    Status = IofCallDriver(AttachedDeviceReferenceWithTag, v11);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = v15.Status;
    }
  }
  else
  {
    Status = -1073741670;
  }
  ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x49706E50u);
  return Status;
}
