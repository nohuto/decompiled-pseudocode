/*
 * XREFs of ?VidMmQueueAsyncOperation@@YAHPEAU_VIDMM_ASYNC_OPERATION@@@Z @ 0x1C0076928
 * Callers:
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C0076188 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C0076770 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 *     ?VidMmUnpinAllocAsync@@YAJPEAVVIDMM_GLOBAL@@PEAVDXGALLOCATION@@@Z @ 0x1C00BC27C (-VidMmUnpinAllocAsync@@YAJPEAVVIDMM_GLOBAL@@PEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002230 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VidMmQueueAsyncOperation(LIST_ENTRY *a1)
{
  struct _WORK_QUEUE_ITEM *v2; // rbx
  LIST_ENTRY v3; // xmm1
  LIST_ENTRY v4; // xmm0
  LIST_ENTRY v5; // xmm1
  struct _EX_RUNDOWN_REF *Blink; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax

  if ( g_VidMmAsyncOpPendingCount > 64 )
    return 0LL;
  v2 = (struct _WORK_QUEUE_ITEM *)operator new[](0x40uLL, 0x33346956u, (POOL_TYPE)512);
  if ( !v2 )
    return 0LL;
  _InterlockedIncrement(&g_VidMmAsyncOpPendingCount);
  if ( LODWORD(a1[2].Flink) == 3 )
  {
    Blink = (struct _EX_RUNDOWN_REF *)a1[3].Flink[1].Blink;
    if ( !ExAcquireRundownProtection(Blink + 31) )
    {
      v10 = WdLogNewEntry5_WdCriticalError(v9, v8);
      *(_QWORD *)(v10 + 24) = 270LL;
      *(_QWORD *)(v10 + 32) = 62LL;
      *(_QWORD *)(v10 + 40) = Blink;
      *(_OWORD *)(v10 + 48) = 0LL;
      WdLogEvent5_WdCriticalError(v10);
    }
  }
  v3 = a1[1];
  v2->List = *a1;
  v4 = a1[2];
  *(LIST_ENTRY *)&v2->WorkerRoutine = v3;
  v5 = a1[3];
  v2[1].List = v4;
  *(LIST_ENTRY *)&v2[1].WorkerRoutine = v5;
  v2->List.Flink = 0LL;
  v2->WorkerRoutine = (PWORKER_THREAD_ROUTINE)VidMmProcessAsyncOperation;
  v2->Parameter = v2;
  ExQueueWorkItem(v2, DelayedWorkQueue);
  return 1LL;
}
