/*
 * XREFs of ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012EA30
 * Callers:
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1C00972BC (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     NdisOpenAdapterEx @ 0x1C012E610 (NdisOpenAdapterEx.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006C9C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qqqL @ 0x1C000E0E0 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000E1E0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0012D38 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qqZddZ @ 0x1C0029A20 (WPP_RECORDER_SF_qqZddZ.c)
 *     ?ethAllocateOpenMulticastBuffer@@YAHPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C002AA9C (-ethAllocateOpenMulticastBuffer@@YAHPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?XNoteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C002AB54 (-XNoteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisSetupNdis6OpenHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002AC00 (-ndisSetupNdis6OpenHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPO.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C002CCE0 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     memset @ 0x1C003FE40 (memset.c)
 *     ?XRemoveBindingFromLists@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C008DF64 (-XRemoveBindingFromLists@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisQueueOpenOnProtocol@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C012EF44 (-ndisQueueOpenOnProtocol@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisQueueOpenOnMiniport@@_Y2PAGENPNP@@AEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C012F040 (-ndisQueueOpenOnMiniport@@_Y2PAGENPNP@@AEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisDeQueueOpenOnMiniport@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0137AF8 (-ndisDeQueueOpenOnMiniport@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetOpenToTranslationMode@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0138E34 (-ndisSetOpenToTranslationMode@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisDeQueueOpenOnProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C013A284 (-ndisDeQueueOpenOnProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 */

