/*
 * XREFs of HalpIommuFreeDmaDomain @ 0x1404C97AC
 * Callers:
 *     HalpDmaDereferenceDomainObject @ 0x1404C4D38 (HalpDmaDereferenceDomainObject.c)
 *     IommuDomainDelete @ 0x140866930 (IommuDomainDelete.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140378FB0 (HalpMmAllocCtxFree.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpIommuCleanupPageTable @ 0x1404DBA90 (HalpIommuCleanupPageTable.c)
 */

__int64 __fastcall HalpIommuFreeDmaDomain(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( !a1 )
    return 0LL;
  if ( HalpHvIommu )
  {
    v6 = *(unsigned int *)(a1 + 32);
    BYTE4(v6) = *(_BYTE *)(a1 + 40);
    v1 = ((__int64 (__fastcall *)(__int64 *))qword_140C4A348)(&v6);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 24);
    if ( v4 )
    {
      HalpIommuCleanupPageTable(*(_QWORD *)(a1 + 24));
      HalpMmAllocCtxFree(v5, v4);
    }
  }
  HalpMmAllocCtxFree(a1, a1);
  return v1;
}
