/*
 * XREFs of DpiPdoSetMonitorDriverInterfaceState @ 0x1C02D86E0
 * Callers:
 *     DxgkPowerOnOffMonitor @ 0x1C0172494 (DxgkPowerOnOffMonitor.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C0174078 (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiPdoSetMonitorDriverInterfaceState(PVOID Object, char a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *PoolWithTag; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  _QWORD *v11; // rax
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // rax

  v2 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x74727044u);
  if ( PoolWithTag )
  {
    ObfReferenceObject(Object);
    PoolWithTag[2] = Object;
    *((_BYTE *)PoolWithTag + 24) = a2;
    KeWaitForSingleObject(&stru_1C00B0EC0, Executive, 0, 0, 0LL);
    v11 = (_QWORD *)qword_1C00B0F00;
    if ( *(__int64 **)qword_1C00B0F00 != &qword_1C00B0EF8 )
      __fastfail(3u);
    *PoolWithTag = &qword_1C00B0EF8;
    PoolWithTag[1] = v11;
    *v11 = PoolWithTag;
    qword_1C00B0F00 = (__int64)PoolWithTag;
    if ( !byte_1C00B0EB8 )
    {
      WorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
      if ( !WorkItem )
      {
        v2 = -1073741801;
        v18 = WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
        *(_QWORD *)(v18 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v18);
        byte_1C00B0EB8 = 0;
        goto LABEL_9;
      }
      IoQueueWorkItemEx(WorkItem, DpiPdoSetMonitorDriverInterfaceStateWorker, DelayedWorkQueue, 0LL);
    }
    byte_1C00B0EB8 = 1;
LABEL_9:
    KeReleaseMutex(&stru_1C00B0EC0, 0);
    return v2;
  }
  v10 = WdLogNewEntry5_WdLowResource(v6, v5, v8, v9);
  v2 = -1073741801;
  *(_QWORD *)(v10 + 24) = -1073741801LL;
  WdLogEvent5_WdLowResource(v10);
  return v2;
}
