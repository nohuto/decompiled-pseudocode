/*
 * XREFs of IoSetInformation @ 0x14077C290
 * Callers:
 *     MiAttemptPageFileReduction @ 0x140542B48 (MiAttemptPageFileReduction.c)
 *     MiAttemptPageFileExtension @ 0x1408D0464 (MiAttemptPageFileExtension.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeResetEvent @ 0x140269BE0 (KeResetEvent.c)
 *     IofCompleteRequest @ 0x1402E7CE0 (IofCompleteRequest.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x140355FE0 (IopQueueThreadIrp.c)
 *     IopReleaseFileObjectLock @ 0x1403584A0 (IopReleaseFileObjectLock.c)
 *     IoGetRelatedDeviceObject @ 0x14035C670 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14035C710 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x14035C790 (IopAllocateIrpExReturn.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     IopOpenLinkOrRenameTarget @ 0x140698458 (IopOpenLinkOrRenameTarget.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406FEF98 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140890FB4 (IopAllocateIrpCleanup.c)
 *     IopCancelAlertedRequest @ 0x1408911EC (IopCancelAlertedRequest.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14089444C (IopSetFileMemoryPartitionInformation.c)
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
  char v10; // bl
  PRTL_BALANCED_NODE v11; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 Irp; // rax
  IRP *v16; // rbx
  struct _KEVENT *p_Event; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  ULONG v19; // eax
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  NTSTATUS FinalStatus; // esi
  NTSTATUS v24; // ebx
  ULONG Flags; // edx
  unsigned int v26; // eax
  ULONG v27; // edx
  ULONG v28; // edx
  CCHAR v29; // dl
  BOOLEAN v30; // al
  char v31; // [rsp+30h] [rbp-40h]
  char v32; // [rsp+31h] [rbp-3Fh]
  struct _DEVICE_OBJECT *DeviceObject; // [rsp+38h] [rbp-38h]
  HANDLE Handle; // [rsp+40h] [rbp-30h] BYREF
  __int128 v35; // [rsp+48h] [rbp-28h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+28h]
  __int64 v38; // [rsp+A0h] [rbp+30h] BYREF
  ULONG v39; // [rsp+B0h] [rbp+40h]

  v39 = Length;
  v4 = 0;
  Handle = 0LL;
  memset(&Event, 0, sizeof(Event));
  v5 = 0;
  v35 = 0LL;
  v31 = 0;
  ObfReferenceObject(FileObject);
  if ( (FileObject->Flags & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v10 = (FileObject->Flags & 4) != 0;
    --CurrentThread->KernelApcDisable;
    v11 = KeAbPreAcquire((ULONG_PTR)&FileObject->Lock, 0LL, 0);
    LOBYTE(v38) = 0;
    if ( _InterlockedExchange((volatile __int32 *)&FileObject->Busy, 1) )
    {
      v24 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)&FileObject->Type, 0, v10, v11, &v38);
      if ( (_BYTE)v38 )
      {
        HalPutDmaAdapter((PADAPTER_OBJECT)FileObject);
        return v24;
      }
    }
    else
    {
      if ( v11 )
        BYTE2(v11[1].Left) |= 1u;
      ObfReferenceObject(FileObject);
    }
    KeResetEvent(&FileObject->Event);
    v4 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
  }
  v32 = v4;
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
      v31 = 1;
      break;
  }
  LOBYTE(v13) = RelatedDeviceObject->StackSize;
  LOBYTE(v14) = v4 ^ 1;
  Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v13, v14, retaddr);
  v16 = (IRP *)Irp;
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
  v16->UserEvent = p_Event;
  CurrentStackLocation = v16->Tail.Overlay.CurrentStackLocation;
  v16->UserIosb = (PIO_STATUS_BLOCK)&v35;
  v19 = v39;
  CurrentStackLocation[-1].MajorFunction = 6;
  CurrentStackLocation[-1].FileObject = FileObject;
  v16->Flags |= 0x10u;
  v16->AssociatedIrp.MasterIrp = (struct _IRP *)FileInformation;
  CurrentStackLocation[-1].Parameters.Read.Length = v19;
  CurrentStackLocation[-1].Parameters.Create.Options = FileInformationClass;
  if ( v5 )
  {
    CurrentStackLocation[-1].Flags |= 1u;
  }
  else if ( v31 )
  {
    CurrentStackLocation[-1].Flags |= 1u;
  }
  IopQueueThreadIrp((__int64)v16);
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
    v26 = Flags & 0xFFFFFFDF;
    v27 = Flags | 0x20;
    if ( (*(_DWORD *)FileInformation & 4) == 0 )
      v27 = v26;
    FileObject->Flags = v27;
    if ( (*(_DWORD *)FileInformation & 2) != 0 )
    {
      if ( (*(_DWORD *)FileInformation & 0x10) != 0 )
        v28 = v27 | 4;
      else
        v28 = v27 & 0xFFFFFFFB;
      FileObject->Flags = v28;
    }
    --v16->CurrentLocation;
    FinalStatus = 0;
    --v16->Tail.Overlay.CurrentStackLocation;
    v29 = 0;
    v16->IoStatus.Status = 0;
    v16->IoStatus.Information = 0LL;
    goto LABEL_68;
  }
  v20 = (unsigned int)(FileInformationClass - 10);
  if ( (unsigned int)v20 <= 0x3E )
  {
    v21 = 0x4080000000000003LL;
    if ( _bittest64(&v21, v20) )
    {
      if ( FileInformationClass != FileMoveClusterInformation )
      {
        if ( FileInformationClass == FileRenameInformationEx || FileInformationClass == FileLinkInformationEx )
          v30 = *(_BYTE *)FileInformation & 1;
        else
          v30 = *(_BYTE *)FileInformation;
        CurrentStackLocation[-1].Parameters.SetFile.ReplaceIfExists = v30;
        goto LABEL_63;
      }
LABEL_62:
      CurrentStackLocation[-1].Parameters.Create.EaLength = *(_DWORD *)FileInformation;
LABEL_63:
      if ( *((_WORD *)FileInformation + 10) != 92 && !*((_QWORD *)FileInformation + 1) )
        goto LABEL_24;
      FinalStatus = IopOpenLinkOrRenameTarget(&Handle, (__int64)v16, (__int64)FileInformation, FileObject);
      if ( FinalStatus >= 0 )
        goto LABEL_24;
      v29 = 2;
      goto LABEL_67;
    }
  }
  if ( FileInformationClass == FileMoveClusterInformation )
    goto LABEL_62;
  if ( FileInformationClass == FileMemoryPartitionInformation )
  {
    FinalStatus = IopSetFileMemoryPartitionInformation(FileObject, FileInformation, v39);
    v16->IoStatus.Status = FinalStatus;
    v29 = 0;
    v16->IoStatus.Information = 0LL;
LABEL_67:
    --v16->CurrentLocation;
    --v16->Tail.Overlay.CurrentStackLocation;
LABEL_68:
    IofCompleteRequest(v16, v29);
    goto LABEL_25;
  }
LABEL_24:
  FinalStatus = IofCallDriver(DeviceObject, v16);
LABEL_25:
  if ( v32 )
  {
    if ( FinalStatus == 259 )
    {
      if ( KeWaitForSingleObject(&FileObject->Event, Executive, 0, (FileObject->Flags & 4) != 0, 0LL) == 257 )
        IopCancelAlertedRequest(&FileObject->Event, v16);
      FinalStatus = FileObject->FinalStatus;
    }
    IopReleaseFileObjectLock((PADAPTER_OBJECT)FileObject);
  }
  else if ( FinalStatus == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    FinalStatus = v35;
  }
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return FinalStatus;
}
