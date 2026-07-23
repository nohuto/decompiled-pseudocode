/*
 * XREFs of HalpDmaAllocateEmergencyResources @ 0x140A66F28
 * Callers:
 *     HalpDmaInit @ 0x140A669C8 (HalpDmaInit.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140378FB0 (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x14037C598 (HalpMmAllocCtxAlloc.c)
 *     MmAllocateMappingAddress @ 0x14060CD20 (MmAllocateMappingAddress.c)
 *     MmFreeMappingAddress @ 0x1407688C0 (MmFreeMappingAddress.c)
 */

__int64 __fastcall HalpDmaAllocateEmergencyResources(__int64 a1)
{
  __int64 v1; // rcx
  PMDL v2; // rcx
  PMDL v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v7; // rcx
  PMDL v8; // rdx

  MemoryDescriptorList = (PMDL)HalpMmAllocCtxAlloc(a1, 56LL);
  if ( !MemoryDescriptorList )
    return 3221225626LL;
  qword_140C53F38 = (PMDL)HalpMmAllocCtxAlloc(v1, 56LL);
  v2 = qword_140C53F38;
  if ( !qword_140C53F38 )
  {
    v8 = MemoryDescriptorList;
LABEL_10:
    HalpMmAllocCtxFree((__int64)v2, (__int64)v8);
    return 3221225626LL;
  }
  v3 = MemoryDescriptorList;
  *(_DWORD *)&MemoryDescriptorList->Size = 56;
  v3->Next = 0LL;
  v3->StartVa = 0LL;
  *(_QWORD *)&v3->ByteCount = 4096LL;
  *(_DWORD *)&v2->Size = 56;
  v2->Next = 0LL;
  v2->StartVa = 0LL;
  *(_QWORD *)&v2->ByteCount = 4096LL;
  v3->MdlFlags |= 2u;
  v2->MdlFlags |= 2u;
  MappingAddress = MmAllocateMappingAddress(0x1000uLL, 0x206C6148u);
  if ( !MappingAddress )
  {
    HalpMmAllocCtxFree(v4, (__int64)MemoryDescriptorList);
    v8 = qword_140C53F38;
    goto LABEL_10;
  }
  qword_140C53F50 = MmAllocateMappingAddress(0x1000uLL, 0x206C6148u);
  if ( qword_140C53F50 )
  {
    qword_140CF27D8 = 0LL;
    return 0LL;
  }
  HalpMmAllocCtxFree(v5, (__int64)MemoryDescriptorList);
  HalpMmAllocCtxFree(v7, (__int64)qword_140C53F38);
  MmFreeMappingAddress(MappingAddress, 0x206C6148u);
  return 3221225626LL;
}
