/*
 * XREFs of ndisMIndicateSplitNblChain @ 0x1C00A2F54
 * Callers:
 *     ?ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00A2F00 (-ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0001D70 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C0002110 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 *     ?ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0099184 (-ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisIndicateToPmodeOpens@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C009921C (-ndisIndicateToPmodeOpens@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0099654 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C00C3D64 (-ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     PktMonClientNblDropNdis @ 0x1C00C6AD4 (PktMonClientNblDropNdis.c)
 */

void __fastcall ndisMIndicateSplitNblChain(
        struct _NDIS_OBJECT_HEADER *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v6; // r10d
  _QWORD *p_Alignment; // r13
  __int64 CurrentIrql; // rax
  unsigned int v9; // r11d
  unsigned int v10; // esi
  struct _NET_BUFFER_LIST *Alignment; // r14
  struct _NDIS_OBJECT_HEADER *v12; // rbp
  unsigned int v13; // edi
  struct _NET_BUFFER_LIST *i; // r12
  struct _NET_BUFFER_LIST *v15; // r15
  __int64 v16; // rdx
  __int64 v17; // r9
  char *PoolWithTag; // rbx
  int v19; // r8d
  struct _NET_BUFFER_LIST *v20; // rdi
  _QWORD *v21; // rbp
  struct _NET_BUFFER_LIST *v22; // rcx
  struct _NDIS_OPEN_BLOCK *v23; // rsi
  struct _NDIS_OPEN_BLOCK *v24; // rdi
  unsigned int v25; // ebp
  unsigned int v26; // r12d
  struct _NDIS_OPEN_BLOCK *FilterNextOpen; // r15
  __int64 v28; // rsi
  __int64 v29; // rcx
  struct _NET_BUFFER_LIST *v30; // rdx
  struct _NDIS_OPEN_BLOCK *v31; // rdx
  unsigned int v32; // ebp
  unsigned int v33; // r15d
  unsigned int v34; // esi
  unsigned int j; // edi
  __int64 v36; // rax
  _QWORD *v37; // rcx
  unsigned int v38; // [rsp+30h] [rbp-68h]
  _QWORD *v39; // [rsp+38h] [rbp-60h]
  struct _NET_BUFFER_LIST *v40; // [rsp+40h] [rbp-58h]
  char v43; // [rsp+B8h] [rbp+20h]

  if ( a2 )
  {
    v6 = a5;
    p_Alignment = 0LL;
    CurrentIrql = a5 & 1;
    v9 = a3;
    v10 = a5 & 2;
    Alignment = a2;
    v12 = a1;
    while ( 1 )
    {
      v13 = 0;
      v40 = Alignment;
      for ( i = Alignment; v13 < a6; Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment )
      {
        if ( !Alignment )
          break;
        ++v13;
        p_Alignment = &Alignment->Link.Alignment;
      }
      *p_Alignment = 0LL;
      v15 = 0LL;
      v38 = 0;
      v43 = 0;
      if ( !(_DWORD)CurrentIrql )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (_BYTE)CurrentIrql != 2 )
          goto LABEL_11;
      }
      if ( ndisPerProcRcvTrackers
        && (LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number,
            v16 = 2096 * CurrentIrql,
            v38 = CurrentIrql,
            v17 = *((unsigned int *)ndisPerProcRcvTrackers + 524 * CurrentIrql),
            (unsigned int)v17 < 3) )
      {
        v43 = 1;
        PoolWithTag = (char *)ndisPerProcRcvTrackers + 696 * v17 + v16 + 8;
        *(_DWORD *)((char *)ndisPerProcRcvTrackers + v16) = v17 + 1;
      }
      else
      {
LABEL_11:
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
          v20 = i;
          goto LABEL_24;
        }
        v6 = a5;
        v9 = a3;
      }
      v21 = *(_QWORD **)&v12[100].Type;
      v22 = i;
      v39 = v21;
      PoolWithTag[692] = 0;
      if ( !v10 )
      {
        do
        {
          v15 = v22;
          v22->Flags = v22->Flags & 0xFFFFFFF0 | 4;
          v22 = (struct _NET_BUFFER_LIST *)v22->Link.Alignment;
        }
        while ( v22 );
      }
      v23 = (struct _NDIS_OPEN_BLOCK *)v21[41];
      if ( v23 )
      {
        if ( v23->ProtocolHandle->MajorNdisVersion >= 6u )
          break;
      }
      *(_QWORD *)PoolWithTag = a1;
      *((_QWORD *)PoolWithTag + 3) = i;
      *((_QWORD *)PoolWithTag + 1) = v21;
      *((_DWORD *)PoolWithTag + 4) = v6;
      *((_QWORD *)PoolWithTag + 4) = v15;
      *((_DWORD *)PoolWithTag + 10) = v9;
      *((_DWORD *)PoolWithTag + 11) = v13;
      ndisSortNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)PoolWithTag);
      if ( !*((_QWORD *)PoolWithTag + 8) && !*((_DWORD *)PoolWithTag + 172) )
        goto LABEL_21;
      if ( !*v21 || a3 )
        PoolWithTag[692] = 1;
      else
        ndisIndicateXlatedPacketsToNdis5Protocols((struct _NDIS_NBL_RCV_TRACKER *)PoolWithTag);
      if ( v23 )
        goto LABEL_21;
      v24 = (struct _NDIS_OPEN_BLOCK *)v21[1];
      if ( v24 )
      {
        v25 = *((_DWORD *)PoolWithTag + 172);
        v26 = *((_DWORD *)PoolWithTag + 4) | 2;
        do
        {
          FilterNextOpen = v24->FilterNextOpen;
          v28 = 0LL;
          do
          {
            v29 = (unsigned int)v28;
            v30 = *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v28 + 64];
            v28 = (unsigned int)(v28 + 1);
            if ( v30 )
              ndisMIndicateNetBufferListsToOpen(
                v24,
                v30,
                (char *)*((unsigned int *)PoolWithTag + 10),
                *(_DWORD *)&PoolWithTag[40 * v29 + 80],
                v26);
          }
          while ( (unsigned int)v28 <= v25 );
          v24 = FilterNextOpen;
        }
        while ( FilterNextOpen );
        v21 = v39;
        i = v40;
      }
      v31 = (struct _NDIS_OPEN_BLOCK *)v21[2];
      if ( !v31 )
        goto LABEL_21;
      v10 = a5 & 2;
      if ( (a5 & 2) == 0 )
      {
        v32 = *((_DWORD *)PoolWithTag + 4);
        v33 = *((_DWORD *)PoolWithTag + 10);
        v34 = *((_DWORD *)PoolWithTag + 172);
        if ( *(_DWORD *)(*(_QWORD *)PoolWithTag + 2244LL) )
          ndisIndicateToPmodeOpens((struct _NDIS_NBL_RCV_TRACKER *)PoolWithTag);
        for ( j = 1; j <= v34; ++j )
        {
          v36 = j;
          ndisMIndicateNetBufferListsToOpen(
            *(struct _NDIS_OPEN_BLOCK **)&PoolWithTag[40 * v36 + 56],
            *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v36 + 64],
            (char *)v33,
            *(_DWORD *)&PoolWithTag[40 * v36 + 80],
            v32);
        }
        goto LABEL_21;
      }
      ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)PoolWithTag, v31);
