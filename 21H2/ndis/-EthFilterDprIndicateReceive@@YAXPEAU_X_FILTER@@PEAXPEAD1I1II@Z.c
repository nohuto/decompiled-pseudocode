/*
 * XREFs of ?EthFilterDprIndicateReceive@@YAXPEAU_X_FILTER@@PEAXPEAD1I1II@Z @ 0x1C00645C0
 * Callers:
 *     <none>
 * Callees:
 *     NdisAcquireRWLockRead @ 0x1C0005A00 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1C0005AC0 (NdisReleaseRWLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     ?ethFindMulticast@@YAEIPEAU_ETH_MULTICAST_WRAPPER@@PEAY05EQEAE@Z @ 0x1C0065A54 (-ethFindMulticast@@YAEIPEAU_ETH_MULTICAST_WRAPPER@@PEAY05EQEAE@Z.c)
 *     ?ethFilterReceivePacketStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAEK@Z @ 0x1C008E2EC (-ethFilterReceivePacketStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAEK@Z.c)
 */

void __fastcall EthFilterDprIndicateReceive(
        struct _X_FILTER *a1,
        void *a2,
        char *a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned int Number; // r13d
  struct _X_FILTER *v12; // rbx
  _NDIS_OPEN_BLOCK *SingleActiveOpen; // rax
  unsigned int v14; // r10d
  _NDIS_OPEN_BLOCK *v15; // rcx
  _NDIS_MINIPORT_BLOCK *Miniport; // rax
  _NDIS_MINIPORT_STATS *BottomIfStats; // rdx
  __int64 v18; // rax
  _NDIS_MINIPORT_STATS *v19; // r8
  _NDIS_MINIPORT_STATS *v20; // rdx
  int v21; // esi
  _NDIS_OPEN_BLOCK *OpenList; // rdi
  unsigned int PacketFilters; // eax
  _NDIS_OPEN_BLOCK *FilterNextOpen; // rbp
  _NDIS_MINIPORT_BLOCK *v25; // rdx
  int v26; // ebp
  _NDIS_MINIPORT_STATS *v27; // r8
  _NDIS_MINIPORT_STATS *v28; // rdx
  _NDIS_MINIPORT_STATS *v29; // rdx
  __int64 v30; // rax
  _NDIS_MINIPORT_BLOCK *v31; // rdx
  _NDIS_MINIPORT_STATS *v32; // r8
  _NDIS_MINIPORT_STATS *v33; // rdx
  _NDIS_MINIPORT_STATS *v34; // rdx
  __int64 v35; // rax
  _NDIS_OPEN_BLOCK *v36; // rsi
  unsigned int v37; // ebx
  unsigned int v38; // eax
  _NDIS_OPEN_BLOCK *v39; // r14
  struct _LOCK_STATE_EX LockState; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v41; // [rsp+44h] [rbp-44h]

  Number = KeGetPcr()->Prcb.Number;
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  v41 = Number;
  v12 = a1;
  if ( a1 && (a1->Miniport->Flags & 0x20000000) != 0 )
  {
    NdisAcquireRWLockRead(a1->BindListLock, &LockState, 0);
    SingleActiveOpen = v12->SingleActiveOpen;
    if ( SingleActiveOpen && SingleActiveOpen->ProtocolHandle->MajorNdisVersion < 6u )
    {
      if ( a5 >= 0xE && a8 || (v12->CombinedPacketFilter & 0xA0) != 0 )
      {
        ethFilterReceivePacketStats(v12->Miniport, (unsigned __int8 *)a3, a8);
        v15 = v12->SingleActiveOpen;
        if ( v15 )
        {
          *((_BYTE *)v15->ReceivedAPacketSlot + 4096 * Number) = 1;
          v15->ReceiveHandler(v15->ProtocolBindingContext, a2, a4, a5, a6, a7, v14);
        }
      }
      goto LABEL_55;
    }
    if ( a5 >= 0xE && a8 )
    {
      if ( (*a3 & 1) == 0 )
      {
        Miniport = v12->Miniport;
        BottomIfStats = Miniport->BottomIfStats;
        if ( BottomIfStats )
        {
          v18 = KeGetPcr()->Prcb.Number;
          ++BottomIfStats[v18].ifHCInUcastPkts;
          Miniport = v12->Miniport;
        }
        v19 = Miniport->BottomIfStats;
        if ( v19 )
        {
          v20 = &v19[KeGetPcr()->Prcb.Number];
          v20->ifHCInUcastOctets += a8;
          v20->ifHCInOctets += a8;
        }
        v21 = 0;
        if ( (v12->CombinedPacketFilter & 0xA4) != 0
          && (*(_DWORD *)&v12->AdapterAddress[2] != *(_DWORD *)(a3 + 2) || *(_WORD *)v12->AdapterAddress != *(_WORD *)a3) )
        {
          v21 = 1;
        }
        OpenList = v12->OpenList;
        if ( !v12->OpenList )
          goto LABEL_55;
        do
        {
          PacketFilters = OpenList->PacketFilters;
          FilterNextOpen = OpenList->FilterNextOpen;
          if ( (PacketFilters & 0xA0) != 0 || !v21 && (PacketFilters & 1) != 0 )
          {
            OpenList->ReceiveHandler(OpenList->ProtocolBindingContext, a2, a4, a5, a6, a7, a8);
            *((_BYTE *)OpenList->ReceivedAPacketSlot + 4096 * Number) = 1;
          }
          OpenList = FilterNextOpen;
        }
        while ( FilterNextOpen );
        goto LABEL_54;
      }
      if ( *a3 == -1 && a3[1] == -1 && a3[2] == -1 && a3[3] == -1 && a3[4] == -1 && a3[5] == -1 )
      {
        v25 = v12->Miniport;
        v26 = 8;
        v27 = v25->BottomIfStats;
        if ( v27 )
        {
          v28 = &v27[KeGetPcr()->Prcb.Number];
          v28->ifHCInBroadcastOctets += a8;
          v28->ifHCInOctets += a8;
          v25 = v12->Miniport;
        }
        v29 = v25->BottomIfStats;
        if ( v29 )
        {
          v30 = KeGetPcr()->Prcb.Number;
          ++v29[v30].ifHCInBroadcastPkts;
        }
      }
      else
      {
        v31 = v12->Miniport;
        v26 = 2;
        v32 = v31->BottomIfStats;
        if ( v32 )
        {
          v33 = &v32[KeGetPcr()->Prcb.Number];
          v33->ifHCInMulticastOctets += a8;
          v33->ifHCInOctets += a8;
          v31 = v12->Miniport;
        }
        v34 = v31->BottomIfStats;
        if ( v34 )
        {
          v35 = KeGetPcr()->Prcb.Number;
          ++v34[v35].ifHCInMulticastPkts;
        }
      }
    }
    else
    {
      v26 = 32;
    }
    v36 = v12->OpenList;
    if ( !v12->OpenList )
    {
LABEL_55:
      NdisReleaseRWLock(v12->BindListLock, &LockState);
      return;
    }
    v37 = v41;
    do
    {
      v38 = v36->PacketFilters;
      v39 = v36->FilterNextOpen;
      if ( (v38 & 0xA0) != 0
        || v26 == 8 && (v38 & 8) != 0
        || v26 == 2
        && ((v38 & 4) != 0
         || (v38 & 2) != 0 && ethFindMulticast(v36->NumAddresses, v36->MCastAddressBuf, 0LL, (unsigned __int8 *const)a3)) )
      {
        v36->ReceiveHandler(v36->ProtocolBindingContext, a2, a4, a5, a6, a7, a8);
        *((_BYTE *)v36->ReceivedAPacketSlot + 4096 * v37) = 1;
      }
      v36 = v39;
    }
    while ( v39 );
LABEL_54:
    v12 = a1;
    goto LABEL_55;
  }
}
