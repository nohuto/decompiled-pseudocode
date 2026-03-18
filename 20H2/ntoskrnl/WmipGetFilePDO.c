/*
 * XREFs of WmipGetFilePDO @ 0x140789624
 * Callers:
 *     IoWMIHandleToInstanceName @ 0x140789350 (IoWMIHandleToInstanceName.c)
 *     WmipTranslateFileHandle @ 0x140935C38 (WmipTranslateFileHandle.c)
 * Callees:
 *     IoAllocateIrp @ 0x140204780 (IoAllocateIrp.c)
 *     IoGetAttachedDeviceReference @ 0x14020ACC0 (IoGetAttachedDeviceReference.c)
 *     IoGetRelatedDeviceObject @ 0x140211290 (IoGetRelatedDeviceObject.c)
 *     IoFreeIrp @ 0x140218F40 (IoFreeIrp.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     IoSynchronousCallDriver @ 0x14031D280 (IoSynchronousCallDriver.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipGetFilePDO(void *a1, KPROCESSOR_MODE a2, _QWORD *a3)
{
  NTSTATUS v4; // ebx
  struct _DMA_ADAPTER *v5; // rsi
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rax
  PDEVICE_OBJECT AttachedDeviceReference; // rbp
  PIRP Irp; // rax
  IRP *v9; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _QWORD *Information; // rcx
  PFILE_OBJECT FileObject; // [rsp+68h] [rbp+20h] BYREF

  FileObject = 0LL;
  v4 = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)IoFileObjectType, a2, (PVOID *)&FileObject, 0LL);
  if ( v4 >= 0 )
  {
    v5 = (struct _DMA_ADAPTER *)FileObject;
    RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
    AttachedDeviceReference = IoGetAttachedDeviceReference(RelatedDeviceObject);
    Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
    v9 = Irp;
    if ( Irp )
    {
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 1819;
      CurrentStackLocation[-1].Parameters.Read.Length = 4;
      CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v5;
      v9->IoStatus.Status = -1073741637;
      v4 = IoSynchronousCallDriver(AttachedDeviceReference, v9);
      if ( v4 >= 0 )
      {
        Information = (_QWORD *)v9->IoStatus.Information;
        *a3 = Information[1];
        ExFreePoolWithTag(Information, 0);
        v4 = 0;
      }
      IoFreeIrp(v9);
    }
    else
    {
      v4 = -1073741670;
    }
    HalPutDmaAdapter((PADAPTER_OBJECT)AttachedDeviceReference);
    if ( v5 )
      HalPutDmaAdapter(v5);
  }
  return (unsigned int)v4;
}
