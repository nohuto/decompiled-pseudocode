/*
 * XREFs of IopMountVolume @ 0x1405DB490
 * Callers:
 *     IopCheckVpbMounted @ 0x14035E670 (IopCheckVpbMounted.c)
 *     IoVerifyVolume @ 0x140894040 (IoVerifyVolume.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x14020D120 (IopAllocateIrpWithExtension.c)
 *     IopQueryVpbFlagsSafe @ 0x14020DC38 (IopQueryVpbFlagsSafe.c)
 *     MmIsThisAnNtAsSystem @ 0x14020DC80 (MmIsThisAnNtAsSystem.c)
 *     IopMountInitializeVpb @ 0x14020DC90 (IopMountInitializeVpb.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeResetEvent @ 0x140269BE0 (KeResetEvent.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     FsRtlIsTotalDeviceFailure @ 0x140276F10 (FsRtlIsTotalDeviceFailure.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     IoGetActivityIdThread @ 0x1402F9570 (IoGetActivityIdThread.c)
 *     IopWaitForLockAlertable @ 0x1402FB8F0 (IopWaitForLockAlertable.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     IofCallDriver @ 0x14035C710 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x14035E8E0 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14035F8F0 (IopIncrementDeviceObjectRefCount.c)
 *     IopLogEventIoMgrMountBegin @ 0x140393000 (IopLogEventIoMgrMountBegin.c)
 *     IopLogEventIoMgrMountSucceeded @ 0x1403930F8 (IopLogEventIoMgrMountSucceeded.c)
 *     IopLogEventIoMgrMountFailed @ 0x140393E04 (IopLogEventIoMgrMountFailed.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     IoVolumeDeviceToDosName @ 0x14068A7C0 (IoVolumeDeviceToDosName.c)
 *     IoVolumeDeviceToGuid @ 0x1406F9AC0 (IoVolumeDeviceToGuid.c)
 *     IopLoadFileSystemDriver @ 0x14077D394 (IopLoadFileSystemDriver.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopMountVolume(ULONG_PTR BugCheckParameter1, char a2, char a3, char a4, ULONG_PTR *a5)
{
  const GUID *v5; // rsi
  BOOLEAN IsThisAnNtAsSystem; // al
  struct _KTHREAD *CurrentThread; // r13
  BOOLEAN v11; // bl
  struct _KTHREAD *v12; // rcx
  signed int v13; // ebx
  char v14; // r12
  char VpbFlagsSafe; // al
  __int64 v16; // rax
  __int64 v17; // r15
  int v18; // eax
  __int64 *v19; // rsi
  __int64 **v20; // r14
  int v21; // ecx
  char v22; // dl
  __int64 *v23; // rax
  bool v24; // zf
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r13
  struct _KEVENT *v29; // r14
  struct _DEVICE_OBJECT *v31; // rbx
  char v32; // r12
  struct _DEVICE_OBJECT *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 IrpWithExtension; // rax
  IRP *v37; // r13
  __int64 v38; // rcx
  int v39; // eax
  ULONG_PTR v40; // r12
  NTSTATUS v41; // eax
  ULONG_PTR v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  char v46; // al
  char v47; // [rsp+30h] [rbp-81h]
  BOOLEAN v49; // [rsp+32h] [rbp-7Fh]
  char v50; // [rsp+33h] [rbp-7Eh]
  char v51; // [rsp+34h] [rbp-7Dh]
  int v54; // [rsp+38h] [rbp-79h]
  int v55; // [rsp+3Ch] [rbp-75h]
  __int64 v56; // [rsp+40h] [rbp-71h]
  const GUID *ActivityId; // [rsp+48h] [rbp-69h]
  UNICODE_STRING DosName; // [rsp+50h] [rbp-61h] BYREF
  NTSTATUS Status[4]; // [rsp+60h] [rbp-51h] BYREF
  __int128 v60; // [rsp+70h] [rbp-41h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-31h]
  ULONG_PTR *v62; // [rsp+88h] [rbp-29h]
  __int64 *v63; // [rsp+90h] [rbp-21h]
  struct _KEVENT Event; // [rsp+98h] [rbp-19h] BYREF
  __int128 v65; // [rsp+B0h] [rbp-1h] BYREF

  v62 = a5;
  v5 = 0LL;
  v50 = 0;
  v47 = 0;
  memset(&Event, 0, sizeof(Event));
  ActivityId = 0LL;
  *(_OWORD *)Status = 0LL;
  v60 = 0LL;
  v65 = 0LL;
  DosName = 0LL;
  IsThisAnNtAsSystem = MmIsThisAnNtAsSystem();
  CurrentThread = KeGetCurrentThread();
  v56 = (__int64)CurrentThread;
  v11 = IsThisAnNtAsSystem;
  v49 = IsThisAnNtAsSystem;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&IopFilesystemDatabaseShutdownRundown) )
    return 3221225865LL;
  if ( v11 )
  {
    ActivityId = (const GUID *)IoGetActivityIdThread();
    v5 = ActivityId;
    IoVolumeDeviceToGuid(BugCheckParameter1, &v65);
    IoVolumeDeviceToDosName((PVOID)BugCheckParameter1, &DosName);
  }
  if ( a3 )
  {
    v14 = 0;
  }
  else
  {
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    v13 = IopWaitForLockAlertable((PVOID)(BugCheckParameter1 + 280), CurrentThread->PreviousMode, a4);
    if ( v13 < 0 )
    {
      KeLeaveCriticalRegion();
      if ( DosName.Buffer )
        ExFreePoolWithTag(DosName.Buffer, 0);
      goto LABEL_33;
    }
    v11 = v49;
    v14 = 1;
    v47 = 1;
  }
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
  VpbFlagsSafe = IopQueryVpbFlagsSafe(BugCheckParameter1);
  if ( (VpbFlagsSafe & 9) != 0 )
  {
    v13 = (VpbFlagsSafe & 8) != 0 ? 0xC00000C0 : 0;
    goto LABEL_23;
  }
  if ( v11 )
  {
    IopLogEventIoMgrMountBegin(v5, (ULONGLONG)&v65, &DosName.Length);
    v50 = 1;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  *(_DWORD *)(BugCheckParameter1 + 48) &= ~2u;
  v13 = -1073741823;
  v16 = *(_QWORD *)(BugCheckParameter1 + 24);
  v17 = BugCheckParameter1;
  while ( v16 )
  {
    v17 = v16;
    v16 = *(_QWORD *)(v16 + 24);
  }
  ObfReferenceObject((PVOID)v17);
  v18 = *(_DWORD *)(BugCheckParameter1 + 72);
  if ( v18 == 7 || v18 == 36 )
  {
    v19 = &IopDiskFileSystemQueueHead;
  }
  else
  {
    v19 = &IopCdRomFileSystemQueueHead;
    if ( v18 != 2 )
      v19 = &IopTapeFileSystemQueueHead;
  }
  v20 = (__int64 **)*v19;
  v21 = *(_WORD *)(*(_QWORD *)(BugCheckParameter1 + 56) + 4LL) & 0x10;
  v54 = v21;
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
      v14 = v47;
      goto LABEL_23;
    }
    v23 = *v20;
    v24 = *v20 == v19;
    v63 = *v20;
    v51 = v24;
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
  LOBYTE(v34) = v32 + *(_BYTE *)(v17 + 76);
  IrpWithExtension = IopAllocateIrpWithExtension(v35, v34);
  v37 = (IRP *)IrpWithExtension;
  if ( !IrpWithExtension )
  {
    v13 = -1073741670;
    goto LABEL_90;
  }
  v38 = *(_QWORD *)(IrpWithExtension + 184);
  *(_DWORD *)(IrpWithExtension + 16) = 66;
  *(_BYTE *)(IrpWithExtension + 64) = 0;
  *(_QWORD *)(IrpWithExtension + 80) = &Event;
  *(_QWORD *)(IrpWithExtension + 72) = Status;
  *(_QWORD *)(IrpWithExtension + 152) = v56;
  *(_BYTE *)(v38 - 70) = a2;
  *(_WORD *)(v38 - 72) = 269;
  *(_QWORD *)(v38 - 64) = *(_QWORD *)(BugCheckParameter1 + 56);
  v39 = IopFsRegistrationOps;
  *(_QWORD *)(v38 - 56) = v17;
  v55 = v39;
  ObfReferenceObject(v31);
  v40 = BugCheckParameter2;
  IopIncrementDeviceObjectRefCount(BugCheckParameter2, 1);
  _InterlockedIncrement(&IopMountsInProgress);
  ExReleaseResourceLite(&IopDatabaseResource);
  v41 = IofCallDriver(v31, v37);
  if ( v41 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  else
  {
    *(_QWORD *)&Status[2] = 0LL;
    Status[0] = v41;
  }
  ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
  _InterlockedAdd(&IopMountsInProgress, 0xFFFFFFFF);
  if ( IopMountCompletionWaiters )
    KeSetEvent(&IopMountCompletionEvent, 0, 0);
  HalPutDmaAdapter((PADAPTER_OBJECT)v31);
  IopDecrementDeviceObjectRef(v40, 0, 0);
  v13 = Status[0];
  if ( Status[0] >= 0 )
  {
    v42 = IopMountInitializeVpb(BugCheckParameter1, v17, v54, v51);
    *v62 = v42;
LABEL_51:
    v22 = a2;
    v21 = v54;
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
  if ( v55 != IopFsRegistrationOps )
  {
    v20 = (__int64 **)&v60;
    *(_QWORD *)&v60 = *v19;
    v13 = -1073741489;
  }
  if ( v13 != -1073741412 )
  {
LABEL_50:
    if ( v13 != -1073741489 && FsRtlIsTotalDeviceFailure(v13) )
    {
      if ( !a2 || v63 == v19 )
        goto LABEL_22;
      v20 = *(__int64 ***)(v19[1] + 8);
    }
    goto LABEL_51;
  }
  IopIncrementDeviceObjectRefCount(v40, 1);
  ExReleaseResourceLite(&IopDatabaseResource);
  v29 = (struct _KEVENT *)(BugCheckParameter1 + 280);
  if ( !a3 )
  {
    KeSetEvent((PRKEVENT)(BugCheckParameter1 + 280), 0, 0);
    v47 = 0;
  }
  v28 = v56;
  KeLeaveCriticalRegionThread(v56, v43, v44, v45);
  IopLoadFileSystemDriver(v40);
  if ( !a3 )
  {
    v13 = IopWaitForLockAlertable((PVOID)(BugCheckParameter1 + 280), *(_BYTE *)(v56 + 562), a4);
    if ( v13 < 0 )
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)v17);
      KeLeaveCriticalRegion();
      v14 = v47;
      goto LABEL_24;
    }
    v47 = 1;
  }
  --*(_WORD *)(v56 + 484);
  ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
  v46 = IopQueryVpbFlagsSafe(BugCheckParameter1);
  if ( (v46 & 8) != 0 )
  {
    v13 = -1073741632;
LABEL_90:
    v14 = v47;
    goto LABEL_56;
  }
  if ( (v46 & 1) == 0 )
  {
    v20 = (__int64 **)&v60;
    *(_QWORD *)&v60 = *v19;
    v13 = -1073741489;
    goto LABEL_50;
  }
  HalPutDmaAdapter((PADAPTER_OBJECT)v17);
  v13 = 0;
LABEL_22:
  v14 = v47;
  if ( v13 < 0 )
    goto LABEL_56;
LABEL_23:
  ExReleaseResourceLite(&IopDatabaseResource);
  v28 = v56;
  v29 = (struct _KEVENT *)(BugCheckParameter1 + 280);
LABEL_24:
  if ( v14 )
  {
    KeSetEvent(v29, 0, 0);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegionThread(v28, v25, v26, v27);
  if ( v49 )
  {
    if ( v50 )
    {
      if ( v13 < 0 )
        IopLogEventIoMgrMountFailed(ActivityId, (ULONGLONG)&v65, &DosName.Length, v13);
      else
        IopLogEventIoMgrMountSucceeded(ActivityId, (ULONGLONG)&v65, &DosName.Length);
    }
    if ( DosName.Buffer )
      ExFreePoolWithTag(DosName.Buffer, 0);
  }
  if ( v13 < 0 && (*(_DWORD *)(BugCheckParameter1 + 48) & 0x100) != 0 && (unsigned int)InitializationPhase < 2 )
    KeBugCheckEx(0xEDu, BugCheckParameter1, v13, 0LL, 0LL);
LABEL_33:
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&IopFilesystemDatabaseShutdownRundown);
  return (unsigned int)v13;
}
