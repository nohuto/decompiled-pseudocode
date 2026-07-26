/*
 * XREFs of ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0035BE0
 * Callers:
 *     ndisDoPeriodicReceivesIndication @ 0x1C00A2184 (ndisDoPeriodicReceivesIndication.c)
 * Callees:
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0001D70 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C0002110 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     NdisAcquireRWLockRead @ 0x1C0005910 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1C00059D0 (NdisReleaseRWLock.c)
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 *     ?ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0098CC4 (-ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisIndicateToPmodeOpens@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C0098D5C (-ndisIndicateToPmodeOpens@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0099194 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C00C38A4 (-ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     PktMonClientNblDropNdis @ 0x1C00C656C (PktMonClientNblDropNdis.c)
 */

void __fastcall ndisMDispatchReceiveNetBufferListsWithLock(
        _QWORD *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  char v5; // r13
  _QWORD *v6; // rbp
  __int64 v7; // rcx
  __int64 v10; // rcx
  _QWORD *v12; // rbx
  KSPIN_LOCK *v13; // rsi
  struct _NET_BUFFER_LIST *v14; // r14
  unsigned int Number; // esi
  __int64 v16; // rdx
  __int64 v17; // r9
  char *PoolWithTag; // rbx
  _QWORD *v19; // rbp
  struct _NET_BUFFER_LIST *Alignment; // rcx
  struct _NDIS_OPEN_BLOCK *v21; // rsi
  int v22; // r8d
  struct _NDIS_OPEN_BLOCK *v23; // rdi
  unsigned int v24; // r12d
  unsigned int v25; // r15d
  struct _NDIS_OPEN_BLOCK *FilterNextOpen; // r14
  __int64 v27; // rsi
  __int64 v28; // rcx
  struct _NET_BUFFER_LIST *v29; // rdx
  struct _NDIS_OPEN_BLOCK *v30; // rdx
  unsigned int v31; // ebp
  unsigned int v32; // r14d
  unsigned int v33; // esi
  unsigned int i; // edi
  __int64 v35; // rax
  signed __int32 v36[8]; // [rsp+0h] [rbp-78h] BYREF
  char v37; // [rsp+30h] [rbp-48h]
  struct _LOCK_STATE_EX LockState; // [rsp+34h] [rbp-44h] BYREF
  unsigned int v39; // [rsp+38h] [rbp-40h]
  unsigned int v40; // [rsp+3Ch] [rbp-3Ch]
  __int64 v41; // [rsp+40h] [rbp-38h]

  v5 = a5;
  v6 = a1;
  *(_WORD *)&LockState.OldIrql = 0;
  v7 = a1[50];
  LockState.Flags = 0;
  v41 = v7;
  v10 = *(_QWORD *)(v7 + 288);
  v39 = a5 & 1;
  if ( (a5 & 1) != 0 )
  {
    v12 = (_QWORD *)(*(_QWORD *)(v10 + 32) + (KeGetPcr()->Prcb.Number << 12));
    LockState.OldIrql = 2;
    ++*v12;
    _InterlockedOr(v36, 0);
    v13 = (KSPIN_LOCK *)(v10 + 16);
    if ( *(_QWORD *)(v10 + 16) && *v12 <= 1uLL && *(struct _KTHREAD **)(v10 + 24) != KeGetCurrentThread() )
    {
      *v12 = 0LL;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v10 + 16));
      *v12 = 1LL;
      KeReleaseSpinLockFromDpcLevel(v13);
    }
    LockState.LockState = 3;
  }
  else
  {
    NdisAcquireRWLockRead((PNDIS_RW_LOCK_EX)v10, &LockState, 0);
  }
  v14 = 0LL;
  v40 = 0;
  v37 = 0;
  if ( (v39 || KeGetCurrentIrql() == 2)
    && ndisPerProcRcvTrackers
    && (Number = KeGetPcr()->Prcb.Number,
        v16 = 2096LL * Number,
        v40 = Number,
        v17 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + v16),
        (unsigned int)v17 < 3) )
  {
    v37 = 1;
    PoolWithTag = (char *)ndisPerProcRcvTrackers + 696 * v17 + v16 + 8;
    *(_DWORD *)((char *)ndisPerProcRcvTrackers + v16) = v17 + 1;
  }
  else
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
    if ( !PoolWithTag )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          4u,
          0xBu,
          (struct _GUID *)&WPP_7920440e7c0337b75cf6bec3de4b863a_Traceguids);
      goto LABEL_31;
    }
  }
  v19 = (_QWORD *)v6[50];
  PoolWithTag[692] = 0;
  Alignment = a2;
  if ( (a5 & 2) == 0 )
  {
    do
    {
      v14 = Alignment;
      Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    }
    while ( Alignment );
  }
  v21 = (struct _NDIS_OPEN_BLOCK *)v19[41];
  if ( v21 && v21->ProtocolHandle->MajorNdisVersion >= 6u )
  {
    ndisMIndicateNetBufferListsToOpen(v21, a2, (char *)a3, a4, a5);
    *((_QWORD *)PoolWithTag + 8) = 0LL;
    *((_DWORD *)PoolWithTag + 20) = 0;
  }
  else
  {
    *(_QWORD *)PoolWithTag = a1;
    *((_QWORD *)PoolWithTag + 3) = a2;
    *((_QWORD *)PoolWithTag + 1) = v19;
    *((_DWORD *)PoolWithTag + 4) = a5;
    *((_QWORD *)PoolWithTag + 4) = v14;
    *((_DWORD *)PoolWithTag + 10) = a3;
    *((_DWORD *)PoolWithTag + 11) = a4;
    ndisSortNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)PoolWithTag);
    if ( *((_QWORD *)PoolWithTag + 8) || *((_DWORD *)PoolWithTag + 172) )
    {
      if ( !*v19 || a3 )
        PoolWithTag[692] = 1;
      else
        ndisIndicateXlatedPacketsToNdis5Protocols((struct _NDIS_NBL_RCV_TRACKER *)PoolWithTag);
      if ( !v21 )
      {
        v23 = (struct _NDIS_OPEN_BLOCK *)v19[1];
        if ( v23 )
        {
          v24 = *((_DWORD *)PoolWithTag + 172);
          v25 = *((_DWORD *)PoolWithTag + 4) | 2;
          do
          {
            FilterNextOpen = v23->FilterNextOpen;
            v27 = 0LL;
            do
            {
              v28 = (unsigned int)v27;
              v29 = *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v27 + 64];
              v27 = (unsigned int)(v27 + 1);
              if ( v29 )
                ndisMIndicateNetBufferListsToOpen(
                  v23,
                  v29,
                  (char *)*((unsigned int *)PoolWithTag + 10),
                  *(_DWORD *)&PoolWithTag[40 * v28 + 80],
                  v25);
            }
            while ( (unsigned int)v27 <= v24 );
            v23 = FilterNextOpen;
          }
          while ( FilterNextOpen );
        }
        v30 = (struct _NDIS_OPEN_BLOCK *)v19[2];
        if ( v30 )
        {
          if ( (a5 & 2) != 0 )
          {
            ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)PoolWithTag, v30);
          }
          else
          {
            v31 = *((_DWORD *)PoolWithTag + 4);
            v32 = *((_DWORD *)PoolWithTag + 10);
            v33 = *((_DWORD *)PoolWithTag + 172);
            if ( *(_DWORD *)(*(_QWORD *)PoolWithTag + 2244LL) )
              ndisIndicateToPmodeOpens((struct _NDIS_NBL_RCV_TRACKER *)PoolWithTag);
            for ( i = 1; i <= v33; ++i )
            {
              v35 = i;
              ndisMIndicateNetBufferListsToOpen(
                *(struct _NDIS_OPEN_BLOCK **)&PoolWithTag[40 * v35 + 56],
                *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v35 + 64],
                (char *)v32,
                *(_DWORD *)&PoolWithTag[40 * v35 + 80],
                v31);
            }
          }
        }
      }
    }
  }
  if ( PoolWithTag[692] )
  {
    a2 = (struct _NET_BUFFER_LIST *)*((_QWORD *)PoolWithTag + 8);
    v6 = a1;
    v5 = a5;
LABEL_31:
    if ( a2 )
    {
      if ( byte_1C00E3EA8 && (*((_DWORD *)v6 + 1455) & 2) != 0 )
        PktMonClientNblDropNdis((_DWORD)v6 + 5808, (_DWORD)a2, v22, 1, -1073676270, -536866809);
      if ( (v5 & 2) == 0 )
        ndisReturnNetBufferListsInternal((struct _NDIS_OBJECT_HEADER *)v6, a2, v39, 0LL);
    }
  }
  if ( v37 )
  {
    --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v40);
  }
  else if ( PoolWithTag )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(v41 + 288), &LockState);
}
