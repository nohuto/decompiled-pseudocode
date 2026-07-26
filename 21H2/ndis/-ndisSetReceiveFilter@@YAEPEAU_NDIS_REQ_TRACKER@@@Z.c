/*
 * XREFs of ?ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00871D4
 * Callers:
 *     ?ndisOidPreRcvFilterSetFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0086F50 (-ndisOidPreRcvFilterSetFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006D8C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0012E28 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0019874 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001D3AC (-ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x1C002BF90 (NdisConvertNtStatusToNdisStatus.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0033810 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003BB24 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     memmove @ 0x1C0040100 (memmove.c)
 *     memset @ 0x1C00403C0 (memset.c)
 *     WPP_RECORDER_SF_qdD @ 0x1C005EBC8 (WPP_RECORDER_SF_qdD_ea_1C005EBC8.c)
 *     ?ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0077E54 (-ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisAddReceiveFilterToList@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z @ 0x1C0084B24 (-ndisAddReceiveFilterToList@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z.c)
 *     ?ndisDereferenceReceiveQueue@@YAKPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z @ 0x1C0085534 (-ndisDereferenceReceiveQueue@@YAKPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z.c)
 *     ?ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1C0085718 (-ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEA.c)
 */

char __fastcall ndisSetReceiveFilter(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_OID_REQUEST *v1; // r14
  struct _NDIS_MINIPORT_BLOCK *v2; // rdi
  char v4; // si
  struct _NDIS_RECEIVE_FILTER_BLOCK *v5; // r13
  unsigned int *InformationBuffer; // r15
  struct _NDIS_MINIPORT_BLOCK *ReceiveQueueByQueueId; // rbp
  struct _NDIS_VPORT_BLOCK *VPortByVPortId; // r12
  struct _NDIS_OID_REQUEST *v9; // rcx
  bool v10; // cf
  int v11; // edx
  char v12; // r14
  char v13; // r15
  _BYTE *OidSourceHandle; // rax
  struct _NDIS_MINIPORT_BLOCK *v15; // rcx
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  char v17; // al
  bool v18; // zf
  __int64 v19; // rax
  unsigned int v20; // r14d
  __int64 v21; // rcx
  unsigned int v22; // r15d
  unsigned __int64 v23; // rcx
  struct _NDIS_RECEIVE_FILTER_BLOCK *PoolWithTag; // rax
  __int64 v25; // r8
  unsigned int *v26; // r9
  unsigned int v27; // edx
  KIRQL v28; // dl
  KSPIN_LOCK *p_Lock; // r14
  KSPIN_LOCK *v30; // rcx
  KIRQL v31; // dl
  unsigned __int8 *AllocatedReceiveFilterIndices; // r15
  unsigned int AllocatedReceiveFilterIndicesLength; // r8d
  __int64 v34; // rcx
  unsigned __int8 *v35; // rax
  int v36; // r10d
  _BYTE *v37; // r14
  __int64 v38; // r9
  int v39; // eax
  int v40; // ecx
  int v41; // edx
  int v42; // r10d
  int v43; // eax
  KIRQL v44; // dl
  $474C1527283D704F518D918A58DB716F *v45; // rcx
  __int64 v46; // rdx
  _LIST_ENTRY *p_QueueLink; // rax
  _LIST_ENTRY *p_FilterList; // rax
  _LIST_ENTRY *Flink; // rcx
  struct _NDIS_NIC_SWITCH_BLOCK *NicSwitch; // rax
  KIRQL v51; // dl
  int v53; // [rsp+40h] [rbp-78h]
  unsigned int v54; // [rsp+44h] [rbp-74h]
  unsigned int Size; // [rsp+48h] [rbp-70h]
  unsigned int Size_4; // [rsp+4Ch] [rbp-6Ch]
  unsigned int v57; // [rsp+50h] [rbp-68h]
  __int64 v58; // [rsp+58h] [rbp-60h]
  _DWORD *Src; // [rsp+60h] [rbp-58h]
  char v60; // [rsp+C0h] [rbp+8h]
  char v61; // [rsp+C8h] [rbp+10h]
  KIRQL NewIrql; // [rsp+D8h] [rbp+20h] BYREF

  v1 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)a1 + 4);
  v2 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v4 = 1;
  v58 = 0LL;
  v5 = 0LL;
  v53 = 0;
  InformationBuffer = (unsigned int *)v1->DATA.QUERY_INFORMATION.InformationBuffer;
  ReceiveQueueByQueueId = 0LL;
  Src = InformationBuffer;
  VPortByVPortId = 0LL;
  NewIrql = 0;
  v60 = 0;
  v61 = 0;
  v54 = 0;
  v9 = v1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x19u,
      0x14u,
      (struct _GUID *)&WPP_8ae6292ee3d833c857d30dcfbd7b4f7f_Traceguids,
      v2);
    v9 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)a1 + 4);
  }
  v10 = *((_BYTE *)InformationBuffer + 1) < 2u;
  if ( *((_BYTE *)InformationBuffer + 1) >= 2u )
    v54 = InformationBuffer[10];
  *((_DWORD *)a1 + 10) = -1073741637;
  v9->DATA.METHOD_INFORMATION.BytesRead = v10 ? 36 : 44;
  Size_4 = v10 ? 36 : 44;
  *(_DWORD *)(*((_QWORD *)a1 + 4) + 60LL) = 0;
  if ( !ndisReferenceMiniport(v2, 0x46u) )
  {
    *((_DWORD *)a1 + 10) = -1073676286;
    v12 = 0;
    v13 = 0;
LABEL_20:
    v17 = 0;
    goto LABEL_21;
  }
  OidSourceHandle = ndisGetOidSourceHandle(v1);
  if ( OidSourceHandle && *OidSourceHandle == 18 )
  {
    v58 = (__int64)OidSourceHandle;
    if ( !ndisReferenceOpenByHandle((__int64)OidSourceHandle, 0xBu) )
    {
      *((_DWORD *)a1 + 10) = -1073676286;
      v12 = 0;
LABEL_19:
      v13 = 1;
      goto LABEL_20;
    }
    v60 = 1;
  }
  if ( v2->PFBlock
    && (ndisIovNicSwitchWithoutIovSupported(v2)
     || (SriovCurrentCapabilities = v2->SriovCurrentCapabilities) != 0LL
     && (SriovCurrentCapabilities->SriovCapabilities & 3) == 3) )
  {
    if ( InformationBuffer[3] )
      goto LABEL_17;
    VPortByVPortId = ndisIovFindVPortByVPortId(v15, v54);
    if ( !VPortByVPortId )
      goto LABEL_17;
    if ( !v54 )
      goto LABEL_34;
    v18 = VPortByVPortId->Open == (_NDIS_OPEN_BLOCK *)v58;
  }
  else
  {
    v18 = v54 == 0;
  }
  if ( !v18 )
  {
LABEL_17:
    *((_DWORD *)a1 + 10) = -1073741811;
LABEL_18:
    v12 = v60;
    goto LABEL_19;
  }
