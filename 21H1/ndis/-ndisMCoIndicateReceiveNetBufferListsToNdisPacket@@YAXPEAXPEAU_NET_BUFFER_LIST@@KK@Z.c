/*
 * XREFs of ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00BB6E0
 * Callers:
 *     <none>
 * Callees:
 *     NdisAcquireRWLockRead @ 0x1C0005910 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1C00059D0 (NdisReleaseRWLock.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C00326E8 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     ?ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z @ 0x1C0074CC8 (-ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z.c)
 *     ?ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z @ 0x1C00751C4 (-ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C008D7E0 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C00BA81C (-ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET.c)
 *     ndisReturnPacketToNetBufferList @ 0x1C00C3F08 (ndisReturnPacketToNetBufferList.c)
 */

void __fastcall ndisMCoIndicateReceiveNetBufferListsToNdisPacket(
        _QWORD *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // r15
  __int64 v6; // rsi
  __int64 Status; // r12
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  char v11; // al
  struct _NDIS_PACKET **v12; // r13
  struct _NDIS_PACKET *v13; // rbx
  __int64 NdisPacketOobOffset; // r14
  _MDL *v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rax
  struct _NDIS_STACK_RESERVED *v18; // rdi
  int v19; // ecx
  signed __int32 v20; // edx
  struct _NDIS_PACKET *v21; // rdx
  struct _NDIS_MINIPORT_BLOCK *v22; // rdx
  __int64 v23; // r12
  struct _NET_BUFFER_LIST *v24; // rbx
  _QWORD *v25; // rdi
  unsigned int v26; // esi
  unsigned int v27; // r14d
  char v28; // [rsp+40h] [rbp-C0h]
  struct _LOCK_STATE_EX LockState; // [rsp+44h] [rbp-BCh] BYREF
  struct _NDIS_STACK_RESERVED *v30; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+50h] [rbp-B0h]
  unsigned int v32; // [rsp+58h] [rbp-A8h]
  unsigned int v33; // [rsp+5Ch] [rbp-A4h]
  __int64 v34; // [rsp+60h] [rbp-A0h]
  struct _NET_BUFFER_LIST *v35; // [rsp+68h] [rbp-98h]
  void *v36; // [rsp+70h] [rbp-90h]
  struct _NDIS_PACKET **v37; // [rsp+78h] [rbp-88h] BYREF
  int v38; // [rsp+80h] [rbp-80h]
  int v39; // [rsp+84h] [rbp-7Ch]
  struct _NET_BUFFER_LIST *v40; // [rsp+88h] [rbp-78h]
  _NET_BUFFER *FirstNetBuffer; // [rsp+90h] [rbp-70h]
  unsigned int v42; // [rsp+98h] [rbp-68h]
  int v43; // [rsp+9Ch] [rbp-64h]
  __int64 v44; // [rsp+A0h] [rbp-60h]
  _BYTE v45[512]; // [rsp+B0h] [rbp-50h] BYREF

  v4 = a1[9];
  v33 = a3;
  v35 = a2;
  v36 = a1;
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  v39 = 0;
  v43 = 0;
  v32 = a4;
  memset(v45, 0, sizeof(v45));
  v6 = *(_QWORD *)(v4 + 120);
  v30 = 0LL;
  v34 = *(_QWORD *)(v6 + 400);
  NdisAcquireRWLockRead(*(PNDIS_RW_LOCK_EX *)(v34 + 288), &LockState, 0);
  Status = a2->Status;
  v8 = KeGetPcr()->Prcb.Number << 12;
  v9 = *(_QWORD *)(v4 + 16);
  v38 = 64;
  v40 = a2;
  v42 = 0;
  v10 = *(_QWORD *)(v9 + 720);
  v37 = (struct _NDIS_PACKET **)v45;
  v44 = v6;
  *(_BYTE *)(v8 + v10) = 1;
  FirstNetBuffer = a2->FirstNetBuffer;
  do
  {
    v11 = ndisXlateRecvNetBufferListsToPacketArray((struct _NDIS_NBLS_TO_PKT_ARRAY *)&v37);
    v28 = v11;
    if ( !v42 )
      continue;
    v12 = v37;
    v31 = v42;
    do
    {
      v13 = *v12;
      NdisPacketOobOffset = (*v12)->Private.NdisPacketOobOffset;
      ++*(_DWORD *)&v13[-1].ProtocolReserved[4];
      NDIS_STACK_RESERVED_FROM_PACKET(v13, &v30);
      v16 = *(_QWORD *)(v6 + 3152);
      if ( v16 )
      {
        v17 = 112LL * KeGetPcr()->Prcb.Number;
        ++*(_QWORD *)(v16 + v17 + 32);
      }
      v18 = v30;
      *((_DWORD *)v30 + 2) = -1;
      *((_DWORD *)v18 + 3) = (_DWORD)v15;
      *(_QWORD *)v18 = v6;
      v13->Private.ValidCounts = (unsigned __int8)v15;
      if ( (*(_DWORD *)(v4 + 4) & 0x10) != 0 )
      {
        v19 = (int)v15;
      }
      else
      {
        v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _NDIS_PACKET *))(v4 + 56))(
                *(_QWORD *)(*(_QWORD *)(v4 + 16) + 32LL),
                *(_QWORD *)(v4 + 24),
                v13);
        v15 = 0LL;
      }
      *((_DWORD *)v18 + 3) = v19;
      if ( v19 )
      {
        v20 = _InterlockedExchangeAdd((volatile signed __int32 *)v18 + 2, v19 + 1) + v19 + 1;
        if ( v20 > 0 && (*(_DWORD *)(v6 + 120) & 0x40000) == 0 )
          *(unsigned int *)((char *)&v13->Private.Count + v13->Private.NdisPacketOobOffset) = 259;
        v18 = v30;
      }
      else
      {
        v20 = (int)v15;
        *((_DWORD *)v18 + 2) = (_DWORD)v15;
      }
      if ( v20 )
      {
        if ( (*(_DWORD *)(v6 + 120) & 0x8000) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v6 + 1828));
      }
      else
      {
        --*(_DWORD *)&v13[-1].ProtocolReserved[4];
        if ( *(unsigned int *)((char *)&v13->Private.Count + NdisPacketOobOffset) == -1073741670 )
          goto LABEL_31;
        if ( (*(_DWORD *)(v6 + 120) & 0x40000) != 0 )
        {
          *(_QWORD *)v18 = v15;
          *(unsigned int *)((char *)&v13->Private.Count + NdisPacketOobOffset) = 259;
          if ( (v13[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v13[-1].ProtocolReserved[4] == -1 )
            goto LABEL_26;
          v21 = v13;
          if ( *(_MDL **)((char *)&v13[1].Private.Head + v13->Private.NdisPacketOobOffset) != v15 )
            goto LABEL_21;
          (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(*(_QWORD *)(v6 + 3760) + 224LL))(
            *(_QWORD *)(v6 + 24),
            v13);
        }
        else
        {
          if ( *(_MDL **)((char *)&v13[1].Private.Head + v13->Private.NdisPacketOobOffset) != v15 )
          {
            *(_QWORD *)v18 = v15;
            *(unsigned int *)((char *)&v13->Private.Count + v13->Private.NdisPacketOobOffset) = 259;
            if ( (v13[-1].Reserved[1] & 1) == 0 || *(_DWORD *)&v13[-1].ProtocolReserved[4] != -1 )
            {
              v21 = v13;
LABEL_21:
              ndisReturnPacketToNetBufferList((struct _NDIS_OBJECT_HEADER *)v6, v21);
              goto LABEL_31;
            }
LABEL_26:
            NDIS_FREE_XFER_DATA_PACKET(v13);
            goto LABEL_31;
          }
          *(unsigned int *)((char *)&v13->Private.Count + NdisPacketOobOffset) = (unsigned int)v15;
        }
      }
LABEL_31:
      if ( Status == -1073741670 )
        ndisXlateReturnPacketToNetBufferList(v13);
      ++v12;
      --v31;
    }
    while ( v31 );
    v11 = v28;
  }
  while ( v11 );
  v22 = *(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120);
  v23 = v34;
  if ( v22->PmodeOpens )
  {
    v24 = v35;
    v25 = v36;
    v26 = v32;
    v27 = v33;
    ndisCoIndicatePromiscNetBuffer(v36, v22, *(struct _NDIS_OPEN_BLOCK **)v34, v35, v33, v32, 1);
    ndisCoIndicatePromiscNetBuffer(
      v25,
      *(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120),
      *(struct _NDIS_OPEN_BLOCK **)(v23 + 8),
      v24,
      v27,
      v26,
      1);
    ndisCoIndicatePromiscNetBuffer(
      v25,
      *(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120),
      *(struct _NDIS_OPEN_BLOCK **)(v23 + 16),
      v24,
      v27,
      v26,
      1);
  }
  NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(v23 + 288), &LockState);
}
