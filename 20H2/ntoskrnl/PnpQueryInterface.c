/*
 * XREFs of PnpQueryInterface @ 0x140762AB4
 * Callers:
 *     PnprQueryReplaceFeatures @ 0x14050DB08 (PnprQueryReplaceFeatures.c)
 *     PiProcessNewDeviceNode @ 0x1407333F0 (PiProcessNewDeviceNode.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x140761BC8 (PiGetDmaAdapterFromBusInterface.c)
 *     IopQueryInterfaceRecurseUp @ 0x1407620B8 (IopQueryInterfaceRecurseUp.c)
 *     IoQueryInterface @ 0x1407622C0 (IoQueryInterface.c)
 *     PiIommuGetInterface @ 0x1407623A8 (PiIommuGetInterface.c)
 *     PnpGetDeviceLocationStrings @ 0x140762454 (PnpGetDeviceLocationStrings.c)
 *     PnprIdentifyUnits @ 0x1408B036C (PnprIdentifyUnits.c)
 *     IopQueryBusResourceUpdateInterface @ 0x1408B55B0 (IopQueryBusResourceUpdateInterface.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x1408B7F44 (PiProcessDriversLoadedOnSecureDevice.c)
 *     PipUnprotectDevice @ 0x1408B8014 (PipUnprotectDevice.c)
 * Callees:
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1402047B0 (IoGetAttachedDeviceReferenceWithTag.c)
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x140211330 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x140411300 (memset.c)
 *     IopBuildSynchronousFsdRequest @ 0x1406C2190 (IopBuildSynchronousFsdRequest.c)
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
  v11 = (IRP *)IopBuildSynchronousFsdRequest(
                 0x1Bu,
                 (__int64)AttachedDeviceReferenceWithTag,
                 0LL,
                 0,
                 0LL,
                 (__int64)&Event,
                 (__int64)&v15,
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
