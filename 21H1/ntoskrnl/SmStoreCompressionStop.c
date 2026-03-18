/*
 * XREFs of SmStoreCompressionStop @ 0x1406D11CC
 * Callers:
 *     MmProcessWorkingSetControl @ 0x1406D0FA0 (MmProcessWorkingSetControl.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 *     SmpKeyedStoreEntryGet @ 0x140239CC0 (SmpKeyedStoreEntryGet.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14023DDA0 (SmKmStoreRefFromStoreIndex.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x1402CCAAC (MmQueryProcessWorkingSetSwapPages.c)
 *     ?SmTrimWsStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@_K@Z @ 0x140594500 (-SmTrimWsStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@_K@Z.c)
 *     SmSwapStore @ 0x1406561BC (SmSwapStore.c)
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
  v2 = SmpKeyedStoreEntryGet((ULONG_PTR)qword_140D24188, &Process, 0, 0);
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
      SmSwapStore(1);
      if ( a1 )
      {
        v5 = (_DWORD **)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, v4 & 0x3FF);
        SMKM_STORE_MGR<SM_TRAITS>::SmTrimWsStore(v6, *v5, 0LL);
      }
      LODWORD(v2) = MmQueryProcessWorkingSetSwapPages((__int64)Process, &v11);
      if ( (int)v2 < 0 )
        LODWORD(v2) = SmSwapStore(2);
    }
  }
  return v2;
}
