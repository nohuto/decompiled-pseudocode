/*
 * XREFs of ?ndisLWM5PauseMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_PAUSE_PARAMETERS@@@Z @ 0x1C006DA68
 * Callers:
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0131BC0 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_RECV_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C006CB8C (-NDIS_ACQUIRE_MINIPORT_RECV_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 */

__int64 __fastcall ndisLWM5PauseMiniport(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_MINIPORT_PAUSE_PARAMETERS *a2)
{
  unsigned int v2; // edi
  KIRQL v4; // dl
  bool v5; // zf
  unsigned __int64 *p_RecvLock; // rcx
  struct _NDIS_MINIPORT_PAUSE_PARAMETERS *NewIrql; // [rsp+38h] [rbp+10h] BYREF

  NewIrql = a2;
  v2 = 0;
  LOBYTE(NewIrql) = 0;
  NDIS_ACQUIRE_MINIPORT_RECV_SPIN_LOCK(a1, (unsigned __int8 *)&NewIrql);
  a1->RecvState = NdisMiniportPausing;
  if ( a1->Miniport5InNdis6Mode )
  {
    if ( a1->OutstandingReceives )
      v2 = 259;
    else
      a1->RecvState = NdisMiniportPaused;
    a1->MiniportRecvLockThread = 0LL;
    p_RecvLock = &a1->RecvLock;
  }
  else
  {
    v4 = (unsigned __int8)NewIrql;
    a1->OutstandingReceives = 0;
    a1->MiniportRecvLockThread = 0LL;
    a1->Miniport5InNdis6Mode = 1;
    a1->RecvState = NdisMiniportPaused;
    KeReleaseSpinLock(&a1->RecvLock, v4);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, (unsigned __int8 *)&NewIrql);
    v5 = (a1->Flags & 0x20000000) == 0;
    a1->SynchronousReturnPacketHandler = ndisSynchReturnPacketsForTranslation;
    a1->SynchronousReturnPacketContext = a1;
    a1->EthRxIndicateHandler = EthIndicateReceive;
    if ( !v5 )
      a1->PacketIndicateHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMIndicatePacketsToNetBufferLists;
    a1->SavedPacketIndicateHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMIndicatePacketsToNetBufferLists;
    p_RecvLock = &a1->Lock;
    a1->MiniportThread = 0LL;
  }
  KeReleaseSpinLock(p_RecvLock, (KIRQL)NewIrql);
  return v2;
}
