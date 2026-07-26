/*
 * XREFs of ndisMIsLoopbackPacket @ 0x1C00C48F0
 * Callers:
 *     ?ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00C4C90 (-ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 * Callees:
 *     NdisAcquireRWLockRead @ 0x1C0005910 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1C00059D0 (NdisReleaseRWLock.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C00326E8 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     NdisPacketSize @ 0x1C0032720 (NdisPacketSize.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     NdisQueryPacket @ 0x1C0063A60 (NdisQueryPacket.c)
 *     ?ethFindMulticast@@YAEIPEAU_ETH_MULTICAST_WRAPPER@@PEAY05EQEAE@Z @ 0x1C0065104 (-ethFindMulticast@@YAEIPEAU_ETH_MULTICAST_WRAPPER@@PEAY05EQEAE@Z.c)
 *     NdisAllocateBuffer @ 0x1C00BE8A0 (NdisAllocateBuffer.c)
 *     ?ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z @ 0x1C00C2744 (-ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z.c)
 */

bool __fastcall ndisMIsLoopbackPacket(__int64 a1, struct _NDIS_PACKET *a2, struct _NDIS_PACKET **a3)
{
  _MDL *Head; // rcx
  char v5; // si
  char *MappedSystemVa; // rbx
  __int64 v10; // rcx
  char v11; // bl
  __int64 v12; // r14
  char v13; // r15
  char v14; // cl
  int v15; // r13d
  bool v16; // zf
  unsigned __int8 Multicast; // al
  char v18; // dl
  UINT TotalLength; // r14d
  UINT v20; // eax
  __int64 v21; // r13
  UINT v22; // eax
  char *PoolWithTag; // rax
  char *v24; // r15
  char *v25; // rax
  struct _NDIS_PACKET *v26; // rbx
  unsigned int v27; // r15d
  unsigned int *v28; // rdx
  struct _MDL *v29; // r15
  unsigned __int8 *v30; // r9
  unsigned __int16 v31; // r13
  int Status; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v33; // [rsp+34h] [rbp-Ch] BYREF
  PNDIS_BUFFER Buffer; // [rsp+38h] [rbp-8h] BYREF
  KSPIN_LOCK *LockState; // [rsp+88h] [rbp+48h] BYREF
  unsigned __int8 *Length; // [rsp+98h] [rbp+58h] BYREF

  LODWORD(Length) = 0;
  Status = 0;
  Head = a2->Private.Head;
  v5 = 0;
  Buffer = 0LL;
  v33 = 0;
  LOWORD(LockState) = 0;
  v16 = (Head->MdlFlags & 5) == 0;
  BYTE2(LockState) = 0;
  if ( v16 )
    MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, 0, 0x40000020u);
  else
    MappedSystemVa = (char *)Head->MappedSystemVa;
  if ( MappedSystemVa )
  {
    if ( *(_DWORD *)(a1 + 464) )
      return (a2->Private.Flags & 0x200) != 0;
    if ( (*(_DWORD *)(a1 + 120) & 0x800000) != 0 )
    {
      if ( (*MappedSystemVa & 1) == 0
        && (v10 = *(_QWORD *)(a1 + 400), *(_DWORD *)(MappedSystemVa + 2) == *(_DWORD *)(v10 + 338))
        && *(_WORD *)MappedSystemVa == *(_WORD *)(v10 + 336) )
      {
        v11 = 1;
        v5 = 1;
      }
      else
      {
        v11 = 1;
      }
      goto LABEL_35;
    }
    NdisAcquireRWLockRead(*(PNDIS_RW_LOCK_EX *)(*(_QWORD *)(a1 + 400) + 288LL), (PLOCK_STATE_EX)&LockState, 0);
    v12 = *(_QWORD *)(a1 + 400);
    v13 = 0;
    v14 = 1;
    v15 = *(_DWORD *)(v12 + 312);
    if ( (*MappedSystemVa & 1) != 0 )
    {
      if ( *MappedSystemVa == -1
        && MappedSystemVa[1] == -1
        && MappedSystemVa[2] == -1
        && MappedSystemVa[3] == -1
        && MappedSystemVa[4] == -1
        && MappedSystemVa[5] == -1 )
      {
        v16 = (v15 & 8) == 0;
LABEL_23:
        if ( v16 )
          goto LABEL_32;
        goto LABEL_31;
      }
      if ( (v15 & 4) == 0 )
      {
        if ( (v15 & 2) == 0 )
          goto LABEL_32;
        Multicast = ethFindMulticast(
                      *(_DWORD *)(v12 + 368),
                      0LL,
                      *(unsigned __int8 (**)[6])(v12 + 352),
                      (unsigned __int8 *const)MappedSystemVa);
        v14 = v18 + 1;
        v16 = Multicast == 0;
        goto LABEL_23;
      }
    }
    else
    {
      if ( *(_DWORD *)(MappedSystemVa + 2) != *(_DWORD *)(v12 + 338)
        || *(_WORD *)MappedSystemVa != *(_WORD *)(v12 + 336) )
      {
LABEL_32:
        v11 = v13;
        if ( (v15 & 0xA0) != 0 )
          v11 = v14;
        NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(v12 + 288), (PLOCK_STATE_EX)&LockState);
        if ( !v11 )
        {
LABEL_37:
          if ( v5 )
            a2->Private.NdisPacketFlags |= 4u;
          if ( v11 )
          {
            LockState = 0LL;
            if ( a2->Private.ValidCounts )
            {
              TotalLength = a2->Private.TotalLength;
            }
            else
            {
              NdisQueryPacket(a2, (PUINT)1, 0LL, 0LL, (PUINT)&Length);
              TotalLength = (unsigned int)Length;
            }
            v20 = NdisPacketSize(0x20u);
            v21 = v20;
            v22 = TotalLength + v20;
            if ( v22 >= TotalLength )
            {
              PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v22, 0x706C444Eu);
              v24 = PoolWithTag;
              if ( PoolWithTag )
              {
                memset(PoolWithTag, 0, (unsigned int)v21);
                v25 = &v24[v21];
                Length = (unsigned __int8 *)&v24[v21];
                v26 = (struct _NDIS_PACKET *)&v24[48 * ndisPacketStackSize + 16];
                v27 = 0;
                if ( ndisPacketStackSize )
                {
                  do
                  {
                    *(_DWORD *)&v26[-1].ProtocolReserved[4] = v27;
                    NDIS_STACK_RESERVED_FROM_PACKET(v26, (struct _NDIS_STACK_RESERVED **)&LockState);
                    KeInitializeSpinLock(LockState + 3);
                    ++v27;
                  }
                  while ( v27 < ndisPacketStackSize );
                  v25 = (char *)Length;
                }
                *(_DWORD *)&v26[-1].ProtocolReserved[4] = -1;
                NdisAllocateBuffer(&Status, &Buffer, 0LL, v25, TotalLength);
                v29 = Buffer;
                if ( !Status )
                {
                  v30 = Length;
                  v26->Private.Head = Buffer;
                  v26->Private.Tail = v29;
                  v26->Private.Pool = (void *)1886351180;
                  v31 = v21 - 48 * ndisPacketStackSize - 152;
                  v26->Private.NdisPacketOobOffset = v31;
                  *(_QWORD *)&v26->ProtocolReserved[v31] = v26;
                  ndisMCopyFromPacketToBuffer(a2, v28, TotalLength, v30, &v33);
                  if ( v33 == TotalLength )
                  {
                    if ( a3 )
                    {
                      *a3 = v26;
                      v26->Private.NdisPacketFlags |= 2u;
                      v26->Private.Flags = a2->Private.Flags & 0x80 | 0x100;
                    }
                    return v5;
                  }
                }
                ExFreePoolWithTag((char *)v26 - 48 * ndisPacketStackSize - 16, 0);
                if ( v29 )
                  IoFreeMdl(v29);
              }
            }
            *a3 = 0LL;
            return 0;
          }
          return (a2->Private.Flags & 0x200) != 0;
        }
LABEL_35:
        if ( (a2->Private.Flags & 0x200) != 0 )
          v5 = 1;
        goto LABEL_37;
      }
      v5 = 1;
    }
LABEL_31:
    v13 = v14;
    goto LABEL_32;
  }
  if ( a3 )
    *a3 = 0LL;
  return 0;
}
