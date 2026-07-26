/*
 * XREFs of ?ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z @ 0x1C0075AD8
 * Callers:
 *     ?ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00BB110 (-ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisMSendNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00C3160 (-ndisMSendNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032928 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0073EC0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisCopyNBLInfoToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@W4_NDIS_XLATE_TYPE@@@Z @ 0x1C0074FBC (-ndisCopyNBLInfoToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@W4_NDIS_XLATE_TYPE@@@Z.c)
 *     ?ndisNetBufferToPacket@@YAHPEAU_NET_BUFFER@@EPEAPEAU_NDIS_PACKET@@@Z @ 0x1C007524C (-ndisNetBufferToPacket@@YAHPEAU_NET_BUFFER@@EPEAPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x1C00AA750 (-ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@.c)
 *     NdisGetNetBufferListProtocolId @ 0x1C00ACF10 (NdisGetNetBufferListProtocolId.c)
 */

char __fastcall ndisXlateSendNetBufferListsToPacketArray(struct _NDIS_NBLS_TO_PKT_ARRAY *a1, char a2)
{
  __int64 v2; // rdi
  struct _NET_BUFFER_LIST *v3; // rbp
  int v4; // r12d
  char v5; // r15
  __int64 v6; // r10
  char v7; // al
  struct _NET_BUFFER *v8; // rdx
  struct _NET_BUFFER *Alignment; // r14
  struct _NDIS_MINIPORT_BLOCK *v10; // r11
  __int64 v11; // r13
  unsigned int v12; // r8d
  char v13; // bl
  _QWORD *v15; // r15
  struct _MDL *i; // rbx
  PVOID MappedSystemVa; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // r9
  _QWORD *v20; // rax
  int v21; // ecx
  struct _NDIS_PACKET **v22; // rbp
  struct _NDIS_PACKET *v23; // rbp
  unsigned int v24; // ecx
  unsigned __int8 v25; // cl
  __int64 NdisPacketOobOffset; // rax
  $1A1078C262B2F4247ED8F303116E1B94 *v27; // rax
  signed __int32 v28; // ecx
  signed __int32 v29; // ecx
  struct _NET_BUFFER *v31; // [rsp+30h] [rbp-78h]
  __int64 v32; // [rsp+38h] [rbp-70h]
  struct _NET_BUFFER_LIST *v33; // [rsp+40h] [rbp-68h]
  _QWORD *v34; // [rsp+48h] [rbp-60h]
  struct _NDIS_STACK_RESERVED *v35; // [rsp+50h] [rbp-58h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v36; // [rsp+58h] [rbp-50h]
  char v37; // [rsp+B0h] [rbp+8h]
  unsigned int v39; // [rsp+C8h] [rbp+20h]

  v2 = *((_QWORD *)a1 + 2);
  v3 = 0LL;
  v34 = 0LL;
  v4 = 0;
  v35 = 0LL;
  v5 = 0;
  v6 = *(_QWORD *)a1;
  v7 = a2;
  v8 = (struct _NET_BUFFER *)*((_QWORD *)a1 + 3);
  Alignment = 0LL;
  v10 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)a1 + 5);
  v11 = 0LL;
  v12 = *((_DWORD *)a1 + 2);
  v13 = 1;
  v32 = *(_QWORD *)a1;
  v39 = v12;
  v31 = v8;
  v37 = 0;
  v36 = v10;
  v33 = 0LL;
  if ( !v2 )
    goto LABEL_51;
  while ( v7 && (v10->SendFlags & 2) == 0 )
  {
    v15 = *(_QWORD **)(v2 + 8);
    v4 = 0;
    if ( !v15 )
      goto LABEL_22;
    do
    {
      for ( i = (struct _MDL *)v15[4]; i; i = i->Next )
      {
        if ( (i->MdlFlags & 5) != 0 )
          MappedSystemVa = i->MappedSystemVa;
        else
          MappedSystemVa = MmMapLockedPagesSpecifyCache(i, 0, MmCached, 0LL, 0, 0x40000020u);
        if ( !MappedSystemVa )
        {
          v4 = -1073741670;
          break;
        }
      }
      v15 = (_QWORD *)*v15;
    }
    while ( v15 );
    if ( !v4 )
    {
      v8 = v31;
      v12 = v39;
      v6 = v32;
LABEL_22:
      v5 = v37;
      break;
    }
    v18 = *(_QWORD *)v2;
    *(_QWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 140) = v4;
    if ( v3 )
    {
      *v34 = v2;
    }
    else
    {
      v3 = (struct _NET_BUFFER_LIST *)v2;
      v33 = (struct _NET_BUFFER_LIST *)v2;
    }
    v34 = (_QWORD *)v2;
    v2 = v18;
LABEL_20:
    v8 = v31;
LABEL_48:
    v12 = v39;
    v6 = v32;
LABEL_49:
    v10 = v36;
    v7 = a2;
    v5 = v37;
    if ( !v2 )
      goto LABEL_50;
  }
  if ( (*(_DWORD *)(v2 + 136) & 0x10) != 0 && (*(_DWORD *)(v2 + 128) & 1) != 0 )
  {
    if ( (unsigned int)v11 >= v12 )
      goto LABEL_50;
    v19 = *(_QWORD *)(v2 + 48);
    *(_QWORD *)(v6 + 8 * v11) = v19;
    v11 = (unsigned int)(v11 + 1);
    *(_DWORD *)(v19 + 36) |= 0x4000u;
    *(_QWORD *)(*(unsigned __int16 *)(v19 + 42) + v19 + 112) = v2;
    *(_DWORD *)(v2 + 140) = 0;
    v2 = *(_QWORD *)v2;
    if ( v2 )
    {
      v8 = *(struct _NET_BUFFER **)(v2 + 8);
      v31 = v8;
    }
    if ( *(int *)ndisNblTrackerMode < 3 )
      goto LABEL_49;
    ndisNblTrackerRecordEventInternal((struct _NET_BUFFER_LIST *)v2, 0LL, 0x17u, v19, 0);
    goto LABEL_20;
  }
  if ( v8 == *(struct _NET_BUFFER **)(v2 + 8) )
  {
    *(_DWORD *)(v2 + 96) = 0;
    v20 = *(_QWORD **)(v2 + 8);
    if ( v20 )
    {
      v21 = 0;
      do
      {
        *(_DWORD *)(v2 + 96) = ++v21;
        v20 = (_QWORD *)*v20;
      }
      while ( v20 );
    }
  }
  Alignment = v8;
  if ( !v8 )
  {
    if ( v4 )
      goto LABEL_50;
LABEL_46:
    *(_DWORD *)(v2 + 140) = 0;
    v2 = *(_QWORD *)v2;
    if ( !v2 )
      goto LABEL_50;
    v8 = *(struct _NET_BUFFER **)(v2 + 8);
    v31 = v8;
    goto LABEL_48;
  }
  while ( (unsigned int)v11 < v12 )
  {
    v22 = (struct _NDIS_PACKET **)(v6 + 8 * v11);
    v4 = ndisNetBufferToPacket(Alignment, 1, v22);
    if ( v4 )
      break;
    v23 = *v22;
    ndisCopyNBLInfoToPacket(v2, (__int64)v23, 0);
    v23->Private.Flags &= 0xFFFFFFF0;
    v23->Private.Flags |= NdisGetNetBufferListProtocolId((PNET_BUFFER_LIST)v2);
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal((struct _NET_BUFFER_LIST *)v2, 0LL, 0x13u, (unsigned __int64)v23, 0);
    ++*(_DWORD *)&v23[-1].ProtocolReserved[4];
    NDIS_STACK_RESERVED_FROM_PACKET(v23, &v35);
    v12 = v39;
    v6 = v32;
    *(_QWORD *)v35 = *(_QWORD *)(v2 + 120);
    v5 |= (*((_DWORD *)a1 + 9) & 2) != 0;
    v37 = v5;
    v24 = v23->Private.Flags | 0x80;
    if ( v5 )
      v24 = v23->Private.Flags & 0xFFFFFF7F;
    v23->Private.Flags = v24;
    v25 = v23->Private.NdisPacketFlags | 0x20;
    if ( (*(_DWORD *)(v2 + 136) & 0x800) == 0 )
      v25 = v23->Private.NdisPacketFlags & 0xDF;
    NdisPacketOobOffset = v23->Private.NdisPacketOobOffset;
    v23->Private.NdisPacketFlags = v25;
    v11 = (unsigned int)(v11 + 1);
    *(_MDL **)((char *)&v23[1].Private.Head + NdisPacketOobOffset) = (_MDL *)Alignment;
    Alignment->MiniportReserved[0] = (void *)v2;
    Alignment = (struct _NET_BUFFER *)Alignment->Link.Alignment;
    if ( !Alignment )
    {
      v3 = v33;
      goto LABEL_46;
    }
  }
