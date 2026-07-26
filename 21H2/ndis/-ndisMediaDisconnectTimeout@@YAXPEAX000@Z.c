/*
 * XREFs of ?ndisMediaDisconnectTimeout@@YAXPEAX000@Z @ 0x1C0082FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006D8C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 */

void __fastcall ndisMediaDisconnectTimeout(
        PVOID SystemSpecific1,
        struct _NDIS_MINIPORT_BLOCK *FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  KSPIN_LOCK *p_Lock; // rcx
  unsigned int PnPFlags; // eax
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x17u,
      (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
      FunctionContext);
  KeAcquireSpinLockAtDpcLevel(&FunctionContext->Lock);
  FunctionContext->MiniportThread = 0LL;
  p_Lock = &FunctionContext->Lock;
  PnPFlags = FunctionContext->PnPFlags;
  if ( (PnPFlags & 8) != 0 )
  {
    FunctionContext->PnPFlags = PnPFlags & 0xFFFFFFF7;
    KeReleaseSpinLockFromDpcLevel(p_Lock);
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6977444Eu);
    if ( PoolWithTag )
    {
      FunctionContext->PnPFlags |= 0x400u;
      PoolWithTag->List.Flink = 0LL;
      PoolWithTag->WorkerRoutine = ndisMediaDisconnectWorker;
      PoolWithTag->Parameter = PoolWithTag;
      PoolWithTag[1].List.Flink = (_LIST_ENTRY *)FunctionContext;
      ExQueueWorkItem(PoolWithTag, (WORK_QUEUE_TYPE)40);
    }
    else
    {
      ndisDereferenceMiniport(FunctionContext, 0xBu);
    }
  }
  else
  {
    KeReleaseSpinLockFromDpcLevel(p_Lock);
    ndisDereferenceMiniport(FunctionContext, 0xBu);
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x18u,
      (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
      FunctionContext);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x19u,
      (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
      FunctionContext);
}
