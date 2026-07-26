/*
 * XREFs of NdisAllocatePacket @ 0x1C00326D0
 * Callers:
 *     NdisAllocatePacketPoolEx @ 0x1C0032350 (NdisAllocatePacketPoolEx.c)
 *     ?ndisNetBufferToPacket@@YAHPEAU_NET_BUFFER@@EPEAPEAU_NDIS_PACKET@@@Z @ 0x1C007524C (-ndisNetBufferToPacket@@YAHPEAU_NET_BUFFER@@EPEAPEAU_NDIS_PACKET@@@Z.c)
 *     ndisLWM5IndicateReceive @ 0x1C00C49A0 (ndisLWM5IndicateReceive.c)
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032928 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     memset @ 0x1C003FE40 (memset.c)
 */

void __stdcall NdisAllocatePacket(PNDIS_STATUS Status, PNDIS_PACKET *Packet, NDIS_HANDLE PoolHandle)
{
  char *v3; // rsi
  _SLIST_HEADER *v4; // rbx
  PNDIS_PACKET *v6; // r14
  PNDIS_STATUS v7; // r13
  PSLIST_ENTRY v8; // rbp
  KSPIN_LOCK *v9; // r12
  char *v10; // r15
  KIRQL v11; // r13
  char *v12; // rbx
  _SLIST_HEADER *PoolWithTag; // rax
  _SLIST_HEADER *v14; // rbx
  int v15; // ebp
  _SLIST_HEADER *v16; // rsi
  char *v17; // r14
  unsigned int v18; // r12d
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  KSPIN_LOCK *v21; // rcx
  KIRQL v22; // dl
  int v23; // r15d
  KSPIN_LOCK *v24; // r13
  KIRQL v25; // al
  _QWORD *Alignment; // rdx
  void **Region; // rcx
  char **v28; // rax
  char *v29; // rdi
  unsigned __int64 v30; // rax
  char *v31; // rax
  unsigned __int64 v32; // rax
  LONGLONG v33; // rdx
  char *v34; // [rsp+20h] [rbp-58h]
  KIRQL v37; // [rsp+90h] [rbp+18h]
  struct _NDIS_STACK_RESERVED *v38; // [rsp+98h] [rbp+20h] BYREF

  v3 = (char *)PoolHandle + 40;
  v4 = (_SLIST_HEADER *)*((_QWORD *)PoolHandle + 5);
  v34 = (char *)PoolHandle + 40;
  v6 = Packet;
  v7 = Status;
  v8 = 0LL;
  if ( v4 != (_SLIST_HEADER *)((char *)PoolHandle + 40) )
  {
    v8 = ExpInterlockedPopEntrySList(v4 + 2);
    if ( v8 )
    {
      v23 = 1;
      if ( *((_WORD *)PoolHandle + 4) <= 1u || ExQueryDepthSList(v4 + 2) )
        goto LABEL_15;
      v24 = (KSPIN_LOCK *)((char *)PoolHandle + 32);
      v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 4);
      Alignment = (_QWORD *)v4->Alignment;
      v37 = v25;
      if ( *(_SLIST_HEADER **)(v4->Alignment + 8) == v4 )
      {
        Region = (void **)v4->Region;
        if ( *Region == v4 )
        {
          *Region = Alignment;
          Alignment[1] = Region;
          if ( ExQueryDepthSList(v4 + 2) )
          {
            v30 = *(_QWORD *)v3;
            if ( *(char **)(*(_QWORD *)v3 + 8LL) == v3 )
            {
              v4->Alignment = v30;
              v23 = 0;
              v4->Region = (unsigned __int64)v3;
              *(_QWORD *)(v30 + 8) = v4;
              *(_QWORD *)v3 = v4;
              goto LABEL_27;
            }
          }
          else
          {
            v28 = (char **)*((_QWORD *)PoolHandle + 8);
            v29 = (char *)PoolHandle + 56;
            if ( *v28 == v29 )
            {
              v4->Alignment = (unsigned __int64)v29;
              v4->Region = (unsigned __int64)v28;
              *v28 = (char *)v4;
              *((_QWORD *)v29 + 1) = v4;
LABEL_27:
              v22 = v37;
              v21 = v24;
              LODWORD(v4[3].Alignment) = v23;
              goto LABEL_14;
            }
          }
        }
      }
LABEL_35:
      __fastfail(3u);
    }
  }
  v9 = (KSPIN_LOCK *)((char *)PoolHandle + 32);
  v10 = (char *)PoolHandle + 72;
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 4);
  v12 = (char *)*((_QWORD *)PoolHandle + 9);
  if ( v12 == (char *)PoolHandle + 72 )
  {
    if ( *((_DWORD *)PoolHandle + 3) < (int)*((unsigned __int16 *)PoolHandle + 4) )
    {
      PoolWithTag = (_SLIST_HEADER *)ExAllocatePoolWithTag(
                                       NonPagedPoolNx,
                                       *((unsigned int *)PoolHandle + 5),
                                       *(_DWORD *)PoolHandle);
      v14 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, *((unsigned int *)PoolHandle + 5));
        ++*((_DWORD *)PoolHandle + 3);
        v14->Region = (unsigned __int64)v14;
        v14->Alignment = (unsigned __int64)v14;
        InitializeSListHead(v14 + 2);
        v15 = *((unsigned __int16 *)PoolHandle + 3);
        if ( *((_WORD *)PoolHandle + 3) )
        {
          v16 = v14 + 4;
          do
          {
            v38 = 0LL;
            v17 = (char *)&v16[3 * ndisPacketStackSize + 1];
            v17[41] = 0;
            v16 = (_SLIST_HEADER *)((char *)v16 + *((unsigned __int16 *)PoolHandle + 2));
            ExpInterlockedPushEntrySList(v14 + 2, (PSLIST_ENTRY)v17);
            *((_QWORD *)v17 + 3) = PoolHandle;
            v18 = 0;
            *((_DWORD *)v17 + 9) = *((_DWORD *)PoolHandle + 4);
            v19 = (unsigned __int16)(*((_WORD *)PoolHandle + 2) - 48 * ndisPacketStackSize - 152);
            *((_WORD *)v17 + 21) = v19;
            for ( *(_QWORD *)&v17[v19 + 96] = v17; v18 < ndisPacketStackSize; ++v18 )
            {
              *((_DWORD *)v17 - 1) = v18;
              NDIS_STACK_RESERVED_FROM_PACKET((struct _NDIS_PACKET *)v17, &v38);
              KeInitializeSpinLock((PKSPIN_LOCK)v38 + 3);
            }
            --v15;
          }
          while ( v15 );
          v3 = v34;
          v6 = Packet;
          v9 = (KSPIN_LOCK *)((char *)PoolHandle + 32);
        }
        v8 = ExpInterlockedPopEntrySList(v14 + 2);
        v20 = *(_QWORD *)v3;
        if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 )
          goto LABEL_35;
        v14->Alignment = v20;
        v14->Region = (unsigned __int64)v3;
        *(_QWORD *)(v20 + 8) = v14;
        *(_QWORD *)v3 = v14;
        LODWORD(v14[3].Alignment) = 0;
      }
    }
  }
  else
  {
    if ( *((char **)v12 + 1) != v10 )
      goto LABEL_35;
    v31 = *(char **)v12;
    if ( *(char **)(*(_QWORD *)v12 + 8LL) != v12 )
      goto LABEL_35;
    *(_QWORD *)v10 = v31;
    *((_QWORD *)v31 + 1) = v10;
    v8 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v12 + 2);
    v32 = *(_QWORD *)v3;
    if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 )
      goto LABEL_35;
    *(_QWORD *)v12 = v32;
    *((_QWORD *)v12 + 1) = v3;
    *(_QWORD *)(v32 + 8) = v12;
    *(_QWORD *)v3 = v12;
    *((_DWORD *)v12 + 12) = 0;
    if ( *(char **)v10 == v10 )
      v33 = 0LL;
    else
      v33 = *(_QWORD *)(*(_QWORD *)v10 + 16LL) + PoolAgingTicks.QuadPart;
    *((_QWORD *)PoolHandle + 13) = v33;
  }
  v21 = v9;
  v22 = v11;
LABEL_14:
  KeReleaseSpinLock(v21, v22);
  v7 = Status;
LABEL_15:
  if ( v8 )
  {
    *v6 = (PNDIS_PACKET)v8;
    *v7 = 0;
    *(_DWORD *)&(*v6)[-1].ProtocolReserved[4] = -1;
    *(_DWORD *)(*v6)[-1].ProtocolReserved = -1;
    *(_QWORD *)&(*v6)->ProtocolReserved[(*v6)->Private.NdisPacketOobOffset] = *v6;
    (*v6)->Private.Head = 0LL;
    (*v6)->Private.ValidCounts = 0;
    (*v6)->Private.NdisPacketFlags = 0x80;
  }
  else
  {
    *v6 = 0LL;
    *v7 = -1073741670;
  }
}
