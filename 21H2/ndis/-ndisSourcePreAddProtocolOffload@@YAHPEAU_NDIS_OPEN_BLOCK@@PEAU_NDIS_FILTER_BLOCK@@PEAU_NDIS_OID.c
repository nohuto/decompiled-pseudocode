/*
 * XREFs of ?ndisSourcePreAddProtocolOffload@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0095178
 * Callers:
 *     ?ndisOidPreAddPMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0091690 (-ndisOidPreAddPMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C003BC68 (WPP_RECORDER_SF_qdL.c)
 *     ?ndisComparePMProtocolOffloads@@YAEPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@0@Z @ 0x1C008F74C (-ndisComparePMProtocolOffloads@@YAEPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@0@Z.c)
 *     ?ndisCreatePMProtocolOffloadEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PROTOCOL_OFFLOAD@@K@Z @ 0x1C008FB08 (-ndisCreatePMProtocolOffloadEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PROTOCOL_OFFLO.c)
 *     ?ndisIsPMProtocolOffloadSupported@@YAEW4_NDIS_PM_PROTOCOL_OFFLOAD_TYPE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00900CC (-ndisIsPMProtocolOffloadSupported@@YAEW4_NDIS_PM_PROTOCOL_OFFLOAD_TYPE@@PEAU_NDIS_MINIPORT_BLOCK.c)
 */

__int64 __fastcall ndisSourcePreAddProtocolOffload(
        struct _NDIS_OPEN_BLOCK *a1,
        struct _NDIS_FILTER_BLOCK *a2,
        struct _NDIS_OID_REQUEST *a3,
        char *a4)
{
  unsigned int v8; // ebx
  struct _NDIS_PM_PROTOCOL_OFFLOAD *InformationBuffer; // r14
  struct _NDIS_MINIPORT_BLOCK *MiniportHandle; // rdx
  int v11; // edx
  _SINGLE_LIST_ENTRY *Next; // rdi
  struct _NDIS_PACKET_PATTERN_ENTRY *PMProtocolOffloadEntry; // rcx

  v8 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x5Au,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      (char)a1,
      a3);
  InformationBuffer = (struct _NDIS_PM_PROTOCOL_OFFLOAD *)a3->DATA.QUERY_INFORMATION.InformationBuffer;
  *a4 = 1;
  if ( a1 )
    MiniportHandle = a1->MiniportHandle;
  else
    MiniportHandle = a2->Miniport;
  if ( ndisIsPMProtocolOffloadSupported(InformationBuffer->ProtocolOffloadType, MiniportHandle) )
  {
    if ( a1 )
      Next = a1->PMProtocolOffloadList.Next;
    else
      Next = a2->PMProtocolOffloadList.Next;
    if ( !Next )
      goto LABEL_16;
    do
    {
      if ( ndisComparePMProtocolOffloads((struct _NDIS_PM_PROTOCOL_OFFLOAD *)&Next[6], InformationBuffer) )
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
LABEL_16:
      PMProtocolOffloadEntry = ndisCreatePMProtocolOffloadEntry(InformationBuffer, a3->PortNumber);
      if ( PMProtocolOffloadEntry )
      {
        PMProtocolOffloadEntry->Source = *(void **)&a3->NdisReserved[32];
        *(_QWORD *)&a3->NdisReserved[88] = PMProtocolOffloadEntry;
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
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      0xBu,
      0x5Bu,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      (char)a1,
      *a4,
      v8);
  return v8;
}
