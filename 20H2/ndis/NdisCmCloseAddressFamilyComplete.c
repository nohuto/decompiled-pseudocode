/*
 * XREFs of NdisCmCloseAddressFamilyComplete @ 0x1C00B63E0
 * Callers:
 *     NdisClCloseAddressFamily @ 0x1C00B5DF0 (NdisClCloseAddressFamily.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00196CC (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniportRef@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C003E518 (-ndisDereferenceMiniportRef@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 *     ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00B5BDC (-ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 */

void __stdcall NdisCmCloseAddressFamilyComplete(NDIS_STATUS Status, NDIS_HANDLE NdisAfHandle)
{
  __int64 v3; // rdx
  struct _NDIS_MINIPORT_BLOCK *v5; // rdi
  __int64 v6; // rax
  _QWORD **v7; // rcx
  _QWORD *v8; // rdx
  KIRQL v9; // dl
  KIRQL NewIrql; // [rsp+30h] [rbp+8h] BYREF

  NewIrql = 0;
  v3 = *((_QWORD *)NdisAfHandle + 47);
  if ( *((_DWORD *)NdisAfHandle + 99) >= 6u )
    (*((void (__fastcall **)(NDIS_STATUS, __int64))NdisAfHandle + 32))(Status, v3);
  else
    (*((void (__fastcall **)(NDIS_STATUS, __int64))NdisAfHandle + 13))(Status, v3);
  if ( !Status )
  {
    v5 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)NdisAfHandle + 2);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v5, &NewIrql);
    v6 = *((_QWORD *)NdisAfHandle + 5);
    if ( v6 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 376));
      ndisMDereferenceOpenLocked(*((_QWORD *)NdisAfHandle + 5), 0x10u);
    }
    else
    {
      ndisDereferenceMiniportRef(v5, 0x51u);
    }
    v7 = (_QWORD **)(*((_QWORD *)NdisAfHandle + 46) + 1016LL);
    v8 = *v7;
    if ( *v7 )
    {
      while ( v8 != NdisAfHandle )
      {
        v7 = (_QWORD **)v8;
        v8 = (_QWORD *)*v8;
        if ( !v8 )
          goto LABEL_13;
      }
      *v7 = *(_QWORD **)NdisAfHandle;
    }
LABEL_13:
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)NdisAfHandle + 46) + 376LL));
    ndisMDereferenceOpenLocked(*((_QWORD *)NdisAfHandle + 46), 0xFu);
    v9 = NewIrql;
    v5->MiniportThread = 0LL;
    KeReleaseSpinLock(&v5->Lock, v9);
    ndisDereferenceAf((KSPIN_LOCK *)NdisAfHandle);
  }
}
