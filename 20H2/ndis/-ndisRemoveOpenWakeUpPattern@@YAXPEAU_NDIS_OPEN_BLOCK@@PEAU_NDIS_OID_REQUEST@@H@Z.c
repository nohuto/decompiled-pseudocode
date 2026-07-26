/*
 * XREFs of ?ndisRemoveOpenWakeUpPattern@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0094154
 * Callers:
 *     ?ndisPostSetRemoveWakeUpPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00932C0 (-ndisPostSetRemoveWakeUpPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000DF10 (WPP_RECORDER_SF_qqL.c)
 *     memcmp @ 0x1C003FA70 (memcmp.c)
 */

void __fastcall ndisRemoveOpenWakeUpPattern(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int a3)
{
  _SINGLE_LIST_ENTRY *Next; // rbx
  _SINGLE_LIST_ENTRY *v7; // r14
  _DWORD *InformationBuffer; // rdi
  __int64 Next_high; // r13
  PVOID v10; // rcx
  __int64 v11; // r12
  int v12; // eax
  __int64 Next_low; // r8
  _SINGLE_LIST_ENTRY *v14; // rax
  __int64 v15; // [rsp+38h] [rbp-40h]
  int v16; // [rsp+90h] [rbp+18h]
  int v17; // [rsp+98h] [rbp+20h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x23u,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  if ( !a3 )
  {
    Next = a1->PatternList.Next;
    v7 = 0LL;
    while ( Next )
    {
      InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
      if ( InformationBuffer[4] == LODWORD(Next[8].Next) && InformationBuffer[2] == LODWORD(Next[7].Next) )
      {
        Next_high = HIDWORD(Next[7].Next);
        v10 = a2->DATA.QUERY_INFORMATION.InformationBuffer;
        v11 = (unsigned int)InformationBuffer[3];
        v16 = InformationBuffer[1];
        v12 = HIDWORD(Next[6].Next);
        InformationBuffer[1] = 0;
        HIDWORD(Next[6].Next) = 0;
        InformationBuffer[3] = 0;
        Next_low = LODWORD(Next[7].Next);
        HIDWORD(Next[7].Next) = 0;
        v17 = v12;
        if ( !memcmp(v10, &Next[6], Next_low + 24)
          && !memcmp((char *)InformationBuffer + v11, (char *)&Next[6] + Next_high, LODWORD(Next[8].Next)) )
        {
          v14 = Next->Next;
          if ( v7 )
            v7->Next = v14;
          else
            a1->PatternList.Next = v14;
          ExFreePoolWithTag(Next, 0);
          InformationBuffer[3] = v11;
          break;
        }
        InformationBuffer[3] = v11;
        HIDWORD(Next[7].Next) = Next_high;
        InformationBuffer[1] = v16;
        HIDWORD(Next[6].Next) = v17;
      }
      v7 = Next;
      Next = Next->Next;
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v15) = a3;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x24u,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      (char)a1,
      (char)a2,
      v15);
  }
}
