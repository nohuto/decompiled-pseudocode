/*
 * XREFs of ?ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0002A00
 * Callers:
 *     ?ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0018830 (-ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C0002E30 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C00171E4 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D058 (WPP_RECORDER_SF_qd.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C003E5E0 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00737E0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C008EB3C (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C008ECD4 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C00ADC5C (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 */

void __fastcall ndisMSendCompleteNetBufferListsInternal(_DWORD *a1, struct _NET_BUFFER_LIST *a2, unsigned int a3)
{
  unsigned int v3; // r10d
  struct _NDIS_OPEN_BLOCK *v5; // r12
  struct _NET_BUFFER_LIST *v6; // r13
  struct _NDIS_OPEN_BLOCK *v7; // r14
  int v8; // eax
  struct _NET_BUFFER_LIST *v9; // r15
  struct _NET_BUFFER_LIST *v10; // rdx
  struct _NDIS_OPEN_BLOCK *SourceHandle; // rcx
  struct _NET_BUFFER_LIST *v12; // rsi
  struct _NET_BUFFER_LIST *Alignment; // rdx
  unsigned int i; // r8d
  $F83BCD1696991B5C8018F054401D87EA *FirstNetBuffer; // rcx
  int j; // eax
  unsigned __int64 NblTracker; // rdi
  char v18; // cl
  char v19; // r15
  char v20; // si
  __int64 v21; // r11
  __int64 v22; // r8
  unsigned __int64 v23; // rdi
  char *v24; // r9
  _SLIST_HEADER *v25; // r15
  int *v26; // r10
  unsigned __int64 Region; // rsi
  char *v28; // rcx
  __int64 v29; // rax
  unsigned __int64 v30; // r11
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rdi
  __int64 v33; // rdx
  _QWORD *v34; // rcx
  KIRQL v35; // al
  __int64 v36; // [rsp+48h] [rbp-39h]
  __int64 v37; // [rsp+50h] [rbp-31h]
  struct _NET_BUFFER_LIST *v38; // [rsp+58h] [rbp-29h]
  char *v39; // [rsp+58h] [rbp-29h]
  __int64 v40; // [rsp+60h] [rbp-21h]
  struct _NDIS_OPEN_BLOCK *v41; // [rsp+68h] [rbp-19h]
  struct _NET_BUFFER_LIST *v42; // [rsp+70h] [rbp-11h]
  __int64 v43; // [rsp+78h] [rbp-9h] BYREF
  __int64 v44; // [rsp+80h] [rbp-1h]
  unsigned int Number; // [rsp+88h] [rbp+7h]
  char v46; // [rsp+E8h] [rbp+67h] BYREF
  char v47; // [rsp+F0h] [rbp+6Fh] BYREF
  unsigned int v48; // [rsp+F8h] [rbp+77h]
  KIRQL v49; // [rsp+100h] [rbp+7Fh]

  v48 = a3;
  v3 = a3;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = a1[12];
  v9 = 0LL;
  v41 = 0LL;
  v10 = 0LL;
  v42 = 0LL;
  v38 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  Number = -1;
  if ( v8 || a1[20] )
  {
    LODWORD(v44) = v8;
    HIDWORD(v44) = a1[20];
    v43 = *((_QWORD *)a1 + 5);
    if ( !v43 )
      v43 = *((_QWORD *)a1 + 5);
  }
  v49 = 2;
  if ( (v44 & 0x280) != 0 || (v44 & 0x20000000000LL) != 0 )
  {
    if ( (a3 & 1) == 0 )
    {
      v35 = KfRaiseIrql(2u);
      v3 = v48;
      v10 = 0LL;
      v49 = v35;
    }
    if ( (v44 & 0x200) != 0 )
    {
      Alignment = a2;
      for ( i = 0; Alignment; i += j )
      {
        FirstNetBuffer = ($F83BCD1696991B5C8018F054401D87EA *)Alignment->FirstNetBuffer;
        for ( j = 0; FirstNetBuffer; ++j )
          FirstNetBuffer = ($F83BCD1696991B5C8018F054401D87EA *)FirstNetBuffer->Link.Alignment;
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      }
      Number = KeGetPcr()->Prcb.Number;
      *(_QWORD *)(ndisPcwOffsetToPerCpuData + v43 + ndisPcwPerCpuDataStride * Number + 72) += i;
      v10 = 0LL;
    }
  }
  if ( a2 )
  {
    do
    {
      SourceHandle = (struct _NDIS_OPEN_BLOCK *)a2->SourceHandle;
      v12 = (struct _NET_BUFFER_LIST *)a2->Link.Alignment;
      a2->Link.Alignment = 0LL;
      if ( SourceHandle == v7 )
      {
        v9->Link.Alignment = (unsigned __int64)a2;
        v9 = a2;
      }
      else if ( SourceHandle == v5 )
      {
        v10->Link.Alignment = (unsigned __int64)a2;
        v10 = a2;
        v38 = a2;
      }
      else if ( v7 )
      {
        v10 = a2;
        if ( v5 )
        {
          ndisMSendCompleteNetBufferListsToOpen(SourceHandle, a2, v3, (struct NDIS_PCW_CONTEXT *)&v43);
          v3 = v48;
          v10 = v38;
        }
        else
        {
          v5 = SourceHandle;
          v42 = a2;
          v38 = a2;
        }
      }
      else
      {
        v7 = SourceHandle;
        v6 = a2;
        v9 = a2;
      }
      a2 = v12;
    }
    while ( v12 );
    v41 = v5;
  }
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    NblTracker = (unsigned __int64)v7->NblTracker;
    v18 = 0;
    v19 = ndisNblTrackerEpoch;
    v20 = v3 & 1;
    v36 = 0LL;
    v40 = 0LL;
    v21 = 0LL;
    v37 = 0LL;
    v22 = 0LL;
    v47 = v3 & 1;
    v46 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(v6, 0LL, 0x95u, (void *)NblTracker, v3 & 1);
      v18 = v46;
      v21 = 0LL;
      v3 = v48;
      v22 = 0LL;
    }
    v23 = NblTracker & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v23 & 1) != 0 )
    {
      v24 = *(char **)((v23 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v23 |= 2LL * (v19 & 1);
    }
    else
    {
      v24 = (char *)v23;
    }
    v39 = v24;
    v25 = (_SLIST_HEADER *)v6;
    if ( !v6 )
    {
LABEL_58:
      v30 = v21 - v22;
      if ( (v23 & 1) != 0 && v30 )
      {
        if ( !v20 && !v18 )
        {
          v20 = KeGetCurrentIrql() == 2;
          v47 = v20;
        }
        v31 = v23;
        v32 = v23 & 0xFFFFFFFFFFFFFFF8uLL;
        v33 = 2 * ((v31 >> 1) & 1);
        if ( v20 )
        {
          v34 = (_QWORD *)(*(_QWORD *)(v32 + 8 * v33 + 40) + (KeGetPcr()->Prcb.Number << 12));
          *v34 += v30;
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v32 + 8 * v33 + 48), v30);
        }
      }
      goto LABEL_13;
    }
    v26 = &WPP_RECORDER_INITIALIZED;
