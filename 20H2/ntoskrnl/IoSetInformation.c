/*
 * XREFs of IoSetInformation @ 0x140778120
 * Callers:
 *     MiAttemptPageFileReduction @ 0x140540E08 (MiAttemptPageFileReduction.c)
 *     MiAttemptPageFileExtension @ 0x1408D2B44 (MiAttemptPageFileExtension.c)
 * Callees:
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140211290 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140211330 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x1402113B0 (IopAllocateIrpExReturn.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x140221360 (IopQueueThreadIrp.c)
 *     IopReleaseFileObjectLock @ 0x1402238A0 (IopReleaseFileObjectLock.c)
 *     IofCompleteRequest @ 0x140292560 (IofCompleteRequest.c)
 *     ObCloseHandle @ 0x140627D70 (ObCloseHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14064A5E0 (IopWaitAndAcquireFileObjectLock.c)
 *     IopOpenLinkOrRenameTarget @ 0x1406C7690 (IopOpenLinkOrRenameTarget.c)
 *     IopAllocateIrpCleanup @ 0x140893884 (IopAllocateIrpCleanup.c)
 *     IopCancelAlertedRequest @ 0x140893ABC (IopCancelAlertedRequest.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140896D1C (IopSetFileMemoryPartitionInformation.c)
 */

