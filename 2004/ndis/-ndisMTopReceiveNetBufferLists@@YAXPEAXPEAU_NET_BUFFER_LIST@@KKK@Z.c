/*
 * XREFs of ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0001AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0001D70 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C0002110 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 *     ?ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0099184 (-ndisIndicateAllNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisIndicateToPmodeOpens@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C009921C (-ndisIndicateToPmodeOpens@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0099654 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C00C3D64 (-ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     PktMonClientNblDropNdis @ 0x1C00C6AD4 (PktMonClientNblDropNdis.c)
 */

void __fastcall ndisMTopReceiveNetBufferLists(
        _DWORD *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  struct _NET_BUFFER_LIST *v7; // rdi
  _DWORD *v8; // rbp
  struct _NET_BUFFER_LIST *v9; // rsi
  char v10; // r13
  unsigned int Number; // r14d
  __int64 v12; // r8
  __int64 v13; // rdx
  char *PoolWithTag; // rbx
  _QWORD *v15; // rbp
  unsigned int v16; // ecx
  struct _NET_BUFFER_LIST *Alignment; // rax
  struct _NDIS_OPEN_BLOCK *v18; // r14
  int v19; // r8d
  struct _NDIS_OPEN_BLOCK *v20; // rdi
  unsigned int v21; // r12d
  unsigned int v22; // r15d
  struct _NDIS_OPEN_BLOCK *FilterNextOpen; // r14
  __int64 v24; // rsi
  __int64 v25; // rcx
  struct _NET_BUFFER_LIST *v26; // rdx
  struct _NDIS_OPEN_BLOCK *v27; // rdx
  unsigned int v28; // ebp
  unsigned int v29; // r14d
  unsigned int v30; // esi
  unsigned int i; // edi
  __int64 v32; // rdx
  int v33; // edx
  unsigned int v34; // [rsp+30h] [rbp-48h]
  char v36; // [rsp+88h] [rbp+10h]

  v7 = a2;
  v8 = a1;
  if ( (a2->NblFlags & 0x8000) != 0 )
  {
    (*((void (__fastcall **)(_DWORD *, struct _NET_BUFFER_LIST *))a1 + 268))(a1, a2);
    return;
  }
  if ( !*((_BYTE *)a1 + 2665) )
  {
    (*((void (__fastcall **)(_DWORD *))a1 + 267))(a1);
    return;
  }
  v9 = 0LL;
  v10 = a5;
  v34 = 0;
  v36 = 0;
  if ( ((a5 & 1) != 0 || KeGetCurrentIrql() == 2)
    && ndisPerProcRcvTrackers
    && (Number = KeGetPcr()->Prcb.Number,
        v12 = 2096LL * Number,
        v34 = Number,
        v13 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + v12),
        (unsigned int)v13 < 3) )
  {
    v36 = 1;
    PoolWithTag = (char *)ndisPerProcRcvTrackers + 696 * v13 + v12 + 8;
    *(_DWORD *)((char *)ndisPerProcRcvTrackers + v12) = v13 + 1;
  }
  else
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
    if ( !PoolWithTag )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v33) = 2;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v33,
          4,
          11,
          (struct _GUID *)&WPP_7920440e7c0337b75cf6bec3de4b863a_Traceguids);
      }
      goto LABEL_31;
    }
  }
  v15 = (_QWORD *)*((_QWORD *)v8 + 50);
  v16 = a5;
  PoolWithTag[692] = 0;
  Alignment = v7;
  if ( (a5 & 2) == 0 )
  {
    do
    {
      v9 = Alignment;
      Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    }
    while ( Alignment );
    v16 = a5;
  }
  v18 = (struct _NDIS_OPEN_BLOCK *)v15[41];
  if ( v18 && v18->ProtocolHandle->MajorNdisVersion >= 6u )
  {
    ndisMIndicateNetBufferListsToOpen(v18, v7, a3, a4, v16);
    *((_QWORD *)PoolWithTag + 8) = 0LL;
    *((_DWORD *)PoolWithTag + 20) = 0;
  }
  else
  {
    *((_DWORD *)PoolWithTag + 4) = v16;
    *(_QWORD *)PoolWithTag = a1;
    *((_QWORD *)PoolWithTag + 3) = v7;
    *((_QWORD *)PoolWithTag + 1) = v15;
    *((_QWORD *)PoolWithTag + 4) = v9;
    *((_DWORD *)PoolWithTag + 10) = a3;
    *((_DWORD *)PoolWithTag + 11) = a4;
    ndisSortNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)PoolWithTag);
    if ( *((_QWORD *)PoolWithTag + 8) || *((_DWORD *)PoolWithTag + 172) )
    {
      if ( !*v15 || a3 )
        PoolWithTag[692] = 1;
      else
        ndisIndicateXlatedPacketsToNdis5Protocols((struct _NDIS_NBL_RCV_TRACKER *)PoolWithTag);
      if ( !v18 )
      {
        v20 = (struct _NDIS_OPEN_BLOCK *)v15[1];
        if ( v20 )
        {
          v21 = *((_DWORD *)PoolWithTag + 172);
          v22 = *((_DWORD *)PoolWithTag + 4) | 2;
          do
          {
            FilterNextOpen = v20->FilterNextOpen;
            v24 = 0LL;
            do
            {
              v25 = (unsigned int)v24;
              v26 = *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v24 + 64];
              v24 = (unsigned int)(v24 + 1);
              if ( v26 )
                ndisMIndicateNetBufferListsToOpen(
                  v20,
                  v26,
                  *((_DWORD *)PoolWithTag + 10),
                  *(_DWORD *)&PoolWithTag[40 * v25 + 80],
                  v22);
            }
            while ( (unsigned int)v24 <= v21 );
            v20 = FilterNextOpen;
          }
          while ( FilterNextOpen );
        }
        v27 = (struct _NDIS_OPEN_BLOCK *)v15[2];
        if ( v27 )
        {
          if ( (a5 & 2) != 0 )
          {
            ndisIndicateAllNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)PoolWithTag, v27);
          }
          else
          {
            v28 = *((_DWORD *)PoolWithTag + 4);
            v29 = *((_DWORD *)PoolWithTag + 10);
            v30 = *((_DWORD *)PoolWithTag + 172);
            if ( *(_DWORD *)(*(_QWORD *)PoolWithTag + 2244LL) )
              ndisIndicateToPmodeOpens((struct _NDIS_NBL_RCV_TRACKER *)PoolWithTag);
            for ( i = 1; i <= v30; ++i )
            {
              v32 = i;
              ndisMIndicateNetBufferListsToOpen(
                *(struct _NDIS_OPEN_BLOCK **)&PoolWithTag[40 * v32 + 56],
                *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v32 + 64],
                v29,
                *(_DWORD *)&PoolWithTag[40 * v32 + 80],
                v28);
            }
          }
        }
      }
    }
  }
  if ( !PoolWithTag[692] )
    goto LABEL_32;
  v7 = (struct _NET_BUFFER_LIST *)*((_QWORD *)PoolWithTag + 8);
  v8 = a1;
  v10 = a5;
LABEL_31:
  if ( v7 )
  {
    if ( byte_1C00E3FD8 && (v8[1465] & 2) != 0 )
      PktMonClientNblDropNdis((_DWORD)v8 + 5808, (_DWORD)v7, v19, 1, -1073676270, -536866809);
    if ( (v10 & 2) == 0 )
      ndisReturnNetBufferListsInternal((struct _NDIS_OBJECT_HEADER *)v8, v7, a5 & 1, 0LL);
  }
LABEL_32:
  if ( v36 )
  {
    --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v34);
  }
  else if ( PoolWithTag )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
  }
}
