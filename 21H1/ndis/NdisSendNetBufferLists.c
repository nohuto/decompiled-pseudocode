/*
 * XREFs of NdisSendNetBufferLists @ 0x1C0002460
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C0004FB0 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C00171E4 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0018830 (-ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D058 (WPP_RECORDER_SF_qd.c)
 *     ??0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0037D34 (--0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C003DE84 (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C003E5E0 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ?ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z @ 0x1C00679E0 (-ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00737E0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C0074534 (-ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C008EB3C (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C008ECD4 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisMSendNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00C2CA0 (-ndisMSendNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     PktMonClientNblLogNdis @ 0x1C00C65C0 (PktMonClientNblLogNdis.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisSendNetBufferLists(
        NDIS_HANDLE NdisBindingHandle,
        PNET_BUFFER_LIST NetBufferLists,
        NDIS_PORT_NUMBER PortNumber,
        ULONG SendFlags)
{
  __int64 v4; // rsi
  NDIS_PORT_NUMBER v5; // r13d
  ULONG v6; // r12d
  int v7; // eax
  struct _NET_BUFFER_LIST *v8; // r14
  char *v9; // r15
  int v10; // ebx
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rdi
  KIRQL v14; // r15
  bool v15; // bl
  unsigned int Number; // r9d
  _SLIST_HEADER *v17; // rcx
  unsigned int v18; // r10d
  _QWORD *v19; // rax
  int i; // edx
  struct NDIS_NBL_TRACKER_HANDLE__ *v21; // rdx
  char v22; // cl
  char v23; // r10
  __int64 v24; // r11
  unsigned __int64 v25; // rbx
  char v26; // di
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // rdx
  char *v30; // rsi
  __int64 v31; // r12
  _SLIST_HEADER *Alignment; // r13
  struct NDIS_NBL_TRACKER_HANDLE__ *v33; // r15
  unsigned __int64 Region; // rdi
  char *v35; // rcx
  __int64 v36; // rax
  unsigned __int64 v37; // r11
  unsigned __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rcx
  int v42; // ecx
  __int64 v43; // rax
  char v44; // [rsp+40h] [rbp-59h] BYREF
  char v45; // [rsp+41h] [rbp-58h] BYREF
  KIRQL v46; // [rsp+42h] [rbp-57h]
  __int64 v47; // [rsp+48h] [rbp-51h] BYREF
  __int64 v48; // [rsp+50h] [rbp-49h]
  int v49; // [rsp+58h] [rbp-41h]
  __int64 v50; // [rsp+60h] [rbp-39h]
  unsigned __int64 v51; // [rsp+68h] [rbp-31h]
  __int64 v52; // [rsp+70h] [rbp-29h]
  __int64 v53; // [rsp+78h] [rbp-21h]
  struct _NET_BUFFER_LIST *v54; // [rsp+80h] [rbp-19h] BYREF
  struct NDIS_NBL_TRACKER_HANDLE__ *v55; // [rsp+88h] [rbp-11h]
  __int64 v56; // [rsp+90h] [rbp-9h]
  _BYTE v57[12]; // [rsp+98h] [rbp-1h] BYREF
  char v58; // [rsp+A4h] [rbp+Bh]
  NDIS_PORT_NUMBER v61; // [rsp+110h] [rbp+77h]

  v61 = PortNumber;
  v4 = *((_QWORD *)NdisBindingHandle + 2);
  v5 = PortNumber;
  v56 = v4;
  LOBYTE(PortNumber) = 2;
  v47 = 0LL;
  v6 = SendFlags;
  v46 = 2;
  v7 = *(_DWORD *)(v4 + 48);
  v8 = NetBufferLists;
  v48 = 0LL;
  v9 = (char *)NdisBindingHandle;
  v49 = -1;
  if ( v7 || *(_DWORD *)(v4 + 80) )
  {
    LODWORD(v48) = v7;
    HIDWORD(v48) = *(_DWORD *)(v4 + 80);
    v47 = *(_QWORD *)(v4 + 40);
    if ( !v47 )
      v47 = *(_QWORD *)(v4 + 40);
  }
  if ( (*((_DWORD *)NdisBindingHandle + 56) & 1) != 0 )
  {
    ndisNblVerifyTxIndication((ULONG_PTR)NetBufferLists, v5, SendFlags, (ULONG_PTR)NdisBindingHandle);
    LOBYTE(PortNumber) = 2;
  }
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    v21 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)v9 + 73);
    v22 = 0;
    v23 = ndisNblTrackerEpoch;
    v24 = 0LL;
    v25 = *(_QWORD *)(v4 + 2560);
    v26 = v6 & 1;
    v55 = v21;
    LODWORD(v51) = ndisNblTrackerEpoch;
    v50 = 0LL;
    v53 = 0LL;
    v52 = 0LL;
    v44 = v6 & 1;
    v45 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(v8, v21, 0x8Fu, (void *)v25, v6 & 1);
      v24 = v50;
      LOBYTE(PortNumber) = 2;
      v22 = v45;
      v23 = v51;
    }
    v27 = v25 & 0xFFFFFFFFFFFFFFFDuLL;
    v28 = v27;
    v29 = v27 & 1;
    if ( (v27 & 1) != 0 )
      v51 = *(_QWORD *)((v27 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    else
      v51 = v27;
    if ( (v27 & 1) != 0 )
      v27 |= 2LL * (v23 & 1);
    if ( !v8 )
    {
LABEL_78:
      v37 = v24 - v52;
      if ( (v27 & 1) != 0 && v37 )
      {
        if ( !v26 && !v22 )
        {
          v26 = KeGetCurrentIrql() == 2;
          v44 = v26;
        }
        v38 = v27 & 0xFFFFFFFFFFFFFFF8uLL;
        v39 = 2 * ((v27 >> 1) & 1);
        if ( v26 )
        {
          v40 = KeGetPcr()->Prcb.Number << 12;
          *(_QWORD *)(v40 + *(_QWORD *)(v38 + 8 * v39 + 40)) += v37;
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v38 + 8 * v39 + 48), v37);
        }
      }
      goto LABEL_6;
    }
    v30 = (char *)v51;
    *(_QWORD *)&PortNumber = &WPP_RECORDER_INITIALIZED;
    v31 = v52;
    Alignment = (_SLIST_HEADER *)v8;
    v33 = v55;
LABEL_63:
    Region = Alignment[22].Region;
    while ( 1 )
    {
      if ( Alignment[22].Region != Region )
      {
LABEL_74:
        v8 = NetBufferLists;
        v52 = v31;
        if ( (Region & 1) != 0 )
        {
          ndisNblTrackerUpdateOwnershipCount(Region, v53 - v24, &v44, &v45);
          *(_QWORD *)&PortNumber = &WPP_RECORDER_INITIALIZED;
        }
        v53 = v24;
        if ( !Alignment )
        {
          v26 = v44;
          LOBYTE(PortNumber) = 2;
          v4 = v56;
          v9 = (char *)NdisBindingHandle;
          v6 = SendFlags;
          v5 = v61;
          v22 = v45;
          goto LABEL_78;
        }
        goto LABEL_63;
      }
      if ( !Region && !Alignment[7].Region )
        Alignment[7].Region = ndisSourceHandleFromOwner(
                                (unsigned __int64)v33 & 0xFFFFFFFFFFFFFFFDuLL,
                                v29,
                                *(_QWORD *)&PortNumber,
                                v28);
      if ( (Region & 4) != 0 )
        goto LABEL_102;
      v35 = (char *)Alignment[7].Region;
      if ( v35 )
      {
        v29 = (unsigned __int8)*v35;
        if ( (unsigned __int8)(v29 - 17) <= 1u || (_BYTE)v29 == 5 )
        {
          if ( v35 != v30 || Alignment[1].Region )
          {
            ++v24;
            v36 = v27;
            v50 = v24;
          }
          else
          {
            ++v31;
            v36 = 24LL;
            v50 = ++v24;
          }
          goto LABEL_73;
        }
        if ( *(_QWORD *)&WPP_RECORDER_INITIALIZED != *(_QWORD *)&PortNumber )
        {
          LOBYTE(v29) = 3;
          WPP_RECORDER_SF_qd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v29,
            27,
            12,
            (struct _GUID *)&WPP_5e110f494fc33fedd56e6eda5750fecd_Traceguids,
            (char)Alignment,
            *v35);
          goto LABEL_101;
        }
      }
      else if ( *(_QWORD *)&WPP_RECORDER_INITIALIZED != *(_QWORD *)&PortNumber )
      {
        LOBYTE(v29) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v29,
          27,
          11,
          (struct _GUID *)&WPP_5e110f494fc33fedd56e6eda5750fecd_Traceguids,
          (char)Alignment);
LABEL_101:
        v24 = v50;
        *(_QWORD *)&PortNumber = &WPP_RECORDER_INITIALIZED;
      }
LABEL_102:
      v36 = v27 | 4;
LABEL_73:
      Alignment[22].Region = v36;
      Alignment = (_SLIST_HEADER *)Alignment->Alignment;
      if ( !Alignment )
        goto LABEL_74;
    }
  }
LABEL_6:
  if ( byte_1C00E3EA8 )
  {
    v43 = *((_QWORD *)v9 + 118);
    if ( v43 )
    {
      if ( (*(_DWORD *)(v43 + 12) & 1) != 0 )
      {
        PktMonClientNblLogNdis(v9 + 936, v8, *(_QWORD *)&PortNumber, 2LL);
        LOBYTE(PortNumber) = 2;
      }
    }
  }
  v10 = v48;
  if ( (v48 & 0x200140) != 0 || (v48 & 0x4000000000LL) != 0 )
  {
    if ( (v6 & 1) == 0 )
    {
      LOBYTE(PortNumber) = KfRaiseIrql(2u);
      v46 = PortNumber;
    }
    if ( (v10 & 0x40) != 0 )
    {
      Number = KeGetPcr()->Prcb.Number;
      v10 = v48;
      v49 = Number;
      ++*(_QWORD *)(ndisPcwPerCpuDataStride * Number + v47 + ndisPcwOffsetToPerCpuData + 48);
    }
    else
    {
      Number = v49;
    }
    if ( !(_BYTE)PortNumber && (v10 & 0x200000) != 0 )
    {
      if ( Number == -1 )
      {
        Number = KeGetPcr()->Prcb.Number;
        v10 = v48;
        v49 = Number;
      }
      ++*(_QWORD *)(ndisPcwPerCpuDataStride * Number + v47 + ndisPcwOffsetToPerCpuData + 200);
    }
    if ( (v10 & 0x400100) != 0 )
    {
      v17 = (_SLIST_HEADER *)v8;
      v18 = 0;
      if ( v8 )
      {
        do
        {
          v19 = (_QWORD *)v17->Region;
          for ( i = 0; v19; ++i )
            v19 = (_QWORD *)*v19;
          v17 = (_SLIST_HEADER *)v17->Alignment;
          v18 += i;
        }
        while ( v17 );
      }
      if ( (v10 & 0x100) != 0 )
      {
        if ( Number == -1 )
        {
          Number = KeGetPcr()->Prcb.Number;
          v10 = v48;
          v49 = Number;
        }
        *(_QWORD *)(ndisPcwPerCpuDataStride * Number + v47 + ndisPcwOffsetToPerCpuData + 64) += v18;
      }
      if ( !(_BYTE)PortNumber && (v10 & 0x400000) != 0 )
      {
        if ( Number == -1 )
        {
          Number = KeGetPcr()->Prcb.Number;
          v49 = Number;
        }
        v41 = v47 + ndisPcwOffsetToPerCpuData + ndisPcwPerCpuDataStride * Number;
        *(_QWORD *)(v41 + 208) += v18;
      }
    }
    if ( (v48 & 0x4000000000LL) != 0 )
    {
      ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&v47, 6u);
    }
    else if ( (_BYTE)PortNumber != 2 )
    {
      KeLowerIrql(PortNumber);
    }
  }
  v11 = *(_DWORD *)(v4 + 2668);
  if ( v11 )
  {
    v42 = v11 - 1;
    if ( v42 )
    {
      if ( v42 == 1 )
        ndisMSendNetBufferListsToPackets((struct _NDIS_MINIPORT_BLOCK *)v4, v8, v5, v6);
      else
        ndisMFakeSendNetBufferLists((void *)v4, v8, v5, v6);
    }
    else
    {
      ndisMSendNBLToMiniportInternal((struct _NDIS_MINIPORT_BLOCK *)v4, v8, v5, v6, 0);
    }
  }
  else
  {
    v12 = *(_QWORD *)(v4 + 2568);
    v54 = v8;
    if ( *(_BYTE *)v12 == 5
      && (*(_DWORD *)(v12 + 56) & 0x8000) != 0
      && !*(_DWORD *)(v12 + 336)
      && (*(_BYTE *)(v4 + 91) && (*(_WORD *)(v4 + 1820) > 1u || *(_BYTE *)(v4 + 1999))
       || (v6 & 2) != 0
       || (*(_DWORD *)(v4 + 120) & 0x4000) != 0) )
    {
      ndisFLoopbackNetBufferLists((struct _NDIS_FILTER_BLOCK *)v12, v8, v5, v6, &v54);
      v8 = v54;
    }
    if ( v8 )
    {
      v13 = *(_QWORD *)(v4 + 2552);
      v14 = 2;
      v15 = 0;
      NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT((NDIS_PCW_CONTEXT *)v57, (struct _NDIS_MINIPORT_BLOCK *)v4);
      if ( v13 == v4 && v58 < 0 )
      {
        if ( (v6 & 1) == 0 )
          v14 = KfRaiseIrql(2u);
        ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)v57, 7u);
        v15 = !(v6 & 1);
      }
      ndisInvokeNextSendHandler(
        v8,
        v5,
        v6,
        *(struct _NDIS_OBJECT_HEADER **)(v4 + 2568),
        *(void **)(v4 + 2552),
        *(void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int))(v4 + 2648));
      if ( v13 == v4 )
      {
        if ( v58 < 0 )
          ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)v57, 7u, 0x14uLL);
        if ( v15 && v14 != 2 )
          KeLowerIrql(v14);
      }
    }
  }
  if ( (v48 & 0x4000000000LL) != 0 )
  {
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&v47, 6u, 0x13uLL);
    if ( v46 != 2 )
      KeLowerIrql(v46);
  }
}
