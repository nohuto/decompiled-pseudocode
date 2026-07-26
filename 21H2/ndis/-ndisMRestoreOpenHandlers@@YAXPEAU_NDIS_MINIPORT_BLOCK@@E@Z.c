/*
 * XREFs of ?ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0015CF8
 * Callers:
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001C6C8 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0070B30 (-ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisWdfDevicePowerOn @ 0x1C0083A9C (ndisWdfDevicePowerOn.c)
 *     ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x1C012A270 (-ndisDevicePowerDown@@YAXPEAX@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1C012A830 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisMiniportXStateClearFlag@@YAEPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0019810 (-ndisMiniportXStateClearFlag@@YAEPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0060308 (McTemplateK0jqxd_EtwWriteTransfer.c)
 */

void __fastcall ndisMRestoreOpenHandlers(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 a2)
{
  int v4; // ecx
  _NDIS_OPEN_BLOCK *i; // rax
  _NDIS_FILTER_BLOCK *HighestFilter; // rax
  _NDIS_OPEN_BLOCK *OpenQueue; // rcx

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x58u,
      (struct _GUID *)&WPP_155eeae1e7503765e0b6eba6f413c090_Traceguids,
      (char)a1,
      a2);
  if ( ndisMiniportXStateClearFlag(a1, a2) )
  {
    HighestFilter = a1->HighestFilter;
    if ( HighestFilter && !HighestFilter->XState )
      HighestFilter->FilterIndicateReceiveNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisFilterIndicateReceiveNetBufferLists;
    OpenQueue = a1->OpenQueue;
    a1->SendPathType = a1->SavedSendPathType;
    a1->NextSendNetBufferListsHandler = a1->SavedNextSendNetBufferListsHandler;
    for ( a1->NextCancelSendNetBufferListsHandler = (void (__fastcall *)(void *, void *))NdisCancelSendPackets;
          OpenQueue;
          OpenQueue = OpenQueue->MiniportNextOpen )
    {
      OpenQueue->SendHandler = OpenQueue->SavedSendHandler;
      OpenQueue->SendPacketsHandler = OpenQueue->SavedSendPacketsHandler;
      OpenQueue->CancelSendPacketsHandler = OpenQueue->SavedCancelSendPacketsHandler;
      OpenQueue->ResetHandler = (int (__fastcall *)(void *))ndisMReset;
      OpenQueue->RequestHandler = (int (__fastcall *)(void *, _NDIS_REQUEST *))ndisLegacyRequest;
      OpenQueue->OidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))ndisMOidRequest;
      OpenQueue->DirectOidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))ndisMDirectOidRequest;
    }
  }
  else
  {
    if ( Microsoft_Windows_NDISEnableBits < 0 )
      McTemplateK0jqxd_EtwWriteTransfer(
        v4,
        (unsigned int)&KeptMiniportFakeHandlers,
        (_DWORD)a1 + 4008,
        (_DWORD)a1 + 4008,
        a1->IfIndex,
        a1->NetLuid.Value,
        a1->XState);
    if ( (a1->XState & 2) != 0 )
    {
      for ( i = a1->OpenQueue; i; i = i->MiniportNextOpen )
      {
        i->RequestHandler = (int (__fastcall *)(void *, _NDIS_REQUEST *))ndisLegacyRequest;
        i->OidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))ndisMOidRequest;
        i->DirectOidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))ndisMDirectOidRequest;
      }
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x59u,
      (struct _GUID *)&WPP_155eeae1e7503765e0b6eba6f413c090_Traceguids,
      a1);
}
