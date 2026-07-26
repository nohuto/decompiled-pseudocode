/*
 * XREFs of ?ndisInitializeMiniportRestartAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C003AFD4
 * Callers:
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00FFE10 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0103C1C (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C010B988 (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0040100 (memmove.c)
 */

__int64 __fastcall ndisInitializeMiniportRestartAttributes(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_RESTART_INFORMATION *a2)
{
  unsigned int v4; // esi
  _NDIS_RECEIVE_SCALE_CAPABILITIES *p_RssCaps; // rcx
  unsigned int SupportedPacketFilters; // edx
  unsigned int SupportedOidListLength; // eax
  unsigned int *PoolWithTag; // rax
  __int64 result; // rax

  a2->Attributes.Oid = 66077;
  a2->General.Header = (_NDIS_OBJECT_HEADER)5767586;
  v4 = 0;
  a2->Attributes.Next = 0LL;
  a2->Attributes.DataLength = 88;
  a2->General.MtuSize = a1->IfBlock->ifMtu;
  p_RssCaps = &a2->RssCaps;
  *(_OWORD *)&a2->General.MaxXmitLinkSpeed = *(_OWORD *)&a1->MaxXmitLinkSpeed;
  a2->General.LookaheadSize = a1->MiniportMaximumLookahead;
  a2->General.MacOptions = a1->MacOptions;
  SupportedPacketFilters = a1->SupportedPacketFilters;
  a2->General.SupportedPacketFilters = SupportedPacketFilters;
  a2->General.MaxMulticastListSize = a1->MaximumLongAddresses;
  a2->General.RecvScaleCapabilities = p_RssCaps;
  *p_RssCaps = a1->RecvScaleCapabilities;
  if ( (a1->DeviceFlags & 1) != 0 )
    a2->General.SupportedPacketFilters = SupportedPacketFilters | 0x20;
  a2->General.AccessType = a1->IfBlock->AccessType;
  a2->General.ConnectionType = a1->IfBlock->ConnectionType;
  a2->General.SupportedStatistics = a1->SupportedStatistics;
  a2->General.DataBackFillSize = a1->DataBackFillSize;
  a2->General.ContextBackFillSize = a1->ContextBackFillSize;
  SupportedOidListLength = a1->SupportedOidListLength;
  if ( SupportedOidListLength )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, SupportedOidListLength, 0x6D61444Eu);
    a2->General.SupportedOidList = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, a1->SupportedOidList, a1->SupportedOidListLength);
      a2->General.SupportedOidListLength = a1->SupportedOidListLength;
    }
    else
    {
      v4 = -1073741670;
    }
  }
  a2->ProtocolParameters.Header = (_NDIS_OBJECT_HEADER)3670435;
  result = v4;
  a2->ProtocolParameters.RestartAttributes = &a2->Attributes;
  return result;
}
