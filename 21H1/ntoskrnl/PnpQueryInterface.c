/*
 * XREFs of PnpQueryInterface @ 0x14074F850
 * Callers:
 *     PnprQueryReplaceFeatures @ 0x140509B88 (PnprQueryReplaceFeatures.c)
 *     PiProcessNewDeviceNode @ 0x140729B20 (PiProcessNewDeviceNode.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x14074E958 (PiGetDmaAdapterFromBusInterface.c)
 *     IopQueryInterfaceRecurseUp @ 0x14074EE48 (IopQueryInterfaceRecurseUp.c)
 *     IoQueryInterface @ 0x14074F050 (IoQueryInterface.c)
 *     PiIommuGetInterface @ 0x14074F138 (PiIommuGetInterface.c)
 *     PnpGetDeviceLocationStrings @ 0x14074F1F0 (PnpGetDeviceLocationStrings.c)
 *     PnprIdentifyUnits @ 0x1408A951C (PnprIdentifyUnits.c)
 *     IopQueryBusResourceUpdateInterface @ 0x1408AE760 (IopQueryBusResourceUpdateInterface.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x1408B1004 (PiProcessDriversLoadedOnSecureDevice.c)
 *     PipUnprotectDevice @ 0x1408B10D4 (PipUnprotectDevice.c)
 * Callees:
 *     IofCallDriver @ 0x140252F00 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1402E0EE0 (IoGetAttachedDeviceReferenceWithTag.c)
 *     memset @ 0x140408F80 (memset.c)
 *     IopBuildSynchronousFsdRequest @ 0x1407044D0 (IopBuildSynchronousFsdRequest.c)
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
  unsigned int v13; // ebx
  __int128 v15; // [rsp+40h] [rbp-38h] BYREF
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
  v11 = (IRP *)IopBuildSynchronousFsdRequest(
                 0x1Bu,
                 (__int64)AttachedDeviceReferenceWithTag,
                 0LL,
                 0,
                 0LL,
                 (__int64)&Event,
                 (__int64)&v15);
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
    v13 = IofCallDriver(AttachedDeviceReferenceWithTag, v11);
    if ( v13 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v13 = v15;
    }
  }
  else
  {
    v13 = -1073741670;
  }
  ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x49706E50u);
  return v13;
}
