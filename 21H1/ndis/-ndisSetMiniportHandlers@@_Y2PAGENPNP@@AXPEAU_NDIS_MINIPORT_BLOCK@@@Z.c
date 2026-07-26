/*
 * XREFs of ?ndisSetMiniportHandlers@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012C368
 * Callers:
 *     NdisMSetAttributesEx @ 0x1C012C0F0 (NdisMSetAttributesEx.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ndisMIsPowerSynchronizedDatapathRequired @ 0x1C00233E0 (ndisMIsPowerSynchronizedDatapathRequired.c)
 *     ?ndisSetupNdis6OpenHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002A9C0 (-ndisSetupNdis6OpenHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPO.c)
 *     ?ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002AAC4 (-ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisSetMiniportHandlers(struct _NDIS_MINIPORT_BLOCK *a1)
{
  bool v2; // cf
  void *v3; // rcx
  void (__fastcall *ReturnNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int); // rax
  bool v5; // zf
  _NDIS_OPEN_BLOCK *i; // rdi
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rdx
  struct _NDIS_MINIPORT_BLOCK *MiniportAdapterContext; // rcx
  void (__fastcall *ReturnPacketHandler)(void *, _NDIS_PACKET *); // rax
  void (__fastcall *CancelSendPacketsHandler)(void *, void *); // rcx
  NDIS_NBL_TRACKER_HANDLE__ *NblTracker; // rax

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x95u,
      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      a1);
  v2 = a1->MajorNdisVersion < 6u;
  a1->NoFilter.IndicateNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisMTopReceiveNetBufferLists;
  a1->NoFilter.IndicateNetBufferListsContext = a1;
  a1->NoFilter.IndicateNetBufferListsTracker = (NDIS_NBL_TRACKER_HANDLE__ *)32;
  a1->NoFilter.IndicateNetBufferListsObject = &a1->Header;
  if ( v2 )
  {
    v5 = a1->Ndis6ProtocolsBound == 1;
    DriverHandle = a1->DriverHandle;
    MiniportAdapterContext = (struct _NDIS_MINIPORT_BLOCK *)a1->MiniportAdapterContext;
    a1->MiniportReturnPacketHandler = DriverHandle->MiniportCharacteristics.Ndis50Chars.ReturnPacketHandler;
    a1->MiniportReturnPacketContext = MiniportAdapterContext;
    if ( v5 || a1->HighestFilter )
    {
      MiniportAdapterContext = a1;
      ReturnPacketHandler = (void (__fastcall *)(void *, _NDIS_PACKET *))ndisSynchReturnPacketsForTranslation;
    }
    else
    {
      ReturnPacketHandler = DriverHandle->MiniportCharacteristics.Ndis50Chars.ReturnPacketHandler;
    }
    a1->SynchronousReturnPacketHandler = ReturnPacketHandler;
    a1->SynchronousReturnPacketContext = MiniportAdapterContext;
    if ( (a1->Flags & 0x40000) == 0
      || (CancelSendPacketsHandler = a1->DriverHandle->MiniportCharacteristics.CancelSendPacketsHandler) == 0LL )
    {
      CancelSendPacketsHandler = (void (__fastcall *)(void *, void *))NdisQueryOffloadState;
    }
    a1->NoFilter.CancelSendHandler = CancelSendPacketsHandler;
    a1->NoFilter.CancelSendContext = a1->MiniportAdapterContext;
    a1->NoFilter.SendNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))ndisMSendNetBufferListsToPackets;
    NblTracker = a1->NblTracker;
    a1->NoFilter.SendNetBufferListsTracker = NblTracker;
    a1->NoFilter.ReturnNetBufferListsTracker = NblTracker;
    a1->NoFilter.SendNetBufferListsContext = a1;
    a1->NoFilter.SendNetBufferListsObject = &a1->Header;
    a1->NoFilter.ReturnNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))ndisReturnNetBufferListsToPackets;
    a1->NoFilter.ReturnNetBufferListsContext = a1;
    a1->NoFilter.ReturnNetBufferListsObject = &a1->Header;
  }
  else
  {
    a1->SynchronousReturnPacketContext = a1;
    a1->SynchronousReturnPacketHandler = (void (__fastcall *)(void *, _NDIS_PACKET *))ndisSynchReturnPacketsForTranslation;
    a1->NoFilter.CancelSendContext = a1;
    a1->NoFilter.CancelSendHandler = (void (__fastcall *)(void *, void *))ndisMCancelSendNetBufferListsOnMiniport;
    a1->NoFilter.SendNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))ndisMSendNBLToMiniport;
    a1->NoFilter.SendNetBufferListsTracker = a1->NblTracker;
    a1->NoFilter.SendNetBufferListsContext = a1;
    a1->NoFilter.SendNetBufferListsObject = &a1->Header;
    if ( ndisMIsPowerSynchronizedDatapathRequired(a1) )
    {
      ReturnNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))ndisReturnNblWithPowerQueue;
    }
    else
    {
      v3 = a1->MiniportAdapterContext;
      ReturnNetBufferListsHandler = a1->DriverHandle->MiniportDriverCharacteristics.ReturnNetBufferListsHandler;
    }
    a1->NoFilter.ReturnNetBufferListsHandler = ReturnNetBufferListsHandler;
    a1->NoFilter.ReturnNetBufferListsContext = v3;
    v5 = (a1->Flags & 0x20000) == 0;
    a1->NoFilter.ReturnNetBufferListsTracker = a1->NblTracker;
    a1->NoFilter.ReturnNetBufferListsObject = &a1->Header;
    if ( !v5 )
      a1->NextCoOidRequestHandle = a1->MiniportAdapterContext;
  }
  ndisSetupLwfMiniportHandlers(a1);
  for ( i = a1->OpenQueue; i; i = i->MiniportNextOpen )
    ndisSetupNdis6OpenHandlers(i, i->ProtocolHandle, a1);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x96u,
      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      a1);
}
