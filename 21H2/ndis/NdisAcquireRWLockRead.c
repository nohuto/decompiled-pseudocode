/*
 * XREFs of NdisAcquireRWLockRead @ 0x1C0005A00
 * Callers:
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0036180 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?EthFilterDprIndicateReceive@@YAXPEAU_X_FILTER@@PEAXPEAD1I1II@Z @ 0x1C00645C0 (-EthFilterDprIndicateReceive@@YAXPEAU_X_FILTER@@PEAXPEAD1I1II@Z.c)
 *     ?EthFilterDprIndicateReceiveComplete@@YAXPEAU_X_FILTER@@@Z @ 0x1C00649F0 (-EthFilterDprIndicateReceiveComplete@@YAXPEAU_X_FILTER@@@Z.c)
 *     ?EthQueryGlobalFilterAddresses@@YAXPEAHPEAU_X_FILTER@@IPEAIPEAY05E@Z @ 0x1C0064CC4 (-EthQueryGlobalFilterAddresses@@YAXPEAHPEAU_X_FILTER@@IPEAIPEAY05E@Z.c)
 *     ?EthQueryOpenFilterAddresses@@YAXPEAHPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@IPEAIPEAY05E@Z @ 0x1C0064D68 (-EthQueryOpenFilterAddresses@@YAXPEAHPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@IPEAIPEAY05E@Z.c)
 *     ?ethFilterDprIndicateReceivePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0065000 (-ethFilterDprIndicateReceivePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisFIsLoopbackNetBuffer@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@PEAE3@Z @ 0x1C0068140 (-ndisFIsLoopbackNetBuffer@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@PEA.c)
 *     ?ndisMIndicatePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C008E4D0 (-ndisMIndicatePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisPeriodicReceivesWorker@@YAXPEAX@Z @ 0x1C00A3C30 (-ndisPeriodicReceivesWorker@@YAXPEAX@Z.c)
 *     ?ndisVerifyNdisAcquireRWLockRead@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z @ 0x1C00A4B30 (-ndisVerifyNdisAcquireRWLockRead@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z.c)
 *     ?ndisMIsLoopbackNetBuffer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@PEAE3@Z @ 0x1C00AA59C (-ndisMIsLoopbackNetBuffer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@P.c)
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00BB460 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00BB660 (-ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00BB830 (-ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00BBD10 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00BC080 (-ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     NdisMCoReceiveComplete @ 0x1C00BC470 (NdisMCoReceiveComplete.c)
 *     ndisCoIndicateStatusInternal @ 0x1C00BC550 (ndisCoIndicateStatusInternal.c)
 *     ndisMIsLoopbackPacket @ 0x1C00C4F20 (ndisMIsLoopbackPacket.c)
 *     ?ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C012B8C4 (-ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisAcquireRWLockRead(PNDIS_RW_LOCK_EX Lock, PLOCK_STATE_EX LockState, UCHAR Flags)
{
  KIRQL v5; // al
  _QWORD *v6; // rdi
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (Flags & 1) != 0 )
    v5 = 2;
  else
    v5 = KfRaiseIrql(2u);
  LockState->OldIrql = v5;
  v6 = (_QWORD *)(*((_QWORD *)Lock + 4) + (KeGetPcr()->Prcb.Number << 12));
  ++*v6;
  _InterlockedOr(v7, 0);
  if ( *((_QWORD *)Lock + 2) && *v6 <= 1uLL && *((struct _KTHREAD **)Lock + 3) != KeGetCurrentThread() )
  {
    *v6 = 0LL;
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)Lock + 2);
    *v6 = 1LL;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)Lock + 2);
  }
  LockState->LockState = 3;
}
