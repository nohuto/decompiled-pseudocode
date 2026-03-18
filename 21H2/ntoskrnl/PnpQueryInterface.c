/*
 * XREFs of PnpQueryInterface @ 0x14074C6C0
 * Callers:
 *     PnprQueryReplaceFeatures @ 0x140562F78 (PnprQueryReplaceFeatures.c)
 *     PiIommuGetInterface @ 0x1407498EC (PiIommuGetInterface.c)
 *     PnpGetDeviceLocationStrings @ 0x14074ABF0 (PnpGetDeviceLocationStrings.c)
 *     PiProcessNewDeviceNode @ 0x14076E9B8 (PiProcessNewDeviceNode.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x140846398 (PiGetDmaAdapterFromBusInterface.c)
 *     IoQueryInterface @ 0x140846710 (IoQueryInterface.c)
 *     IopQueryInterfaceRecurseUp @ 0x140846760 (IopQueryInterfaceRecurseUp.c)
 *     PnprIdentifyUnits @ 0x14095239C (PnprIdentifyUnits.c)
 *     IopQueryBusResourceUpdateInterface @ 0x140958764 (IopQueryBusResourceUpdateInterface.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x14095B48C (PiProcessDriversLoadedOnSecureDevice.c)
 *     PipUnprotectDevice @ 0x14095B55C (PipUnprotectDevice.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1402D30A0 (IoGetAttachedDeviceReferenceWithTag.c)
 *     memset @ 0x140435E00 (memset.c)
 *     IopBuildSynchronousFsdRequest @ 0x140705F30 (IopBuildSynchronousFsdRequest.c)
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

  memset(&Event, 0, sizeof(Event));
  v15 = 0LL;
  if ( a4 < 0x20u )
    return 3221225485LL;
  memset(a6, 0, a4);
  *a6 = a4;
  a6[1] = a3;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag(DeviceObject, 0x49706E50u);
  v11 = IopBuildSynchronousFsdRequest(0x1Bu, (__int64)AttachedDeviceReferenceWithTag, 0LL, 0, 0LL, &Event, &v15);
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
