/*
 * XREFs of ?ndisOidPreRcvFilterQueueParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0086BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003B7C4 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     memmove @ 0x1C003FB80 (memmove.c)
 *     ?ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1C0085598 (-ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEA.c)
 */

char __fastcall ndisOidPreRcvFilterQueueParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  __int64 v2; // r13
  struct _NDIS_MINIPORT_BLOCK *v3; // rbp
  _BYTE *v4; // r15
  int v6; // eax
  char v7; // r14
  unsigned int v8; // edx
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  unsigned __int64 v12; // rax
  unsigned __int16 v13; // r8
  int v14; // ecx
  unsigned __int64 v15; // rax
  unsigned __int16 v16; // r8
  unsigned int v17; // ebx
  __int64 v18; // r8
  unsigned int *v19; // r9
  struct _NDIS_MINIPORT_BLOCK *ReceiveQueueByQueueId; // rax
  unsigned int v21; // ecx
  size_t v22; // r8
  void *v23; // rcx
  _BYTE *OidSourceHandle; // rax
  __int64 v25; // r10
  KIRQL NewIrql; // [rsp+50h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0LL;
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v4 = 0LL;
  NewIrql = 0;
  v6 = *(_DWORD *)(v1 + 4);
  v7 = 1;
  if ( v6 != 12 )
  {
    if ( v6 != 1 )
    {
      *((_DWORD *)a1 + 10) = -1073741637;
      return v7;
    }
    *((_DWORD *)a1 + 10) = 0;
    v8 = *(_DWORD *)(v1 + 48);
    if ( v8 < 0x43C )
    {
      *(_DWORD *)(v1 + 56) = 1084;
      *((_DWORD *)a1 + 10) = -1073676268;
      *(_DWORD *)(v1 + 52) = 0;
      return v7;
    }
    goto LABEL_10;
  }
  *((_DWORD *)a1 + 10) = 0;
  v8 = *(_DWORD *)(v1 + 48);
  if ( v8 >= 0x43C )
  {
    if ( *(_DWORD *)(v1 + 52) < 0x43Cu )
    {
      v9 = -1073676266;
      goto LABEL_6;
    }
LABEL_10:
    if ( !v3 )
      return 0;
    v10 = *(_DWORD *)(v1 + 4);
    if ( v10 == 12 )
    {
      *(_DWORD *)(v1 + 60) = 0;
      v11 = 1096;
      v2 = *(_QWORD *)(v1 + 40);
      v12 = 1096LL;
      v13 = *(_WORD *)(v2 + 2);
      if ( v13 < 0x448u )
        v12 = *(unsigned __int16 *)(v2 + 2);
      if ( v12 >= v8 )
      {
        v11 = v8;
      }
      else if ( v13 < 0x448u )
      {
        v11 = *(unsigned __int16 *)(v2 + 2);
      }
      *(_DWORD *)(v1 + 64) = v11;
    }
    else if ( v10 == 1 )
    {
      v2 = *(_QWORD *)(v1 + 40);
      v14 = 1096;
      v15 = 1096LL;
      v16 = *(_WORD *)(v2 + 2);
      if ( v16 < 0x448u )
        v15 = *(unsigned __int16 *)(v2 + 2);
      if ( v15 >= v8 )
      {
        v14 = v8;
      }
      else if ( v16 < 0x448u )
      {
        v14 = *(unsigned __int16 *)(v2 + 2);
      }
      *(_DWORD *)(v1 + 52) = v14;
    }
    *((_DWORD *)a1 + 10) = -1073741637;
    v17 = *(_DWORD *)(v2 + 12);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v3, &NewIrql);
    ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(v3, v17, v18, v19);
    if ( !ReceiveQueueByQueueId )
    {
      v3->MiniportThread = 0LL;
LABEL_32:
      KeReleaseSpinLock(&v3->Lock, NewIrql);
      *((_DWORD *)a1 + 10) = -1073741811;
      return v7;
    }
    if ( *(_DWORD *)(v1 + 4) == 12 )
    {
      v21 = WORD1(ReceiveQueueByQueueId->PacketList.Flink);
      if ( v21 >= *(_DWORD *)(v1 + 48) )
        v21 = *(_DWORD *)(v1 + 48);
      v22 = v21;
      v23 = *(void **)(v1 + 40);
      *(_DWORD *)(v1 + 60) = v22;
      memmove(v23, &ReceiveQueueByQueueId->PacketList, v22);
      *(_WORD *)(v2 + 2) = *(_WORD *)(v1 + 60);
      *((_DWORD *)a1 + 10) = 0;
    }
    else
    {
      OidSourceHandle = ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1);
      if ( OidSourceHandle && *OidSourceHandle == 18 )
        v4 = OidSourceHandle;
      if ( *(_BYTE **)(v25 + 72) != v4 )
      {
        v3->MiniportThread = 0LL;
        goto LABEL_32;
      }
      v7 = 0;
    }
    v3->MiniportThread = 0LL;
    KeReleaseSpinLock(&v3->Lock, NewIrql);
    return v7;
  }
  v9 = -1073676268;
LABEL_6:
  *(_DWORD *)(v1 + 68) = 1084;
  *((_DWORD *)a1 + 10) = v9;
  *(_DWORD *)(v1 + 60) = 0;
  *(_DWORD *)(v1 + 64) = 0;
  return v7;
}
