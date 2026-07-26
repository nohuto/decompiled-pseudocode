/*
 * XREFs of ?ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C003B57C
 * Callers:
 *     ?ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00169B0 (-ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreAddWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0091820 (-ndisOidPreAddWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisIsWoLPacketTypeSupported@@YAEW4_NDIS_PM_WOL_PACKET@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0017194 (-ndisIsWoLPacketTypeSupported@@YAEW4_NDIS_PM_WOL_PACKET@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCompareWoLPatterns@@YAEPEAU_NDIS_PM_WOL_PATTERN@@0@Z @ 0x1C00172FC (-ndisCompareWoLPatterns@@YAEPEAU_NDIS_PM_WOL_PATTERN@@0@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C001935C (WPP_RECORDER_SF_d.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003BB24 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C003BC68 (WPP_RECORDER_SF_qdL.c)
 *     ?ndisCreateWoLPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_WOL_PATTERN@@K@Z @ 0x1C003BD50 (-ndisCreateWoLPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_WOL_PATTERN@@K@Z.c)
 *     ?ndisGetNewPatternEntryId@@YAKPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C003BDF8 (-ndisGetNewPatternEntryId@@YAKPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?ndisPMPatternIdExist@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1C003BE14 (-ndisPMPatternIdExist@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 */

__int64 __fastcall ndisMiniportPreAddWoLPattern(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        char *a3)
{
  unsigned int v3; // ebx
  _SINGLE_LIST_ENTRY *v5; // rdi
  struct _NDIS_PM_WOL_PATTERN *InformationBuffer; // rbp
  unsigned int v9; // edx
  int v10; // r8d
  _SINGLE_LIST_ENTRY *OidSourceHandle; // rax
  struct _SINGLE_LIST_ENTRY *p_WOLPatternList; // rcx
  _SINGLE_LIST_ENTRY *v13; // r13
  _SINGLE_LIST_ENTRY *Next; // rsi
  struct _NDIS_PACKET_PATTERN_ENTRY *WoLPatternEntry; // rax
  struct _NDIS_PACKET_PATTERN_ENTRY *v16; // r9
  unsigned int PatternId; // eax
  _SINGLE_LIST_ENTRY *v19; // rax
  char v20[8]; // [rsp+28h] [rbp-40h]

  v3 = 0;
  v5 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x38u,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      (char)a1,
      a2);
  InformationBuffer = (struct _NDIS_PM_WOL_PATTERN *)a2->DATA.QUERY_INFORMATION.InformationBuffer;
  *a3 = 1;
  if ( !ndisIsWoLPacketTypeSupported(InformationBuffer->WoLPacketType, a1)
    && (v10 != 2 || (unsigned int)(a1->PMAdvertisedCapabilities.MinMagicPacketWakeUp - 2) > 2) )
  {
    v3 = -1073741637;
    goto LABEL_12;
  }
  OidSourceHandle = (_SINGLE_LIST_ENTRY *)ndisGetOidSourceHandle(a2);
  p_WOLPatternList = &a1->WOLPatternList;
  v13 = OidSourceHandle;
  Next = a1->WOLPatternList.Next;
  if ( Next )
  {
    do
    {
      v5 = Next;
      if ( ndisCompareWoLPatterns((struct _NDIS_PM_WOL_PATTERN *)&Next[6], InformationBuffer) )
        break;
      Next = Next->Next;
      v5 = 0LL;
    }
    while ( Next );
    if ( v5 )
    {
      v19 = v5 + 1;
      if ( v5 != (_SINGLE_LIST_ENTRY *)-8LL )
      {
        do
        {
          if ( v19[2].Next == v13 )
            break;
          v19 = v19->Next;
        }
        while ( v19 );
        if ( v19 )
        {
          v3 = -1073676267;
          goto LABEL_12;
        }
      }
    }
    p_WOLPatternList = &a1->WOLPatternList;
  }
  if ( (InformationBuffer->Flags & 1) != 0
    && ((v9 = InformationBuffer->PatternId, v9 < 0xFFFF) || ndisPMPatternIdExist(p_WOLPatternList, v9)) )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v20 = v9;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x39u,
        (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
        *(_QWORD *)v20);
    }
    v3 = -1073676267;
  }
  else
  {
    WoLPatternEntry = ndisCreateWoLPatternEntry(InformationBuffer, a2->PortNumber);
    v16 = WoLPatternEntry;
    if ( WoLPatternEntry )
    {
      WoLPatternEntry->Source = v13;
      a1->OidContext = WoLPatternEntry;
      if ( (InformationBuffer->Flags & 1) != 0 )
      {
        PatternId = InformationBuffer->PatternId;
      }
      else if ( v5 )
      {
        PatternId = HIDWORD(v5[24].Next);
      }
      else
      {
        PatternId = ndisGetNewPatternEntryId(&a1->WOLPatternList);
      }
      InformationBuffer->PatternId = PatternId;
      v16->WoLPattern.PatternId = PatternId;
      v16->Id = PatternId;
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
LABEL_12:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      11,
      58,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      (char)a1,
      *a3,
      v3);
  return v3;
}