void __fastcall ndisMOpenAdapter(int *a1, struct _NDIS_OPEN_BLOCK *a2, struct _NDIS_MINIPORT_BLOCK *a3)
{
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rsi
  _QWORD *FakeMac; // rbp
  struct _X_FILTER *EthDB; // r15
  char v6; // r13
  char v8; // r12
  int v11; // edx
  void (__fastcall *RequestCompleteHandler)(void *, _NDIS_REQUEST *, int); // rcx
  void (__fastcall *v13)(void *, _NDIS_OID_REQUEST *, int); // rax
  _NDIS_M_DRIVER_BLOCK *v14; // rax
  void (__fastcall *CancelSendPacketsHandler)(void *, void *); // rcx
  unsigned __int8 MajorNdisVersion; // al
  bool v17; // cl
  __int64 v18; // r9
  _NDIS_MEDIUM MediaType; // eax
  int OpenMulticastBuffer; // eax
  int v21; // eax
  _QWORD *PoolWithTag; // rax
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  void (__fastcall *CancelSendHandler)(void *, void *); // rcx
  _NDIS_STATUS_UNBIND_WORKITEM *v25; // rax
  int v26; // [rsp+20h] [rbp-68h]
  __int64 v27; // [rsp+40h] [rbp-48h]
  char v28; // [rsp+90h] [rbp+8h]

  ProtocolHandle = a2->ProtocolHandle;
  FakeMac = 0LL;
  EthDB = 0LL;
  v28 = 0;
  v6 = 0;
  v8 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x28u,
      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      (char)ProtocolHandle,
      (char)a3);
  if ( !ndisReferenceMiniport(a3, 0x2Eu) )
  {
    *a1 = -1073676286;
    goto LABEL_29;
  }
  if ( ProtocolHandle->MajorNdisVersion < 6u )
  {
    FakeMac = a3->FakeMac;
    if ( !FakeMac )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xC0uLL, 0x6D66444Eu);
      FakeMac = PoolWithTag;
      if ( !PoolWithTag )
      {
        *a1 = -1073741670;
        goto LABEL_67;
      }
      memset(PoolWithTag, 0, 0xC0uLL);
      a3->FakeMac = FakeMac;
      v28 = 1;
    }
    a2->MacHandle = FakeMac;
  }
  a2->MiniportAdapterContext = a3->MiniportAdapterContext;
  a2->CurrentLookahead = LOWORD(a3->MiniportCurrentLookahead);
  KeInitializeSpinLock(&a2->SpinLock);
  ndisMReferenceOpen((__int64)a2, 1u);
  if ( a3->MajorNdisVersion < 6u )
  {
    a2->WSendHandler = a3->DriverHandle->MiniportCharacteristics.Ndis50Chars.SendHandler;
    a2->WSendPacketsHandler = a3->WSendPacketsHandler;
    a2->WTransferDataHandler = a3->DriverHandle->MiniportCharacteristics.Ndis50Chars.TransferDataHandler;
  }
  a2->ProtocolMajorVersion = ProtocolHandle->MajorNdisVersion;
  if ( a2->ProtocolHandle->MajorNdisVersion < 6u )
  {
    a2->SendCompleteHandler = (void (__fastcall *)(void *, _NDIS_PACKET *, int))ndisMSendPacketCompleteToOpen;
    a2->ProtSendCompleteHandler = ProtocolHandle->SendCompleteHandler;
    a2->TransferDataCompleteHandler = ProtocolHandle->TransferDataCompleteHandler;
    a2->ReceiveHandler = ProtocolHandle->ReceiveHandler;
    a2->ReceiveCompleteHandler = ProtocolHandle->ReceiveCompleteHandler;
    a2->ResetCompleteHandler = ProtocolHandle->ResetCompleteHandler;
    a2->ReceivePacketHandler = ProtocolHandle->ReceivePacketHandler;
    v13 = (void (__fastcall *)(void *, _NDIS_OID_REQUEST *, int))ndisCompleteOidRequestToRequest;
    RequestCompleteHandler = ProtocolHandle->RequestCompleteHandler;
  }
  else
  {
    RequestCompleteHandler = 0LL;
    a2->ReceiveCompleteHandler = (void (__fastcall *)(void *))NdisQueryOffloadState;
    v13 = (void (__fastcall *)(void *, _NDIS_OID_REQUEST *, int))ndisInvokeOidRequestComplete;
  }
  a2->RequestCompleteHandler = RequestCompleteHandler;
  a2->OidRequestCompleteHandler = v13;
  a2->StatusHandler = ProtocolHandle->StatusHandler;
  a2->StatusCompleteHandler = ProtocolHandle->StatusCompleteHandler;
  a2->ResetHandler = (int (__fastcall *)(void *))ndisMReset;
  a2->SendCompleteNdisPacketContext = a2->ProtocolBindingContext;
  a2->RequestHandler = (int (__fastcall *)(void *, _NDIS_REQUEST *))ndisLegacyRequest;
  a2->OidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))ndisMOidRequest;
  a2->DirectOidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))ndisMDirectOidRequest;
  a2->TransferDataHandler = (int (__fastcall *)(void *, void *, unsigned int, unsigned int, _NDIS_PACKET *, unsigned int *))ndisMTransferData;
  a2->BindingHandle = a2;
  if ( a3->MediaType == NdisMediumWan )
  {
    if ( (a3->Flags & 0x20000) == 0 )
      a2->SendHandler = (int (__fastcall *)(void *, _NDIS_PACKET *))ndisMWanSend;
  }
  else
  {
    a2->SendHandler = (int (__fastcall *)(void *, _NDIS_PACKET *))ndisMSend;
  }
  a2->SendPacketsHandler = a3->SendPacketsHandler;
  if ( a3->MediaType == NdisMediumWan )
  {
    if ( (a3->Flags & 0x20000) != 0 )
    {
LABEL_43:
      DriverHandle = a3->DriverHandle;
      if ( a3->MajorNdisVersion >= 6u )
      {
        a2->MiniportCoOidRequestHandler = DriverHandle->CoOidRequestHandler;
        a2->MiniportCoCreateVcHandler = a3->DriverHandle->CoCreateVcHandler;
        CancelSendHandler = a3->DriverHandle->MiniportDriverCharacteristics.CancelSendHandler;
      }
      else
      {
        a2->MiniportCoRequestHandler = DriverHandle->MiniportCharacteristics.Ndis50Chars.CoRequestHandler;
        a2->MiniportCoCreateVcHandler = a3->DriverHandle->MiniportCharacteristics.Ndis50Chars.CoCreateVcHandler;
        CancelSendHandler = a3->DriverHandle->MiniportCharacteristics.CancelSendPacketsHandler;
      }
      a2->CancelSendPacketsHandler = CancelSendHandler;
      a2->ActiveVcHead.Blink = &a2->ActiveVcHead;
      a2->ActiveVcHead.Flink = &a2->ActiveVcHead;
      a2->InactiveVcHead.Blink = &a2->InactiveVcHead;
      a2->InactiveVcHead.Flink = &a2->InactiveVcHead;
      if ( !a2->SendHandler && !a2->SendPacketsHandler )
      {
        a2->SendHandler = (int (__fastcall *)(void *, _NDIS_PACKET *))NdisOffloadTcpForward;
        a2->SendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMRejectSendPackets;
      }
      goto LABEL_13;
    }
    a2->SendHandler = (int (__fastcall *)(void *, _NDIS_PACKET *))ndisMWanSend;
  }
  if ( (a3->Flags & 0x20000) != 0 )
    goto LABEL_43;
