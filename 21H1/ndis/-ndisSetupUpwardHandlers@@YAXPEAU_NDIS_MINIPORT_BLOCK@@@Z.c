/*
 * XREFs of ?ndisSetupUpwardHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002AB80
 * Callers:
 *     ?ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002AAC4 (-ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 */

void __fastcall ndisSetupUpwardHandlers(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_FILTER_BLOCK *HighestFilter; // rsi
  int v3; // edi
  unsigned int StackFlags; // edx
  int (__fastcall *OidRequestHandler)(void *, _NDIS_OID_REQUEST *); // rcx
  bool v6; // r8
  unsigned int v7; // eax
  int v8; // edx
  bool v9; // zf
  _NDIS_FILTER_BLOCK *LowerFilter; // rcx
  _NDIS_OBJECT_HEADER *p_Header; // rax
  void (__fastcall *ReceiveNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // rax
  _NDIS_FILTER_BLOCK *HigherFilter; // rdx
  int v14; // eax
  void (__fastcall *SendNetBufferListsCompleteHandler)(void *, _NET_BUFFER_LIST *, unsigned int); // rax
  _NDIS_FILTER_BLOCK *LowestFilter; // rcx
  int v17; // edx
  void (__fastcall *v18)(void *, _NET_BUFFER_LIST *, unsigned int); // rax
  _NDIS_OBJECT_HEADER *NextSendNetBufferListsCompleteObject; // rax
  void (__fastcall *v20)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // rax
  _NDIS_MEDIUM MediaType; // eax
  void (__fastcall *v22)(void *, _NDIS_PACKET **, unsigned int); // rax

  HighestFilter = a1->HighestFilter;
  v3 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x3Bu,
      (struct _GUID *)&WPP_852a249528343ec37be547ae98447114_Traceguids,
      a1);
  StackFlags = HighestFilter->StackFlags;
  HighestFilter->NextSendNetBufferListsCompleteHandler = a1->NoFilter.SendNetBufferListsCompleteHandler;
  HighestFilter->NextSendNetBufferListsCompleteContext = a1->NoFilter.SendNetBufferListsCompleteContext;
  HighestFilter->NextSendNetBufferListsCompleteTracker = a1->NoFilter.SendNetBufferListsCompleteTracker;
  HighestFilter->NextSendNetBufferListsCompleteObject = a1->NoFilter.SendNetBufferListsCompleteObject;
  HighestFilter->NextIndicateReceiveNetBufferListsHandler = a1->NoFilter.IndicateNetBufferListsHandler;
  HighestFilter->NextIndicateReceiveNetBufferListsContext = a1->NoFilter.IndicateNetBufferListsContext;
  HighestFilter->NextIndicateReceiveNetBufferListsTracker = a1->NoFilter.IndicateNetBufferListsTracker;
  HighestFilter->NextIndicateReceiveNetBufferListsObject = a1->NoFilter.IndicateNetBufferListsObject;
  OidRequestHandler = HighestFilter->FilterDriver->DefaultFilterCharacteristics.OidRequestHandler;
  v6 = OidRequestHandler != 0LL;
  v7 = StackFlags & 0xFFFFFFFE;
  v8 = StackFlags | 1;
  v9 = OidRequestHandler == 0LL;
  LowerFilter = HighestFilter->LowerFilter;
  if ( v9 )
    v8 = v7;
  HighestFilter->StackFlags = v8;
  a1->ReceiveFilters = 0;
  while ( LowerFilter )
  {
    HigherFilter = LowerFilter->HigherFilter;
    if ( v6 || !LowerFilter->FilterDriver->DefaultFilterCharacteristics.OidRequestHandler )
    {
      LowerFilter->StackFlags &= ~1u;
    }
    else
    {
      LowerFilter->StackFlags |= 1u;
      v6 = 1;
    }
    v14 = v3 + 1;
    if ( (HigherFilter->Flags & 0x8000) == 0 )
      v14 = v3;
    v3 = v14;
    SendNetBufferListsCompleteHandler = HigherFilter->Characteristics.SendNetBufferListsCompleteHandler;
    if ( SendNetBufferListsCompleteHandler )
    {
      LowerFilter->NextSendNetBufferListsCompleteHandler = SendNetBufferListsCompleteHandler;
      LowerFilter->NextSendNetBufferListsCompleteContext = HigherFilter->FilterModuleContext;
      LowerFilter->NextSendNetBufferListsCompleteTracker = HigherFilter->NblTracker;
      p_Header = &HigherFilter->Header;
    }
    else
    {
      LowerFilter->NextSendNetBufferListsCompleteHandler = HigherFilter->NextSendNetBufferListsCompleteHandler;
      LowerFilter->NextSendNetBufferListsCompleteContext = HigherFilter->NextSendNetBufferListsCompleteContext;
      LowerFilter->NextSendNetBufferListsCompleteTracker = HigherFilter->NextSendNetBufferListsCompleteTracker;
      p_Header = HigherFilter->NextSendNetBufferListsCompleteObject;
    }
    LowerFilter->NextSendNetBufferListsCompleteObject = p_Header;
    ReceiveNetBufferListsHandler = HigherFilter->Characteristics.ReceiveNetBufferListsHandler;
    if ( ReceiveNetBufferListsHandler )
    {
      if ( !v3 )
      {
        ++a1->ReceiveFilters;
        ReceiveNetBufferListsHandler = HigherFilter->Characteristics.ReceiveNetBufferListsHandler;
      }
      LowerFilter->NextIndicateReceiveNetBufferListsHandler = ReceiveNetBufferListsHandler;
      LowerFilter->NextIndicateReceiveNetBufferListsContext = HigherFilter->FilterModuleContext;
      LowerFilter->NextIndicateReceiveNetBufferListsTracker = HigherFilter->NblTracker;
    }
    else
    {
      LowerFilter->NextIndicateReceiveNetBufferListsHandler = HigherFilter->NextIndicateReceiveNetBufferListsHandler;
      LowerFilter->NextIndicateReceiveNetBufferListsContext = HigherFilter->NextIndicateReceiveNetBufferListsContext;
      LowerFilter->NextIndicateReceiveNetBufferListsTracker = HigherFilter->NextIndicateReceiveNetBufferListsTracker;
      HigherFilter = (_NDIS_FILTER_BLOCK *)HigherFilter->NextIndicateReceiveNetBufferListsObject;
    }
    LowerFilter->NextIndicateReceiveNetBufferListsObject = &HigherFilter->Header;
    LowerFilter = LowerFilter->LowerFilter;
  }
  LowestFilter = a1->LowestFilter;
  v17 = v3 + 1;
  v18 = LowestFilter->Characteristics.SendNetBufferListsCompleteHandler;
  if ( (LowestFilter->Flags & 0x8000) == 0 )
    v17 = v3;
  if ( v18 )
  {
    a1->Next.SendNetBufferListsCompleteHandler = v18;
    a1->Next.SendNetBufferListsCompleteContext = LowestFilter->FilterModuleContext;
    a1->Next.SendNetBufferListsCompleteTracker = LowestFilter->NblTracker;
    NextSendNetBufferListsCompleteObject = &LowestFilter->Header;
  }
  else
  {
    a1->Next.SendNetBufferListsCompleteHandler = LowestFilter->NextSendNetBufferListsCompleteHandler;
    a1->Next.SendNetBufferListsCompleteContext = LowestFilter->NextSendNetBufferListsCompleteContext;
    a1->Next.SendNetBufferListsCompleteTracker = LowestFilter->NextSendNetBufferListsCompleteTracker;
    NextSendNetBufferListsCompleteObject = LowestFilter->NextSendNetBufferListsCompleteObject;
  }
  a1->Next.SendNetBufferListsCompleteObject = NextSendNetBufferListsCompleteObject;
  v20 = LowestFilter->Characteristics.ReceiveNetBufferListsHandler;
  if ( v20 )
  {
    if ( !v17 )
    {
      ++a1->ReceiveFilters;
      v20 = LowestFilter->Characteristics.ReceiveNetBufferListsHandler;
    }
    a1->Next.IndicateNetBufferListsHandler = v20;
    a1->Next.IndicateNetBufferListsContext = LowestFilter->FilterModuleContext;
    a1->Next.IndicateNetBufferListsTracker = LowestFilter->NblTracker;
  }
  else
  {
    a1->Next.IndicateNetBufferListsHandler = LowestFilter->NextIndicateReceiveNetBufferListsHandler;
    a1->Next.IndicateNetBufferListsContext = LowestFilter->NextIndicateReceiveNetBufferListsContext;
    a1->Next.IndicateNetBufferListsTracker = LowestFilter->NextIndicateReceiveNetBufferListsTracker;
    LowestFilter = (_NDIS_FILTER_BLOCK *)LowestFilter->NextIndicateReceiveNetBufferListsObject;
  }
  a1->Next.IndicateNetBufferListsObject = &LowestFilter->Header;
  if ( v17 == 1 )
  {
    MediaType = a1->MediaType;
    if ( MediaType )
    {
      if ( MediaType == NdisMediumWan )
        goto LABEL_26;
      v22 = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMIndicatePacket;
    }
    else
    {
      v22 = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ethFilterDprIndicateReceivePacket;
    }
    a1->TopNdis5PacketIndicateHandler = v22;
  }
LABEL_26:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x3Cu,
      (struct _GUID *)&WPP_852a249528343ec37be547ae98447114_Traceguids,
      a1);
}
