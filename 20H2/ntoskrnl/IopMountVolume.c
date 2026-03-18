/*
 * XREFs of IopMountVolume @ 0x1406CC9E8
 * Callers:
 *     IopCheckVpbMounted @ 0x14020D990 (IopCheckVpbMounted.c)
 *     IoVerifyVolume @ 0x140896910 (IoVerifyVolume.c)
 * Callees:
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x14020D560 (IopDecrementDeviceObjectRef.c)
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14020DD20 (IopIncrementDeviceObjectRefCount.c)
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     IofCallDriver @ 0x140211330 (IofCallDriver.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140222030 (ExAcquireResourceSharedLite.c)
 *     IopWaitForLockAlertable @ 0x1402419E4 (IopWaitForLockAlertable.c)
 *     IoGetActivityIdThread @ 0x140243FF0 (IoGetActivityIdThread.c)
 *     IopAllocateIrpWithExtension @ 0x14031F2B8 (IopAllocateIrpWithExtension.c)
 *     IopQueryVpbFlagsSafe @ 0x14031F310 (IopQueryVpbFlagsSafe.c)
 *     MmIsThisAnNtAsSystem @ 0x14031F360 (MmIsThisAnNtAsSystem.c)
 *     IopMountInitializeVpb @ 0x14031F370 (IopMountInitializeVpb.c)
 *     FsRtlIsTotalDeviceFailure @ 0x1403444E0 (FsRtlIsTotalDeviceFailure.c)
 *     IopLogEventIoMgrMountBegin @ 0x140392A40 (IopLogEventIoMgrMountBegin.c)
 *     IopLogEventIoMgrMountSucceeded @ 0x140392B38 (IopLogEventIoMgrMountSucceeded.c)
 *     IopLogEventIoMgrMountFailed @ 0x140393844 (IopLogEventIoMgrMountFailed.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     IoVolumeDeviceToGuid @ 0x1405DD520 (IoVolumeDeviceToGuid.c)
 *     IoVolumeDeviceToDosName @ 0x1405FA930 (IoVolumeDeviceToDosName.c)
 *     IopLoadFileSystemDriver @ 0x1407793F4 (IopLoadFileSystemDriver.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopMountVolume(struct _DEVICE_OBJECT *BugCheckParameter1, UCHAR a2, char a3, char a4, ULONG_PTR *a5)
{
  const GUID *v5; // rsi
  BOOLEAN IsThisAnNtAsSystem; // al
  struct _KTHREAD *CurrentThread; // r13
  BOOLEAN v11; // bl
  struct _KTHREAD *v12; // rcx
  signed int v13; // ebx
  char v14; // r12
  char VpbFlagsSafe; // al
  struct _DEVICE_OBJECT *AttachedDevice; // rax
  __int64 v17; // r15
  ULONG DeviceType; // eax
  __int64 *v19; // rsi
  __int64 **v20; // r14
  int v21; // ecx
  UCHAR v22; // dl
  __int64 *v23; // rax
  bool v24; // zf
  __int64 v25; // r13
  struct _KEVENT *p_DeviceLock; // r14
  struct _DEVICE_OBJECT *v28; // rbx
  char v29; // r12
  struct _DEVICE_OBJECT *v30; // rax
  __int64 v31; // rcx
  IRP *IrpWithExtension; // rax
  IRP *v33; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  int v35; // eax
  ULONG_PTR v36; // r12
  NTSTATUS v37; // eax
  ULONG_PTR v38; // rax
  char v39; // al
  char v40; // [rsp+30h] [rbp-81h]
  BOOLEAN v42; // [rsp+32h] [rbp-7Fh]
  char v43; // [rsp+33h] [rbp-7Eh]
  char v44; // [rsp+34h] [rbp-7Dh]
  int v47; // [rsp+38h] [rbp-79h]
  int v48; // [rsp+3Ch] [rbp-75h]
  __int64 v49; // [rsp+40h] [rbp-71h]
  const GUID *ActivityId; // [rsp+48h] [rbp-69h]
  UNICODE_STRING DosName; // [rsp+50h] [rbp-61h] BYREF
  NTSTATUS Status[4]; // [rsp+60h] [rbp-51h] BYREF
  __int128 v53; // [rsp+70h] [rbp-41h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-31h]
  ULONG_PTR *v55; // [rsp+88h] [rbp-29h]
  __int64 *v56; // [rsp+90h] [rbp-21h]
  struct _KEVENT Event; // [rsp+98h] [rbp-19h] BYREF
  GUID v58; // [rsp+B0h] [rbp-1h] BYREF

  v55 = a5;
  v5 = 0LL;
  v43 = 0;
  v40 = 0;
  memset(&Event, 0, sizeof(Event));
  ActivityId = 0LL;
  *(_OWORD *)Status = 0LL;
  v53 = 0LL;
  v58 = 0LL;
  DosName = 0LL;
  IsThisAnNtAsSystem = MmIsThisAnNtAsSystem();
  CurrentThread = KeGetCurrentThread();
  v49 = (__int64)CurrentThread;
  v11 = IsThisAnNtAsSystem;
  v42 = IsThisAnNtAsSystem;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&IopFilesystemDatabaseShutdownRundown) )
    return 3221225865LL;
  if ( v11 )
  {
    ActivityId = (const GUID *)IoGetActivityIdThread();
    v5 = ActivityId;
    IoVolumeDeviceToGuid(BugCheckParameter1, &v58);
    IoVolumeDeviceToDosName(BugCheckParameter1, &DosName);
  }
  if ( a3 )
  {
    v14 = 0;
  }
  else
  {
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    v13 = IopWaitForLockAlertable(&BugCheckParameter1->DeviceLock, CurrentThread->PreviousMode, a4);
    if ( v13 < 0 )
    {
      KeLeaveCriticalRegion();
      if ( DosName.Buffer )
        ExFreePoolWithTag(DosName.Buffer, 0);
      goto LABEL_33;
    }
    v11 = v42;
    v14 = 1;
    v40 = 1;
  }
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
  VpbFlagsSafe = IopQueryVpbFlagsSafe((__int64)BugCheckParameter1);
  if ( (VpbFlagsSafe & 9) != 0 )
  {
    v13 = (VpbFlagsSafe & 8) != 0 ? 0xC00000C0 : 0;
    goto LABEL_23;
  }
  if ( v11 )
  {
    IopLogEventIoMgrMountBegin(v5, (ULONGLONG)&v58, &DosName.Length);
    v43 = 1;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  BugCheckParameter1->Flags &= ~2u;
  v13 = -1073741823;
  AttachedDevice = BugCheckParameter1->AttachedDevice;
  v17 = (__int64)BugCheckParameter1;
  while ( AttachedDevice )
  {
    v17 = (__int64)AttachedDevice;
    AttachedDevice = AttachedDevice->AttachedDevice;
  }
  ObfReferenceObject((PVOID)v17);
  DeviceType = BugCheckParameter1->DeviceType;
  if ( DeviceType == 7 || DeviceType == 36 )
  {
    v19 = &IopDiskFileSystemQueueHead;
  }
  else
  {
    v19 = &IopCdRomFileSystemQueueHead;
    if ( DeviceType != 2 )
      v19 = &IopTapeFileSystemQueueHead;
  }
  v20 = (__int64 **)*v19;
  v21 = BugCheckParameter1->Vpb->Flags & 0x10;
  v47 = v21;
  if ( (__int64 *)*v19 == v19 )
  {
LABEL_56:
    HalPutDmaAdapter((PADAPTER_OBJECT)v17);
    goto LABEL_23;
  }
  v22 = a2;
  while ( 1 )
  {
    if ( v13 >= 0 )
    {
      v14 = v40;
      goto LABEL_23;
    }
    v23 = *v20;
    v24 = *v20 == v19;
    v56 = *v20;
    v44 = v24;
    if ( !v22 && v23 == v19 && v20 != (__int64 **)*v19 )
      goto LABEL_22;
    if ( !v21 || v23 == v19 )
      break;
LABEL_21:
    v20 = (__int64 **)*v20;
    if ( v20 == (__int64 **)v19 )
      goto LABEL_22;
  }
  v28 = (struct _DEVICE_OBJECT *)(v20 - 10);
  v29 = 1;
  v30 = (struct _DEVICE_OBJECT *)*(v20 - 7);
  BugCheckParameter2 = (ULONG_PTR)(v20 - 10);
  while ( v30 )
  {
    v28 = v30;
    ++v29;
    v30 = v30->AttachedDevice;
  }
  KeResetEvent(&Event);
  IrpWithExtension = (IRP *)IopAllocateIrpWithExtension(v31, v29 + *(_BYTE *)(v17 + 76), 0);
  v33 = IrpWithExtension;
  if ( !IrpWithExtension )
  {
    v13 = -1073741670;
    goto LABEL_90;
  }
  CurrentStackLocation = IrpWithExtension->Tail.Overlay.CurrentStackLocation;
  IrpWithExtension->Flags = 66;
  IrpWithExtension->RequestorMode = 0;
  IrpWithExtension->UserEvent = &Event;
  IrpWithExtension->UserIosb = (PIO_STATUS_BLOCK)Status;
  IrpWithExtension->Tail.Overlay.Thread = (PETHREAD)v49;
  CurrentStackLocation[-1].Flags = a2;
  *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 269;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)BugCheckParameter1->Vpb;
  v35 = IopFsRegistrationOps;
  CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = (PUNICODE_STRING)v17;
  v48 = v35;
  ObfReferenceObject(v28);
  v36 = BugCheckParameter2;
  IopIncrementDeviceObjectRefCount(BugCheckParameter2, 1);
  _InterlockedIncrement(&IopMountsInProgress);
  ExReleaseResourceLite(&IopDatabaseResource);
  v37 = IofCallDriver(v28, v33);
  if ( v37 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  else
  {
    *(_QWORD *)&Status[2] = 0LL;
    Status[0] = v37;
  }
  ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
  _InterlockedAdd(&IopMountsInProgress, 0xFFFFFFFF);
  if ( IopMountCompletionWaiters )
    KeSetEvent(&IopMountCompletionEvent, 0, 0);
  HalPutDmaAdapter((PADAPTER_OBJECT)v28);
  IopDecrementDeviceObjectRef(v36, 0, 0);
  v13 = Status[0];
  if ( Status[0] >= 0 )
  {
    v38 = IopMountInitializeVpb((__int64)BugCheckParameter1, v17, v47, v44);
    *v55 = v38;
LABEL_51:
    v22 = a2;
    v21 = v47;
    goto LABEL_21;
  }
  if ( ((unsigned int)(Status[0] + 1073741662) <= 1
     || (unsigned int)(Status[0] + 1073741806) <= 2
     || Status[0] == -2147483626
     || Status[0] == -1073741643)
    && *(_QWORD *)&Status[2] == 1LL )
  {
    goto LABEL_22;
  }
  if ( v48 != IopFsRegistrationOps )
  {
    v20 = (__int64 **)&v53;
    *(_QWORD *)&v53 = *v19;
    v13 = -1073741489;
  }
  if ( v13 != -1073741412 )
  {
LABEL_50:
    if ( v13 != -1073741489 && FsRtlIsTotalDeviceFailure(v13) )
    {
      if ( !a2 || v56 == v19 )
        goto LABEL_22;
      v20 = *(__int64 ***)(v19[1] + 8);
    }
    goto LABEL_51;
  }
  IopIncrementDeviceObjectRefCount(v36, 1);
  ExReleaseResourceLite(&IopDatabaseResource);
  p_DeviceLock = &BugCheckParameter1->DeviceLock;
  if ( !a3 )
  {
    KeSetEvent(&BugCheckParameter1->DeviceLock, 0, 0);
    v40 = 0;
  }
  v25 = v49;
  KeLeaveCriticalRegionThread(v49);
  IopLoadFileSystemDriver(v36);
  if ( !a3 )
  {
    v13 = IopWaitForLockAlertable(&BugCheckParameter1->DeviceLock, *(_BYTE *)(v49 + 562), a4);
    if ( v13 < 0 )
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)v17);
      KeLeaveCriticalRegion();
      v14 = v40;
      goto LABEL_24;
    }
    v40 = 1;
  }
  --*(_WORD *)(v49 + 484);
  ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
  v39 = IopQueryVpbFlagsSafe((__int64)BugCheckParameter1);
  if ( (v39 & 8) != 0 )
  {
    v13 = -1073741632;
LABEL_90:
    v14 = v40;
    goto LABEL_56;
  }
  if ( (v39 & 1) == 0 )
  {
    v20 = (__int64 **)&v53;
    *(_QWORD *)&v53 = *v19;
    v13 = -1073741489;
    goto LABEL_50;
  }
  HalPutDmaAdapter((PADAPTER_OBJECT)v17);
  v13 = 0;
LABEL_22:
  v14 = v40;
  if ( v13 < 0 )
    goto LABEL_56;
LABEL_23:
  ExReleaseResourceLite(&IopDatabaseResource);
  v25 = v49;
  p_DeviceLock = &BugCheckParameter1->DeviceLock;
LABEL_24:
  if ( v14 )
  {
    KeSetEvent(p_DeviceLock, 0, 0);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegionThread(v25);
  if ( v42 )
  {
    if ( v43 )
    {
      if ( v13 < 0 )
        IopLogEventIoMgrMountFailed(ActivityId, (ULONGLONG)&v58, &DosName.Length, v13);
      else
        IopLogEventIoMgrMountSucceeded(ActivityId, (ULONGLONG)&v58, &DosName.Length);
    }
    if ( DosName.Buffer )
      ExFreePoolWithTag(DosName.Buffer, 0);
  }
  if ( v13 < 0 && (BugCheckParameter1->Flags & 0x100) != 0 && (unsigned int)InitializationPhase < 2 )
    KeBugCheckEx(0xEDu, (ULONG_PTR)BugCheckParameter1, v13, 0LL, 0LL);
LABEL_33:
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&IopFilesystemDatabaseShutdownRundown);
  return (unsigned int)v13;
}