LABEL_13:
  v14 = a3->DriverHandle;
  if ( a3->MajorNdisVersion < 6u )
    CancelSendPacketsHandler = v14->MiniportCharacteristics.CancelSendPacketsHandler;
  else
    CancelSendPacketsHandler = v14->MiniportDriverCharacteristics.CancelSendHandler;
  a2->CancelSendPacketsHandler = CancelSendPacketsHandler;
  ndisSetupNdis6OpenHandlers(a2, ProtocolHandle, a3);
  MajorNdisVersion = a2->ProtocolHandle->MajorNdisVersion;
  v17 = MajorNdisVersion < 6u && a3->MajorNdisVersion >= 6u;
  if ( MajorNdisVersion < 6u && a3->Miniport5InNdis6Mode || v17 )
  {
    ndisSetOpenToTranslationMode(a2);
    v25 = (_NDIS_STATUS_UNBIND_WORKITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x6977444Eu);
    a2->StatusUnbindWorkItem = v25;
    if ( !v25 )
    {
      v21 = -1073676281;
      *a1 = -1073676281;
      goto LABEL_28;
    }
    v25->WorkItem.Context = a3;
    a2->StatusUnbindWorkItem->WorkItem.Routine = (void (__fastcall *)(_NDIS_WORK_ITEM *, void *))ndisQueuedStatusUnbindAdapter;
  }
  a2->SavedSendHandler = a2->SendHandler;
  a2->SavedSendPacketsHandler = a2->SendPacketsHandler;
  a2->SavedCancelSendPacketsHandler = a2->CancelSendPacketsHandler;
  if ( ndisQueueOpenOnMiniport(a3, a2) )
  {
    v6 = 1;
    if ( !ndisQueueOpenOnProtocol(a2, ProtocolHandle) )
    {
      *a1 = -1073676281;
LABEL_63:
      ndisDeQueueOpenOnMiniport(a2, a3);
LABEL_64:
      if ( v8 )
        ndisDeQueueOpenOnProtocol(a2, ProtocolHandle);
      goto LABEL_67;
    }
    EthDB = a3->EthDB;
    v8 = 1;
    MediaType = a3->MediaType;
    if ( EthDB )
    {
      XNoteFilterOpenAdapter(a3->EthDB, a2);
      MediaType = a3->MediaType;
    }
    if ( MediaType == NdisMedium802_3 )
    {
      OpenMulticastBuffer = ethAllocateOpenMulticastBuffer(EthDB, a2);
      *a1 = OpenMulticastBuffer;
      if ( OpenMulticastBuffer )
      {
        *a1 = -1073676281;
LABEL_60:
        if ( EthDB )
          XRemoveBindingFromLists(EthDB, a2);
        goto LABEL_63;
      }
    }
    if ( ProtocolHandle->MajorNdisVersion < 6u && v28 )
    {
      FakeMac[10] = ndisMTransferData;
      FakeMac[11] = ndisMReset;
      FakeMac[12] = a2->RequestHandler;
      FakeMac[9] = a2->SendHandler;
    }
    *a1 = 0;
    v21 = 0;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_qqZddZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        ProtocolHandle->MajorNdisVersion,
        (__int64)&ProtocolHandle->Name,
        v18,
        v26,
        (char)a3,
        (char)a2,
        &ProtocolHandle->Name.Length,
        ProtocolHandle->MajorNdisVersion,
        ProtocolHandle->MinorNdisVersion,
        &a3->pAdapterInstanceName->Length);
      v21 = *a1;
    }
LABEL_28:
    v8 = v6;
    if ( !v21 )
      goto LABEL_29;
    if ( !v6 )
      goto LABEL_64;
    goto LABEL_60;
  }
  *a1 = -1073676281;
LABEL_67:
  ndisDereferenceMiniport(a3, 0x2Eu);
LABEL_29:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v27) = *a1;
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      6u,
      0x2Au,
      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      (char)ProtocolHandle,
      (char)a3,
      (char)a2,
      v27);
  }
}
