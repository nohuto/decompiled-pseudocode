/*
 * XREFs of ?NotifyUnblockUEFIFrameBufferRanges@DXGADAPTER@@QEAAJPEBU_DXGK_QUERYSEGMENTMEMORYSTATE@@@Z @ 0x1C0036008
 * Callers:
 *     DxgkUnblockUEFIFrameBufferRangesCB @ 0x1C0041560 (DxgkUnblockUEFIFrameBufferRangesCB.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::NotifyUnblockUEFIFrameBufferRanges(
        DXGADAPTER *this,
        const struct _DXGK_QUERYSEGMENTMEMORYSTATE *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  char *PoolWithTag; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct _IO_WORKITEM *WorkItem; // r14
  __int64 v17; // rax
  __int64 v18; // rax

  v2 = 0;
  if ( a2->NumInvalidMemoryRanges == 1 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x28uLL, 0x4B677844u);
    if ( PoolWithTag )
    {
      WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)this + 27));
      if ( WorkItem )
      {
        *(_QWORD *)PoolWithTag = *(_QWORD *)((char *)this + 316);
        *(struct _DXGK_QUERYSEGMENTMEMORYSTATE *)(PoolWithTag + 8) = *a2;
        *((_QWORD *)PoolWithTag + 2) = PoolWithTag + 24;
        *(DXGK_MEMORYRANGE *)(PoolWithTag + 24) = *a2->pMemoryRanges;
        v18 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v18 + 24) = 2615LL;
        WdLogEvent5_WdEvent(v18);
        IoQueueWorkItemEx(WorkItem, HandleUnblockUEFIFrameBufferRanges, DelayedWorkQueue, PoolWithTag);
        PoolWithTag = 0LL;
      }
      else
      {
        v2 = -1073741670;
        v17 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
        *(_QWORD *)(v17 + 24) = 2606LL;
        WdLogEvent5_WdLowResource(v17);
      }
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
    }
    else
    {
      v2 = -1073741670;
      v11 = WdLogNewEntry5_WdLowResource(v7, v6, v9, v10);
      *(_QWORD *)(v11 + 24) = 2598LL;
      WdLogEvent5_WdLowResource(v11);
    }
  }
  else
  {
    v2 = -1073741811;
    v5 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v5 + 24) = a2->NumInvalidMemoryRanges;
    WdLogEvent5_WdError(v5);
  }
  return v2;
}
