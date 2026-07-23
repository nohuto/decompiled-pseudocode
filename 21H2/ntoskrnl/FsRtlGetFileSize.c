/*
 * XREFs of FsRtlGetFileSize @ 0x1406ABB40
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x14029A360 (FsRtlCreateSectionForDataScan.c)
 *     MmExtendSection @ 0x1405E894C (MmExtendSection.c)
 *     MiCreateDataFileMap @ 0x140685C44 (MiCreateDataFileMap.c)
 *     MiCreateImageFileMap @ 0x1406AA6D4 (MiCreateImageFileMap.c)
 *     MiShareExistingControlArea @ 0x14071F1CC (MiShareExistingControlArea.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x14094A86C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x14094AAA8 (ExpQueryElamCertInfo.c)
 * Callees:
 *     IoAllocateIrpEx @ 0x14021EC80 (IoAllocateIrpEx.c)
 *     IoSetThreadHardErrorMode @ 0x1402F4B10 (IoSetThreadHardErrorMode.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     IoGetRelatedDeviceObject @ 0x14035C670 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14035C710 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall FsRtlGetFileSize(PFILE_OBJECT FileObject, PLARGE_INTEGER FileSize)
{
  __int64 v4; // rdx
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  PFAST_IO_DISPATCH FastIoDispatch; // rax
  unsigned __int8 (__fastcall *FastIoQueryStandardInfo)(PFILE_OBJECT, __int64, __int128 *, __int128 *, PDEVICE_OBJECT); // rax
  NTSTATUS result; // eax
  __int64 v9; // rdx
  IRP *Irp; // rbx
  BOOLEAN v11; // al
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  BOOLEAN v13; // r14
  NTSTATUS v14; // ebx
  NTSTATUS v15; // ecx
  __int128 v16; // [rsp+30h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-40h] BYREF
  __int128 v18; // [rsp+58h] [rbp-28h] BYREF
  __int64 v19; // [rsp+68h] [rbp-18h]

  v16 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  if ( !FastIoDispatch
    || (FastIoQueryStandardInfo = (unsigned __int8 (__fastcall *)(PFILE_OBJECT, __int64, __int128 *, __int128 *, PDEVICE_OBJECT))FastIoDispatch->FastIoQueryStandardInfo) == 0LL
    || (LOBYTE(v4) = 1, !FastIoQueryStandardInfo(FileObject, v4, &v18, &v16, RelatedDeviceObject)) )
  {
    memset(&Event, 0, sizeof(Event));
    KeInitializeEvent(&Event, NotificationEvent, 0);
    LOBYTE(v9) = RelatedDeviceObject->StackSize;
    Irp = (IRP *)IoAllocateIrpEx((__int64)RelatedDeviceObject, v9, 0LL);
    if ( !Irp )
      return -1073741670;
    v11 = IoSetThreadHardErrorMode(0);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    v13 = v11;
    Irp->Flags = 66;
    Irp->UserIosb = (PIO_STATUS_BLOCK)&v16;
    Irp->UserEvent = &Event;
    Irp->RequestorMode = 0;
    Irp->Tail.Overlay.OriginalFileObject = FileObject;
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    Irp->AssociatedIrp.MasterIrp = (struct _IRP *)&v18;
    CurrentStackLocation[-1].MajorFunction = 5;
    CurrentStackLocation[-1].FileObject = FileObject;
    CurrentStackLocation[-1].DeviceObject = RelatedDeviceObject;
    CurrentStackLocation[-1].Parameters.Read.Length = 24;
    CurrentStackLocation[-1].Parameters.Create.Options = 5;
    v14 = IofCallDriver(RelatedDeviceObject, Irp);
    if ( v14 == 259 )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v15 = v16;
    if ( v14 < 0 )
      v15 = v14;
    LODWORD(v16) = v15;
    IoSetThreadHardErrorMode(v13);
  }
  result = v16;
  if ( (int)v16 >= 0 )
  {
    if ( BYTE5(v19) )
      return -1073741638;
    else
      *FileSize = *(LARGE_INTEGER *)((char *)&v18 + 8);
  }
  return result;
}
