/*
 * XREFs of ?ndisOidPreRcvFilterFreeQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0086600
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003B7C4 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1C0085598 (-ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEA.c)
 */

char __fastcall ndisOidPreRcvFilterFreeQueue(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  _BYTE *v2; // rbp
  struct _NDIS_MINIPORT_BLOCK *v3; // r14
  char v4; // si
  __int64 v6; // rax
  unsigned int v7; // r15d
  __int64 v8; // r8
  unsigned int *v9; // r9
  struct _NDIS_MINIPORT_BLOCK *ReceiveQueueByQueueId; // rax
  KIRQL v11; // dl
  struct _NDIS_MINIPORT_BLOCK *v12; // r15
  _BYTE *OidSourceHandle; // rax
  KIRQL NewIrql; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0LL;
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v4 = 1;
  NewIrql = 0;
  v6 = *(_QWORD *)(v1 + 40);
  if ( *(_DWORD *)(v1 + 4) == 1 )
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) >= 0xCu )
    {
      if ( !v3 )
        return 0;
      *(_DWORD *)(v1 + 52) = 12;
      v7 = *(_DWORD *)(v6 + 8);
      if ( !v7 )
        goto LABEL_7;
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v3, &NewIrql);
      ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(v3, v7, v8, v9);
      v11 = NewIrql;
      v3->MiniportThread = 0LL;
      v12 = ReceiveQueueByQueueId;
      KeReleaseSpinLock(&v3->Lock, v11);
      if ( !v12 )
        goto LABEL_7;
      OidSourceHandle = ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1);
      if ( OidSourceHandle && *OidSourceHandle == 18 )
        v2 = OidSourceHandle;
      if ( *(_BYTE **)&v12->ShortRef.ReferenceCount == v2 )
        return 0;
      else
LABEL_7:
        *((_DWORD *)a1 + 10) = -1073741811;
    }
    else
    {
      *(_DWORD *)(v1 + 56) = 12;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
  }
  else
  {
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  return v4;
}
