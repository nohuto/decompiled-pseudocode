/*
 * XREFs of FsRtlGetFileExtents @ 0x1404EEF80
 * Callers:
 *     MiAllocateEntireImageFileExtents @ 0x1408CF404 (MiAllocateEntireImageFileExtents.c)
 *     MiAllocateFileExtents @ 0x1408CF670 (MiAllocateFileExtents.c)
 *     MiComputeIdealFirstSubsection @ 0x1408CFECC (MiComputeIdealFirstSubsection.c)
 * Callees:
 *     IoAllocateIrpEx @ 0x14021EC80 (IoAllocateIrpEx.c)
 *     IoSynchronousCallDriver @ 0x14023D110 (IoSynchronousCallDriver.c)
 *     IoGetRelatedDeviceObject @ 0x14035C670 (IoGetRelatedDeviceObject.c)
 *     IoFreeIrp @ 0x14035E290 (IoFreeIrp.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall FsRtlGetFileExtents(struct _FILE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rbx
  __int64 v9; // rdx
  IRP *Irp; // rax
  IRP *v11; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int v14; // ebx
  __int128 v15; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v16[3]; // [rsp+30h] [rbp-38h] BYREF

  v15 = 0LL;
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  LOBYTE(v9) = RelatedDeviceObject->StackSize;
  Irp = (IRP *)IoAllocateIrpEx((__int64)RelatedDeviceObject, v9, 0LL);
  v11 = Irp;
  if ( !Irp )
    return 3221225626LL;
  v16[2] = 0LL;
  v16[0] = a3;
  v16[1] = a4;
  Irp->RequestorMode = 0;
  Irp->UserIosb = (PIO_STATUS_BLOCK)&v15;
  Irp->UserEvent = 0LL;
  Irp->UserBuffer = a5;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 1037;
  CurrentStackLocation[-1].FileObject = a1;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 590747;
  CurrentStackLocation[-1].Parameters.Create.Options = 24;
  CurrentStackLocation[-1].Parameters.Read.Length = 16 * *a5 + 8;
  CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)v16;
  v14 = IoSynchronousCallDriver(RelatedDeviceObject, Irp);
  IoFreeIrp(v11);
  return v14;
}
