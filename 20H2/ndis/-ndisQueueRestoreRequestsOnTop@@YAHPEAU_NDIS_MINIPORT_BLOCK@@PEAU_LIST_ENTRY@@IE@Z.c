/*
 * XREFs of ?ndisQueueRestoreRequestsOnTop@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@IE@Z @ 0x1C009F158
 * Callers:
 *     ?ndisMRestoreFilterSettings@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@E@Z @ 0x1C009AEE8 (-ndisMRestoreFilterSettings@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000DF10 (WPP_RECORDER_SF_qqL.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0012D38 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x1C00185E4 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001A5DC (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisFQueueOidRequest@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C001BDFC (-ndisFQueueOidRequest@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D018 (WPP_RECORDER_SF_qd.c)
 *     ?ndisMQueueOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0038F14 (-ndisMQueueOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     memset @ 0x1C003FE40 (memset.c)
 */

__int64 __fastcall ndisQueueRestoreRequestsOnTop(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _LIST_ENTRY *a2,
        unsigned int a3,
        char a4)
{
  struct _NDIS_FILTER_BLOCK *v5; // rbx
  bool v6; // r13
  unsigned int v7; // r15d
  struct _NDIS_MINIPORT_BLOCK *v9; // rbp
  unsigned int v10; // r12d
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  struct _WORK_QUEUE_ITEM *v12; // rsi
  UCHAR Type; // al
  struct _NDIS_FILTER_BLOCK *RequestHandle; // rdi
  __int64 p_PnPRef; // rbp
  char v16; // al
  int v17; // ebx
  _LIST_ENTRY *v18; // r10
  struct _NDIS_FILTER_BLOCK *v19; // rax
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v21; // rcx
  void *v22; // r10
  _LIST_ENTRY *v23; // rax
  _LIST_ENTRY *v24; // rcx
  void *v25; // r9
  int v27; // [rsp+40h] [rbp-38h] BYREF
  int v28; // [rsp+44h] [rbp-34h] BYREF
  int v29; // [rsp+48h] [rbp-30h] BYREF
  _LIST_ENTRY *retaddr; // [rsp+78h] [rbp+0h]

  v5 = 0LL;
  v6 = 0;
  v7 = a3;
  v9 = a1;
  v10 = -1073741823;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x16u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)a1,
      a3);
  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6977444Eu);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v10 = -1073741670;
    goto LABEL_49;
  }
  memset(PoolWithTag, 0, 0x50uLL);
  if ( a4 )
  {
    Type = v9->Header.Type;
    RequestHandle = (struct _NDIS_FILTER_BLOCK *)v9;
  }
  else
  {
    RequestHandle = (struct _NDIS_FILTER_BLOCK *)v9->Next.RequestHandle;
    Type = RequestHandle->Header.Type;
    if ( RequestHandle->Header.Type == 5 )
    {
      while ( 1 )
      {
        v27 = 0;
        v6 = ndisReferenceRefEx(&RequestHandle->PnPRef.SpinLock, 0xFu, (enum _NDIS_REFERENCE_STATUS *)&v27);
        if ( v6 )
          break;
        RequestHandle = (struct _NDIS_FILTER_BLOCK *)RequestHandle->NextRequestHandle;
        Type = RequestHandle->Header.Type;
        if ( RequestHandle->Header.Type != 5 )
          goto LABEL_10;
      }
      v17 = 1;
      if ( v7 > 1 )
      {
        while ( 1 )
        {
          v28 = 0;
          v6 = ndisReferenceRefEx(&RequestHandle->PnPRef.SpinLock, 0xFu, (enum _NDIS_REFERENCE_STATUS *)&v28);
          if ( !v6 )
            break;
          if ( ++v17 >= v7 )
            goto LABEL_22;
        }
        for ( ; v17; --v17 )
          ndisDereferenceRef(&RequestHandle->PnPRef.SpinLock, 0xFu);
LABEL_22:
        v9 = a1;
      }
      Type = RequestHandle->Header.Type;
      if ( RequestHandle->Header.Type != 5 )
      {
LABEL_10:
        v5 = 0LL;
        goto LABEL_11;
      }
      v5 = RequestHandle;
    }
  }
LABEL_11:
  if ( Type != 17 )
    RequestHandle = 0LL;
  if ( v5 )
  {
    if ( !v6 )
      goto LABEL_47;
    v29 = 0;
    p_PnPRef = (__int64)&v5->PnPRef;
    v16 = ndisReferenceRefEx(&v5->PnPRef.SpinLock, 0xCu, (enum _NDIS_REFERENCE_STATUS *)&v29);
  }
  else
  {
    v16 = ndisReferenceMiniport(v9, 0x47u);
    p_PnPRef = 312LL;
  }
  v18 = 0LL;
  if ( v16 )
  {
    v19 = v5;
    if ( !v5 )
      v19 = RequestHandle;
    v12[1].Parameter = v19;
    if ( v5 )
    {
      KeAcquireSpinLockAtDpcLevel(&v5->Lock);
      v5->LockThread = KeGetCurrentThread();
      while ( 1 )
      {
        Flink = a2->Flink;
        if ( a2->Flink == a2 )
          break;
        if ( Flink->Blink != a2 )
          goto LABEL_43;
        v21 = Flink->Flink;
        if ( Flink->Flink->Blink != Flink )
          goto LABEL_43;
        a2->Flink = v21;
        v21->Blink = a2;
        if ( (unsigned int)ndisFQueueOidRequest(v5, (struct _NDIS_OID_REQUEST *)&Flink[-5].Blink) )
          ExFreePoolWithTag(v22, 0);
      }
      v5->LockThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&v5->Lock);
      v18 = 0LL;
    }
    else
    {
      while ( 1 )
      {
        v23 = a2->Flink;
        if ( a2->Flink == a2 )
          break;
        if ( v23->Blink != a2 || (v24 = v23->Flink, v23->Flink->Blink != v23) )
LABEL_43:
          __fastfail(3u);
        a2->Flink = v24;
        v24->Blink = a2;
        if ( (unsigned int)ndisMQueueOidRequest(
                             (struct _NDIS_MINIPORT_BLOCK *)RequestHandle,
                             (struct _NDIS_OID_REQUEST *)&v23[-5].Blink) )
        {
          ExFreePoolWithTag(v25, 0);
          v18 = 0LL;
        }
      }
    }
    v12[1].List.Flink = retaddr;
    v12[1].List.Blink = v18;
    v12->WorkerRoutine = (void (__fastcall *)(void *))ndisDoOidRequests;
    v12->Parameter = v12;
    v12->List.Flink = v18;
    ExQueueWorkItem(v12, (WORK_QUEUE_TYPE)40);
    v10 = 259;
    goto LABEL_48;
  }
  if ( v6 && v7 )
  {
    do
    {
      ndisDereferenceRef((PKSPIN_LOCK)p_PnPRef, 0xFu);
      --v7;
    }
    while ( v7 );
  }
LABEL_47:
  ExFreePoolWithTag(v12, 0);
LABEL_48:
  LOBYTE(v9) = (_BYTE)a1;
LABEL_49:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x17u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)v9,
      (char)a2,
      v10);
  return v10;
}
