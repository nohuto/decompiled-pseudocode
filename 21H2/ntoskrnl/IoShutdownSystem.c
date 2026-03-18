/*
 * XREFs of IoShutdownSystem @ 0x140A651B8
 * Callers:
 *     PopGracefulShutdown @ 0x140A6AEC0 (PopGracefulShutdown.c)
 * Callees:
 *     IopInterlockedRemoveHeadList @ 0x140255C70 (IopInterlockedRemoveHeadList.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     VfIsVerifierEnabled @ 0x1402DA4B0 (VfIsVerifierEnabled.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     IoGetAttachedDeviceReference @ 0x1403109B0 (IoGetAttachedDeviceReference.c)
 *     ZwQuerySystemInformation @ 0x14041BE20 (ZwQuerySystemInformation.c)
 *     ZwSetSystemInformation @ 0x14041EE00 (ZwSetSystemInformation.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     IoBuildSynchronousFsdRequest @ 0x140705EF0 (IoBuildSynchronousFsdRequest.c)
 *     PnpShutdownDevices @ 0x1409404FC (PnpShutdownDevices.c)
 *     IopShutdownBaseFileSystems @ 0x140A65554 (IopShutdownBaseFileSystems.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     IovUnloadDrivers @ 0x140A80940 (IovUnloadDrivers.c)
 *     VfNotifyVerifierOfEvent @ 0x140A81780 (VfNotifyVerifierOfEvent.c)
 */

void __fastcall IoShutdownSystem(int a1)
{
  struct _DEVICE_OBJECT *v2; // rdi
  IRP *v3; // rax
  PVOID *v4; // rax
  PVOID *v5; // rbx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  IRP *v7; // rax
  PVOID *v8; // rax
  PVOID *v9; // rbx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-20h] BYREF
  int v12; // [rsp+80h] [rbp+10h] BYREF

  v12 = 0;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  if ( (unsigned int)VfIsVerifierEnabled() )
    VfNotifyVerifierOfEvent(1LL);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      ExWaitForRundownProtectionRelease(&IopFilesystemDatabaseShutdownRundown);
      ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
      IopShutdownBaseFileSystems(&IopDiskFileSystemQueueHead);
      IopShutdownBaseFileSystems(&IopCdRomFileSystemQueueHead);
      IopShutdownBaseFileSystems(&IopTapeFileSystemQueueHead);
      while ( 1 )
      {
        v8 = (PVOID *)IopInterlockedRemoveHeadList((_QWORD **)&IopNotifyLastChanceShutdownQueueHead);
        v9 = v8;
        if ( !v8 )
          break;
        AttachedDeviceReference = IoGetAttachedDeviceReference((PDEVICE_OBJECT)v8[2]);
        v7 = IoBuildSynchronousFsdRequest(0x10u, AttachedDeviceReference, 0LL, 0, 0LL, &Event, &IoStatusBlock);
        if ( v7 && IofCallDriver(AttachedDeviceReference, v7) == 259 )
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        ObfDereferenceObject(AttachedDeviceReference);
        ObfDereferenceObject(v9[2]);
        ExFreePoolWithTag(v9, 0);
        KeResetEvent(&Event);
      }
    }
  }
  else
  {
    if ( (int)ZwQuerySystemInformation(151LL, (__int64)&v12) >= 0 && (v12 & 0x20) != 0 )
    {
      ((void (__fastcall *)(_QWORD))off_140C01EF8[0])(0LL);
      v12 = 0;
      ZwSetSystemInformation(151LL, (__int64)&v12);
    }
    PnpShutdownDevices();
    while ( 1 )
    {
      v4 = (PVOID *)IopInterlockedRemoveHeadList((_QWORD **)&IopNotifyShutdownQueueHead);
      v5 = v4;
      if ( !v4 )
        break;
      v2 = IoGetAttachedDeviceReference((PDEVICE_OBJECT)v4[2]);
      v3 = IoBuildSynchronousFsdRequest(0x10u, v2, 0LL, 0, 0LL, &Event, &IoStatusBlock);
      if ( v3 && IofCallDriver(v2, v3) == 259 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      ObfDereferenceObject(v2);
      ObfDereferenceObject(v5[2]);
      ExFreePoolWithTag(v5, 0);
      KeResetEvent(&Event);
    }
    if ( (MmVerifierData & 0x10) != 0 )
      IovUnloadDrivers();
    v12 = 2;
    ZwSetSystemInformation(151LL, (__int64)&v12);
  }
}
