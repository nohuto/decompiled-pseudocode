/*
 * XREFs of ?ndisMSendPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00BFA80
 * Callers:
 *     ?ndisMSend@@YAHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00BF8B0 (-ndisMSend@@YAHPEAXPEAU_NDIS_PACKET@@@Z.c)
 * Callees:
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C002CCE0 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032928 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisMSendPackets(_QWORD *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  unsigned int v3; // r12d
  __int64 v4; // r15
  struct _NDIS_PACKET **v5; // r13
  __int64 v6; // rdi
  unsigned int v7; // ebp
  struct _NDIS_PACKET *v8; // r14
  _MDL *Head; // rbx
  struct _NDIS_STACK_RESERVED *v11; // rbx
  __int64 v12; // rsi
  struct _NDIS_PACKET **v13; // r9
  __int64 v14; // [rsp+30h] [rbp-58h]
  struct _NDIS_PACKET **v16; // [rsp+98h] [rbp+10h]
  KIRQL NewIrql; // [rsp+A0h] [rbp+18h]
  struct _NDIS_STACK_RESERVED *v18; // [rsp+A8h] [rbp+20h] BYREF

  if ( a3 )
  {
    v16 = a2;
    v18 = 0LL;
    v3 = 0;
    v4 = a1[2];
    v5 = a2;
    v6 = (__int64)a1;
    v14 = a3;
    v7 = 0;
    do
    {
      v8 = *v5;
      ++*(_DWORD *)&v8[-1].ProtocolReserved[4];
      NDIS_STACK_RESERVED_FROM_PACKET(v8, &v18);
      *(_QWORD *)v18 = v6;
      Head = v8->Private.Head;
      if ( Head )
      {
        if ( (*(_BYTE *)(v4 + 928) & 2) == 0 )
        {
          v3 = 0;
          while ( (Head->MdlFlags & 5) != 0
                ? Head->MappedSystemVa
                : MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, 0, 0x40000020u) )
          {
            Head = Head->Next;
            if ( !Head )
              goto LABEL_14;
          }
          v3 = -1073741670;
        }
      }
      else
      {
        v3 = -1073741823;
      }
LABEL_14:
      v8->Private.NdisPacketFlags &= ~4u;
      ndisMReferenceOpen(v6, 9u);
      if ( v3 )
      {
        NewIrql = KfRaiseIrql(2u);
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 96));
        v11 = v18;
        *(_QWORD *)(v4 + 520) = KeGetCurrentThread();
        v12 = *(_QWORD *)v11;
        *(_QWORD *)v11 = 1297040184LL;
        *(_QWORD *)(v4 + 520) = 0LL;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 96));
        *((_DWORD *)v11 + 2) = 0;
        v8->Private.NdisPacketFlags &= 0xC0u;
        (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v12 + 112))(v12, v8, v3);
        if ( NewIrql != 2 )
          KeLowerIrql(NewIrql);
        if ( v7 )
        {
          (*(void (__fastcall **)(__int64, struct _NDIS_PACKET **, _QWORD))(v4 + 2024))(v4, v16, v7);
          v13 = v5 + 1;
          v7 = 0;
          v16 = v5 + 1;
        }
        else
        {
          v13 = v16;
        }
        v6 = (__int64)a1;
      }
      else
      {
        v13 = v16;
        ++v7;
      }
      ++v5;
      --v14;
    }
    while ( v14 );
    if ( v7 )
      (*(void (__fastcall **)(__int64, struct _NDIS_PACKET **, _QWORD))(v4 + 2024))(v4, v13, v7);
  }
}
