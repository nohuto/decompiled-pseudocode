/*
 * XREFs of ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C0004FB0
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C0002460 (NdisSendNetBufferLists.c)
 *     ?ndisMSendNBLToMiniport@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0004F90 (-ndisMSendNBLToMiniport@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisReplaySendNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00A6374 (-ndisReplaySendNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D018 (WPP_RECORDER_SF_qd.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C003E860 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0073EC0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C008F21C (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C008F3B4 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C00A72D0 (-ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisMLoopbackNetBufferLists@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z @ 0x1C00AA618 (-ndisMLoopbackNetBufferLists@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z.c)
 *     ndisMSetTimestampOnNblChainTx @ 0x1C00AA878 (ndisMSetTimestampOnNblChainTx.c)
 *     PktMonClientNblLogNdis @ 0x1C00C6B28 (PktMonClientNblLogNdis.c)
 */

void __fastcall ndisMSendNBLToMiniportInternal(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // r13
  struct _NET_BUFFER_LIST *Alignment; // r15
  int PcwDatapathEventMask; // eax
  _NDIS_M_DRIVER_BLOCK *v10; // rcx
  KIRQL v11; // di
  void (__fastcall *SendNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // r12
  unsigned int TimestampFlags; // eax
  NDIS_NBL_TRACKER_HANDLE__ *NblTracker; // rdi
  char v15; // r11
  char v16; // si
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r10
  unsigned __int64 v20; // rdi
  unsigned __int8 *v21; // r9
  unsigned __int64 v22; // rsi
  int *v23; // r11
  unsigned __int8 *SourceHandle; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // rdi
  __int64 v31; // r9
  _QWORD *v32; // rcx
  _SLIST_HEADER *v33; // rax
  __int64 v34; // rdx
  _PKTMON_COMPONENT_CONTEXT *CompContext; // rax
  int v36; // [rsp+40h] [rbp-88h]
  __int64 v37; // [rsp+48h] [rbp-80h]
  unsigned __int8 *v38; // [rsp+50h] [rbp-78h]
  __int64 v39; // [rsp+58h] [rbp-70h]
  __int64 v40; // [rsp+60h] [rbp-68h]
  wchar_t *Buffer; // [rsp+70h] [rbp-58h] BYREF
  __int64 v42; // [rsp+78h] [rbp-50h]
  int v43; // [rsp+80h] [rbp-48h]
  char v44; // [rsp+D0h] [rbp+8h]
  struct _NET_BUFFER_LIST *v45; // [rsp+D8h] [rbp+10h] BYREF
  unsigned int v46; // [rsp+E0h] [rbp+18h]

  v46 = a3;
  v45 = (struct _NET_BUFFER_LIST *)a2;
  DriverHandle = a1->DriverHandle;
  Buffer = 0LL;
  v42 = 0LL;
  Alignment = (struct _NET_BUFFER_LIST *)a2;
  v43 = -1;
  PcwDatapathEventMask = a1->PcwDatapathEventMask;
  if ( PcwDatapathEventMask || (v10 = DriverHandle, a1->PcwDatapathCycleMask) )
  {
    LODWORD(v42) = PcwDatapathEventMask;
    v10 = DriverHandle;
    HIDWORD(v42) = a1->PcwDatapathCycleMask;
    Buffer = a1->Reserved4.Buffer;
    if ( !Buffer )
    {
      v10 = a1->DriverHandle;
      Alignment = v45;
      Buffer = a1->Reserved4.Buffer;
    }
  }
  v11 = 2;
  SendNetBufferListsHandler = v10->MiniportDriverCharacteristics.SendNetBufferListsHandler;
  if ( a1->MiniportMediaType == NdisMedium802_3
    && (a1->LoopbackOpens && (a1->NumOpens > 1u || a1->ReceiveFilters) || (a4 & 2) != 0 || (a1->Flags & 0x4000) != 0) )
  {
    ndisMLoopbackNetBufferLists(a1, Alignment, a3, a4, &v45);
    Alignment = v45;
    if ( !v45 )
      return;
    a3 = v46;
  }
  if ( a5 || !a1->SelectiveSuspend )
  {
LABEL_9:
    if ( !*(_DWORD *)ndisNblTrackerMode )
      goto LABEL_10;
    NblTracker = a1->NblTracker;
    v15 = 0;
    v16 = ndisNblTrackerEpoch;
    LODWORD(v17) = a4 & 1;
    v36 = (int)v17;
    v18 = 0LL;
    v37 = 0LL;
    v19 = 0LL;
    v40 = 0LL;
    v39 = 0LL;
    v44 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(Alignment, 0LL, 0x92u, NblTracker, (unsigned int)v17);
      a3 = v46;
      v18 = 0LL;
      LOBYTE(v17) = v36;
      v19 = 0LL;
      v15 = 0;
    }
    v20 = (unsigned __int64)NblTracker & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v20 & 1) != 0 )
    {
      v21 = *(unsigned __int8 **)((v20 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v20 |= 2LL * (v16 & 1);
    }
    else
    {
      v21 = (unsigned __int8 *)v20;
    }
    v38 = v21;
    if ( !Alignment )
    {
LABEL_41:
      a2 = v18 - v19;
      if ( (v20 & 1) != 0 && a2 )
      {
        if ( !(_BYTE)v17 && !v15 )
          LOBYTE(v17) = KeGetCurrentIrql() == 2;
        v29 = v20;
        v30 = v20 & 0xFFFFFFFFFFFFFFF8uLL;
        v31 = 2 * ((v29 >> 1) & 1);
        if ( (_BYTE)v17 )
        {
          v32 = (_QWORD *)(*(_QWORD *)(v30 + 8 * v31 + 40) + (KeGetPcr()->Prcb.Number << 12));
          *v32 += a2;
        }
        else
        {
          a2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v30 + 8 * v31 + 48), a2);
        }
        Alignment = v45;
      }
      v11 = 2;
LABEL_10:
      if ( byte_1C00E3FD8 )
      {
        CompContext = a1->PktMonEdge.CompContext;
        if ( CompContext )
        {
          if ( (*((_DWORD *)CompContext + 13) & 1) != 0 )
          {
            PktMonClientNblLogNdis(&a1->PktMonEdge, Alignment, a3, 2LL);
            a3 = v46;
          }
        }
      }
      TimestampFlags = a1->TimestampFlags;
      if ( (TimestampFlags & 2) != 0 )
      {
        a2 = 0LL;
      }
      else
      {
        if ( (TimestampFlags & 4) == 0 )
        {
LABEL_13:
          if ( (v42 & 0x8000000000LL) != 0 )
          {
            if ( (a4 & 1) == 0 )
              v11 = KfRaiseIrql(2u);
            ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&Buffer, 7u);
            a3 = v46;
          }
          if ( ndisVerifierNdisDispatch && (DriverHandle->Flags & 2) != 0 )
            (*((void (__fastcall **)(void *, struct _NET_BUFFER_LIST *, __int64, _QWORD, struct _NDIS_MINIPORT_BLOCK *, void *, void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int)))ndisVerifierNdisDispatch
             + 8))(
              a1->MiniportAdapterContext,
              Alignment,
              a3,
              a4,
              a1,
              a1->VerifierContext,
              SendNetBufferListsHandler);
          else
            SendNetBufferListsHandler(a1->MiniportAdapterContext, Alignment, a3, a4);
          if ( (v42 & 0x8000000000LL) != 0 )
          {
            ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&Buffer, 7u, 0x14uLL);
            if ( v11 != 2 )
              KeLowerIrql(v11);
          }
          return;
        }
        LOBYTE(a2) = 1;
      }
      ndisMSetTimestampOnNblChainTx(Alignment, a2);
      a3 = v46;
      goto LABEL_13;
    }
