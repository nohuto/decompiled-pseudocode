/*
 * XREFs of SmStoreCompressionStop @ 0x1406C5700
 * Callers:
 *     MmProcessWorkingSetControl @ 0x1406C54D4 (MmProcessWorkingSetControl.c)
 * Callees:
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x14025371C (MmQueryProcessWorkingSetSwapPages.c)
 *     SmpKeyedStoreEntryGet @ 0x140253B98 (SmpKeyedStoreEntryGet.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140256E28 (SmKmStoreRefFromStoreIndex.c)
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 *     ?SmTrimWsStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@_K@Z @ 0x140598690 (-SmTrimWsStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@_K@Z.c)
 *     SmSwapStore @ 0x1406F0E7C (SmSwapStore.c)
 */

int __fastcall SmStoreCompressionStop(int a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  int v4; // ebx
  _DWORD **v5; // rax
  __int64 v6; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-40h] BYREF
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+48h] [rbp-28h] BYREF
  _KPROCESS *Process; // [rsp+98h] [rbp+28h] BYREF
  __int64 v11; // [rsp+A0h] [rbp+30h] BYREF

  WorkItem.List.Blink = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v2 = SmpKeyedStoreEntryGet((ULONG_PTR)qword_140D24188, (__int64 *)&Process, 0, 0);
  v3 = v2;
  if ( v2 )
    v4 = *(unsigned __int16 *)(v2 + 16);
  else
    v4 = dword_140D241B0;
  if ( v4 != -1 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    WorkItem.List.Flink = 0LL;
    WorkItem.WorkerRoutine = (void (__fastcall *)(void *))SmpFlushStorePages;
    WorkItem.Parameter = &Event;
    ExQueueWorkItem(&WorkItem, CriticalWorkQueue);
    LODWORD(v2) = KeWaitForSingleObject(&Event, WrKernel, 0, 0, 0LL);
    if ( v3 )
    {
      SmSwapStore(1LL);
      if ( a1 )
      {
        v5 = (_DWORD **)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, v4 & 0x3FF);
        SMKM_STORE_MGR<SM_TRAITS>::SmTrimWsStore(v6, *v5, 0LL);
      }
      LODWORD(v2) = MmQueryProcessWorkingSetSwapPages((__int64)Process, &v11);
      if ( (int)v2 < 0 )
        LODWORD(v2) = SmSwapStore(2LL);
    }
  }
  return v2;
}
