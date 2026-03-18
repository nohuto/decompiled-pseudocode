/*
 * XREFs of DpiMiracastTargetDeviceChange @ 0x1C0052A10
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00188E0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C00521F0 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C0052440 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTearDownAssociation @ 0x1C0052EF8 (DpiMiracastTearDownAssociation.c)
 *     DxgkFreeUnicodeString @ 0x1C0188EC0 (DxgkFreeUnicodeString.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x1C02C8F48 (DpiMiracastBroadcastDeviceStateChange.c)
 */

__int64 __fastcall DpiMiracastTargetDeviceChange(char *NotificationStructure, char *Context)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  void *v7; // rcx
  __int64 v8; // rax
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v14; // rax
  char *v15; // r14
  void *v16; // rbx
  int v17; // r15d
  void *v18; // rcx
  NTSTATUS v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rax
  int v24; // eax
  _QWORD *v25; // rcx
  PVOID *v26; // rax
  char **v27; // rax
  void *v28; // rcx
  void *v29; // rcx
  void *v30; // rcx
  void *v31; // rcx
  void *v32; // rcx
  void *v33; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+80h] [rbp+8h] BYREF

  LODWORD(v3) = 0;
  if ( !NotificationStructure )
  {
    v4 = WdLogNewEntry5_WdError(0LL, Context);
    v5 = -1073741585LL;
LABEL_46:
    *(_QWORD *)(v4 + 24) = v5;
    WdLogEvent5_WdError(v4);
    return (unsigned int)v5;
  }
  if ( !Context || *((_DWORD *)Context + 4) != 1953656900 || *((_DWORD *)Context + 5) != 14 )
  {
    v4 = WdLogNewEntry5_WdError(NotificationStructure, Context);
    v5 = -1073741584LL;
    goto LABEL_46;
  }
  v6 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v6 )
    v6 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( v6 )
  {
    v8 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
    if ( !v8 )
      v8 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
    if ( v8 )
    {
      v14 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
      if ( !v14 )
        v14 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
      if ( v14 )
      {
        LODWORD(v3) = -1073741811;
      }
      else
      {
        v15 = Context + 32;
        ExEnterCriticalRegionAndAcquireFastMutexUnsafe(Context + 32);
        v16 = (void *)*((_QWORD *)Context + 50);
        v17 = *((_DWORD *)Context + 102);
        *((_QWORD *)Context + 50) = 0LL;
        *((_QWORD *)Context + 11) = 0LL;
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v15);
        if ( v16 )
        {
          IoUnregisterPlugPlayNotificationEx(v16);
          IoSetDeviceInterfaceState((PUNICODE_STRING)Context + 8, 0);
          if ( v17 )
          {
            DpiMiracastStopMiracastSessionSync(Context, 0, 0LL, 0LL, 0x87u, 0);
            v18 = (void *)*((_QWORD *)Context + 58);
            Timeout.QuadPart = -300000000LL;
            v19 = KeWaitForSingleObject(v18, Executive, 0, 0, &Timeout);
            v22 = v19;
            if ( v19 )
            {
              v23 = WdLogNewEntry5_WdError(v21, v20);
              *(_QWORD *)(v23 + 24) = v22;
              WdLogEvent5_WdError(v23);
              DpiMiracastTearDownAssociation(Context, 0);
            }
          }
          AcquireMiniportListMutex();
          ExEnterCriticalRegionAndAcquireFastMutexUnsafe(v15);
          *((_QWORD *)Context + 11) = KeGetCurrentThread();
          v24 = *((_DWORD *)Context + 102);
          if ( v24 )
          {
            *((_DWORD *)Context + 103) = v24;
            *((_DWORD *)Context + 102) = 0;
            DpiMiracastBroadcastDeviceStateChange(Context);
          }
          KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
          v25 = *(_QWORD **)Context;
          if ( *(char **)(*(_QWORD *)Context + 8LL) != Context
            || (v26 = (PVOID *)*((_QWORD *)Context + 1), *v26 != Context)
            || (*v26 = v25,
                v25[1] = v26,
                v27 = (char **)qword_1C00AFE30,
                *(__int64 **)qword_1C00AFE30 != &qword_1C00AFE28) )
          {
            __fastfail(3u);
          }
          *(_QWORD *)Context = &qword_1C00AFE28;
          *((_QWORD *)Context + 1) = v27;
          *v27 = Context;
          qword_1C00AFE30 = (__int64)Context;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v28 = (void *)*((_QWORD *)Context + 22);
          if ( v28 )
          {
            ObfDereferenceObject(v28);
            *((_QWORD *)Context + 22) = 0LL;
            *((_QWORD *)Context + 23) = 0LL;
          }
          DxgkFreeUnicodeString(Context + 160);
          v29 = (void *)*((_QWORD *)Context + 42);
          if ( v29 )
          {
            ExFreePoolWithTag(v29, 0);
            *((_QWORD *)Context + 42) = 0LL;
          }
          v30 = (void *)*((_QWORD *)Context + 43);
          if ( v30 )
          {
            ExFreePoolWithTag(v30, 0);
            *((_QWORD *)Context + 43) = 0LL;
          }
          v31 = (void *)*((_QWORD *)Context + 44);
          if ( v31 )
          {
            ExFreePoolWithTag(v31, 0);
            *((_QWORD *)Context + 44) = 0LL;
          }
          v32 = (void *)*((_QWORD *)Context + 45);
          if ( v32 )
          {
            ExFreePoolWithTag(v32, 0);
            *((_QWORD *)Context + 45) = 0LL;
          }
          v33 = (void *)*((_QWORD *)Context + 46);
          if ( v33 )
          {
            ExFreePoolWithTag(v33, 0);
            *((_QWORD *)Context + 46) = 0LL;
          }
          RtlFreeUnicodeString((PUNICODE_STRING)Context + 8);
          *((_QWORD *)Context + 11) = 0LL;
          ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v15);
          _InterlockedExchange64(&qword_1C00AFA50, 0LL);
          KeReleaseMutex(Mutex, 0);
          DpiMiracastReleaseMiracastDeviceContext((int *)Context, 0LL);
        }
      }
    }
    else
    {
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(Context + 32);
      *((_QWORD *)Context + 11) = KeGetCurrentThread();
      DeviceObjectPointer = IoGetDeviceObjectPointer(
                              (PUNICODE_STRING)Context + 9,
                              0x80000000,
                              (PFILE_OBJECT *)Context + 22,
                              (PDEVICE_OBJECT *)Context + 23);
      *((_QWORD *)Context + 11) = 0LL;
      v3 = DeviceObjectPointer;
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(Context + 32);
      if ( (int)v3 < 0 )
      {
        v12 = WdLogNewEntry5_WdError(v11, v10);
        *(_QWORD *)(v12 + 24) = v3;
        WdLogEvent5_WdError(v12);
      }
    }
  }
  else
  {
    DpiMiracastStopMiracastSessionSync(Context, 0, 0LL, 0LL, 0x84u, 0);
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(Context + 32);
    v7 = (void *)*((_QWORD *)Context + 22);
    *((_QWORD *)Context + 11) = KeGetCurrentThread();
    if ( v7 )
    {
      ObfDereferenceObject(v7);
      *((_QWORD *)Context + 22) = 0LL;
      *((_QWORD *)Context + 23) = 0LL;
    }
    *((_QWORD *)Context + 11) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(Context + 32);
  }
  return (unsigned int)v3;
}
