/*
 * XREFs of ?ndisQueryWakeUpPatternList@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0093BD8
 * Callers:
 *     ?ndisOidPrePMWOLPatternList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00920F0 (-ndisOidPrePMWOLPatternList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreWakeUpPatternList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00926C0 (-ndisOidPreWakeUpPatternList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqqL @ 0x1C000E1D0 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000E2D0 (WPP_RECORDER_SF_qqq.c)
 *     memmove @ 0x1C0040100 (memmove.c)
 */

__int64 __fastcall ndisQueryWakeUpPatternList(
        struct _NDIS_OPEN_BLOCK *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_OID_REQUEST *a3)
{
  UINT v3; // ebx
  UINT v5; // r13d
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rdi
  _SINGLE_LIST_ENTRY *Next; // rsi
  _SINGLE_LIST_ENTRY *i; // r10
  __int64 Next_low; // rcx
  unsigned int v11; // r9d
  unsigned int v12; // edx
  unsigned int v13; // r15d
  char *InformationBuffer; // r12
  __int64 v15; // rcx
  __int64 v16; // rbx
  KIRQL v17; // dl
  int v18; // edx
  KIRQL NewIrql; // [rsp+80h] [rbp+8h] BYREF

  v3 = 0;
  v5 = 0;
  NewIrql = 0;
  MiniportHandle = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x2Cu,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      (char)a2,
      (char)a1,
      a3);
  if ( !MiniportHandle )
    MiniportHandle = a1->MiniportHandle;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(MiniportHandle, &NewIrql);
  if ( a1 )
    Next = a1->PatternList.Next;
  else
    Next = MiniportHandle->PatternList.Next;
  for ( i = Next; i; v3 += v12 )
  {
    Next_low = LODWORD(i[7].Next);
    v11 = HIDWORD(i[7].Next) + LODWORD(i[8].Next);
    i = i->Next;
    v12 = Next_low + 24;
    if ( Next_low + 24 <= (unsigned __int64)v11 )
      v12 = v11;
  }
  v13 = 0;
  if ( a3->DATA.QUERY_INFORMATION.InformationBufferLength >= v3 )
  {
    InformationBuffer = (char *)a3->DATA.QUERY_INFORMATION.InformationBuffer;
    while ( Next )
    {
      v15 = LODWORD(Next[7].Next);
      v16 = (unsigned int)(v15 + 24);
      if ( v15 + 24 <= (unsigned __int64)(unsigned int)(HIDWORD(Next[7].Next) + LODWORD(Next[8].Next)) )
        v16 = (unsigned int)(HIDWORD(Next[7].Next) + LODWORD(Next[8].Next));
      memmove(InformationBuffer, &Next[6], (unsigned int)v16);
      Next = Next->Next;
      InformationBuffer += v16;
      v5 += v16;
    }
  }
  else
  {
    a3->DATA.QUERY_INFORMATION.BytesNeeded = v3;
    v13 = -1073676268;
  }
  v17 = NewIrql;
  a3->DATA.QUERY_INFORMATION.BytesWritten = v5;
  MiniportHandle->MiniportThread = 0LL;
  KeReleaseSpinLock(&MiniportHandle->Lock, v17);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v18,
      0xBu,
      0x2Du,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      (char)a3,
      v13);
  return v13;
}
