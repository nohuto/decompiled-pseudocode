/*
 * XREFs of ?ndisPreRemoveMiniportWakeUpPattern@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0093730
 * Callers:
 *     ?ndisOidPrePMRemoveWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0091EF0 (-ndisOidPrePMRemoveWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRemoveWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0092520 (-ndisOidPreRemoveWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     memcmp @ 0x1C003FFE0 (memcmp.c)
 */

bool __fastcall ndisPreRemoveMiniportWakeUpPattern(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  char v2; // r15
  bool v4; // si
  UCHAR *i; // rcx
  _SINGLE_LIST_ENTRY *Next; // rbx
  _DWORD *InformationBuffer; // rdi
  __int64 v9; // r12
  PVOID v10; // rcx
  __int64 Next_high; // r13
  int v12; // eax
  __int64 Next_low; // r8
  _SINGLE_LIST_ENTRY *j; // rax
  int v16; // [rsp+80h] [rbp+8h]
  int v17; // [rsp+88h] [rbp+10h]
  _SINGLE_LIST_ENTRY *v18; // [rsp+90h] [rbp+18h]

  v2 = 0;
  v4 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x21u,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      (char)a1,
      a2);
  for ( i = a2->NdisReserved; (*((_DWORD *)i + 4) & 0x4000) != 0; i = (UCHAR *)(*((_QWORD *)i + 3) + 72LL) )
    ;
  Next = a1->PatternList.Next;
  v18 = (_SINGLE_LIST_ENTRY *)*((_QWORD *)i + 4);
  while ( 1 )
  {
    if ( !Next )
      goto LABEL_24;
    InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
    if ( InformationBuffer[4] == LODWORD(Next[8].Next) && InformationBuffer[2] == LODWORD(Next[7].Next) )
      break;
LABEL_12:
    Next = Next->Next;
  }
  v9 = (unsigned int)InformationBuffer[3];
  v10 = a2->DATA.QUERY_INFORMATION.InformationBuffer;
  Next_high = HIDWORD(Next[7].Next);
  v16 = InformationBuffer[1];
  v12 = HIDWORD(Next[6].Next);
  InformationBuffer[3] = 0;
  HIDWORD(Next[7].Next) = 0;
  InformationBuffer[1] = 0;
  Next_low = LODWORD(Next[7].Next);
  HIDWORD(Next[6].Next) = 0;
  v17 = v12;
  if ( memcmp(v10, &Next[6], Next_low + 24)
    || memcmp((char *)InformationBuffer + v9, (char *)&Next[6] + Next_high, LODWORD(Next[8].Next)) )
  {
    InformationBuffer[3] = v9;
    HIDWORD(Next[7].Next) = Next_high;
    goto LABEL_12;
  }
  if ( v18 == Next[3].Next )
  {
    v2 = 1;
    v4 = Next[1].Next != 0LL;
  }
  else
  {
    for ( j = Next[1].Next; j; j = j->Next )
    {
      if ( j[2].Next == v18 )
      {
        v2 = 1;
        v4 = 1;
        break;
      }
    }
  }
  InformationBuffer[3] = v9;
  HIDWORD(Next[7].Next) = Next_high;
  InformationBuffer[1] = v16;
  HIDWORD(Next[6].Next) = v17;
  if ( !v2 )
LABEL_24:
    v4 = 1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x22u,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      (char)a1,
      a2);
  return v4;
}
