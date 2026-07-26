/*
 * XREFs of ?ndisSourcePreAddWoLPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0016C5C
 * Callers:
 *     ?ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00169B0 (-ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C00170C0 (WPP_RECORDER_SF_Dd.c)
 *     ?ndisIsWoLPacketTypeSupported@@YAEW4_NDIS_PM_WOL_PACKET@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0017194 (-ndisIsWoLPacketTypeSupported@@YAEW4_NDIS_PM_WOL_PACKET@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCompareWoLPatterns@@YAEPEAU_NDIS_PM_WOL_PATTERN@@0@Z @ 0x1C00172FC (-ndisCompareWoLPatterns@@YAEPEAU_NDIS_PM_WOL_PATTERN@@0@Z.c)
 *     ?ndisCreateWoLPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_WOL_PATTERN@@K@Z @ 0x1C003BD50 (-ndisCreateWoLPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_WOL_PATTERN@@K@Z.c)
 */

__int64 __fastcall ndisSourcePreAddWoLPattern(
        struct _NDIS_OPEN_BLOCK *a1,
        struct _NDIS_FILTER_BLOCK *a2,
        struct _NDIS_OID_REQUEST *a3,
        char *a4)
{
  unsigned int v8; // ebx
  struct _NDIS_PM_WOL_PATTERN *InformationBuffer; // rbp
  struct _NDIS_MINIPORT_BLOCK *MiniportHandle; // rdx
  int v11; // edx
  _SINGLE_LIST_ENTRY *Next; // rdi
  struct _NDIS_PACKET_PATTERN_ENTRY *WoLPatternEntry; // rcx

  v8 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x36u,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      a3);
  InformationBuffer = (struct _NDIS_PM_WOL_PATTERN *)a3->DATA.QUERY_INFORMATION.InformationBuffer;
  *a4 = 1;
  if ( a1 )
    MiniportHandle = a1->MiniportHandle;
  else
    MiniportHandle = a2->Miniport;
  if ( ndisIsWoLPacketTypeSupported(InformationBuffer->WoLPacketType, MiniportHandle) )
  {
    if ( a1 )
      Next = a1->WOLPatternList.Next;
    else
      Next = a2->WOLPatternList.Next;
    if ( !Next )
      goto LABEL_15;
    do
    {
      if ( ndisCompareWoLPatterns((struct _NDIS_PM_WOL_PATTERN *)&Next[6], InformationBuffer) )
        break;
      Next = Next->Next;
    }
    while ( Next );
    if ( Next )
    {
      v8 = -1073676267;
    }
    else
    {
LABEL_15:
      WoLPatternEntry = ndisCreateWoLPatternEntry(InformationBuffer, a3->PortNumber);
      if ( WoLPatternEntry )
      {
        WoLPatternEntry->Source = *(void **)&a3->NdisReserved[32];
        *(_QWORD *)&a3->NdisReserved[88] = WoLPatternEntry;
        *a4 = 0;
      }
      else
      {
        v8 = -1073741670;
      }
    }
  }
  else
  {
    v8 = -1073741637;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      11,
      55,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      *a4,
      v8);
  }
  return v8;
}
