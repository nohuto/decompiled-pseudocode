/*
 * XREFs of ?ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0090B0C
 * Callers:
 *     ?ndisOidPreAddPMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0091510 (-ndisOidPreAddPMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_d @ 0x1C001914C (WPP_RECORDER_SF_d.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003B7C4 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C003B908 (WPP_RECORDER_SF_qdL.c)
 *     ?ndisGetNewPatternEntryId@@YAKPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C003BA98 (-ndisGetNewPatternEntryId@@YAKPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?ndisPMPatternIdExist@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1C003BAB4 (-ndisPMPatternIdExist@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 *     ?ndisComparePMProtocolOffloads@@YAEPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@0@Z @ 0x1C008F5CC (-ndisComparePMProtocolOffloads@@YAEPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@0@Z.c)
 *     ?ndisCreatePMProtocolOffloadEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PROTOCOL_OFFLOAD@@K@Z @ 0x1C008F988 (-ndisCreatePMProtocolOffloadEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PROTOCOL_OFFLO.c)
 *     ?ndisIsPMProtocolOffloadSupported@@YAEW4_NDIS_PM_PROTOCOL_OFFLOAD_TYPE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008FF4C (-ndisIsPMProtocolOffloadSupported@@YAEW4_NDIS_PM_PROTOCOL_OFFLOAD_TYPE@@PEAU_NDIS_MINIPORT_BLOCK.c)
 */

__int64 __fastcall ndisMiniportPreAddProtocolOffload(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        char *a3)
{
  unsigned int v3; // ebx
  _SINGLE_LIST_ENTRY *v5; // rdi
  struct _NDIS_PM_PROTOCOL_OFFLOAD *InformationBuffer; // rbp
  unsigned int v9; // edx
  _SINGLE_LIST_ENTRY *OidSourceHandle; // rax
  struct _SINGLE_LIST_ENTRY *p_PMProtocolOffloadList; // rcx
  _SINGLE_LIST_ENTRY *v12; // r12
  _SINGLE_LIST_ENTRY *Next; // rsi
  _SINGLE_LIST_ENTRY *v14; // rax
  struct _NDIS_PACKET_PATTERN_ENTRY *PMProtocolOffloadEntry; // rax
  struct _NDIS_PACKET_PATTERN_ENTRY *v16; // r9
  unsigned int ProtocolOffloadId; // eax
  char v19[8]; // [rsp+28h] [rbp-40h]

  v3 = 0;
  v5 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x5Cu,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      (char)a1,
      a2);
  InformationBuffer = (struct _NDIS_PM_PROTOCOL_OFFLOAD *)a2->DATA.QUERY_INFORMATION.InformationBuffer;
  *a3 = 1;
  if ( !ndisIsPMProtocolOffloadSupported(InformationBuffer->ProtocolOffloadType, a1) )
  {
    v3 = -1073741637;
    goto LABEL_31;
  }
  OidSourceHandle = (_SINGLE_LIST_ENTRY *)ndisGetOidSourceHandle(a2);
  p_PMProtocolOffloadList = &a1->PMProtocolOffloadList;
  v12 = OidSourceHandle;
  Next = a1->PMProtocolOffloadList.Next;
  if ( Next )
  {
    do
    {
      v5 = Next;
      if ( ndisComparePMProtocolOffloads((struct _NDIS_PM_PROTOCOL_OFFLOAD *)&Next[6], InformationBuffer) )
        break;
      Next = Next->Next;
      v5 = 0LL;
    }
    while ( Next );
    if ( v5 )
    {
      v14 = v5 + 1;
      if ( v5 != (_SINGLE_LIST_ENTRY *)-8LL )
      {
        do
        {
          if ( v14[2].Next == v12 )
            break;
          v14 = v14->Next;
        }
        while ( v14 );
        if ( v14 )
        {
          v3 = -1073676267;
          goto LABEL_31;
        }
      }
    }
    p_PMProtocolOffloadList = &a1->PMProtocolOffloadList;
  }
  if ( (InformationBuffer->Flags & 1) != 0
    && ((v9 = InformationBuffer->ProtocolOffloadId, v9 < 0xFFFF) || ndisPMPatternIdExist(p_PMProtocolOffloadList, v9)) )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v19 = v9;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x5Du,
        (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
        *(_QWORD *)v19);
    }
    v3 = -1073676267;
  }
  else
  {
    PMProtocolOffloadEntry = ndisCreatePMProtocolOffloadEntry(InformationBuffer, a2->PortNumber);
    v16 = PMProtocolOffloadEntry;
    if ( PMProtocolOffloadEntry )
    {
      PMProtocolOffloadEntry->Source = v12;
      a1->OidContext = PMProtocolOffloadEntry;
      if ( (InformationBuffer->Flags & 1) != 0 )
      {
        ProtocolOffloadId = InformationBuffer->ProtocolOffloadId;
      }
      else if ( v5 )
      {
        ProtocolOffloadId = HIDWORD(v5[24].Next);
      }
      else
      {
        ProtocolOffloadId = ndisGetNewPatternEntryId(&a1->PMProtocolOffloadList);
      }
      InformationBuffer->ProtocolOffloadId = ProtocolOffloadId;
      v16->WoLPattern.PatternId = ProtocolOffloadId;
      v16->Id = ProtocolOffloadId;
      if ( v5 )
      {
        *a3 = 1;
        v16->DupLink.Next = v5 + 1;
      }
      else
      {
        *a3 = 0;
      }
    }
    else
    {
      v3 = -1073741670;
    }
  }
LABEL_31:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      0xBu,
      0x5Eu,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      (char)a1,
      *a3,
      v3);
  return v3;
}
