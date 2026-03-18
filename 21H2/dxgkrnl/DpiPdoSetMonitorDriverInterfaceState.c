/*
 * XREFs of DpiPdoSetMonitorDriverInterfaceState @ 0x1C0397F40
 * Callers:
 *     DxgkPowerOnOffMonitor @ 0x1C01F0E64 (DxgkPowerOnOffMonitor.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C02164B8 (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiPdoSetMonitorDriverInterfaceState(PVOID Object, char a2)
{
  unsigned int v2; // ebx
  _QWORD *PoolWithTag; // rdi
  _QWORD *v6; // rax
  struct _IO_WORKITEM *WorkItem; // rax

  v2 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x74727044u);
  if ( PoolWithTag )
  {
    ObfReferenceObject(Object);
    PoolWithTag[2] = Object;
    *((_BYTE *)PoolWithTag + 24) = a2;
    KeWaitForSingleObject(&stru_1C0130848, Executive, 0, 0, 0LL);
    v6 = (_QWORD *)qword_1C0130888;
    if ( *(__int64 **)qword_1C0130888 != &qword_1C0130880 )
      __fastfail(3u);
    *PoolWithTag = &qword_1C0130880;
    PoolWithTag[1] = v6;
    *v6 = PoolWithTag;
    qword_1C0130888 = (__int64)PoolWithTag;
    if ( !byte_1C0130840 )
    {
      WorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
      if ( !WorkItem )
      {
        v2 = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        byte_1C0130840 = 0;
        goto LABEL_9;
      }
      IoQueueWorkItemEx(WorkItem, DpiPdoSetMonitorDriverInterfaceStateWorker, DelayedWorkQueue, 0LL);
    }
    byte_1C0130840 = 1;
LABEL_9:
    KeReleaseMutex(&stru_1C0130848, 0);
    return v2;
  }
  v2 = -1073741801;
  WdLogSingleEntry1(6LL, -1073741801LL);
  return v2;
}
