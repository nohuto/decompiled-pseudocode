/*
 * XREFs of ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0099460
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0001D70 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C0002110 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0008B64 (WPP_RECORDER_SF_.c)
 *     ?ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0099304 (-ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisIndicateToPmodeOpens@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C009939C (-ndisIndicateToPmodeOpens@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00997D4 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C00C3ED4 (-ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     PktMonClientNblDropNdis @ 0x1C00C6C44 (PktMonClientNblDropNdis.c)
 */

void __fastcall ndisMDispatchReceiveNetBufferLists(
        struct _NDIS_OBJECT_HEADER *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  char v5; // si
  struct _NET_BUFFER_LIST *v6; // r15
  unsigned int Number; // ebp
  char *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r9
  char *PoolWithTag; // rbx
  _QWORD *v16; // rbp
  struct _NET_BUFFER_LIST *Alignment; // rcx
  struct _NDIS_OPEN_BLOCK *v18; // rsi
  struct _NDIS_OPEN_BLOCK *v19; // rdi
  unsigned int v20; // r12d
  unsigned int v21; // r15d
  struct _NDIS_OPEN_BLOCK *FilterNextOpen; // r14
  __int64 v23; // rsi
  __int64 v24; // rcx
  struct _NET_BUFFER_LIST *v25; // rdx
  struct _NDIS_OPEN_BLOCK *v26; // rdx
  unsigned int v27; // ebp
  unsigned int v28; // r14d
  unsigned int v29; // esi
  unsigned int i; // edi
  __int64 v31; // rax
  unsigned int v32; // [rsp+30h] [rbp-38h]
  char v33; // [rsp+70h] [rbp+8h]

  v5 = a5;
  v6 = 0LL;
  v32 = 0;
  v33 = 0;
  if ( ((a5 & 1) != 0 || KeGetCurrentIrql() == 2)
    && ndisPerProcRcvTrackers
    && (Number = KeGetPcr()->Prcb.Number,
        v12 = (char *)ndisPerProcRcvTrackers,
        v13 = 2096LL * Number,
        v32 = Number,
        v14 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + v13),
        (unsigned int)v14 < 3) )
  {
    v33 = 1;
    PoolWithTag = (char *)ndisPerProcRcvTrackers + 696 * v14 + v13 + 8;
    *(_DWORD *)((char *)ndisPerProcRcvTrackers + v13) = v14 + 1;
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
      goto LABEL_38;
    }
  }
  v16 = *(_QWORD **)&a1[100].Type;
  PoolWithTag[692] = 0;
  Alignment = a2;
  if ( (a5 & 2) == 0 )
  {
    do
    {
      v6 = Alignment;
      Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    }
    while ( Alignment );
  }
  v18 = (struct _NDIS_OPEN_BLOCK *)v16[41];
  if ( v18 && v18->ProtocolHandle->MajorNdisVersion >= 6u )
  {
    ndisMIndicateNetBufferListsToOpen(v18, a2, (char *)a3, a4, a5);
    *((_QWORD *)PoolWithTag + 8) = 0LL;
    *((_DWORD *)PoolWithTag + 20) = 0;
  }
  else
  {
    *((_QWORD *)PoolWithTag + 3) = a2;
    *((_QWORD *)PoolWithTag + 1) = v16;
    *((_DWORD *)PoolWithTag + 4) = a5;
    *(_QWORD *)PoolWithTag = a1;
    *((_QWORD *)PoolWithTag + 4) = v6;
    *((_DWORD *)PoolWithTag + 10) = a3;
    *((_DWORD *)PoolWithTag + 11) = a4;
    ndisSortNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)PoolWithTag, a5, v12);
    if ( *((_QWORD *)PoolWithTag + 8) || *((_DWORD *)PoolWithTag + 172) )
    {
      if ( !*v16 || a3 )
        PoolWithTag[692] = 1;
      else
        ndisIndicateXlatedPacketsToNdis5Protocols((struct _NDIS_NBL_RCV_TRACKER *)PoolWithTag);
      if ( !v18 )
      {
        v19 = (struct _NDIS_OPEN_BLOCK *)v16[1];
        if ( v19 )
        {
          v20 = *((_DWORD *)PoolWithTag + 172);
          v21 = *((_DWORD *)PoolWithTag + 4) | 2;
          do
          {
            FilterNextOpen = v19->FilterNextOpen;
            v23 = 0LL;
            do
            {
              v24 = (unsigned int)v23;
              v25 = *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v23 + 64];
              v23 = (unsigned int)(v23 + 1);
              if ( v25 )
                ndisMIndicateNetBufferListsToOpen(
                  v19,
                  v25,
                  (char *)*((unsigned int *)PoolWithTag + 10),
                  *(_DWORD *)&PoolWithTag[40 * v24 + 80],
                  v21);
            }
            while ( (unsigned int)v23 <= v20 );
            v19 = FilterNextOpen;
          }
          while ( FilterNextOpen );
        }
        v26 = (struct _NDIS_OPEN_BLOCK *)v16[2];
        if ( v26 )
        {
          if ( (a5 & 2) != 0 )
          {
            ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)PoolWithTag, v26);
          }
          else
          {
            v27 = *((_DWORD *)PoolWithTag + 4);
            v28 = *((_DWORD *)PoolWithTag + 10);
            v29 = *((_DWORD *)PoolWithTag + 172);
            if ( *(_DWORD *)(*(_QWORD *)PoolWithTag + 2244LL) )
              ndisIndicateToPmodeOpens((struct _NDIS_NBL_RCV_TRACKER *)PoolWithTag);
            for ( i = 1; i <= v29; ++i )
            {
              v31 = i;
              ndisMIndicateNetBufferListsToOpen(
                *(struct _NDIS_OPEN_BLOCK **)&PoolWithTag[40 * v31 + 56],
                *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v31 + 64],
                (char *)v28,
                *(_DWORD *)&PoolWithTag[40 * v31 + 80],
                v27);
            }
          }
        }
      }
    }
  }
  if ( PoolWithTag[692] )
  {
    a2 = (struct _NET_BUFFER_LIST *)*((_QWORD *)PoolWithTag + 8);
    v5 = a5;
LABEL_38:
    if ( a2 )
    {
      if ( byte_1C00E3FD0 && (*(_DWORD *)&a1[1465] & 2) != 0 )
        PktMonClientNblDropNdis((_DWORD)a1 + 5808, (_DWORD)a2, (_DWORD)v12, 1, -1073676270, -536866809);
      if ( (v5 & 2) == 0 )
        ndisReturnNetBufferListsInternal(a1, a2, a5 & 1, 0LL);
    }
  }
  if ( v33 )
  {
    --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v32);
  }
  else if ( PoolWithTag )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
  }
}
