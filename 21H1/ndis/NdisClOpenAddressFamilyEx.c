/*
 * XREFs of NdisClOpenAddressFamilyEx @ 0x1C00B5A60
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006C9C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006E8C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001970C (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C001986C (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C002CAA0 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     NdisCmOpenAddressFamilyComplete @ 0x1C00B61B0 (NdisCmOpenAddressFamilyComplete.c)
 */

NDIS_STATUS __stdcall NdisClOpenAddressFamilyEx(
        NDIS_HANDLE NdisBindingHandle,
        PCO_ADDRESS_FAMILY AddressFamily,
        NDIS_HANDLE ClientAfContext,
        PNDIS_HANDLE NdisAfHandle)
{
  __int64 Open; // rsi
  char v6; // r12
  struct _NDIS_MINIPORT_BLOCK *v7; // rdi
  char v8; // r13
  __int64 v9; // r14
  KSPIN_LOCK *p_Lock; // rcx
  NDIS_STATUS v11; // ebx
  _NDIS_AF_LIST *CallMgrAfList; // rbx
  char *PoolWithTag; // rax
  char *v14; // r14
  KIRQL v15; // dl
  bool v16; // zf
  NDIS_HANDLE v17; // rax
  KIRQL v18; // al
  int (__fastcall *CmOpenAfHandler)(void *, CO_ADDRESS_FAMILY *, void *, void **); // rax
  void *MiniportAdapterContext; // rcx
  NDIS_STATUS v21; // eax
  KIRQL v22; // dl
  KIRQL v23; // dl
  __int64 v25; // [rsp+30h] [rbp-18h]
  KIRQL NewIrql; // [rsp+90h] [rbp+48h] BYREF
  PCO_ADDRESS_FAMILY v27; // [rsp+98h] [rbp+50h]
  NDIS_HANDLE v28; // [rsp+A0h] [rbp+58h]
  char v29; // [rsp+A8h] [rbp+60h]

  v28 = ClientAfContext;
  v27 = AddressFamily;
  Open = 0LL;
  *NdisAfHandle = 0LL;
  v6 = 0;
  v7 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)NdisBindingHandle + 2);
  v8 = 0;
  v9 = *((_QWORD *)NdisBindingHandle + 3);
  v29 = 0;
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisBindingHandle + 29);
  *((_DWORD *)NdisBindingHandle + 56) |= 0x40000u;
  if ( (*((_DWORD *)NdisBindingHandle + 56) & 0x18000) != 0 )
  {
    p_Lock = (KSPIN_LOCK *)((char *)NdisBindingHandle + 232);
LABEL_3:
    KeReleaseSpinLock(p_Lock, NewIrql);
    v11 = -1073676286;
    goto LABEL_35;
  }
  ndisMReferenceOpen((__int64)NdisBindingHandle, 0xFu);
  v6 = 1;
  _InterlockedAdd((volatile signed __int32 *)NdisBindingHandle + 94, 1u);
  KeReleaseSpinLock((PKSPIN_LOCK)NdisBindingHandle + 29, NewIrql);
  if ( v7->MajorNdisVersion < 5u
    || (v7->Flags & 0x20000) == 0
    || *(_BYTE *)(v9 + 56) < 6u
    || (v25 = v9 + 472, *(_BYTE *)(v9 + 472) != 0xA6) )
  {
    v11 = -1073676284;
    goto LABEL_35;
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v7, &NewIrql);
  CallMgrAfList = v7->CallMgrAfList;
  if ( !CallMgrAfList )
  {
LABEL_11:
    v7->MiniportThread = 0LL;
LABEL_12:
    KeReleaseSpinLock(&v7->Lock, NewIrql);
    v11 = -1073741823;
    goto LABEL_35;
  }
  while ( CallMgrAfList->AddressFamily.AddressFamily != v27->AddressFamily )
  {
    CallMgrAfList = CallMgrAfList->NextAf;
    if ( !CallMgrAfList )
      goto LABEL_11;
  }
  Open = (__int64)CallMgrAfList->Open;
  if ( Open )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(Open + 232));
    if ( (*(_DWORD *)(Open + 224) & 0x18000) != 0 )
    {
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(Open + 232));
      v7->MiniportThread = 0LL;
      p_Lock = &v7->Lock;
      goto LABEL_3;
    }
    ndisMReferenceOpen(Open, 0x10u);
    _InterlockedAdd((volatile signed __int32 *)(Open + 376), 1u);
    v29 = 1;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(Open + 232));
    goto LABEL_20;
  }
  if ( (v7->PnPFlags & 0x4000) != 0 )
  {
    v7->MiniportThread = 0LL;
    goto LABEL_12;
  }
  ndisReferenceMiniportNoCheck(v7, 0x51u);
  v8 = 1;
