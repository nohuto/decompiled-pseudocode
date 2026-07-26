/*
 * XREFs of ?ndisCreatePMPdcTaskClientWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008F3EC
 * Callers:
 *     ?ndisMEvaluateMagicPacketWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z @ 0x1C008FAF4 (-ndisMEvaluateMagicPacketWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0012D38 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 */

__int64 __fastcall ndisCreatePMPdcTaskClientWorkItem(_LIST_ENTRY *a1)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  struct _WORK_QUEUE_ITEM *v3; // rbx

  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6977444Eu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag->List.Flink = 0LL;
    PoolWithTag->List.Blink = 0LL;
    PoolWithTag->WorkerRoutine = 0LL;
    PoolWithTag->Parameter = 0LL;
    PoolWithTag[1].List.Flink = a1;
    if ( ndisReferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)a1, 0x12u) )
    {
      v3->List.Flink = 0LL;
      v3->WorkerRoutine = ndisPMPDCTaskClient;
      v3->Parameter = v3;
      ExQueueWorkItem(v3, (WORK_QUEUE_TYPE)40);
    }
    else
    {
      ExFreePoolWithTag(v3, 0);
    }
    return 0LL;
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x87u,
        (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids);
    return 3221225626LL;
  }
}
