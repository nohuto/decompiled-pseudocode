/*
 * XREFs of ?ndisMQueuedAllocateSharedHandler@@YAXPEAX@Z @ 0x1C005F9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006C9C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     NdisMAllocateSharedMemory @ 0x1C00244D0 (NdisMAllocateSharedMemory.c)
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x1C005F724 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 */

void __fastcall ndisMQueuedAllocateSharedHandler(char *P)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rax
  KIRQL v2; // di
  char v3; // r14
  struct _NDIS_MINIPORT_BLOCK *NextMiniport; // rbx
  wchar_t *CancelOidRequestHandler; // rbp
  char *v7; // r15
  unsigned __int8 v8; // [rsp+60h] [rbp+8h] BYREF

  v1 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)P + 4);
  v2 = 0;
  v3 = 0;
  v8 = 0;
  if ( v1->Header.Type == 17 )
  {
    v3 = 1;
    NextMiniport = v1;
    if ( v1->MajorNdisVersion < 6u )
    {
      CancelOidRequestHandler = (wchar_t *)v1->DriverHandle->MiniportDriverCharacteristics.CancelOidRequestHandler;
      goto LABEL_7;
    }
    v1 = (struct _NDIS_MINIPORT_BLOCK *)v1->MiniportSGDmaBlock;
  }
  else
  {
    NextMiniport = v1->NextMiniport;
  }
  CancelOidRequestHandler = v1->Reserved4.Buffer;
LABEL_7:
  v7 = P + 64;
  NdisMAllocateSharedMemory(NextMiniport, *((_DWORD *)P + 10), P[44], (PVOID *)P + 6, (PNDIS_PHYSICAL_ADDRESS)P + 8);
  if ( v3 )
  {
    if ( (NextMiniport->Flags & 0x40000) != 0 )
    {
      v2 = KfRaiseIrql(2u);
    }
    else
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(NextMiniport, &v8);
      v2 = v8;
    }
  }
  ((void (__fastcall *)(void *, _QWORD, char *, _QWORD, _QWORD))CancelOidRequestHandler)(
    NextMiniport->MiniportAdapterContext,
    *((_QWORD *)P + 6),
    v7,
    *((unsigned int *)P + 10),
    *((_QWORD *)P + 7));
  if ( v3 )
  {
    if ( (NextMiniport->Flags & 0x40000) != 0 )
    {
      KeLowerIrql(v2);
    }
    else
    {
      NextMiniport->MiniportThread = 0LL;
      KeReleaseSpinLock(&NextMiniport->Lock, v2);
    }
  }
  ndisDereferenceDmaAdapter(NextMiniport->MiniportSGDmaBlock);
  ndisDereferenceMiniport(NextMiniport, 0x41u);
  ExFreePoolWithTag(P, 0);
}
