/*
 * XREFs of ?ndisMIndicatePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C008E4D0
 * Callers:
 *     <none>
 * Callees:
 *     NdisAcquireRWLockRead @ 0x1C0005A00 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1C0005AC0 (NdisReleaseRWLock.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032C88 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1C007450C (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C008E040 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     NdisGetFirstBufferFromPacket @ 0x1C00C18D0 (NdisGetFirstBufferFromPacket.c)
 *     ndisReturnPacketToNetBufferList @ 0x1C00C4538 (ndisReturnPacketToNetBufferList.c)
 */

void __fastcall ndisMIndicatePacket(struct _NDIS_OBJECT_HEADER *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  unsigned int Number; // eax
  char v4; // r15
  struct _NDIS_PACKET **v6; // rbx
  struct _NDIS_RW_LOCK_EX *v8; // rcx
  struct _NDIS_PACKET *v9; // rbx
  int v10; // ecx
  struct _NDIS_STACK_RESERVED *v11; // r13
  char *v12; // r14
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  _QWORD *v17; // rdx
  struct _NDIS_STACK_RESERVED *v18; // r12
  __int64 v19; // r8
  __int64 v20; // rsi
  struct NDIS_NBL_TRACKER_HANDLE__ *v21; // rdx
  unsigned int v22; // r9d
  __int64 v23; // rax
  __int64 v24; // rax
  __int16 (__fastcall *v25)(_QWORD, struct _NDIS_PACKET *); // r8
  struct _NET_BUFFER_LIST *v26; // rcx
  int v27; // ecx
  __int64 v28; // rdx
  bool v29; // zf
  struct _NDIS_PACKET *v30; // rdx
  _QWORD *v31; // rsi
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rbx
  int v36; // [rsp+40h] [rbp-49h]
  unsigned int v37; // [rsp+44h] [rbp-45h]
  unsigned int v38; // [rsp+48h] [rbp-41h]
  struct _NDIS_STACK_RESERVED *v39; // [rsp+50h] [rbp-39h] BYREF
  _QWORD *v40; // [rsp+58h] [rbp-31h]
  unsigned int v41; // [rsp+60h] [rbp-29h]
  __int64 v42; // [rsp+68h] [rbp-21h] BYREF
  struct _NDIS_PACKET **v43; // [rsp+70h] [rbp-19h]
  char v44; // [rsp+78h] [rbp-11h] BYREF
  __int64 v45; // [rsp+80h] [rbp-9h]
  __int64 v46; // [rsp+88h] [rbp-1h]
  struct _NDIS_STACK_RESERVED *v47; // [rsp+90h] [rbp+7h]
  char v48; // [rsp+98h] [rbp+Fh] BYREF
  struct _LOCK_STATE_EX LockState; // [rsp+F0h] [rbp+67h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+F8h] [rbp+6Fh]
  unsigned int v51; // [rsp+100h] [rbp+77h]
  unsigned int v52; // [rsp+108h] [rbp+7Fh] BYREF

  v51 = a3;
  BugCheckParameter4 = (ULONG_PTR)a2;
  Number = KeGetPcr()->Prcb.Number;
  v4 = 0;
  v43 = a2;
  v6 = a2;
  v40 = *(_QWORD **)&a1[100].Type;
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  v8 = (struct _NDIS_RW_LOCK_EX *)v40[36];
  v39 = 0LL;
  v42 = 0LL;
  v52 = 0;
  v36 = 0;
  v38 = Number;
  NdisAcquireRWLockRead(v8, &LockState, 0);
  v37 = 0;
  if ( !a3 )
  {
    v31 = v40;
    goto LABEL_59;
  }
  do
  {
    v9 = *v6;
    ++*(_DWORD *)&v9[-1].ProtocolReserved[4];
    NDIS_STACK_RESERVED_FROM_PACKET(v9, &v39);
    v11 = v39;
    v47 = v39;
    if ( *((_DWORD *)v39 + 2) )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        *(_QWORD *)&a1[964].Type,
        "Indicating packet not owned by it");
      KeBugCheckEx(0x7Cu, 0x12uLL, (ULONG_PTR)a1, (ULONG_PTR)v9, BugCheckParameter4);
    }
    v12 = (char *)v9 + v9->Private.NdisPacketOobOffset;
    NdisGetFirstBufferFromPacket(v10, (unsigned int)&v48, (unsigned int)&v42, (unsigned int)&v44, (__int64)&v52);
    if ( (v9->Private.Flags & 0x20000) == 0 && (v9->Private.NdisPacketFlags & 2) == 0 )
    {
      v13 = *(_QWORD *)&a1[788].Type;
      if ( v13 )
      {
        v14 = 112LL * KeGetPcr()->Prcb.Number;
        ++*(_QWORD *)(v13 + v14 + 32);
        v15 = *(_QWORD *)&a1[788].Type;
        if ( v15 )
        {
          v16 = v52;
          v17 = (_QWORD *)(v15 + 112LL * KeGetPcr()->Prcb.Number);
          v17[1] += v52;
          *v17 += v16;
        }
      }
    }
    v9->Private.Flags &= ~0x20000u;
    *((_DWORD *)v11 + 2) = -1;
    v18 = v39;
    *((_DWORD *)v39 + 3) = 0;
    *(_QWORD *)v18 = a1;
    v9->Private.ValidCounts = 0;
    if ( *((_DWORD *)v12 + 8) == -1073741670 || (*(_DWORD *)&a1[31] & 0x800) != 0 )
    {
      v19 = 1LL;
      v4 = 1;
    }
    else
    {
      if ( (*(_DWORD *)&a1[30] & 0x8000) == 0 )
        *((_DWORD *)v12 + 8) = 0;
      v19 = 1LL;
    }
    v20 = *v40;
    if ( *v40 )
    {
      do
      {
        ++v36;
        v46 = *(_QWORD *)(v20 + 424);
        *(_BYTE *)(*(_QWORD *)(v20 + 720) + (v38 << 12)) = 1;
        v21 = *(struct NDIS_NBL_TRACKER_HANDLE__ **)&a1[400].Type;
        v22 = *(unsigned int *)((char *)&v9->Private.Count + v9->Private.NdisPacketOobOffset);
        v23 = KeGetPcr()->Prcb.Number;
        v41 = v22;
        v24 = *((_QWORD *)v21 + v23);
        v45 = v24;
        LODWORD(v24) = KeGetPcr()->Prcb.Number;
        *((_QWORD *)v21 + v24) = v9;
        if ( v4 || (v25 = *(__int16 (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(v20 + 160)) == 0LL )
        {
          *(unsigned int *)((char *)&v9->Private.Count + v9->Private.NdisPacketOobOffset) = -1073741670;
          (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(v20 + 128))(*(_QWORD *)(v20 + 32), v9);
          *(unsigned int *)((char *)&v9->Private.Count + v9->Private.NdisPacketOobOffset) = v41;
        }
        else
        {
          v26 = *(struct _NET_BUFFER_LIST **)((char *)&v9[1].Private.Head + v9->Private.NdisPacketOobOffset);
          if ( v26 && v22 == -1073741670 )
          {
            ndisNblTrackerTransferOwnershipSingleNbl(v26, v21, *(_QWORD *)(v20 + 584));
            v25 = *(__int16 (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(v20 + 160);
          }
          *((_DWORD *)v18 + 3) += v25(*(_QWORD *)(v20 + 32), v9);
        }
        v19 = 1LL;
        if ( *((int *)v18 + 3) > 0 && (*(_DWORD *)(v20 + 224) & 8) == 0 )
          v4 = 1;
        *(_QWORD *)(*(_QWORD *)&a1[400].Type + 8LL * KeGetPcr()->Prcb.Number) = v45;
        v20 = v46;
      }
      while ( v46 );
      v11 = v47;
    }
    v27 = *((_DWORD *)v18 + 3);
    v4 = 0;
    if ( v27 )
    {
      v28 = (unsigned int)(_InterlockedExchangeAdd((volatile signed __int32 *)v11 + 2, v27 + 1) + v27 + 1);
      v29 = (_DWORD)v28 == 0;
      if ( (int)v28 <= 0 )
        goto LABEL_33;
      if ( (*(_DWORD *)&a1[30] & 0x40000) == 0 )
        *(unsigned int *)((char *)&v9->Private.Count + v9->Private.NdisPacketOobOffset) = 259;
    }
    else
    {
      v28 = 0LL;
      *((_DWORD *)v11 + 2) = 0;
    }
    v29 = (_DWORD)v28 == 0;
LABEL_33:
    if ( v29 )
    {
      --*(_DWORD *)&v9[-1].ProtocolReserved[4];
      if ( *((_DWORD *)v12 + 8) == -1073741670 )
        goto LABEL_49;
      if ( (*(_DWORD *)&a1[30] & 0x40000) != 0 )
      {
        *(_QWORD *)v39 = 0LL;
        *((_DWORD *)v12 + 8) = 259;
        if ( (v9[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v9[-1].ProtocolReserved[4] == -1 )
          goto LABEL_44;
        v30 = v9;
        if ( *(_MDL **)((char *)&v9[1].Private.Head + v9->Private.NdisPacketOobOffset) )
          goto LABEL_39;
        (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *, __int64))(*(_QWORD *)&a1[940].Type + 224LL))(
          *(_QWORD *)&a1[6].Type,
          v9,
          1LL);
      }
      else
      {
        if ( *(_MDL **)((char *)&v9[1].Private.Head + v9->Private.NdisPacketOobOffset) )
        {
          *(_QWORD *)v39 = 0LL;
          *(unsigned int *)((char *)&v9->Private.Count + v9->Private.NdisPacketOobOffset) = 259;
          if ( (v9[-1].Reserved[1] & 1) == 0 || *(_DWORD *)&v9[-1].ProtocolReserved[4] != -1 )
          {
            v30 = v9;
LABEL_39:
            ndisReturnPacketToNetBufferList(a1, v30);
            goto LABEL_49;
          }
LABEL_44:
          NDIS_FREE_XFER_DATA_PACKET(v9);
          goto LABEL_49;
        }
        *((_DWORD *)v12 + 8) = 0;
      }
    }
    else if ( (*(_DWORD *)&a1[30] & 0x8000) != 0 )
    {
      _InterlockedAdd((volatile signed __int32 *)&a1[457], 1u);
    }
LABEL_49:
    v6 = v43 + 1;
    ++v37;
    ++v43;
  }
  while ( v37 < v51 );
  v31 = v40;
  if ( v36 )
  {
    v32 = *v40;
    if ( *v40 )
    {
      v33 = v38 << 12;
      do
      {
        v34 = *(_QWORD *)(v32 + 720);
        v35 = *(_QWORD *)(v32 + 424);
        if ( *(_BYTE *)(v34 + v33) )
        {
          *(_BYTE *)(v34 + v33) = 0;
          (*(void (__fastcall **)(_QWORD, __int64, __int64))(v32 + 136))(*(_QWORD *)(v32 + 32), v28, v19);
        }
        v32 = v35;
      }
      while ( v35 );
    }
  }
LABEL_59:
  NdisReleaseRWLock((PNDIS_RW_LOCK_EX)v31[36], &LockState);
}
