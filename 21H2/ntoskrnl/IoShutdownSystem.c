/*
 * XREFs of IoShutdownSystem @ 0x1409ABD08
 * Callers:
 *     PopGracefulShutdown @ 0x1409B1E90 (PopGracefulShutdown.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     VfIsVerifierEnabled @ 0x140252060 (VfIsVerifierEnabled.c)
 *     ExWaitForRundownProtectionRelease @ 0x140267780 (ExWaitForRundownProtectionRelease.c)
 *     KeResetEvent @ 0x140269BE0 (KeResetEvent.c)
 *     IoGetAttachedDeviceReference @ 0x1402D1260 (IoGetAttachedDeviceReference.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     IofCallDriver @ 0x14035C710 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     IopInterlockedRemoveHeadList @ 0x14037F634 (IopInterlockedRemoveHeadList.c)
 *     ZwSetSystemInformation @ 0x1403FDB00 (ZwSetSystemInformation.c)
 *     IoBuildSynchronousFsdRequest @ 0x1406A8BA0 (IoBuildSynchronousFsdRequest.c)
 *     PnpShutdownDevices @ 0x14089BAAC (PnpShutdownDevices.c)
 *     IopShutdownBaseFileSystems @ 0x1409AC064 (IopShutdownBaseFileSystems.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     IovUnloadDrivers @ 0x1409C62F0 (IovUnloadDrivers.c)
 *     VfNotifyVerifierOfEvent @ 0x1409C7050 (VfNotifyVerifierOfEvent.c)
 */

void __fastcall IoShutdownSystem(int a1)
{
  struct _DEVICE_OBJECT *v2; // rdi
  IRP *v3; // rax
  PADAPTER_OBJECT *v4; // rax
  PADAPTER_OBJECT *v5; // rbx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  IRP *v7; // rax
  PADAPTER_OBJECT *v8; // rax
  PADAPTER_OBJECT *v9; // rbx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-20h] BYREF
  int SystemInformation; // [rsp+80h] [rbp+10h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  if ( (unsigned int)VfIsVerifierEnabled() )
    VfNotifyVerifierOfEvent(1LL);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&IopFilesystemDatabaseShutdownRundown);
      ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
      IopShutdownBaseFileSystems(&IopDiskFileSystemQueueHead);
      IopShutdownBaseFileSystems(&IopCdRomFileSystemQueueHead);
      IopShutdownBaseFileSystems(&IopTapeFileSystemQueueHead);
      while ( 1 )
      {
        v8 = (PADAPTER_OBJECT *)IopInterlockedRemoveHeadList((_QWORD **)&IopNotifyLastChanceShutdownQueueHead);
        v9 = v8;
        if ( !v8 )
          break;
        AttachedDeviceReference = IoGetAttachedDeviceReference((PDEVICE_OBJECT)v8[2]);
        v7 = IoBuildSynchronousFsdRequest(0x10u, AttachedDeviceReference, 0LL, 0, 0LL, &Event, &IoStatusBlock);
        if ( v7 && IofCallDriver(AttachedDeviceReference, v7) == 259 )
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        HalPutDmaAdapter((PADAPTER_OBJECT)AttachedDeviceReference);
        HalPutDmaAdapter(v9[2]);
        ExFreePoolWithTag(v9, 0);
        KeResetEvent(&Event);
      }
    }
  }
  else
  {
    PnpShutdownDevices();
    while ( 1 )
    {
      v4 = (PADAPTER_OBJECT *)IopInterlockedRemoveHeadList((_QWORD **)&IopNotifyShutdownQueueHead);
      v5 = v4;
      if ( !v4 )
        break;
      v2 = IoGetAttachedDeviceReference((PDEVICE_OBJECT)v4[2]);
      v3 = IoBuildSynchronousFsdRequest(0x10u, v2, 0LL, 0, 0LL, &Event, &IoStatusBlock);
      if ( v3 && IofCallDriver(v2, v3) == 259 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      HalPutDmaAdapter((PADAPTER_OBJECT)v2);
      HalPutDmaAdapter(v5[2]);
      ExFreePoolWithTag(v5, 0);
      KeResetEvent(&Event);
    }
    if ( (MmVerifierData & 0x10) != 0 )
      IovUnloadDrivers();
    SystemInformation = 2;
    ZwSetSystemInformation(SystemSoftRebootInformation, &SystemInformation, 4u);
  }
}