NTSTATUS __stdcall IoSetInformation(
        PFILE_OBJECT FileObject,
        FILE_INFORMATION_CLASS FileInformationClass,
        ULONG Length,
        PVOID FileInformation)
{
  char v4; // r15
  char v5; // r13
  struct _KTHREAD *CurrentThread; // rax
  bool v10; // bl
  __int64 v11; // rax
  __int64 v12; // r8
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 Irp; // rax
  IRP *v17; // rbx
  struct _KEVENT *p_Event; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  ULONG v20; // eax
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  NTSTATUS FinalStatus; // esi
  NTSTATUS v25; // ebx
  ULONG Flags; // edx
  unsigned int v27; // eax
  ULONG v28; // edx
  ULONG v29; // edx
  CCHAR v30; // dl
  BOOLEAN v31; // al
  char v32; // [rsp+30h] [rbp-40h]
  char v33; // [rsp+31h] [rbp-3Fh]
  struct _DEVICE_OBJECT *DeviceObject; // [rsp+38h] [rbp-38h]
  HANDLE Handle; // [rsp+40h] [rbp-30h] BYREF
  __int128 v36; // [rsp+48h] [rbp-28h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+28h]
  __int64 v39; // [rsp+A0h] [rbp+30h] BYREF
  ULONG v40; // [rsp+B0h] [rbp+40h]

  v40 = Length;
  v4 = 0;
  Handle = 0LL;
  memset(&Event, 0, sizeof(Event));
  v5 = 0;
  v36 = 0LL;
  v32 = 0;
  ObfReferenceObject(FileObject);
  if ( (FileObject->Flags & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v10 = (FileObject->Flags & 4) != 0;
    --CurrentThread->KernelApcDisable;
    v11 = KeAbPreAcquire((ULONG_PTR)&FileObject->Lock, 0LL, 0LL);
    LOBYTE(v39) = 0;
    if ( _InterlockedExchange((volatile __int32 *)&FileObject->Busy, 1) )
    {
      LOBYTE(v12) = v10;
      v25 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)&FileObject->Type, 0LL, v12, v11, &v39);
      if ( (_BYTE)v39 )
      {
        HalPutDmaAdapter((PADAPTER_OBJECT)FileObject);
        return v25;
      }
    }
    else
    {
      if ( v11 )
        *(_BYTE *)(v11 + 26) |= 1u;
      ObfReferenceObject(FileObject);
    }
    KeResetEvent(&FileObject->Event);
    v4 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
  }
  v33 = v4;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  DeviceObject = RelatedDeviceObject;
  switch ( FileInformationClass )
  {
    case FileRenameInformationBypassAccessCheck:
      FileInformationClass = FileRenameInformation;
LABEL_38:
      v5 = 1;
      break;
    case FileRenameInformationExBypassAccessCheck:
      FileInformationClass = FileRenameInformationEx;
      goto LABEL_38;
    case FileLinkInformationBypassAccessCheck:
      FileInformationClass = FileLinkInformation;
      goto LABEL_38;
    case FileLinkInformationExBypassAccessCheck:
      FileInformationClass = FileLinkInformationEx;
      goto LABEL_38;
    case FileCaseSensitiveInformationForceAccessCheck:
      FileInformationClass = FileCaseSensitiveInformation;
      v32 = 1;
      break;
  }
  LOBYTE(v14) = RelatedDeviceObject->StackSize;
  LOBYTE(v15) = v4 ^ 1;
  Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v14, v15, retaddr);
  v17 = (IRP *)Irp;
  if ( !Irp )
  {
    IopAllocateIrpCleanup((PADAPTER_OBJECT)FileObject, 0LL);
    return -1073741670;
  }
  *(_QWORD *)(Irp + 192) = FileObject;
  *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
  *(_BYTE *)(Irp + 64) = 0;
  if ( v4 )
  {
    *(_BYTE *)(Irp + 71) |= 2u;
    p_Event = 0LL;
  }
  else
  {
    *(_DWORD *)(Irp + 16) = 4;
    p_Event = &Event;
  }
  v17->UserEvent = p_Event;
  CurrentStackLocation = v17->Tail.Overlay.CurrentStackLocation;
  v17->UserIosb = (PIO_STATUS_BLOCK)&v36;
  v20 = v40;
  CurrentStackLocation[-1].MajorFunction = 6;
  CurrentStackLocation[-1].FileObject = FileObject;
  v17->Flags |= 0x10u;
  v17->AssociatedIrp.MasterIrp = (struct _IRP *)FileInformation;
  CurrentStackLocation[-1].Parameters.Read.Length = v20;
  CurrentStackLocation[-1].Parameters.Create.Options = FileInformationClass;
  if ( v5 )
  {
    CurrentStackLocation[-1].Flags |= 1u;
  }
  else if ( v32 )
  {
    CurrentStackLocation[-1].Flags |= 1u;
  }
  IopQueueThreadIrp((__int64)v17);
  if ( FileInformationClass == FileModeInformation )
  {
    Flags = FileObject->Flags;
    if ( (Flags & 8) == 0 )
    {
      if ( (*(_DWORD *)FileInformation & 2) != 0 )
        Flags |= 0x10u;
      else
        Flags &= ~0x10u;
      FileObject->Flags = Flags;
    }
    v27 = Flags & 0xFFFFFFDF;
    v28 = Flags | 0x20;
    if ( (*(_DWORD *)FileInformation & 4) == 0 )
      v28 = v27;
    FileObject->Flags = v28;
    if ( (*(_DWORD *)FileInformation & 2) != 0 )
    {
      if ( (*(_DWORD *)FileInformation & 0x10) != 0 )
        v29 = v28 | 4;
      else
        v29 = v28 & 0xFFFFFFFB;
      FileObject->Flags = v29;
    }
    --v17->CurrentLocation;
    FinalStatus = 0;
    --v17->Tail.Overlay.CurrentStackLocation;
    v30 = 0;
    v17->IoStatus.Status = 0;
    v17->IoStatus.Information = 0LL;
    goto LABEL_68;
  }
  v21 = (unsigned int)(FileInformationClass - 10);
  if ( (unsigned int)v21 <= 0x3E )
  {
    v22 = 0x4080000000000003LL;
    if ( _bittest64(&v22, v21) )
    {
      if ( FileInformationClass != FileMoveClusterInformation )
      {
        if ( FileInformationClass == FileRenameInformationEx || FileInformationClass == FileLinkInformationEx )
          v31 = *(_BYTE *)FileInformation & 1;
        else
          v31 = *(_BYTE *)FileInformation;
        CurrentStackLocation[-1].Parameters.SetFile.ReplaceIfExists = v31;
        goto LABEL_63;
      }
LABEL_62:
      CurrentStackLocation[-1].Parameters.Create.EaLength = *(_DWORD *)FileInformation;
LABEL_63:
      if ( *((_WORD *)FileInformation + 10) != 92 && !*((_QWORD *)FileInformation + 1) )
        goto LABEL_24;
      FinalStatus = IopOpenLinkOrRenameTarget(&Handle, (__int64)v17, (__int64)FileInformation, FileObject);
      if ( FinalStatus >= 0 )
        goto LABEL_24;
      v30 = 2;
      goto LABEL_67;
    }
  }
  if ( FileInformationClass == FileMoveClusterInformation )
    goto LABEL_62;
  if ( FileInformationClass == FileMemoryPartitionInformation )
  {
    FinalStatus = IopSetFileMemoryPartitionInformation(FileObject, FileInformation, v40);
    v17->IoStatus.Status = FinalStatus;
    v30 = 0;
    v17->IoStatus.Information = 0LL;
LABEL_67:
    --v17->CurrentLocation;
    --v17->Tail.Overlay.CurrentStackLocation;
LABEL_68:
    IofCompleteRequest(v17, v30);
    goto LABEL_25;
  }
LABEL_24:
  FinalStatus = IofCallDriver(DeviceObject, v17);
LABEL_25:
  if ( v33 )
  {
    if ( FinalStatus == 259 )
    {
      if ( KeWaitForSingleObject(&FileObject->Event, Executive, 0, (FileObject->Flags & 4) != 0, 0LL) == 257 )
        IopCancelAlertedRequest(&FileObject->Event, v17);
      FinalStatus = FileObject->FinalStatus;
    }
    IopReleaseFileObjectLock((PADAPTER_OBJECT)FileObject);
  }
  else if ( FinalStatus == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    FinalStatus = v36;
  }
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return FinalStatus;
}
