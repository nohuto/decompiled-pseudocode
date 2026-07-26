/*
 * XREFs of ?ndisCreatePMRejectWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_SINGLE_LIST_ENTRY@@H@Z @ 0x1C0016FEC
 * Callers:
 *     ?ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0016CFC (-ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 *     ?ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00921C0 (-ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_RE.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0012D38 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 */

__int64 __fastcall ndisCreatePMRejectWorkItem(_LIST_ENTRY *a1, _LIST_ENTRY *a2, int a3)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rbx

  if ( !a2 )
    return 0LL;
  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6977444Eu);
  if ( PoolWithTag )
  {
    PoolWithTag->List = 0LL;
    *(_OWORD *)&PoolWithTag->WorkerRoutine = 0LL;
    PoolWithTag[1].List = 0LL;
    PoolWithTag[1].WorkerRoutine = 0LL;
    PoolWithTag[1].List.Flink = a1;
    PoolWithTag[1].List.Blink = a2;
    LODWORD(PoolWithTag[1].WorkerRoutine) = a3;
    ndisReferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)a1, 0xFu);
    PoolWithTag->List.Flink = 0LL;
    PoolWithTag->WorkerRoutine = ndisPMRejectAsync;
    PoolWithTag->Parameter = PoolWithTag;
    ExQueueWorkItem(PoolWithTag, (WORK_QUEUE_TYPE)40);
    return 0LL;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xEu,
      0x49u,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids);
  return 3221225626LL;
}
