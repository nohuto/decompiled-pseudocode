/*
 * XREFs of DpIndicateConnectorChange @ 0x1C0050030
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x1C001FE98 (DpiFdoHandleDisplayDetectControl.c)
 *     DpiFdoQueueConnectionChangePackage @ 0x1C0020A78 (DpiFdoQueueConnectionChangePackage.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013FC34 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpIndicateConnectorChange(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  unsigned int v2; // ebx
  char v4; // r14
  char v5; // bp
  char *DeviceExtension; // rdi
  KSPIN_LOCK *v7; // rcx
  int v8; // eax
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v4 = 0;
  v5 = 0;
  if ( DeviceObject
    && (DeviceExtension = (char *)DeviceObject->DeviceExtension) != 0LL
    && *((_DWORD *)DeviceExtension + 4) == 1953656900
    && *((_DWORD *)DeviceExtension + 5) == 2 )
  {
    v7 = (KSPIN_LOCK *)(DeviceExtension + 3520);
    if ( KeGetCurrentIrql() >= 2u )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel(v7, &LockHandle);
    }
    else
    {
      v4 = 1;
      KeAcquireInStackQueuedSpinLock(v7, &LockHandle);
    }
    v8 = *((_DWORD *)DeviceExtension + 879);
    if ( (v8 & 2) == 0 )
    {
      v5 = 1;
      KeClearEvent((PRKEVENT)DeviceExtension + 147);
      v8 = *((_DWORD *)DeviceExtension + 879);
    }
    *((_DWORD *)DeviceExtension + 879) = v8 | 1;
    if ( v4 )
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    else
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( v5 )
    {
      WorkItem = IoAllocateWorkItem(DeviceObject);
      if ( WorkItem )
      {
        IoQueueWorkItemEx(WorkItem, DpiIndicateConnectorChangeWorkItem, DelayedWorkQueue, 0LL);
      }
      else
      {
        v14 = WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
        *(_QWORD *)(v14 + 24) = 0LL;
        WdLogEvent5_WdLowResource(v14);
      }
    }
  }
  else
  {
    v2 = -1073741811;
    v15 = WdLogNewEntry5_WdError(DeviceObject, a2);
    *(_QWORD *)(v15 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v15);
  }
  return v2;
}
