/*
 * XREFs of IoRegisterFsRegistrationChangeMountAware @ 0x1407C9F60
 * Callers:
 *     IoRegisterFsRegistrationChange @ 0x140893D70 (IoRegisterFsRegistrationChange.c)
 * Callees:
 *     KeResetEvent @ 0x140269BE0 (KeResetEvent.c)
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     IoGetActivityIdThread @ 0x1402F9570 (IoGetActivityIdThread.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     IopGetFsRegistrationInProgress @ 0x140506770 (IopGetFsRegistrationInProgress.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x140506A98 (IopIsKnownGoodLegacyFsFilter.c)
 *     FsRtlSetDriverBacking @ 0x140780C20 (FsRtlSetDriverBacking.c)
 *     IopNotifyAlreadyRegisteredFileSystems @ 0x1407CA108 (IopNotifyAlreadyRegisteredFileSystems.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall IoRegisterFsRegistrationChangeMountAware(
        PDRIVER_OBJECT DriverObject,
        PDRIVER_FS_NOTIFICATION DriverNotificationRoutine,
        BOOLEAN SynchronizeWithMounts)
{
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  NTSTATUS v11; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  REGHANDLE v20; // rdi
  int Length; // ecx
  struct _LIST_ENTRY *ActivityIdThread; // rax
  __int16 v23; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-40h] BYREF
  wchar_t *Buffer; // [rsp+48h] [rbp-30h]
  int v26; // [rsp+50h] [rbp-28h]
  int v27; // [rsp+54h] [rbp-24h]

  if ( IopBlockLegacyFsFilters && !IopIsKnownGoodLegacyFsFilter((const void **)&DriverObject->DriverName) )
  {
    v20 = IoMgrTraceHandle;
    if ( EtwEventEnabled(IoMgrTraceHandle, &IoMgr_LegacyFsFilterBlockedByPolicy) )
    {
      Length = DriverObject->DriverName.Length;
      UserData.Reserved = 0;
      v27 = 0;
      v23 = (unsigned __int16)Length >> 1;
      UserData.Ptr = (ULONGLONG)&v23;
      Buffer = DriverObject->DriverName.Buffer;
      UserData.Size = 2;
      v26 = Length;
      ActivityIdThread = IoGetActivityIdThread();
      EtwWrite(v20, &IoMgr_LegacyFsFilterBlockedByPolicy, (LPCGUID)ActivityIdThread, 2u, &UserData);
    }
    return -1073741637;
  }
  result = FsRtlSetDriverBacking((__int64)DriverObject, 1);
  if ( result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !SynchronizeWithMounts )
  {
LABEL_22:
    ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
    goto LABEL_5;
  }
  if ( !ExAcquireResourceExclusiveLite(&IopDatabaseResource, 0) )
  {
    if ( IopGetFsRegistrationInProgress() )
    {
      v11 = -1073741267;
      goto LABEL_9;
    }
    goto LABEL_22;
  }
LABEL_5:
  if ( (__int64 *)IopFsNotifyChangeQueueHead != &IopFsNotifyChangeQueueHead
    && *(PDRIVER_OBJECT *)(qword_140C45CE8 + 16) == DriverObject
    && *(PDRIVER_FS_NOTIFICATION *)(qword_140C45CE8 + 24) == DriverNotificationRoutine )
  {
    ExReleaseResourceLite(&IopDatabaseResource);
    v11 = -1073741768;
LABEL_9:
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9, v10);
    return v11;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x73466F49u);
  if ( !PoolWithTag )
  {
    ExReleaseResourceLite(&IopDatabaseResource);
    v11 = -1073741670;
    goto LABEL_9;
  }
  PoolWithTag[2] = DriverObject;
  PoolWithTag[3] = DriverNotificationRoutine;
  v13 = (_QWORD *)qword_140C45CE8;
  if ( *(__int64 **)qword_140C45CE8 != &IopFsNotifyChangeQueueHead )
    __fastfail(3u);
  *PoolWithTag = &IopFsNotifyChangeQueueHead;
  PoolWithTag[1] = v13;
  *v13 = PoolWithTag;
  qword_140C45CE8 = (__int64)PoolWithTag;
  if ( SynchronizeWithMounts == 1 )
  {
    while ( IopMountsInProgress )
    {
      ++IopMountCompletionWaiters;
      ExReleaseResourceLite(&IopDatabaseResource);
      KeWaitForSingleObject(&IopMountCompletionEvent, Executive, 0, 0, 0LL);
      ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
      if ( --IopMountCompletionWaiters )
      {
        if ( !IopMountsInProgress )
          break;
      }
      KeResetEvent(&IopMountCompletionEvent);
    }
  }
  IopNotifyAlreadyRegisteredFileSystems(&IopNetworkFileSystemQueueHead, DriverNotificationRoutine, 0LL);
  LOBYTE(v14) = 1;
  IopNotifyAlreadyRegisteredFileSystems(&IopCdRomFileSystemQueueHead, DriverNotificationRoutine, v14);
  LOBYTE(v15) = 1;
  IopNotifyAlreadyRegisteredFileSystems(&IopDiskFileSystemQueueHead, DriverNotificationRoutine, v15);
  LOBYTE(v16) = 1;
  IopNotifyAlreadyRegisteredFileSystems(&IopTapeFileSystemQueueHead, DriverNotificationRoutine, v16);
  ExReleaseResourceLite(&IopDatabaseResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v17, v18, v19);
  ObfReferenceObject(DriverObject);
  return 0;
}