LABEL_50:
  v8 = v31;
  v3 = v33;
  v13 = 1;
  v10 = v36;
LABEL_51:
  *((_DWORD *)a1 + 8) = v11;
  *((_QWORD *)a1 + 2) = v2;
  if ( v2 )
  {
    if ( !Alignment )
      Alignment = v8;
  }
  else
  {
    Alignment = 0LL;
  }
  *((_QWORD *)a1 + 3) = Alignment;
  if ( v4 || !v2 )
  {
    v13 = 0;
    if ( v2 )
    {
      v27 = ($1A1078C262B2F4247ED8F303116E1B94 *)Alignment;
      if ( Alignment && Alignment != *(struct _NET_BUFFER **)(v2 + 8) )
      {
        do
        {
          v28 = _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 96), 0xFFFFFFFF);
          v27 = ($1A1078C262B2F4247ED8F303116E1B94 *)v27->Link.Alignment;
          v29 = v28 - 1;
        }
        while ( v27 );
        if ( !v29 )
          *((_QWORD *)a1 + 3) = *(_QWORD *)(v2 + 8);
      }
      do
      {
        *(_DWORD *)(v2 + 140) = -1073741670;
        v2 = *(_QWORD *)v2;
      }
      while ( v2 );
    }
  }
  if ( v3 )
    ndisMSendNetBufferListsCompleteInternal(v10, v3, *((_DWORD *)a1 + 9) & 1, 0);
  return v13;
}
