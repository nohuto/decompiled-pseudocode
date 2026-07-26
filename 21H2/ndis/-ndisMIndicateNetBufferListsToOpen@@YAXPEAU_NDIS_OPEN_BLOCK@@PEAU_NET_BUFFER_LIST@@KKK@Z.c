/*
 * XREFs of ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0001D70
 * Callers:
 *     ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0001AA0 (-ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0036180 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0099304 (-ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisIndicateToPmodeOpens@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C009939C (-ndisIndicateToPmodeOpens@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0099460 (-ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisDoPeriodicReceivesIndication @ 0x1C00A27C4 (ndisDoPeriodicReceivesIndication.c)
 *     ndisMIndicateSplitNblChain @ 0x1C00A30D4 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000326C (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C00173B4 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C003ED70 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0074040 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C008F39C (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C008F534 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00997D4 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisTraceRcv@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KI@Z @ 0x1C009994C (-ndisTraceRcv@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KI@Z.c)
 *     PktMonClientNblLogNdis @ 0x1C00C6C98 (PktMonClientNblLogNdis.c)
 */

void __fastcall ndisMIndicateNetBufferListsToOpen(
        struct _NDIS_OPEN_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        char *a3,
        unsigned int a4,
        unsigned int a5)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // r13
  __int64 v6; // rsi
  unsigned int Number; // r12d
  unsigned int v8; // r10d
  int PcwDatapathEventMask; // eax
  struct _NDIS_OPEN_BLOCK *v11; // r14
  KIRQL v12; // di
  bool v13; // cl
  __int64 Flags; // rdx
  unsigned int v15; // ebx
  __int64 v16; // r8
  char v17; // di
  unsigned int v18; // r8d
  NDIS_NBL_TRACKER_HANDLE__ *NblTracker; // rbx
  __int64 v20; // r9
  unsigned __int64 v21; // rbx
  int *v22; // r10
  struct _NET_BUFFER_LIST *Alignment; // r13
  void *v24; // rdi
  char *SourceHandle; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // rsi
  bool v28; // cl
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rbx
  __int64 v31; // rdx
  _QWORD *v32; // rcx
  __int64 Clock; // rax
  _PKTMON_COMPONENT_CONTEXT *CompContext; // rax
  KIRQL v35; // al
  unsigned __int16 v36; // ax
  __int64 v37; // rax
  char v38; // [rsp+40h] [rbp-41h] BYREF
  char v39; // [rsp+41h] [rbp-40h]
  unsigned int v40; // [rsp+44h] [rbp-3Dh]
  wchar_t *Buffer; // [rsp+48h] [rbp-39h] BYREF
  __int64 v42; // [rsp+50h] [rbp-31h]
  int v43; // [rsp+58h] [rbp-29h]
  __int64 v44; // [rsp+60h] [rbp-21h]
  char *v45; // [rsp+68h] [rbp-19h]
  __int64 v46; // [rsp+70h] [rbp-11h]
  __int64 v47; // [rsp+78h] [rbp-9h]
  _NDIS_MINIPORT_BLOCK *v48; // [rsp+80h] [rbp-1h]
  bool v50; // [rsp+E8h] [rbp+67h] BYREF
  unsigned int v51; // [rsp+F0h] [rbp+6Fh]
  unsigned int v52; // [rsp+F8h] [rbp+77h]

  v52 = a4;
  v51 = (unsigned int)a3;
  MiniportHandle = a1->MiniportHandle;
  v6 = 0LL;
  Number = -1;
  v48 = MiniportHandle;
  v8 = a4;
  v47 = 0LL;
  Buffer = 0LL;
  PcwDatapathEventMask = MiniportHandle->PcwDatapathEventMask;
  v11 = a1;
  v42 = 0LL;
  v43 = -1;
  if ( PcwDatapathEventMask || MiniportHandle->PcwDatapathCycleMask )
  {
    LODWORD(v42) = PcwDatapathEventMask;
    HIDWORD(v42) = MiniportHandle->PcwDatapathCycleMask;
    Buffer = MiniportHandle->Reserved4.Buffer;
    if ( !Buffer )
    {
      Number = v43;
      Buffer = MiniportHandle->Reserved4.Buffer;
    }
  }
  v12 = 2;
  v13 = a2->SourceHandle == a1;
  Flags = a2->Flags;
  LOBYTE(a3) = (Flags & 0x200) != 0;
  if ( (a2->NblFlags & 0x8000) != 0 && a2->NetBufferListInfo[5] == v11 )
  {
    v13 = 1;
LABEL_65:
    if ( (Flags & 0x200) == 0 )
    {
LABEL_20:
      if ( (a5 & 2) == 0 )
        ndisReturnNetBufferListsInternal(&MiniportHandle->Header, a2, a5 & 1, 0LL);
      return;
    }
    goto LABEL_5;
  }
  if ( v13 )
    goto LABEL_65;
