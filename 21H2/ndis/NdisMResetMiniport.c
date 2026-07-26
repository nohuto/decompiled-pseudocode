/*
 * XREFs of NdisMResetMiniport @ 0x1C0073A50
 * Callers:
 *     ?ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C001C3F0 (-ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006D8C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0012E28 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x1C00194F0 (-ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z.c)
 */

void __fastcall NdisMResetMiniport(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_WORK_ITEM *PoolWithTag; // rax

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x11u,
      0xAu,
      (struct _GUID *)&WPP_2b6dc9e966c73597afb2fba6430b9cb1_Traceguids,
      a1);
  if ( a1->DriverHandle->MiniportDriverCharacteristics.ResetHandlerEx && ndisReferenceMiniport(a1, 8u) )
  {
    PoolWithTag = (struct _NDIS_WORK_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6977444Eu);
    if ( PoolWithTag )
    {
      PoolWithTag->Context = a1;
      PoolWithTag->Routine = (void (__fastcall *)(_NDIS_WORK_ITEM *, void *))ndisQueuedResetMiniport;
      ndisScheduleWorkItemInternal(PoolWithTag);
    }
    else
    {
      ndisDereferenceMiniport(a1, 8u);
    }
  }
}
