/*
 * XREFs of HalpIommuFreeDmaDomain @ 0x14051AF88
 * Callers:
 *     HalpIommuAllocateDmaDomain @ 0x1403BB820 (HalpIommuAllocateDmaDomain.c)
 *     IommuDomainDelete @ 0x14090AAF0 (IommuDomainDelete.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x1403B1B5C (HalpMmAllocCtxFree.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpIommuDestroyDmarPageTable @ 0x140529724 (HalpIommuDestroyDmarPageTable.c)
 */

__int64 __fastcall HalpIommuFreeDmaDomain(__int64 a1)
{
  unsigned int v1; // edi
  __int64 result; // rax
  __int64 v4; // rcx
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( !a1 )
    return 0LL;
  v4 = *(_QWORD *)(a1 + 40);
  if ( HalpHvIommu )
  {
    if ( v4 )
    {
      if ( *(_BYTE *)(a1 + 52) )
      {
        result = HalpIommuDestroyDmarPageTable();
        v1 = result;
        if ( (int)result < 0 )
          return result;
      }
    }
    if ( *(_DWORD *)(a1 + 8) != 1 )
    {
      v7 = *(unsigned int *)(a1 + 48);
      BYTE4(v7) = *(_BYTE *)(a1 + 52);
      v5 = ((__int64 (__fastcall *)(__int64 *))qword_140C4C608)(&v7);
LABEL_11:
      v1 = v5;
    }
  }
  else if ( v4 )
  {
    v5 = HalpIommuDestroyDmarPageTable();
    goto LABEL_11;
  }
  v6 = *(_QWORD *)(a1 + 56);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
  HalpMmAllocCtxFree(v6, a1);
  return v1;
}
