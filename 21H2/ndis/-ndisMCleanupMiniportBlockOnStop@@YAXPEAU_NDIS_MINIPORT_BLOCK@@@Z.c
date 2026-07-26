/*
 * XREFs of ?ndisMCleanupMiniportBlockOnStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006E5C8
 * Callers:
 *     ?ndisInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEAX@Z @ 0x1C0035334 (-ndisInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRI.c)
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0135680 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     NdisNblTrackerDeregisterComponent @ 0x1C0020610 (NdisNblTrackerDeregisterComponent.c)
 *     ?ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x1C00390A0 (-ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 *     ?EthDeleteFilter@@YAXPEAU_X_FILTER@@@Z @ 0x1C00644C4 (-EthDeleteFilter@@YAXPEAU_X_FILTER@@@Z.c)
 *     ?nullDeleteFilter@@YAXPEAU_X_FILTER@@@Z @ 0x1C008EA28 (-nullDeleteFilter@@YAXPEAU_X_FILTER@@@Z.c)
 */

void __fastcall ndisMCleanupMiniportBlockOnStop(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_RSS_DPC_WORKER_CONTEXT *RssV2Context; // rcx
  _NDIS_MINIPORT_OFFLOAD *Offload; // rcx
  _NDIS_HD_SPLIT_CURRENT_CONFIG *HDSplitCurrentConfig; // rcx
  _NDIS_MINIPORT_STATS *BottomIfStats; // rcx
  _X_FILTER *v6; // rcx
  _X_FILTER *EthDB; // rcx
  _X_FILTER *NullMediaFilter; // rcx
  _OID_LIST *OidList; // rcx
  unsigned int *SupportedOidList; // rcx
  unsigned int *v11; // rcx
  unsigned int *ndisSupportedOidList; // rcx
  NDIS_NBL_TRACKER_HANDLE__ *NblTracker; // rcx
  NDIS_NBL_TRACKER_HANDLE__ *LowPowerRcvReturnNblTracker; // rcx
  PNDIS_PER_PROCESSOR_SLOT__ *PeriodicReceivesNblCountIndex; // rcx
  _NDIS_MINIPORT_RSS_PARAMETERS_CACHE *RssParametersBuffer; // rcx

  RssV2Context = a1->RssV2Context;
  if ( RssV2Context )
  {
    ExFreePoolWithTag(RssV2Context, 0);
    a1->RssV2Context = 0LL;
  }
  Offload = a1->Offload;
  if ( Offload )
  {
    ExFreePoolWithTag(Offload, 0);
    a1->Offload = 0LL;
  }
  HDSplitCurrentConfig = a1->HDSplitCurrentConfig;
  if ( HDSplitCurrentConfig )
  {
    ExFreePoolWithTag(HDSplitCurrentConfig, 0);
    a1->HDSplitCurrentConfig = 0LL;
  }
  BottomIfStats = a1->BottomIfStats;
  if ( BottomIfStats )
  {
    ExFreePoolWithTag(BottomIfStats, 0);
    a1->BottomIfStats = 0LL;
  }
  if ( a1->MediaType || (v6 = a1->EthDB) == 0LL )
  {
    EthDB = a1->EthDB;
    if ( !EthDB )
      goto LABEL_15;
    nullDeleteFilter(EthDB);
  }
  else
  {
    EthDeleteFilter((PVOID *)&v6->OpenList);
  }
  a1->EthDB = 0LL;
LABEL_15:
  NullMediaFilter = a1->NullMediaFilter;
  if ( NullMediaFilter )
  {
    nullDeleteFilter(NullMediaFilter);
    a1->Reserved1 = 0LL;
  }
  OidList = a1->OidList;
  if ( OidList )
  {
    ExFreePoolWithTag(OidList, 0);
    a1->OidList = 0LL;
  }
  SupportedOidList = a1->SupportedOidList;
  if ( SupportedOidList )
  {
    ExFreePoolWithTag(SupportedOidList, 0);
    a1->SupportedOidList = 0LL;
    a1->SupportedOidListLength = 0;
  }
  v11 = a1->TopFilterRestartAttributes.SupportedOidList;
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    a1->TopFilterRestartAttributes.SupportedOidList = 0LL;
    a1->TopFilterRestartAttributes.SupportedOidListLength = 0;
  }
  ndisSupportedOidList = a1->ndisSupportedOidList;
  if ( ndisSupportedOidList )
  {
    ExFreePoolWithTag(ndisSupportedOidList, 0);
    a1->ndisSupportedOidList = 0LL;
    a1->ndisSupportedOidListLength = 0;
  }
  if ( a1->SymbolicLinkName.Buffer )
  {
    RtlFreeUnicodeString(&a1->SymbolicLinkName);
    a1->SymbolicLinkName.Buffer = 0LL;
    a1->SymbolicLinkName.Length = 0;
  }
  NblTracker = a1->NblTracker;
  if ( NblTracker )
  {
    NdisNblTrackerDeregisterComponent((__int64)NblTracker);
    a1->NblTracker = 0LL;
  }
  LowPowerRcvReturnNblTracker = a1->LowPowerRcvReturnNblTracker;
  if ( LowPowerRcvReturnNblTracker )
  {
    NdisNblTrackerDeregisterComponent((__int64)LowPowerRcvReturnNblTracker);
    a1->LowPowerRcvReturnNblTracker = 0LL;
  }
  PeriodicReceivesNblCountIndex = a1->PeriodicReceivesNblCountIndex;
  if ( PeriodicReceivesNblCountIndex )
  {
    ndisFreePerProcessorSlot((ULONG_PTR)PeriodicReceivesNblCountIndex, 0x527374uLL);
    a1->PeriodicReceivesNblCountIndex = 0LL;
  }
  RssParametersBuffer = a1->RssParametersBuffer;
  if ( RssParametersBuffer )
  {
    ExFreePoolWithTag(RssParametersBuffer, 0);
    a1->RssParametersBuffer = 0LL;
  }
}
