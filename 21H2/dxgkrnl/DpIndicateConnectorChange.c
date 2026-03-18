/*
 * XREFs of DpIndicateConnectorChange @ 0x1C0025880
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x1C0024A9C (DpiFdoHandleDisplayDetectControl.c)
 *     DpiFdoQueueConnectionChangePackage @ 0x1C00608A8 (DpiFdoQueueConnectionChangePackage.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01BC204 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpIndicateConnectorChange(PDEVICE_OBJECT DeviceObject)
{
  unsigned int v1; // ebx
  char v3; // r15
  char v4; // bp
  char *DeviceExtension; // rdi
  KIRQL CurrentIrql; // al
  KSPIN_LOCK *v7; // rcx
  int v8; // eax
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v1 = 0;
  v3 = 0;
  v4 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !DeviceObject
    || (DeviceExtension = (char *)DeviceObject->DeviceExtension) == 0LL
    || *((_DWORD *)DeviceExtension + 4) != 1953656900
    || *((_DWORD *)DeviceExtension + 5) != 2 )
  {
    v11 = -1073741811LL;
    v1 = -1073741811;
    v12 = 2LL;
    goto LABEL_19;
  }
  CurrentIrql = KeGetCurrentIrql();
  v7 = (KSPIN_LOCK *)(DeviceExtension + 3520);
  if ( CurrentIrql >= 2u )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v7, &LockHandle);
  }
  else
  {
    v3 = 1;
    KeAcquireInStackQueuedSpinLock(v7, &LockHandle);
  }
  v8 = *((_DWORD *)DeviceExtension + 879);
  if ( (v8 & 2) == 0 )
  {
    v4 = 1;
    KeClearEvent((PRKEVENT)DeviceExtension + 147);
    v8 = *((_DWORD *)DeviceExtension + 879);
  }
  *((_DWORD *)DeviceExtension + 879) = v8 | 1;
  if ( v3 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  else
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( v4 )
  {
    WorkItem = IoAllocateWorkItem(DeviceObject);
    if ( WorkItem )
    {
      IoQueueWorkItemEx(WorkItem, DpiIndicateConnectorChangeWorkItem, DelayedWorkQueue, 0LL);
      return v1;
    }
    v11 = 0LL;
    v12 = 6LL;
LABEL_19:
    WdLogSingleEntry1(v12, v11);
  }
  return v1;
}
