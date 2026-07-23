/*
 * XREFs of HalpIommuAllocateDmaDomain @ 0x1403AD418
 * Callers:
 *     HalpIommuInitializeDmar @ 0x1403AD3B8 (HalpIommuInitializeDmar.c)
 *     HalpDmaAllocateDomain @ 0x1403C7388 (HalpDmaAllocateDomain.c)
 *     IommuDomainCreate @ 0x140866910 (IommuDomainCreate.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140378FB0 (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x14037C598 (HalpMmAllocCtxAlloc.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpIommuGetPageTableType @ 0x1404C99FC (HalpIommuGetPageTableType.c)
 *     HalpIommuCreateDmarPageTable @ 0x1404DBBFC (HalpIommuCreateDmarPageTable.c)
 */

__int64 __fastcall HalpIommuAllocateDmaDomain(__int64 a1, char a2, __int64 *a3)
{
  int PageTableType; // edi
  unsigned int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  bool v10; // zf
  signed __int32 v12; // ecx
  signed __int32 v13; // [rsp+40h] [rbp-28h] BYREF
  int v14; // [rsp+44h] [rbp-24h]
  int v15; // [rsp+88h] [rbp+20h] BYREF

  v15 = 0;
  PageTableType = 0;
  v6 = a1;
  v7 = HalpMmAllocCtxAlloc(a1, 48LL);
  v9 = v7;
  if ( !v7 )
    return (unsigned int)-1073741670;
  v10 = HalpHvIommu == 0;
  *(_OWORD *)v7 = 0LL;
  *(_OWORD *)(v7 + 16) = 0LL;
  *(_OWORD *)(v7 + 32) = 0LL;
  *(_BYTE *)(v7 + 44) = a2;
  if ( !v10 )
  {
    if ( a2 )
    {
      if ( !HalpHvIommuDeviceDomain )
        goto LABEL_13;
    }
    else if ( !HalpHvParaVirtIommuDomain )
    {
      goto LABEL_13;
    }
    v12 = _InterlockedIncrement(&HalpIommuDomainId);
    *(_DWORD *)(v7 + 32) = v12;
    v14 = 0;
    *(_BYTE *)(v7 + 40) = a2 == 0;
    v13 = v12;
    LOBYTE(v14) = a2 == 0;
    PageTableType = ((__int64 (__fastcall *)(signed __int32 *))qword_140C4A330)(&v13);
    goto LABEL_6;
  }
  if ( !a2 )
  {
LABEL_13:
    PageTableType = -1073741637;
    goto LABEL_16;
  }
  if ( v6 > 1 )
  {
    PageTableType = HalpIommuGetPageTableType(&v15);
    if ( PageTableType < 0 )
      goto LABEL_16;
    PageTableType = HalpIommuCreateDmarPageTable(v15, HalpIommuMinPageTableDepth, HalpIommuMaxPageTableDepth);
    if ( PageTableType < 0 )
      goto LABEL_16;
  }
  *(_QWORD *)(v9 + 8) = v9;
  *(_QWORD *)v9 = v9;
  *(_QWORD *)(v9 + 16) = 0LL;
LABEL_6:
  *(_DWORD *)(v9 + 36) = v6;
  *a3 = v9;
  if ( PageTableType < 0 )
LABEL_16:
    HalpMmAllocCtxFree(v8, v9);
  return (unsigned int)PageTableType;
}
