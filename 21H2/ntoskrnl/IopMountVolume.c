/*
 * XREFs of IopMountVolume @ 0x1406E5720
 * Callers:
 *     IopCheckVpbMounted @ 0x140353920 (IopCheckVpbMounted.c)
 *     IoVerifyVolume @ 0x140893EE0 (IoVerifyVolume.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     FsRtlIsTotalDeviceFailure @ 0x1402559A0 (FsRtlIsTotalDeviceFailure.c)
 *     KeResetEvent @ 0x14027BC40 (KeResetEvent.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     IopAllocateIrpWithExtension @ 0x1402ED748 (IopAllocateIrpWithExtension.c)
 *     IopQueryVpbFlagsSafe @ 0x1402EE268 (IopQueryVpbFlagsSafe.c)
 *     MmIsThisAnNtAsSystem @ 0x1402EE2B0 (MmIsThisAnNtAsSystem.c)
 *     IopMountInitializeVpb @ 0x1402EE2C0 (IopMountInitializeVpb.c)
 *     IoGetActivityIdThread @ 0x1402EE820 (IoGetActivityIdThread.c)
 *     IopWaitForLockAlertable @ 0x1402F0BA0 (IopWaitForLockAlertable.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     ObfReferenceObject @ 0x14034B230 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14034BF60 (ExAcquireResourceSharedLite.c)
 *     IofCallDriver @ 0x1403519C0 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x1403538F0 (KeInitializeEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x140353B90 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x140354BA0 (IopIncrementDeviceObjectRefCount.c)
 *     IopLogEventIoMgrMountBegin @ 0x140392EB0 (IopLogEventIoMgrMountBegin.c)
 *     IopLogEventIoMgrMountSucceeded @ 0x140392FA8 (IopLogEventIoMgrMountSucceeded.c)
 *     IopLogEventIoMgrMountFailed @ 0x140393CB4 (IopLogEventIoMgrMountFailed.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     IoVolumeDeviceToDosName @ 0x140620B50 (IoVolumeDeviceToDosName.c)
 *     IoVolumeDeviceToGuid @ 0x1407221C0 (IoVolumeDeviceToGuid.c)
 *     IopLoadFileSystemDriver @ 0x14077D1D4 (IopLoadFileSystemDriver.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
  __int64 v25; // r13
  struct _KEVENT *v26; // r14
  struct _DEVICE_OBJECT *v28; // rbx
  char v29; // r12
  struct _DEVICE_OBJECT *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 IrpWithExtension; // rax
  IRP *v34; // r13
  __int64 v35; // rcx
  int v36; // eax
  ULONG_PTR v37; // r12
  __int64 v38; // r8
  _DWORD *v39; // r9
  NTSTATUS v40; // eax
  _DWORD *v41; // r9
  __int64 v42; // r8
  _DWORD *v43; // r9
  ULONG_PTR v44; // rax
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
  __int128 v64; // [rsp+B0h] [rbp-1h] BYREF
  __int64 retaddr; // [rsp+108h] [rbp+57h]

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
    v11 = v48;
    v14 = 1;
    v46 = 1;
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
    IopLogEventIoMgrMountBegin(v5, (ULONGLONG)&v64, &DosName.Length);
    v49 = 1;
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
  LOBYTE(v31) = v29 + *(_BYTE *)(v17 + 76);
  IrpWithExtension = IopAllocateIrpWithExtension(v32, v31, 0LL, retaddr);
  v34 = (IRP *)IrpWithExtension;
  if ( !IrpWithExtension )
  {
    v13 = -1073741670;
    goto LABEL_90;
  }
  v35 = *(_QWORD *)(IrpWithExtension + 184);
  *(_DWORD *)(IrpWithExtension + 16) = 66;
  *(_BYTE *)(IrpWithExtension + 64) = 0;
  *(_QWORD *)(IrpWithExtension + 80) = &Event;
  *(_QWORD *)(IrpWithExtension + 72) = Status;
  *(_QWORD *)(IrpWithExtension + 152) = v55;
  *(_BYTE *)(v35 - 70) = a2;
  *(_WORD *)(v35 - 72) = 269;
  *(_QWORD *)(v35 - 64) = *(_QWORD *)(BugCheckParameter1 + 56);
  v36 = IopFsRegistrationOps;
  *(_QWORD *)(v35 - 56) = v17;
  v54 = v36;
  ObfReferenceObject(v28);
  v37 = BugCheckParameter2;
  IopIncrementDeviceObjectRefCount(BugCheckParameter2, 1, v38, v39);
  _InterlockedIncrement(&IopMountsInProgress);
  ExReleaseResourceLite(&IopDatabaseResource);
  v40 = IofCallDriver(v28, v34);
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
  HalPutDmaAdapter((PADAPTER_OBJECT)v28);
  IopDecrementDeviceObjectRef(v37, 0, 0LL, v41);
  v13 = Status[0];
  if ( Status[0] >= 0 )
  {
    v44 = IopMountInitializeVpb(BugCheckParameter1, v17, v53, v50);
    *v61 = v44;
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
  IopIncrementDeviceObjectRefCount(v37, 1, v42, v43);
  ExReleaseResourceLite(&IopDatabaseResource);
  v26 = (struct _KEVENT *)(BugCheckParameter1 + 280);
  if ( !a3 )
  {
    KeSetEvent((PRKEVENT)(BugCheckParameter1 + 280), 0, 0);
    v46 = 0;
  }
  v25 = v55;
  KeLeaveCriticalRegionThread(v55);
  IopLoadFileSystemDriver(v37);
  if ( !a3 )
  {
    v13 = IopWaitForLockAlertable((PVOID)(BugCheckParameter1 + 280), *(_BYTE *)(v55 + 562), a4);
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
  v45 = IopQueryVpbFlagsSafe(BugCheckParameter1);
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
  v25 = v55;
  v26 = (struct _KEVENT *)(BugCheckParameter1 + 280);
LABEL_24:
  if ( v14 )
  {
    KeSetEvent(v26, 0, 0);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegionThread(v25);
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
  if ( v13 < 0 && (*(_DWORD *)(BugCheckParameter1 + 48) & 0x100) != 0 && (unsigned int)InitializationPhase < 2 )
    KeBugCheckEx(0xEDu, BugCheckParameter1, v13, 0LL, 0LL);
LABEL_33:
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&IopFilesystemDatabaseShutdownRundown);
  return (unsigned int)v13;
}