LABEL_25:
    v22 = (unsigned __int64)Alignment->NetBufferListInfo[27];
    v23 = &WPP_RECORDER_INITIALIZED;
    while ( 1 )
    {
      if ( Alignment->NetBufferListInfo[27] != (void *)v22 )
      {
LABEL_34:
        LODWORD(v17) = v36;
        v26 = v40 - v18;
        v15 = v44;
        if ( (v22 & 1) != 0 && v26 )
        {
          if ( !(_BYTE)v36 && !v44 )
          {
            v15 = 1;
            v44 = 1;
            if ( KeGetCurrentIrql() == 2 )
              LODWORD(v17) = 1;
            else
              LOBYTE(v17) = 0;
            v36 = (int)v17;
          }
          v27 = v22;
          v28 = v22 & 0xFFFFFFFFFFFFFFF8uLL;
          a3 = 2 * ((v27 >> 1) & 1);
          if ( (_BYTE)v17 )
          {
            v17 = (_QWORD *)(*(_QWORD *)(v28 + 8 * a3 + 40) + (KeGetPcr()->Prcb.Number << 12));
            *v17 += v26;
            LOBYTE(v17) = v36;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 8 * a3 + 48), v26);
          }
        }
        v21 = v38;
        v40 = v18;
        if ( !Alignment )
        {
          Alignment = v45;
          a3 = v46;
          goto LABEL_41;
        }
        goto LABEL_25;
      }
      if ( !v22 && !Alignment->SourceHandle )
        Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(0LL, v18, a3, v21);
      if ( (v22 & 4) != 0 )
        goto LABEL_71;
      SourceHandle = (unsigned __int8 *)Alignment->SourceHandle;
      if ( SourceHandle )
      {
        a3 = *SourceHandle;
        if ( (unsigned __int8)(a3 - 17) <= 1u || (_BYTE)a3 == 5 )
        {
          if ( SourceHandle != v21 || Alignment->ParentNetBufferList )
          {
            ++v18;
            v25 = v20;
            v37 = v18;
          }
          else
          {
            ++v19;
            v25 = 24LL;
            ++v18;
            v39 = v19;
            v37 = v18;
          }
          goto LABEL_33;
        }
        if ( *(int **)&WPP_RECORDER_INITIALIZED != v23 )
        {
          LOBYTE(v18) = 3;
          WPP_RECORDER_SF_qd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v18,
            27,
            12,
            (struct _GUID *)&WPP_5e110f494fc33fedd56e6eda5750fecd_Traceguids,
            (char)Alignment,
            a3);
          goto LABEL_70;
        }
      }
      else if ( *(int **)&WPP_RECORDER_INITIALIZED != v23 )
      {
        LOBYTE(v18) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v18,
          27,
          11,
          (struct _GUID *)&WPP_5e110f494fc33fedd56e6eda5750fecd_Traceguids,
          (char)Alignment);
LABEL_70:
        v18 = v37;
        v23 = &WPP_RECORDER_INITIALIZED;
        v21 = v38;
        v19 = v39;
      }
LABEL_71:
      v25 = v20 | 4;
LABEL_33:
      Alignment->NetBufferListInfo[27] = (void *)v25;
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      if ( !Alignment )
        goto LABEL_34;
    }
  }
  v33 = (_SLIST_HEADER *)Alignment;
  v34 = 0LL;
  if ( Alignment )
  {
    do
    {
      v33 = (_SLIST_HEADER *)v33->Alignment;
      v34 = (unsigned int)(v34 + 1);
    }
    while ( v33 );
  }
  if ( (unsigned __int8)ndisSetBusyAsync(a1, v34, 52LL, Alignment, a3) )
  {
    a3 = v46;
    goto LABEL_9;
  }
}
