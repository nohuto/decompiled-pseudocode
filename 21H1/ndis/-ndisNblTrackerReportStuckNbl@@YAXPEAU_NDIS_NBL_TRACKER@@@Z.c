/*
 * XREFs of ?ndisNblTrackerReportStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C0073B40
 * Callers:
 *     ?ndisNblTrackerWatchdogTimer@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C0008890 (-ndisNblTrackerWatchdogTimer@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0012D38 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 */

void __fastcall ndisNblTrackerReportStuckNbl(struct _NDIS_NBL_TRACKER *a1)
{
  __int16 v1; // ax
  char *PoolWithTag; // rax
  char *v4; // rbx
  struct _NDIS_MINIPORT_BLOCK *Context; // rcx

  v1 = *((_WORD *)a1 + 8);
  if ( !v1 || v1 > 2 && v1 <= 5 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x5754444Eu);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      Context = (struct _NDIS_MINIPORT_BLOCK *)a1->Context;
      *(_QWORD *)PoolWithTag = Context;
      *((_DWORD *)PoolWithTag + 2) = *((__int16 *)a1 + 8);
      *((_QWORD *)PoolWithTag + 4) = ndisNblTrackerWatchdogWorkerRoutine;
      *((_QWORD *)PoolWithTag + 5) = PoolWithTag;
      *((_QWORD *)PoolWithTag + 2) = 0LL;
      if ( ndisReferenceMiniport(Context, 0x68u) )
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(v4 + 16), NormalWorkQueue);
      else
        ExFreePoolWithTag(v4, 0);
    }
  }
}
