/*
 * XREFs of ?ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0094360
 * Callers:
 *     ?ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00167A0 (-ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreAddWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00916A0 (-ndisOidPreAddWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_d @ 0x1C001914C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C003B908 (WPP_RECORDER_SF_qdL.c)
 *     ?ndisGetNewPatternEntryId@@YAKPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C003BA98 (-ndisGetNewPatternEntryId@@YAKPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?ndisPMPatternIdExist@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1C003BAB4 (-ndisPMPatternIdExist@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 *     memcmp @ 0x1C003FA70 (memcmp.c)
 *     ?ndisCreateWakeUpPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PACKET_PATTERN@@K@Z @ 0x1C008FA48 (-ndisCreateWakeUpPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PACKET_PATTERN@@K@.c)
 */

__int64 __fastcall ndisSetAddWakeUpPattern(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *PatternOffset,
        char *a3)
{
  _SINGLE_LIST_ENTRY *v3; // r13
  UCHAR *NdisReserved; // r9
  char *v5; // r12
  struct _NDIS_OID_REQUEST *v6; // rbp
  int v8; // r14d
  unsigned int InformationBufferLength; // r8d
  struct _NDIS_PM_PACKET_PATTERN *InformationBuffer; // rsi
  __int64 MaskSize; // rax
  unsigned int v12; // ebx
  unsigned int v14; // ecx
  __int64 v15; // rcx
  struct _SINGLE_LIST_ENTRY *p_PatternList; // rax
  _SINGLE_LIST_ENTRY *Next; // rdi
  unsigned int Reserved; // eax
  __int64 v19; // r12
  __int64 Next_high; // r13
  size_t v21; // r8
  int v22; // eax
  _SINGLE_LIST_ENTRY *v23; // r14
  unsigned int v24; // edx
  int v25; // edx
  _SINGLE_LIST_ENTRY *i; // rax
  struct _NDIS_PACKET_PATTERN_ENTRY *WakeUpPatternEntry; // rax
  struct _NDIS_PACKET_PATTERN_ENTRY *v28; // r9
  unsigned int NewPatternEntryId; // eax
  char v30[8]; // [rsp+28h] [rbp-70h]
  _SINGLE_LIST_ENTRY *v31; // [rsp+40h] [rbp-58h]
  unsigned int v32; // [rsp+A0h] [rbp+8h]
  int v33; // [rsp+A8h] [rbp+10h]

  v3 = 0LL;
  NdisReserved = PatternOffset->NdisReserved;
  v5 = a3;
  v6 = PatternOffset;
  v8 = 24;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x18u,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      (char)a1,
      PatternOffset);
    NdisReserved = v6->NdisReserved;
  }
  a1->OidContext = 0LL;
  v6->DATA.QUERY_INFORMATION.BytesNeeded = 0;
  InformationBufferLength = v6->DATA.QUERY_INFORMATION.InformationBufferLength;
  *v5 = 1;
  if ( InformationBufferLength < 0x18 )
    goto LABEL_13;
  InformationBuffer = (struct _NDIS_PM_PACKET_PATTERN *)v6->DATA.QUERY_INFORMATION.InformationBuffer;
  MaskSize = InformationBuffer->MaskSize;
  if ( !(_DWORD)MaskSize
    || (PatternOffset = (struct _NDIS_OID_REQUEST *)InformationBuffer->PatternOffset,
        (unsigned __int64)PatternOffset < MaskSize + 24)
    || (v14 = (_DWORD)PatternOffset + InformationBuffer->PatternSize, v14 < (unsigned int)PatternOffset) )
  {
    v12 = -1073676267;
LABEL_6:
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qdL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)PatternOffset,
        0xBu,
        0x1Bu,
        (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
        (char)a1,
        *a3,
        v12);
    return v12;
  }
  if ( InformationBufferLength < v14 )
  {
    v8 = (_DWORD)PatternOffset + InformationBuffer->PatternSize;
LABEL_13:
    v6->DATA.QUERY_INFORMATION.BytesNeeded = v8;
    v12 = -1073676268;
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return v12;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xBu,
      0x1Au,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids);
    goto LABEL_6;
  }
  v15 = (__int64)NdisReserved;
  if ( (*((_DWORD *)NdisReserved + 4) & 0x4000) != 0 )
  {
    do
      v15 = *(_QWORD *)(v15 + 24) + 72LL;
    while ( (*(_DWORD *)(v15 + 16) & 0x4000) != 0 );
  }
  p_PatternList = &a1->PatternList;
  Next = a1->PatternList.Next;
  v12 = -1073676267;
  v31 = *(_SINGLE_LIST_ENTRY **)(v15 + 32);
  if ( !Next )
  {
LABEL_25:
    v23 = 0LL;
    goto LABEL_26;
  }
  while ( 1 )
  {
    if ( InformationBuffer->PatternSize != LODWORD(Next[8].Next) || InformationBuffer->MaskSize != LODWORD(Next[7].Next) )
      goto LABEL_23;
    Reserved = InformationBuffer->Reserved;
    InformationBuffer->Reserved = 0;
    v19 = InformationBuffer->PatternOffset;
    InformationBuffer->PatternOffset = 0;
    Next_high = HIDWORD(Next[7].Next);
    v21 = LODWORD(Next[7].Next) + 24LL;
    HIDWORD(Next[7].Next) = 0;
    v32 = Reserved;
    v22 = HIDWORD(Next[6].Next);
    HIDWORD(Next[6].Next) = 0;
    v33 = v22;
    if ( !memcmp(InformationBuffer, &Next[6], v21)
      && !memcmp((char *)InformationBuffer + v19, (char *)&Next[6] + Next_high, LODWORD(Next[8].Next)) )
    {
      break;
    }
    InformationBuffer->Reserved = v32;
    InformationBuffer->PatternOffset = v19;
    HIDWORD(Next[6].Next) = v33;
    HIDWORD(Next[7].Next) = Next_high;
LABEL_23:
    Next = Next->Next;
    if ( !Next )
    {
      v5 = a3;
      p_PatternList = &a1->PatternList;
      v3 = 0LL;
      goto LABEL_25;
    }
  }
  v23 = Next;
  InformationBuffer->Reserved = v32;
  InformationBuffer->PatternOffset = v19;
  HIDWORD(Next[6].Next) = v33;
  HIDWORD(Next[7].Next) = Next_high;
  if ( Next[3].Next == v31 )
    goto LABEL_6;
  v3 = Next;
  for ( i = Next + 1; i; i = i->Next )
  {
    v3 = i - 1;
    if ( i[2].Next == v31 )
      goto LABEL_6;
  }
  v5 = a3;
  p_PatternList = &a1->PatternList;
