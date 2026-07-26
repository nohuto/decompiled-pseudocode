/*
 * XREFs of ?ndisOidPreRcvFilterParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00869E0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     memmove @ 0x1C003FB80 (memmove.c)
 *     ?ndisFindReceiveFilterByFilterId@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1C0085568 (-ndisFindReceiveFilterByFilterId@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KK.c)
 */

char __fastcall ndisOidPreRcvFilterParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  struct _NDIS_MINIPORT_BLOCK *v3; // r14
  char v4; // bl
  unsigned int v5; // ebp
  int v6; // eax
  _DWORD *v7; // rax
  unsigned int v8; // r15d
  __int64 v9; // r8
  unsigned int *v10; // r9
  struct _NDIS_MINIPORT_BLOCK *ReceiveFilterByFilterId; // rax
  unsigned int *p_Type; // r13
  unsigned int v13; // r15d
  char *v14; // rcx
  KIRQL v15; // dl
  KIRQL NewIrql; // [rsp+60h] [rbp+8h] BYREF
  void *v18; // [rsp+68h] [rbp+10h]

  v1 = *((_QWORD *)a1 + 4);
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v4 = 1;
  NewIrql = 0;
  v5 = 36;
  if ( *(_DWORD *)(v1 + 4) != 12 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    return v4;
  }
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0x24u )
    goto LABEL_3;
  if ( *(_DWORD *)(v1 + 52) < 0x24u )
    goto LABEL_5;
  if ( *(_BYTE *)(*(_QWORD *)(v1 + 40) + 1LL) == 2 )
  {
    v5 = 44;
    if ( *(_DWORD *)(v1 + 48) < 0x2Cu )
    {
LABEL_3:
      v6 = -1073676268;
LABEL_6:
      *(_DWORD *)(v1 + 68) = v5;
      *((_DWORD *)a1 + 10) = v6;
      *(_DWORD *)(*((_QWORD *)a1 + 4) + 60LL) = 0;
      *(_DWORD *)(*((_QWORD *)a1 + 4) + 64LL) = 0;
      return v4;
    }
    if ( *(_DWORD *)(v1 + 52) < 0x2Cu )
    {
LABEL_5:
      v6 = -1073676266;
      goto LABEL_6;
    }
  }
  if ( !v3 )
    return 0;
  *((_DWORD *)a1 + 10) = -1073741637;
  v7 = *(_DWORD **)(v1 + 40);
  *(_DWORD *)(v1 + 60) = 0;
  *(_DWORD *)(v1 + 64) = v5;
  v18 = v7;
  v8 = v7[4];
  if ( !v8 )
  {
LABEL_13:
    *((_DWORD *)a1 + 10) = -1073741811;
    return v4;
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v3, &NewIrql);
  ReceiveFilterByFilterId = ndisFindReceiveFilterByFilterId(v3, v8, v9, v10);
  p_Type = (unsigned int *)&ReceiveFilterByFilterId->Header.Type;
  if ( !ReceiveFilterByFilterId )
  {
    v3->MiniportThread = 0LL;
    KeReleaseSpinLock(&v3->Lock, NewIrql);
    goto LABEL_13;
  }
  v13 = v5 + ReceiveFilterByFilterId->RequestBuffer * HIDWORD(ReceiveFilterByFilterId->ReturnPacketsQueue);
  *(_DWORD *)(v1 + 68) = v13;
  if ( v13 <= *(_DWORD *)(v1 + 52) )
  {
    memmove(v18, (char *)&ReceiveFilterByFilterId->PacketList.Flink + 4, v5);
    v14 = (char *)v18;
    *((_DWORD *)v18 + 5) = v5;
    memmove(&v14[v5], (char *)p_Type + p_Type[38], p_Type[40] * p_Type[39]);
    v15 = NewIrql;
    v3->MiniportThread = 0LL;
    KeReleaseSpinLock(&v3->Lock, v15);
    *((_DWORD *)a1 + 10) = 0;
    v4 = 1;
    *(_DWORD *)(v1 + 60) = v13;
  }
  else
  {
    v3->MiniportThread = 0LL;
    KeReleaseSpinLock(&v3->Lock, NewIrql);
    *((_DWORD *)a1 + 10) = -1073676266;
  }
  return v4;
}
