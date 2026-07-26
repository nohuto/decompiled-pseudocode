/*
 * XREFs of ?ndisPktMonRegisterAllOpens@@YAXXZ @ 0x1C003F1A8
 * Callers:
 *     ?ndisPktMonRegisterComponentsCallback@@YAXXZ @ 0x1C008F400 (-ndisPktMonRegisterComponentsCallback@@YAXXZ.c)
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0019664 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C002CCE0 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisPktMonOpenRegister@@YAJPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C01009F0 (-ndisPktMonOpenRegister@@YAJPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void ndisPktMonRegisterAllOpens(void)
{
  KIRQL v0; // al
  struct _NDIS_OPEN_BLOCK *NextGlobalOpen; // rbx
  KIRQL v2; // si
  PVOID **Pool2; // rax
  PVOID *v4; // rcx
  _QWORD *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rbx
  PVOID P; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-8h]

  p_P = &P;
  P = &P;
  v0 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  NextGlobalOpen = ndisGlobalOpenList;
  v2 = v0;
  while ( NextGlobalOpen )
  {
    KeAcquireSpinLockAtDpcLevel(&NextGlobalOpen->SpinLock);
    if ( (NextGlobalOpen->OpenFlags & 0x8000) != 0
      || (NextGlobalOpen->OpenFlags & 0x10000) != 0
      || !NextGlobalOpen->References )
    {
      KeReleaseSpinLockFromDpcLevel(&NextGlobalOpen->SpinLock);
    }
    else
    {
      ndisMReferenceOpen((__int64)NextGlobalOpen, 0x13u);
      KeReleaseSpinLockFromDpcLevel(&NextGlobalOpen->SpinLock);
      Pool2 = (PVOID **)ExAllocatePool2(64LL, 24LL, 1836074062LL);
      if ( Pool2 )
      {
        Pool2[2] = &NextGlobalOpen->MacHandle;
        v4 = p_P;
        if ( *p_P != &P )
LABEL_20:
          __fastfail(3u);
        Pool2[1] = p_P;
        *Pool2 = &P;
        *v4 = Pool2;
        p_P = (PVOID *)Pool2;
      }
      else
      {
        ndisMDereferenceOpenUnlocked((__int64)NextGlobalOpen, 19);
      }
    }
    NextGlobalOpen = NextGlobalOpen->NextGlobalOpen;
  }
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v2);
  while ( 1 )
  {
    v5 = P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_20;
    v6 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_20;
    P = *(PVOID *)P;
    *(_QWORD *)(v6 + 8) = &P;
    v7 = v5[2];
    ExFreePoolWithTag(v5, 0);
    if ( (*(_DWORD *)(v7 + 224) & 0x8000) == 0 && (*(_DWORD *)(v7 + 224) & 0x10000) == 0 )
    {
      *(_OWORD *)(v7 + 920) = 0LL;
      *(_OWORD *)(v7 + 936) = 0LL;
      *(_OWORD *)(v7 + 952) = 0LL;
      *(_QWORD *)(v7 + 968) = 0LL;
      ndisPktMonOpenRegister((struct _NDIS_OPEN_BLOCK *)v7);
    }
    ndisMDereferenceOpenUnlocked(v7, 19);
  }
}