LABEL_26:
  v24 = InformationBuffer->Reserved;
  if ( v24 <= 0xFFFF || !ndisPMPatternIdExist(p_PatternList, v24) )
  {
    WakeUpPatternEntry = ndisCreateWakeUpPatternEntry(InformationBuffer, v6->PortNumber);
    v28 = WakeUpPatternEntry;
    if ( WakeUpPatternEntry )
    {
      WakeUpPatternEntry->Source = v31;
      a1->OidContext = WakeUpPatternEntry;
      NewPatternEntryId = InformationBuffer->Reserved;
      if ( NewPatternEntryId <= 0xFFFF )
      {
        if ( v23 )
          NewPatternEntryId = (unsigned int)v23[5].Next;
        else
          NewPatternEntryId = ndisGetNewPatternEntryId(&a1->PatternList);
      }
      v28->Id = NewPatternEntryId;
      *(_DWORD *)&v6->NdisReserved[80] = NewPatternEntryId;
      v12 = 0;
      v28->Pattern.Reserved = v28->Id;
      if ( v3 )
      {
        *v5 = 1;
        v28->DupLink.Next = Next + 1;
      }
      else
      {
        *v5 = 0;
      }
    }
    else
    {
      v12 = -1073741670;
    }
    goto LABEL_6;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v30 = v25;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xEu,
      0x19u,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      *(_QWORD *)v30);
    goto LABEL_6;
  }
  return v12;
}