LABEL_20:
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x258uLL, 0x6F63444Eu);
  v14 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x258uLL);
    v15 = NewIrql;
    *((_DWORD *)v14 + 3) = 1;
    v16 = CallMgrAfList->Open == 0LL;
    *((_QWORD *)v14 + 2) = v7;
    *((_QWORD *)v14 + 46) = NdisBindingHandle;
    *((_DWORD *)v14 + 2) = v16;
    Open = (__int64)CallMgrAfList->Open;
    v17 = v28;
    *((_QWORD *)v14 + 5) = Open;
    *((_QWORD *)v14 + 47) = v17;
    *((_DWORD *)v14 + 98) = CallMgrAfList->NdisMajorVersion;
    *((_DWORD *)v14 + 99) = 6;
    v7->MiniportThread = 0LL;
    KeReleaseSpinLock(&v7->Lock, v15);
    KeInitializeSpinLock((PKSPIN_LOCK)v14 + 48);
    if ( *((_DWORD *)v14 + 98) >= 6u )
      *((_QWORD *)v14 + 4) = &CallMgrAfList->CallMgrChars;
    else
      *((_QWORD *)v14 + 3) = &CallMgrAfList->CmChars;
    *((_OWORD *)v14 + 13) = *(_OWORD *)v25;
    *((_OWORD *)v14 + 14) = *(_OWORD *)(v25 + 16);
    *((_OWORD *)v14 + 15) = *(_OWORD *)(v25 + 32);
    *((_OWORD *)v14 + 16) = *(_OWORD *)(v25 + 48);
    *((_OWORD *)v14 + 17) = *(_OWORD *)(v25 + 64);
    *((_OWORD *)v14 + 18) = *(_OWORD *)(v25 + 80);
    *((_OWORD *)v14 + 19) = *(_OWORD *)(v25 + 96);
    *((_OWORD *)v14 + 20) = *(_OWORD *)(v25 + 112);
    *((_OWORD *)v14 + 21) = *(_OWORD *)(v25 + 128);
    *((_OWORD *)v14 + 22) = *(_OWORD *)(v25 + 144);
    *((_QWORD *)NdisBindingHandle + 123) = *(_QWORD *)(v25 + 8);
    *((_QWORD *)NdisBindingHandle + 124) = *(_QWORD *)(v25 + 16);
    *((_QWORD *)NdisBindingHandle + 136) = *(_QWORD *)(v25 + 32);
    *((_QWORD *)NdisBindingHandle + 137) = *(_QWORD *)(v25 + 24);
    v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v14 + 48);
    *((_DWORD *)v14 + 2) |= 0x40000000u;
    NewIrql = v18;
    KeReleaseSpinLock((PKSPIN_LOCK)v14 + 48, v18);
    if ( CallMgrAfList->NdisMajorVersion >= 6 )
      CmOpenAfHandler = CallMgrAfList->CallMgrChars.CmOpenAfHandler;
    else
      CmOpenAfHandler = CallMgrAfList->CmChars.CmOpenAfHandler;
    if ( Open )
      MiniportAdapterContext = *(void **)(Open + 32);
    else
      MiniportAdapterContext = v7->MiniportAdapterContext;
    v21 = CmOpenAfHandler(MiniportAdapterContext, (CO_ADDRESS_FAMILY *)v27, v14, (void **)v14 + 6);
    v11 = v21;
    if ( v21 != 259 )
    {
      NdisCmOpenAddressFamilyComplete(v21, v14, *((NDIS_HANDLE *)v14 + 6));
      v11 = 259;
    }
    v8 = 0;
    v29 = 0;
    v6 = 0;
  }
  else
  {
    v7->MiniportThread = 0LL;
    KeReleaseSpinLock(&v7->Lock, NewIrql);
    v11 = -1073741670;
  }
LABEL_35:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( v6 )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v7, &NewIrql);
    _InterlockedDecrement((volatile signed __int32 *)NdisBindingHandle + 94);
    ndisMDereferenceOpenLocked((__int64)NdisBindingHandle, 0xFu);
    v22 = NewIrql;
    v7->MiniportThread = 0LL;
    KeReleaseSpinLock(&v7->Lock, v22);
  }
  if ( Open && v29 )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v7, &NewIrql);
    _InterlockedDecrement((volatile signed __int32 *)(Open + 376));
    ndisMDereferenceOpenLocked(Open, 0x10u);
    v23 = NewIrql;
    v7->MiniportThread = 0LL;
    KeReleaseSpinLock(&v7->Lock, v23);
  }
  if ( v8 )
    ndisDereferenceMiniport(v7, 0x51u);
  return v11;
}
