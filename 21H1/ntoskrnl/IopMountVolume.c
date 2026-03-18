/*
 * XREFs of IopMountVolume @ 0x140701D54
 * Callers:
 *     IopCheckVpbMounted @ 0x140254590 (IopCheckVpbMounted.c)
 *     IoVerifyVolume @ 0x14088FB00 (IoVerifyVolume.c)
 * Callees:
 *     KeResetEvent @ 0x1402055D0 (KeResetEvent.c)
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     IofCallDriver @ 0x140252F00 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x140254800 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x140255810 (IopIncrementDeviceObjectRefCount.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     IopAllocateIrpWithExtension @ 0x14033F4AC (IopAllocateIrpWithExtension.c)
 *     IopQueryVpbFlagsSafe @ 0x14033F4FC (IopQueryVpbFlagsSafe.c)
 *     MmIsThisAnNtAsSystem @ 0x14033F550 (MmIsThisAnNtAsSystem.c)
 *     IopMountInitializeVpb @ 0x14033F560 (IopMountInitializeVpb.c)
 *     FsRtlIsTotalDeviceFailure @ 0x140354200 (FsRtlIsTotalDeviceFailure.c)
 *     IopWaitForLockAlertable @ 0x140359C04 (IopWaitForLockAlertable.c)
 *     IoGetActivityIdThread @ 0x14035B390 (IoGetActivityIdThread.c)
 *     IopLogEventIoMgrMountBegin @ 0x14038FA10 (IopLogEventIoMgrMountBegin.c)
 *     IopLogEventIoMgrMountSucceeded @ 0x14038FB08 (IopLogEventIoMgrMountSucceeded.c)
 *     IopLogEventIoMgrMountFailed @ 0x140390814 (IopLogEventIoMgrMountFailed.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     IoVolumeDeviceToDosName @ 0x1405DB3D0 (IoVolumeDeviceToDosName.c)
 *     IoVolumeDeviceToGuid @ 0x140687F50 (IoVolumeDeviceToGuid.c)
 *     IopLoadFileSystemDriver @ 0x140768A04 (IopLoadFileSystemDriver.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r13
  struct _KEVENT *p_DeviceLock; // r14
  struct _DEVICE_OBJECT *v31; // rbx
  char v32; // r12
  struct _DEVICE_OBJECT *v33; // rax
  __int64 v34; // rcx
  IRP *IrpWithExtension; // rax
  IRP *v36; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  int v38; // eax
  ULONG_PTR v39; // r12
  NTSTATUS v40; // eax
  ULONG_PTR v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  char v45; // al
  char v46; // [rsp+30h] [rbp-81h]
  BOOLEAN v48; // [rsp+32h] [rbp-7Fh]
  char v49; // [rsp+33h] [rbp-7Eh]
  char v50; // [rsp+34h] [rbp-7Dh]
  int v53; // [rsp+38h] [rbp-79h]
  int v54; // [rsp+3Ch] [rbp-75h]
  __int64 v55; // [rsp+40h] [rbp-71h]
  const GUID *ActivityId; // [rsp+48h] [rbp-69h]
  UNICODE_STRING DosName; // [rsp+50h] [rbp-61h] BYREF
  NTSTATUS Status[4]; // [rsp+60h] [rbp-51h] BYREF
  __int128 v59; // [rsp+70h] [rbp-41h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-31h]
  ULONG_PTR *v61; // [rsp+88h] [rbp-29h]
  __int64 *v62; // [rsp+90h] [rbp-21h]
  struct _KEVENT Event; // [rsp+98h] [rbp-19h] BYREF
  GUID v64; // [rsp+B0h] [rbp-1h] BYREF

  v61 = a5;
  v5 = 0LL;
  v49 = 0;
  v46 = 0;
  memset(&Event, 0, sizeof(Event));
  ActivityId = 0LL;
  *(_OWORD *)Status = 0LL;
  v59 = 0LL;
  v64 = 0LL;
  DosName = 0LL;
  IsThisAnNtAsSystem = MmIsThisAnNtAsSystem();
  CurrentThread = KeGetCurrentThread();
  v55 = (__int64)CurrentThread;
  v11 = IsThisAnNtAsSystem;
  v48 = IsThisAnNtAsSystem;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&IopFilesystemDatabaseShutdownRundown) )
    return 3221225865LL;
  if ( v11 )
  {
    ActivityId = (const GUID *)IoGetActivityIdThread();
    v5 = ActivityId;
    IoVolumeDeviceToGuid(BugCheckParameter1, &v64);
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
    v11 = v48;
    v14 = 1;
    v46 = 1;
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
    IopLogEventIoMgrMountBegin(v5, (ULONGLONG)&v64, &DosName.Length);
    v49 = 1;
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
  v53 = v21;
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
      v14 = v46;
      goto LABEL_23;
    }
    v23 = *v20;
    v24 = *v20 == v19;
    v62 = *v20;
    v50 = v24;
    if ( !v22 && v23 == v19 && v20 != (__int64 **)*v19 )
      goto LABEL_22;
    if ( !v21 || v23 == v19 )
      break;
LABEL_21:
    v20 = (__int64 **)*v20;
    if ( v20 == (__int64 **)v19 )
      goto LABEL_22;
  }
  v31 = (struct _DEVICE_OBJECT *)(v20 - 10);
  v32 = 1;
  v33 = (struct _DEVICE_OBJECT *)*(v20 - 7);
  BugCheckParameter2 = (ULONG_PTR)(v20 - 10);
  while ( v33 )
  {
    v31 = v33;
    ++v32;
    v33 = v33->AttachedDevice;
  }
  KeResetEvent(&Event);
  IrpWithExtension = (IRP *)IopAllocateIrpWithExtension(v34, v32 + *(_BYTE *)(v17 + 76), 0);
  v36 = IrpWithExtension;
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
  IrpWithExtension->Tail.Overlay.Thread = (PETHREAD)v55;
  CurrentStackLocation[-1].Flags = a2;
  *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 269;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)BugCheckParameter1->Vpb;
  v38 = IopFsRegistrationOps;
  CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = (PUNICODE_STRING)v17;
  v54 = v38;
  ObfReferenceObject(v31);
  v39 = BugCheckParameter2;
  IopIncrementDeviceObjectRefCount(BugCheckParameter2, 1);
  _InterlockedIncrement(&IopMountsInProgress);
  ExReleaseResourceLite(&IopDatabaseResource);
  v40 = IofCallDriver(v31, v36);
  if ( v40 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  else
  {
    *(_QWORD *)&Status[2] = 0LL;
    Status[0] = v40;
  }
  ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
  _InterlockedAdd(&IopMountsInProgress, 0xFFFFFFFF);
  if ( IopMountCompletionWaiters )
    KeSetEvent(&IopMountCompletionEvent, 0, 0);
  HalPutDmaAdapter((PADAPTER_OBJECT)v31);
  IopDecrementDeviceObjectRef(v39, 0);
  v13 = Status[0];
  if ( Status[0] >= 0 )
  {
    v41 = IopMountInitializeVpb((__int64)BugCheckParameter1, v17, v53, v50);
    *v61 = v41;
LABEL_51:
    v22 = a2;
    v21 = v53;
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
  if ( v54 != IopFsRegistrationOps )
  {
    v20 = (__int64 **)&v59;
    *(_QWORD *)&v59 = *v19;
    v13 = -1073741489;
  }
  if ( v13 != -1073741412 )
  {
LABEL_50:
    if ( v13 != -1073741489 && FsRtlIsTotalDeviceFailure(v13) )
    {
      if ( !a2 || v62 == v19 )
        goto LABEL_22;
      v20 = *(__int64 ***)(v19[1] + 8);
    }
    goto LABEL_51;
  }
  IopIncrementDeviceObjectRefCount(v39, 1);
  ExReleaseResourceLite(&IopDatabaseResource);
  p_DeviceLock = &BugCheckParameter1->DeviceLock;
  if ( !a3 )
  {
    KeSetEvent(&BugCheckParameter1->DeviceLock, 0, 0);
    v46 = 0;
  }
  v28 = v55;
  KeLeaveCriticalRegionThread(v55, v42, v43, v44);
  IopLoadFileSystemDriver(v39);
  if ( !a3 )
  {
    v13 = IopWaitForLockAlertable(&BugCheckParameter1->DeviceLock, *(_BYTE *)(v55 + 562), a4);
    if ( v13 < 0 )
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)v17);
      KeLeaveCriticalRegion();
      v14 = v46;
      goto LABEL_24;
    }
    v46 = 1;
  }
  --*(_WORD *)(v55 + 484);
  ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
  v45 = IopQueryVpbFlagsSafe((__int64)BugCheckParameter1);
  if ( (v45 & 8) != 0 )
  {
    v13 = -1073741632;
LABEL_90:
    v14 = v46;
    goto LABEL_56;
  }
  if ( (v45 & 1) == 0 )
  {
    v20 = (__int64 **)&v59;
    *(_QWORD *)&v59 = *v19;
    v13 = -1073741489;
    goto LABEL_50;
  }
  HalPutDmaAdapter((PADAPTER_OBJECT)v17);
  v13 = 0;
LABEL_22:
  v14 = v46;
  if ( v13 < 0 )
    goto LABEL_56;
LABEL_23:
  ExReleaseResourceLite(&IopDatabaseResource);
  v28 = v55;
  p_DeviceLock = &BugCheckParameter1->DeviceLock;
LABEL_24:
  if ( v14 )
  {
    KeSetEvent(p_DeviceLock, 0, 0);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegionThread(v28, v25, v26, v27);
  if ( v48 )
  {
    if ( v49 )
    {
      if ( v13 < 0 )
        IopLogEventIoMgrMountFailed(ActivityId, (ULONGLONG)&v64, &DosName.Length, v13);
      else
        IopLogEventIoMgrMountSucceeded(ActivityId, (ULONGLONG)&v64, &DosName.Length);
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
