/*
 * XREFs of CmpGetVolumeClusterSize @ 0x140639DF4
 * Callers:
 *     CmpOpenHiveFile @ 0x14061E8E8 (CmpOpenHiveFile.c)
 *     CmpCreateHive @ 0x14063ACD0 (CmpCreateHive.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     IoGetAttachedDeviceReference @ 0x1402244D0 (IoGetAttachedDeviceReference.c)
 *     IoAllocateIrp @ 0x140271820 (IoAllocateIrp.c)
 *     IofCallDriver @ 0x14028F780 (IofCallDriver.c)
 *     IoFreeIrp @ 0x140290A30 (IoFreeIrp.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwQueryVolumeInformationFile @ 0x1403F3EE0 (ZwQueryVolumeInformationFile.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     CmpCreateEvent @ 0x14061EE90 (CmpCreateEvent.c)
 */

NTSTATUS __fastcall CmpGetVolumeClusterSize(HANDLE FileHandle, int *a2)
{
  struct _OBJECT_TYPE *v4; // r8
  NTSTATUS result; // eax
  int v6; // eax
  struct _DMA_ADAPTER *v7; // r15
  NTSTATUS v8; // ebx
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  PADAPTER_OBJECT v10; // rsi
  struct _DMA_ADAPTER *v11; // r14
  PIRP Irp; // rax
  IRP *v13; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  IRP *v15; // rdx
  struct _IO_STACK_LOCATION *v16; // rax
  NTSTATUS Status; // ebx
  unsigned int v18; // ecx
  int v19; // ecx
  PVOID Object; // [rsp+30h] [rbp-49h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+38h] [rbp-41h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-31h] BYREF
  int v24; // [rsp+58h] [rbp-21h] BYREF
  unsigned int v25; // [rsp+5Ch] [rbp-1Dh]
  __int128 v26; // [rsp+60h] [rbp-19h]
  int v27; // [rsp+70h] [rbp-9h]
  __int128 FsInformation; // [rsp+78h] [rbp-1h] BYREF
  __int64 v29; // [rsp+88h] [rbp+Fh]

  DmaAdapter = 0LL;
  Handle = 0LL;
  v27 = 0;
  v25 = 0;
  Object = 0LL;
  v29 = 0LL;
  FsInformation = 0LL;
  v24 = 6;
  IoStatusBlock = 0LL;
  v4 = *(struct _OBJECT_TYPE **)CmIoFileObjectType;
  v26 = 0LL;
  result = ObReferenceObjectByHandle(FileHandle, 0, v4, 0, &Object, 0LL);
  if ( result < 0 )
    return result;
  v6 = CmpCreateEvent(NotificationEvent, &Handle, (PVOID *)&DmaAdapter);
  v7 = (struct _DMA_ADAPTER *)Object;
  v8 = v6;
  if ( v6 >= 0 )
  {
    AttachedDeviceReference = IoGetAttachedDeviceReference(*((PDEVICE_OBJECT *)Object + 1));
    v10 = DmaAdapter;
    v11 = (struct _DMA_ADAPTER *)AttachedDeviceReference;
    if ( AttachedDeviceReference )
    {
      Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
      v13 = Irp;
      if ( !Irp )
      {
LABEL_29:
        v8 = ZwQueryVolumeInformationFile(FileHandle, &IoStatusBlock, &FsInformation, 0x18u, FileFsSizeInformation);
        if ( v8 < 0 )
          goto LABEL_18;
        v18 = HIDWORD(v29);
LABEL_13:
        if ( v18 > 0x1000 )
          v18 = 4096;
        v8 = 0;
        if ( v18 < 0x200 )
        {
          v19 = 1;
          goto LABEL_17;
        }
        v19 = v18 >> 9;
        if ( ((v19 - 1) & v19) == 0 )
        {
LABEL_17:
          *a2 = v19;
          goto LABEL_18;
        }
        v8 = -1073741288;
LABEL_18:
        if ( v11 )
          HalPutDmaAdapter(v11);
        goto LABEL_20;
      }
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      v15 = Irp;
      CurrentStackLocation[-1].MajorFunction = 14;
      CurrentStackLocation[-1].DeviceObject = (PDEVICE_OBJECT)v11;
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2954240;
      CurrentStackLocation[-1].Parameters.Read.Length = 28;
      CurrentStackLocation[-1].Parameters.Create.Options = 12;
      Irp->AssociatedIrp.MasterIrp = (struct _IRP *)&v24;
      Irp->UserBuffer = &v24;
      v16 = Irp->Tail.Overlay.CurrentStackLocation;
      v13->Flags = 80;
      v13->IoStatus.Status = -1073741637;
      v16[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&CmpGetVolumeClusterSizeCompletion;
      v16[-1].Context = v10;
      v16[-1].Control = -32;
      Status = IofCallDriver((PDEVICE_OBJECT)v11, v15);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(v10, Executive, 0, 0, 0LL);
        Status = v13->IoStatus.Status;
      }
      IoFreeIrp(v13);
    }
    else
    {
      Status = -1073741811;
    }
    v18 = 0;
    if ( Status >= 0 )
    {
      if ( v25 < 0x18 || !HIDWORD(v26) || (v18 = HIDWORD(v26), ((HIDWORD(v26) - 1) & HIDWORD(v26)) != 0) )
        Status = -1073741288;
      if ( Status >= 0 )
        goto LABEL_13;
    }
    goto LABEL_29;
  }
  v10 = 0LL;
LABEL_20:
  HalPutDmaAdapter(v7);
  if ( v10 )
  {
    HalPutDmaAdapter(v10);
    ZwClose(Handle);
  }
  return v8;
}
