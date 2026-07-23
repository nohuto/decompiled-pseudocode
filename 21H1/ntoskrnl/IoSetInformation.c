/*
 * XREFs of IoSetInformation @ 0x140767730
 * Callers:
 *     MiAttemptPageFileReduction @ 0x14053CDE8 (MiAttemptPageFileReduction.c)
 *     MiAttemptPageFileExtension @ 0x1408CB9B4 (MiAttemptPageFileExtension.c)
 *     PopDeleteHiberFile @ 0x1408E262C (PopDeleteHiberFile.c)
 * Callees:
 *     KeResetEvent @ 0x1402055D0 (KeResetEvent.c)
 *     IofCompleteRequest @ 0x140248710 (IofCompleteRequest.c)
 *     IoGetRelatedDeviceObject @ 0x140252E60 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140252F00 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x140252F80 (IopAllocateIrpExReturn.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     IopReleaseFileObjectLock @ 0x14025EEC0 (IopReleaseFileObjectLock.c)
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x140261300 (IopQueueThreadIrp.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     ObCloseHandle @ 0x140637550 (ObCloseHandle.c)
 *     IopOpenLinkOrRenameTarget @ 0x14066EFC0 (IopOpenLinkOrRenameTarget.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14070A3B8 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x14088CA14 (IopAllocateIrpCleanup.c)
 *     IopCancelAlertedRequest @ 0x14088CC4C (IopCancelAlertedRequest.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14088FF0C (IopSetFileMemoryPartitionInformation.c)
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
  __int64 v11; // rax
  __int64 Irp; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  IRP *v15; // rbx
  struct _KEVENT *p_Event; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  ULONG v18; // eax
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  NTSTATUS FinalStatus; // esi
  NTSTATUS v23; // ebx
  ULONG Flags; // edx
  unsigned int v25; // eax
  ULONG v26; // edx
  ULONG v27; // edx
  CCHAR v28; // dl
  BOOLEAN v29; // al
  char v30; // [rsp+30h] [rbp-40h]
  char v31; // [rsp+31h] [rbp-3Fh]
  struct _DEVICE_OBJECT *DeviceObject; // [rsp+38h] [rbp-38h]
  HANDLE Handle; // [rsp+40h] [rbp-30h] BYREF
  __int128 v34; // [rsp+48h] [rbp-28h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-18h] BYREF
  __int64 v36; // [rsp+A0h] [rbp+30h] BYREF
  ULONG v37; // [rsp+B0h] [rbp+40h]

  v37 = Length;
  v4 = 0;
  Handle = 0LL;
  memset(&Event, 0, sizeof(Event));
  v5 = 0;
  v34 = 0LL;
  v30 = 0;
  ObfReferenceObject(FileObject);
  if ( (FileObject->Flags & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v10 = (FileObject->Flags & 4) != 0;
    --CurrentThread->KernelApcDisable;
    v11 = KeAbPreAcquire((ULONG_PTR)&FileObject->Lock, 0LL, 0);
    LOBYTE(v36) = 0;
    if ( _InterlockedExchange((volatile __int32 *)&FileObject->Busy, 1) )
    {
      v23 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)&FileObject->Type, 0, v10, v11, &v36);
      if ( (_BYTE)v36 )
      {
        HalPutDmaAdapter((PADAPTER_OBJECT)FileObject);
        return v23;
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
  v31 = v4;
  DeviceObject = IoGetRelatedDeviceObject(FileObject);
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
      v30 = 1;
      break;
  }
  Irp = IopAllocateIrpExReturn();
  v15 = (IRP *)Irp;
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
  v15->UserEvent = p_Event;
  CurrentStackLocation = v15->Tail.Overlay.CurrentStackLocation;
  v15->UserIosb = (PIO_STATUS_BLOCK)&v34;
  v18 = v37;
  CurrentStackLocation[-1].MajorFunction = 6;
  CurrentStackLocation[-1].FileObject = FileObject;
  v15->Flags |= 0x10u;
  v15->AssociatedIrp.MasterIrp = (struct _IRP *)FileInformation;
  CurrentStackLocation[-1].Parameters.Read.Length = v18;
  CurrentStackLocation[-1].Parameters.Create.Options = FileInformationClass;
  if ( v5 )
  {
    CurrentStackLocation[-1].Flags |= 1u;
  }
  else if ( v30 )
  {
    CurrentStackLocation[-1].Flags |= 1u;
  }
  IopQueueThreadIrp((__int64)v15, v13, v14);
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
    v25 = Flags & 0xFFFFFFDF;
    v26 = Flags | 0x20;
    if ( (*(_DWORD *)FileInformation & 4) == 0 )
      v26 = v25;
    FileObject->Flags = v26;
    if ( (*(_DWORD *)FileInformation & 2) != 0 )
    {
      if ( (*(_DWORD *)FileInformation & 0x10) != 0 )
        v27 = v26 | 4;
      else
        v27 = v26 & 0xFFFFFFFB;
      FileObject->Flags = v27;
    }
    --v15->CurrentLocation;
    FinalStatus = 0;
    --v15->Tail.Overlay.CurrentStackLocation;
    v28 = 0;
    v15->IoStatus.Status = 0;
    v15->IoStatus.Information = 0LL;
    goto LABEL_68;
  }
  v19 = (unsigned int)(FileInformationClass - 10);
  if ( (unsigned int)v19 <= 0x3E )
  {
    v20 = 0x4080000000000003LL;
    if ( _bittest64(&v20, v19) )
    {
      if ( FileInformationClass != FileMoveClusterInformation )
      {
        if ( FileInformationClass == FileRenameInformationEx || FileInformationClass == FileLinkInformationEx )
          v29 = *(_BYTE *)FileInformation & 1;
        else
          v29 = *(_BYTE *)FileInformation;
        CurrentStackLocation[-1].Parameters.SetFile.ReplaceIfExists = v29;
        goto LABEL_63;
      }
LABEL_62:
      CurrentStackLocation[-1].Parameters.Create.EaLength = *(_DWORD *)FileInformation;
LABEL_63:
      if ( *((_WORD *)FileInformation + 10) != 92 && !*((_QWORD *)FileInformation + 1) )
        goto LABEL_24;
      FinalStatus = IopOpenLinkOrRenameTarget(&Handle, (__int64)v15, (__int64)FileInformation, FileObject);
      if ( FinalStatus >= 0 )
        goto LABEL_24;
      v28 = 2;
      goto LABEL_67;
    }
  }
  if ( FileInformationClass == FileMoveClusterInformation )
    goto LABEL_62;
  if ( FileInformationClass == FileMemoryPartitionInformation )
  {
    FinalStatus = IopSetFileMemoryPartitionInformation(FileObject, FileInformation, v37);
    v15->IoStatus.Status = FinalStatus;
    v28 = 0;
    v15->IoStatus.Information = 0LL;
LABEL_67:
    --v15->CurrentLocation;
    --v15->Tail.Overlay.CurrentStackLocation;
LABEL_68:
    IofCompleteRequest(v15, v28);
    goto LABEL_25;
  }
LABEL_24:
  FinalStatus = IofCallDriver(DeviceObject, v15);
LABEL_25:
  if ( v31 )
  {
    if ( FinalStatus == 259 )
    {
      if ( KeWaitForSingleObject(&FileObject->Event, Executive, 0, (FileObject->Flags & 4) != 0, 0LL) == 257 )
        IopCancelAlertedRequest(&FileObject->Event, v15);
      FinalStatus = FileObject->FinalStatus;
    }
    IopReleaseFileObjectLock((PADAPTER_OBJECT)FileObject);
  }
  else if ( FinalStatus == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    FinalStatus = v34;
  }
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return FinalStatus;
}
