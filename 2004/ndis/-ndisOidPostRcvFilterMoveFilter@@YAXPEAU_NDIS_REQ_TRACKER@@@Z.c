/*
 * XREFs of ?ndisOidPostRcvFilterMoveFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00859D0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0077CD4 (-ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisFindReceiveFilterByFilterId@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1C0085568 (-ndisFindReceiveFilterByFilterId@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KK.c)
 */

void __fastcall ndisOidPostRcvFilterMoveFilter(struct _NDIS_MINIPORT_BLOCK **a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbp
  struct _NDIS_MINIPORT_BLOCK *v3; // rdi
  int v4; // eax
  wchar_t *Buffer; // rdi
  unsigned int v6; // ebx
  __int64 v7; // r8
  unsigned int *v8; // r9
  struct _NDIS_MINIPORT_BLOCK *ReceiveFilterByFilterId; // rax
  KIRQL v10; // dl
  struct _NDIS_MINIPORT_BLOCK *v11; // r14
  _NDIS_MINIPORT_BLOCK *PrimaryMiniport; // rbx
  struct _NDIS_VPORT_BLOCK *VPortByVPortId; // rax
  _LIST_ENTRY *v14; // rcx
  __int64 v15; // r8
  wchar_t *v16; // rdx
  __int64 v17; // rdx
  _LIST_ENTRY *p_FilterList; // rdx
  _LIST_ENTRY *Flink; // r8
  struct _NDIS_NIC_SWITCH_BLOCK *NicSwitch; // rcx
  KIRQL NewIrql; // [rsp+40h] [rbp+8h] BYREF

  v1 = *a1;
  v3 = a1[4];
  NewIrql = 0;
  if ( v1 )
  {
    v4 = *((_DWORD *)a1 + 10);
    if ( (!v4 || v4 == 65539 && (v1->Flags & 4) != 0) && v3->PcwDatapathEventMask >= 8u )
    {
      Buffer = v3->Reserved4.Buffer;
      v6 = *((_DWORD *)Buffer + 1);
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v1, &NewIrql);
      ReceiveFilterByFilterId = ndisFindReceiveFilterByFilterId(v1, v6, v7, v8);
      v10 = NewIrql;
      v1->MiniportThread = 0LL;
      v11 = ReceiveFilterByFilterId;
      KeReleaseSpinLock(&v1->Lock, v10);
      PrimaryMiniport = v11->PrimaryMiniport;
      VPortByVPortId = ndisIovFindVPortByVPortId(v1, *((_DWORD *)Buffer + 5));
      v14 = (_LIST_ENTRY *)&v11->32;
      v15 = *(_QWORD *)&v11->Reserved4.Length;
      if ( *(struct _NDIS_MINIPORT_BLOCK **)(v15 + 8) != (struct _NDIS_MINIPORT_BLOCK *)&v11->32 )
        goto LABEL_17;
      v16 = v11->Reserved4.Buffer;
      if ( *(_LIST_ENTRY **)v16 != v14 )
        goto LABEL_17;
      *(_QWORD *)v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      --LODWORD(PrimaryMiniport->WorkQueue[5].Next);
      v17 = *(_QWORD *)&PrimaryMiniport->LinkStateIndicationFlags;
      if ( PrimaryMiniport->PnPFlags )
        --*(_DWORD *)(v17 + 656);
      else
        --*(_DWORD *)(v17 + 652);
      p_FilterList = &VPortByVPortId->FilterList;
      Flink = VPortByVPortId->FilterList.Flink;
      if ( Flink->Blink != &VPortByVPortId->FilterList )
LABEL_17:
        __fastfail(3u);
      v14->Flink = Flink;
      v11->Reserved4.Buffer = (wchar_t *)p_FilterList;
      Flink->Blink = v14;
      p_FilterList->Flink = v14;
      ++VPortByVPortId->NumFilters;
      NicSwitch = VPortByVPortId->NicSwitch;
      if ( VPortByVPortId->VPortParams.VPortId )
        ++*((_DWORD *)NicSwitch + 164);
      else
        ++*((_DWORD *)NicSwitch + 163);
      v11->PrimaryMiniport = (_NDIS_MINIPORT_BLOCK *)VPortByVPortId;
      *((_DWORD *)a1 + 10) = 0;
    }
  }
}
