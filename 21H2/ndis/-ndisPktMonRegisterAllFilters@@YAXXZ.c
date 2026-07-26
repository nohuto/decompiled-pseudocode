/*
 * XREFs of ?ndisPktMonRegisterAllFilters@@YAXXZ @ 0x1C003F3E0
 * Callers:
 *     ?ndisPktMonRegisterComponentsCallback@@YAXXZ @ 0x1C008F580 (-ndisPktMonRegisterComponentsCallback@@YAXXZ.c)
 * Callees:
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x1C00187F4 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x1C0067AD4 (-ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z.c)
 *     ?ndisPktMonFilterRegister@@YAJPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C01008F4 (-ndisPktMonFilterRegister@@YAJPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

void ndisPktMonRegisterAllFilters(void)
{
  KIRQL v0; // al
  KSPIN_LOCK *v1; // rbx
  KIRQL v2; // di
  PVOID **Pool2; // rax
  PVOID *v4; // rdx
  _QWORD *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rbx
  PVOID P; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-8h]
  int v10; // [rsp+40h] [rbp+10h] BYREF

  p_P = &P;
  P = &P;
  v0 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalFilterListLock);
  v1 = (KSPIN_LOCK *)ndisGlobalFilterList;
  v2 = v0;
  while ( v1 )
  {
    if ( (v1[7] & 0x108) == 0 )
    {
      v10 = 0;
      if ( ndisReferenceRefEx(v1 + 9, 2u, (enum _NDIS_REFERENCE_STATUS *)&v10) )
      {
        Pool2 = (PVOID **)ExAllocatePool2(64LL, 24LL, 1836074062LL);
        if ( Pool2 )
        {
          Pool2[2] = (PVOID *)v1;
          v4 = p_P;
          if ( *p_P != &P )
LABEL_17:
            __fastfail(3u);
          Pool2[1] = p_P;
          *Pool2 = &P;
          *v4 = Pool2;
          p_P = (PVOID *)Pool2;
        }
        else
        {
          ndisDereferenceFilter(v1, LWFREF_PKTMON);
        }
      }
    }
    v1 = (KSPIN_LOCK *)v1[13];
  }
  KeReleaseSpinLock(&ndisGlobalFilterListLock, v2);
  while ( 1 )
  {
    v5 = P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_17;
    v6 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_17;
    P = *(PVOID *)P;
    *(_QWORD *)(v6 + 8) = &P;
    v7 = v5[2];
    ExFreePoolWithTag(v5, 0);
    if ( (*(_DWORD *)(v7 + 56) & 0x108) == 0 )
    {
      *(_OWORD *)(v7 + 792) = 0LL;
      *(_OWORD *)(v7 + 808) = 0LL;
      *(_OWORD *)(v7 + 824) = 0LL;
      *(_QWORD *)(v7 + 840) = 0LL;
      ndisPktMonFilterRegister((struct _NDIS_FILTER_BLOCK *)v7);
    }
    ndisDereferenceFilter((PVOID)v7, LWFREF_PKTMON);
  }
}
