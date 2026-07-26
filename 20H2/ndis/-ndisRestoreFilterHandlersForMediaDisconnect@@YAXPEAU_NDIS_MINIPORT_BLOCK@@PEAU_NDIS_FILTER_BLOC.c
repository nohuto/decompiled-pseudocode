/*
 * XREFs of ?ndisRestoreFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@1@Z @ 0x1C00193E8
 * Callers:
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001A680 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001AC64 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000E1E0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisFilterXStateClearFlag@@YAEPEAU_NDIS_FILTER_BLOCK@@E@Z @ 0x1C001959C (-ndisFilterXStateClearFlag@@YAEPEAU_NDIS_FILTER_BLOCK@@E@Z.c)
 *     ?ndisMiniportXStateClearFlag@@YAEPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0019600 (-ndisMiniportXStateClearFlag@@YAEPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0060078 (McTemplateK0jqxd_EtwWriteTransfer.c)
 */

void __fastcall ndisRestoreFilterHandlersForMediaDisconnect(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_FILTER_BLOCK *a2,
        struct _NDIS_FILTER_BLOCK *a3)
{
  int v6; // ecx
  _NDIS_OPEN_BLOCK *OpenQueue; // rcx
  char v8[8]; // [rsp+30h] [rbp-18h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x45u,
      (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  if ( a3 )
  {
    if ( ndisFilterXStateClearFlag(a3, (unsigned __int8)a2) )
    {
      a3->FilterSendNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))ndisFilterSendNetBufferLists;
      a3->FilterCancelSendNetBufferListsHandler = ndisFilterCancelSendNetBufferLists;
      goto LABEL_6;
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v8 = a3->XState;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xDu,
        0x46u,
        (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
        (char)a3,
        *(_QWORD *)v8);
    }
    if ( Microsoft_Windows_NDISEnableBits < 0 )
      McTemplateK0jqxd_EtwWriteTransfer(
        a3->IfBlock,
        (unsigned int)&KeptFilterFakeHandlers,
        (_DWORD)a3 + 672,
        (_DWORD)a3 + 672,
        a3->IfIndex,
        a3->IfBlock->NetLuid.Value,
        a3->XState);
  }
  else
  {
    if ( ndisMiniportXStateClearFlag(a1, 2u) )
    {
      OpenQueue = a1->OpenQueue;
      a1->SendPathType = a1->SavedSendPathType;
      a1->NextSendNetBufferListsHandler = a1->SavedNextSendNetBufferListsHandler;
      a1->NextCancelSendNetBufferListsHandler = (void (__fastcall *)(void *, void *))NdisCancelSendPackets;
      while ( OpenQueue )
      {
        OpenQueue->SendHandler = OpenQueue->SavedSendHandler;
        OpenQueue->SendPacketsHandler = OpenQueue->SavedSendPacketsHandler;
        OpenQueue->CancelSendPacketsHandler = OpenQueue->SavedCancelSendPacketsHandler;
        OpenQueue->ResetHandler = (int (__fastcall *)(void *))ndisMReset;
        OpenQueue = OpenQueue->MiniportNextOpen;
      }
LABEL_6:
      if ( a2 )
      {
        a2->FilterIndicateReceiveNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisFilterIndicateReceiveNetBufferLists;
        goto LABEL_8;
      }
      goto LABEL_16;
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v8 = a1->XState;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xDu,
        0x47u,
        (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
        (char)a1,
        *(_QWORD *)v8);
    }
    if ( Microsoft_Windows_NDISEnableBits < 0 )
      McTemplateK0jqxd_EtwWriteTransfer(
        v6,
        (unsigned int)&KeptMiniportFakeHandlers,
        (_DWORD)a1 + 4008,
        (_DWORD)a1 + 4008,
        a1->IfIndex,
        a1->NetLuid.Value,
        a1->XState);
    if ( !a2 )
    {
LABEL_16:
      a1->PacketIndicateHandler = a1->SavedPacketIndicateHandler;
      a1->ReceivePathEnabled = a1->SavedReceivePathEnabled;
    }
  }
LABEL_8:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x48u,
      (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
      (char)a1,
      (char)a2,
      a3);
}
