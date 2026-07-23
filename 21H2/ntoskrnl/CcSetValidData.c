/*
 * XREFs of CcSetValidData @ 0x1402F75BC
 * Callers:
 *     CcWriteBehindInternal @ 0x1402D22C0 (CcWriteBehindInternal.c)
 * Callees:
 *     IoAllocateIrp @ 0x1402F76C0 (IoAllocateIrp.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     IoGetRelatedDeviceObject @ 0x14035C670 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14035C710 (IofCallDriver.c)
 */

__int64 __fastcall CcSetValidData(struct _FILE_OBJECT *a1, __int64 *a2)
{
  __int64 v2; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  PIRP Irp; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  NTSTATUS v7; // ebx
  __int64 result; // rax
  __int128 v9; // [rsp+30h] [rbp-30h] BYREF
  _DWORD Object[2]; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v11[3]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v12; // [rsp+78h] [rbp+18h] BYREF

  v2 = *a2;
  Object[1] = 0;
  v12 = v2;
  v11[1] = v11;
  v11[0] = v11;
  v9 = 0LL;
  Object[0] = 393216;
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  Irp = IoAllocateIrp(RelatedDeviceObject->StackSize, 0);
  if ( !Irp )
    return 3221225626LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->Flags = 66;
  Irp->RequestorMode = 0;
  Irp->UserIosb = (PIO_STATUS_BLOCK)&v9;
  Irp->UserEvent = (PKEVENT)Object;
  Irp->Tail.Overlay.OriginalFileObject = a1;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  Irp->AssociatedIrp.MasterIrp = (struct _IRP *)&v12;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = 0LL;
  CurrentStackLocation[-1].MajorFunction = 6;
  CurrentStackLocation[-1].FileObject = a1;
  CurrentStackLocation[-1].DeviceObject = RelatedDeviceObject;
  CurrentStackLocation[-1].Parameters.Read.Length = 8;
  CurrentStackLocation[-1].Parameters.Create.Options = 20;
  CurrentStackLocation[-1].Parameters.SetFile.AdvanceOnly = 1;
  v7 = IofCallDriver(RelatedDeviceObject, Irp);
  if ( v7 == 259 )
    KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
  result = (unsigned int)v9;
  if ( v7 < 0 )
    return (unsigned int)v7;
  return result;
}