LABEL_44:
    Region = v25[22].Region;
    while ( 1 )
    {
      if ( v25[22].Region != Region )
      {
LABEL_54:
        if ( (Region & 1) != 0 )
        {
          ndisNblTrackerUpdateOwnershipCount(Region, v40 - v21, &v47, &v46);
          v22 = v37;
          v26 = &WPP_RECORDER_INITIALIZED;
          v24 = v39;
        }
        v40 = v21;
        if ( !v25 )
        {
          v20 = v47;
          v5 = v41;
          v18 = v46;
          v3 = v48;
          goto LABEL_58;
        }
        goto LABEL_44;
      }
      if ( !Region && !v25[7].Region )
        v25[7].Region = ndisSourceHandleFromOwner(0LL, v10, v22, v24);
      if ( (Region & 4) != 0 )
        goto LABEL_77;
      v28 = (char *)v25[7].Region;
      if ( v28 )
      {
        v10 = (struct _NET_BUFFER_LIST *)(unsigned __int8)*v28;
        if ( (unsigned __int8)((_BYTE)v10 - 17) <= 1u || (_BYTE)v10 == 5 )
        {
          if ( v28 != v24 || v25[1].Region )
          {
            ++v21;
            v29 = v23;
            v36 = v21;
          }
          else
          {
            ++v22;
            v29 = 24LL;
            ++v21;
            v37 = v22;
            v36 = v21;
          }
          goto LABEL_53;
        }
        if ( *(int **)&WPP_RECORDER_INITIALIZED != v26 )
        {
          LOBYTE(v10) = 3;
          WPP_RECORDER_SF_qd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)v10,
            27,
            12,
            (struct _GUID *)&WPP_5e110f494fc33fedd56e6eda5750fecd_Traceguids,
            (char)v25,
            *v28);
          goto LABEL_74;
        }
      }
      else if ( *(int **)&WPP_RECORDER_INITIALIZED != v26 )
      {
        LOBYTE(v10) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v10,
          27,
          11,
          (struct _GUID *)&WPP_5e110f494fc33fedd56e6eda5750fecd_Traceguids,
          (char)v25);
LABEL_74:
        v21 = v36;
        v26 = &WPP_RECORDER_INITIALIZED;
        v22 = v37;
        v24 = v39;
      }
LABEL_77:
      v29 = v23 | 4;
LABEL_53:
      v25[22].Region = v29;
      v25 = (_SLIST_HEADER *)v25->Alignment;
      if ( !v25 )
        goto LABEL_54;
    }
  }
LABEL_13:
  if ( byte_1C00E3EA8 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(v6);
  if ( (v44 & 0x80u) != 0LL )
  {
    if ( Number == -1 )
      Number = KeGetPcr()->Prcb.Number;
    ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v43 + Number * ndisPcwPerCpuDataStride + 56);
  }
  if ( (v44 & 0x20000000000LL) != 0 )
    ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&v43, 9u);
  v7->ProtSendNetBufferListsComplete(v7->SendCompleteNetBufferListsContext, v6, v3);
  if ( (v44 & 0x20000000000LL) != 0 )
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&v43, 9u, 0x16uLL);
  if ( v5 )
    ndisMSendCompleteNetBufferListsToOpen(v5, v42, v48, (struct NDIS_PCW_CONTEXT *)&v43);
  if ( v49 != 2 )
    KeLowerIrql(v49);
}