LABEL_22:
      if ( PoolWithTag[692] )
      {
        v20 = (struct _NET_BUFFER_LIST *)*((_QWORD *)PoolWithTag + 8);
        v12 = a1;
LABEL_24:
        if ( v20 )
        {
          if ( byte_1C00E3FD8 && (*(_DWORD *)&v12[1465] & 2) != 0 )
            PktMonClientNblDropNdis((_DWORD)v12 + 5808, (_DWORD)v20, v19, 1, -1073676270, -536866809);
          if ( !v10 )
            ndisReturnNetBufferListsInternal((struct _NDIS_MINIPORT_BLOCK *)v12, v20, a5 & 1, 0LL);
        }
      }
      if ( v43 )
      {
        --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v38);
      }
      else if ( PoolWithTag )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
      }
      if ( v10 )
      {
        if ( *p_Alignment )
        {
          v37 = (_QWORD *)i->Link.Alignment;
          p_Alignment = &i->Link.Alignment;
          if ( i->Link.Alignment )
          {
            do
            {
              p_Alignment = v37;
              v37 = (_QWORD *)*v37;
            }
            while ( v37 );
          }
        }
        *p_Alignment = Alignment;
      }
      v12 = a1;
      CurrentIrql = a5 & 1;
      v6 = a5;
      v9 = a3;
      if ( !Alignment )
        return;
    }
    ndisMIndicateNetBufferListsToOpen(v23, i, (char *)v9, v13, v6);
    *((_QWORD *)PoolWithTag + 8) = 0LL;
    *((_DWORD *)PoolWithTag + 20) = 0;
LABEL_21:
    v10 = a5 & 2;
    goto LABEL_22;
  }
}