LABEL_5:
  if ( MiniportHandle->CheckPacketFilters && !v11->PacketFilters
    || (v11->PacketFilters & 0x10000) != 0 && !v13 && (Flags & 0x80u) != 0LL )
  {
    goto LABEL_20;
  }
  if ( (_BYTE)dword_1C00E6150 )
  {
    v39 = 1;
    Clock = WmiGetClock(0LL, 0LL, a3);
    v8 = v52;
    v47 = Clock;
  }
  else
  {
    v39 = 0;
  }
  v15 = a5;
  v40 = a5;
  if ( !*(_DWORD *)ndisNblTrackerMode )
    goto LABEL_11;
  v46 = 0LL;
  v17 = ndisNblTrackerEpoch;
  v18 = 133;
  v44 = 0LL;
  if ( (a5 & 2) == 0 )
    v18 = 132;
  v38 = 0;
  NblTracker = v11->NblTracker;
  v20 = 0LL;
  v50 = (a5 & 1) != 0;
  if ( *(int *)ndisNblTrackerMode >= 3 )
  {
    ndisNblTrackerRecordEventInternal(a2, (struct NDIS_NBL_TRACKER_HANDLE__ *)0x20, v18, NblTracker, (a5 & 1) != 0);
    v20 = 0LL;
  }
  v21 = (unsigned __int64)NblTracker & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v21 & 1) != 0 )
  {
    a3 = *(char **)((v21 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    v21 |= 2LL * (v17 & 1);
  }
  else
  {
    a3 = (char *)v21;
  }
  v45 = a3;
  v22 = &WPP_RECORDER_INITIALIZED;
  Alignment = a2;
  do
  {
    v24 = Alignment->NetBufferListInfo[27];
    while ( Alignment->NetBufferListInfo[27] == v24 )
    {
      if ( !v24 && !Alignment->SourceHandle )
        Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(32LL, Flags, a3, v20);
      if ( ((unsigned __int8)v24 & 4) != 0 )
        goto LABEL_77;
      SourceHandle = (char *)Alignment->SourceHandle;
      if ( SourceHandle )
      {
        Flags = (unsigned __int8)*SourceHandle;
        if ( (unsigned __int8)(Flags - 17) <= 1u || (_BYTE)Flags == 5 )
        {
          if ( SourceHandle != a3 || Alignment->ParentNetBufferList )
          {
            ++v6;
            v26 = v21;
          }
          else
          {
            ++v20;
            v26 = 24LL;
            v44 = v20;
            ++v6;
          }
          goto LABEL_53;
        }
        if ( *(int **)&WPP_RECORDER_INITIALIZED != v22 )
        {
          LOBYTE(Flags) = 3;
          WPP_RECORDER_SF_qd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            Flags,
            27,
            12,
            (struct _GUID *)&WPP_5e110f494fc33fedd56e6eda5750fecd_Traceguids,
            (char)Alignment,
            *SourceHandle);
          goto LABEL_76;
        }
      }
      else if ( *(int **)&WPP_RECORDER_INITIALIZED != v22 )
      {
        LOBYTE(Flags) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          Flags,
          27,
          11,
          (struct _GUID *)&WPP_5e110f494fc33fedd56e6eda5750fecd_Traceguids,
          (char)Alignment);
LABEL_76:
        a3 = v45;
        v22 = &WPP_RECORDER_INITIALIZED;
        v20 = v44;
      }
LABEL_77:
      v26 = v21 | 4;
LABEL_53:
      Alignment->NetBufferListInfo[27] = (void *)v26;
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      if ( !Alignment )
        break;
    }
    if ( ((unsigned __int8)v24 & 1) != 0 )
    {
      ndisNblTrackerUpdateOwnershipCount(v24, v46 - v6, &v50, &v38);
      a3 = v45;
      v22 = &WPP_RECORDER_INITIALIZED;
      v20 = v44;
    }
    v46 = v6;
  }
  while ( Alignment );
  v11 = a1;
  v27 = v6 - v20;
  MiniportHandle = v48;
  if ( (v21 & 1) != 0 && v27 )
  {
    v28 = v50;
    if ( !v50 && !v38 )
    {
      v28 = KeGetCurrentIrql() == 2;
      v50 = v28;
    }
    v8 = v52;
    v29 = v21 >> 1;
    v30 = v21 & 0xFFFFFFFFFFFFFFF8uLL;
    v12 = 2;
    v31 = 2 * (v29 & 1);
    if ( v28 )
    {
      Number = v43;
      v32 = (_QWORD *)(*(_QWORD *)(v30 + 8 * v31 + 40) + (KeGetPcr()->Prcb.Number << 12));
      *v32 += v27;
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v30 + 8 * v31 + 48), v27);
      Number = v43;
    }
  }
  else
  {
    v8 = v52;
    v12 = 2;
  }
  v15 = v40;
