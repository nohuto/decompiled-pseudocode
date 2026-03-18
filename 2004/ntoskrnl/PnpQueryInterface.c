/*
 * XREFs of PnpQueryInterface @ 0x140753EE0
 * Callers:
 *     PnprQueryReplaceFeatures @ 0x14050A1D8 (PnprQueryReplaceFeatures.c)
 *     PiProcessNewDeviceNode @ 0x140724960 (PiProcessNewDeviceNode.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x140752FE8 (PiGetDmaAdapterFromBusInterface.c)
 *     IopQueryInterfaceRecurseUp @ 0x1407534D8 (IopQueryInterfaceRecurseUp.c)
 *     IoQueryInterface @ 0x1407536E0 (IoQueryInterface.c)
 *     PiIommuGetInterface @ 0x1407537C8 (PiIommuGetInterface.c)
 *     PnpGetDeviceLocationStrings @ 0x140753880 (PnpGetDeviceLocationStrings.c)
 *     PnprIdentifyUnits @ 0x1408AA83C (PnprIdentifyUnits.c)
 *     IopQueryBusResourceUpdateInterface @ 0x1408AFA80 (IopQueryBusResourceUpdateInterface.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x1408B2324 (PiProcessDriversLoadedOnSecureDevice.c)
 *     PipUnprotectDevice @ 0x1408B23F4 (PipUnprotectDevice.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140271850 (IoGetAttachedDeviceReferenceWithTag.c)
 *     IofCallDriver @ 0x14028F780 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     memset @ 0x14040A280 (memset.c)
 *     IopBuildSynchronousFsdRequest @ 0x1406E4C80 (IopBuildSynchronousFsdRequest.c)
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
