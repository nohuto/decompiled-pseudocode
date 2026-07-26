/*
 * XREFs of ?ndisOidPreRcvFilterClearFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0085850
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003B584 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisFindReceiveFilterByFilterId@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1C0084E88 (-ndisFindReceiveFilterByFilterId@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KK.c)
 */

char __fastcall ndisOidPreRcvFilterClearFilter(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v2; // rcx
  char v3; // di
  struct _NDIS_MINIPORT_BLOCK *v4; // rbp
  __int64 v5; // r15
  unsigned int v6; // r14d
  _BYTE *OidSourceHandle; // rax
  _BYTE *v8; // rsi
  __int64 v9; // r8
  unsigned int *v10; // r9
  struct _NDIS_MINIPORT_BLOCK *ReceiveFilterByFilterId; // rax
  KIRQL v12; // dl
  struct _NDIS_MINIPORT_BLOCK *v13; // r14
  KIRQL NewIrql; // [rsp+40h] [rbp+8h] BYREF

  NewIrql = 0;
  v2 = *((_QWORD *)a1 + 4);
  v3 = 1;
  v4 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v5 = *(_QWORD *)(v2 + 40);
  if ( *(_DWORD *)(v2 + 4) != 1 )
    goto LABEL_14;
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v2 + 48) >= 0x10u )
  {
    if ( !v4 )
      return 0;
    v6 = *(_DWORD *)(v5 + 12);
    if ( !v6 )
    {
LABEL_7:
      *((_DWORD *)a1 + 10) = -1073741811;
      return v3;
    }
    OidSourceHandle = ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v2);
    v8 = OidSourceHandle;
    if ( OidSourceHandle && *OidSourceHandle == 18 )
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v4, &NewIrql);
      ReceiveFilterByFilterId = ndisFindReceiveFilterByFilterId(v4, v6, v9, v10);
      v12 = NewIrql;
      v4->MiniportThread = 0LL;
      v13 = ReceiveFilterByFilterId;
      KeReleaseSpinLock(&v4->Lock, v12);
      if ( v13 && (_BYTE *)v13->ShortRef.SpinLock == v8 && *(_DWORD *)(v5 + 8) == LODWORD(v13->FirstPendingPacket) )
        return 0;
      goto LABEL_7;
    }
LABEL_14:
    *((_DWORD *)a1 + 10) = -1073741637;
    return v3;
  }
  *(_DWORD *)(v2 + 56) = 16;
  *((_DWORD *)a1 + 10) = -1073676268;
  return v3;
}