LABEL_11:
  if ( byte_1C00E3FD0 )
  {
    CompContext = v11->PktMonEdge.CompContext;
    if ( CompContext )
    {
      if ( (*((_DWORD *)CompContext + 13) & 1) != 0 )
      {
        PktMonClientNblLogNdis(&v11->PktMonEdge, a2, a3, 1LL);
        v8 = v52;
      }
    }
  }
  if ( (v42 & 0x3014) != 0 || (v42 & 0x800000000LL) != 0 )
  {
    if ( (v15 & 1) == 0 )
    {
      v35 = KfRaiseIrql(2u);
      v8 = v52;
      v12 = v35;
    }
    if ( (v42 & 4) != 0 )
    {
      if ( Number == -1 )
      {
        Number = KeGetPcr()->Prcb.Number;
        v43 = Number;
      }
      ++*(_QWORD *)((char *)Buffer + Number * ndisPcwPerCpuDataStride + ndisPcwOffsetToPerCpuData + 16);
    }
    if ( (v42 & 0x10) != 0 )
    {
      if ( Number == -1 )
      {
        Number = KeGetPcr()->Prcb.Number;
        v43 = Number;
      }
      *(_QWORD *)((char *)Buffer + Number * ndisPcwPerCpuDataStride + ndisPcwOffsetToPerCpuData + 32) += v8;
    }
    if ( (v15 & 2) != 0 )
    {
      if ( (v42 & 0x1000) != 0 )
      {
        if ( Number == -1 )
        {
          Number = KeGetPcr()->Prcb.Number;
          v43 = Number;
        }
        ++*(_QWORD *)((char *)Buffer + Number * ndisPcwPerCpuDataStride + ndisPcwOffsetToPerCpuData + 232);
      }
      if ( (v42 & 0x2000) != 0 )
      {
        if ( Number == -1 )
        {
          Number = KeGetPcr()->Prcb.Number;
          v43 = Number;
        }
        *(_QWORD *)((char *)Buffer + Number * ndisPcwPerCpuDataStride + ndisPcwOffsetToPerCpuData + 240) += v8;
      }
    }
    if ( (v42 & 0x800000000LL) != 0 )
    {
      ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&Buffer, 3u);
    }
    else if ( v12 != 2 )
    {
      KeLowerIrql(v12);
      v8 = v52;
    }
  }
  v11->ReceiveNetBufferLists(v11->ReceiveNetBufferListsContext, a2, v51, v8, v15);
  if ( (v42 & 0x800000000LL) != 0 )
  {
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&Buffer, 3u, 0x10uLL);
    if ( v12 != 2 )
      KeLowerIrql(v12);
  }
  if ( (v15 & 2) != 0 && *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(
      a2,
      v11->NblTracker,
      (struct NDIS_NBL_TRACKER_HANDLE__ *)0x20,
      NdisNblTrackerEvent_ProtocolReturnedResources,
      v15 & 1);
  if ( (_BYTE)dword_1C00E6150 )
    WmiGetClock(0LL, 0LL, v16);
  if ( v39 )
  {
    v36 = v11->FrameTypeArray[0];
    if ( v36 == 0xDD86 || v36 == 1544 || v36 == 8 )
    {
      v37 = WmiGetClock(0LL, 0LL, v16);
      ndisTraceRcv(MiniportHandle, v37 - v47, v52);
    }
  }
}