LABEL_34:
  v19 = InformationBuffer[6];
  v20 = -1;
  v21 = InformationBuffer[7];
  v22 = -1;
  v23 = v19 * v21;
  if ( v23 <= 0xFFFFFFFF )
    v22 = v23;
  if ( (unsigned int)NdisConvertNtStatusToNdisStatus(v23 > 0xFFFFFFFF ? 0xC0000095 : 0) )
    goto LABEL_18;
  if ( v22 < 0xFFFFFF48 )
    v20 = v22 + 184;
  if ( (unsigned int)NdisConvertNtStatusToNdisStatus(v22 >= 0xFFFFFF48 ? 0xC0000095 : 0) )
    goto LABEL_18;
  PoolWithTag = (struct _NDIS_RECEIVE_FILTER_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, v20, 0x6672444Eu);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_18;
  memset(PoolWithTag, 0, v20);
  v5->FilterId = 0;
  v5->Open = (_NDIS_OPEN_BLOCK *)v58;
  v5->Reference = 1;
  v5->Miniport = v2;
  memmove(&v5->FilterParameters, Src, Size_4);
  v5->FilterParameters.FieldParametersArrayOffset = 184;
  memmove(&v5[1], (char *)Src + (unsigned int)Src[5], (unsigned int)(Src[6] * Src[7]));
  v5->VPortBlock = VPortByVPortId;
  v5->VPortLink.Blink = &v5->VPortLink;
  v5->VPortLink.Flink = &v5->VPortLink;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v2, &NewIrql);
  v27 = Src[3];
  if ( v27 )
    ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(v2, v27, v25, v26);
  else
    ReceiveQueueByQueueId = (struct _NDIS_MINIPORT_BLOCK *)v2->DefaultReceiveQueue;
  if ( ReceiveQueueByQueueId )
  {
    ++ReceiveQueueByQueueId->PcwDatapathCycleMask;
    v61 = 1;
  }
  v28 = NewIrql;
  p_Lock = &v2->Lock;
  v2->MiniportThread = 0LL;
  KeReleaseSpinLock(&v2->Lock, v28);
  if ( !ReceiveQueueByQueueId )
    goto LABEL_48;
  if ( Src[3] )
  {
    if ( v58 )
    {
      if ( v58 != *(_QWORD *)&ReceiveQueueByQueueId->ShortRef.ReferenceCount )
      {
LABEL_48:
        *((_DWORD *)a1 + 10) = -1073741811;
LABEL_49:
        v12 = v60;
        v13 = 1;
        v17 = v61;
        goto LABEL_21;
      }
    }
    else if ( LODWORD(ReceiveQueueByQueueId->PacketList.Blink) == 1 )
    {
      *((_DWORD *)a1 + 10) = -1073741637;
      goto LABEL_49;
    }
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v2, &NewIrql);
  v5->ReceiveQueue = (_NDIS_RECEIVE_QUEUE_BLOCK *)ReceiveQueueByQueueId;
  if ( v2->NumReceiveFilters + 1 > 0x5555555 )
  {
    v30 = &v2->Lock;
LABEL_55:
    v31 = NewIrql;
    v2->MiniportThread = 0LL;
    KeReleaseSpinLock(v30, v31);
    *((_DWORD *)a1 + 10) = -1073741670;
    goto LABEL_49;
  }
  AllocatedReceiveFilterIndices = v2->AllocatedReceiveFilterIndices;
  AllocatedReceiveFilterIndicesLength = v2->AllocatedReceiveFilterIndicesLength;
  Size = AllocatedReceiveFilterIndicesLength;
  if ( AllocatedReceiveFilterIndices && (v34 = 0LL, AllocatedReceiveFilterIndicesLength) )
  {
    v35 = v2->AllocatedReceiveFilterIndices;
    v36 = 0;
    while ( *v35 == 0xFF )
    {
      v36 += 8;
      v34 = (unsigned int)(v34 + 1);
      ++v35;
      v53 = v36;
      if ( (unsigned int)v34 >= AllocatedReceiveFilterIndicesLength )
        goto LABEL_63;
    }
    v38 = (unsigned int)v34;
    v39 = 1;
    v40 = AllocatedReceiveFilterIndices[v34];
    v41 = 0;
    while ( (v40 & v39) != 0 )
    {
      v39 *= 2;
      if ( (unsigned int)++v41 >= 8 )
        goto LABEL_63;
    }
    v42 = v41 + v36;
    AllocatedReceiveFilterIndices[v38] = v40 | v39;
    v53 = v42;
  }
  else
  {
LABEL_63:
    v57 = AllocatedReceiveFilterIndicesLength + 64;
    v37 = ExAllocatePoolWithTag(NonPagedPoolNx, AllocatedReceiveFilterIndicesLength + 64, 0x7571444Eu);
    if ( !v37 )
    {
      v30 = &v2->Lock;
      goto LABEL_55;
    }
    memset(&v37[Size], 0, 0x40uLL);
    if ( AllocatedReceiveFilterIndices )
    {
      memmove(v37, AllocatedReceiveFilterIndices, Size);
      v37[Size] = 1;
      ExFreePoolWithTag(AllocatedReceiveFilterIndices, 0);
      v42 = v53;
    }
    else
    {
      *v37 = 3;
      v42 = 1;
      v53 = 1;
    }
    v2->AllocatedReceiveFilterIndices = v37;
    p_Lock = &v2->Lock;
    v2->AllocatedReceiveFilterIndicesLength = v57;
  }
  Src[4] = v42;
  v5->FilterParameters.FilterId = v42;
  v5->FilterId = v42;
  v43 = ndisAddReceiveFilterToList(v2, v5);
  v13 = 0;
  *((_DWORD *)a1 + 10) = v43;
  if ( v43 )
  {
    v44 = NewIrql;
    v2->MiniportThread = 0LL;
    KeReleaseSpinLock(p_Lock, v44);
    goto LABEL_49;
  }
  ++HIDWORD(ReceiveQueueByQueueId->Reserved29);
  v45 = &ReceiveQueueByQueueId->32;
  v46 = *(_QWORD *)&ReceiveQueueByQueueId->Reserved4.Length;
  p_QueueLink = &v5->QueueLink;
  if ( *(struct _NDIS_MINIPORT_BLOCK **)(v46 + 8) != (struct _NDIS_MINIPORT_BLOCK *)&ReceiveQueueByQueueId->32 )
    goto LABEL_83;
  p_QueueLink->Flink = (_LIST_ENTRY *)v46;
  v5->QueueLink.Blink = (_LIST_ENTRY *)v45;
  *(_QWORD *)(v46 + 8) = p_QueueLink;
  *(_QWORD *)&v45->Reserved4.Length = p_QueueLink;
  if ( VPortByVPortId )
  {
    ++VPortByVPortId->NumFilters;
    p_FilterList = &VPortByVPortId->FilterList;
    Flink = VPortByVPortId->FilterList.Flink;
    if ( Flink->Blink == &VPortByVPortId->FilterList )
    {
      v5->VPortLink.Flink = Flink;
      v5->VPortLink.Blink = p_FilterList;
      Flink->Blink = &v5->VPortLink;
      p_FilterList->Flink = &v5->VPortLink;
      NicSwitch = VPortByVPortId->NicSwitch;
      if ( v54 )
        ++*((_DWORD *)NicSwitch + 164);
      else
        ++*((_DWORD *)NicSwitch + 163);
      goto LABEL_82;
    }
LABEL_83:
    __fastfail(3u);
  }
LABEL_82:
  v51 = NewIrql;
  v2->MiniportThread = 0LL;
  KeReleaseSpinLock(p_Lock, v51);
  v17 = 0;
  v12 = 0;
  v4 = 0;
LABEL_21:
  if ( *((_DWORD *)a1 + 10) )
  {
    if ( v17 )
      ndisDereferenceReceiveQueue(ReceiveQueueByQueueId);
    if ( v12 )
      ndisMDereferenceOpenUnlocked(v58, 11);
    if ( v13 )
      ndisDereferenceMiniport(v2, 0x46u);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
  }
  else
  {
    *(_DWORD *)(*((_QWORD *)a1 + 4) + 60LL) = Size_4;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      0x19u,
      0x15u,
      (struct _GUID *)&WPP_8ae6292ee3d833c857d30dcfbd7b4f7f_Traceguids,
      (char)v2,
      *((_DWORD *)a1 + 10),
      v53);
  return v4;
}
