/*
 * XREFs of HalpAllocateCommonBufferDmaThin @ 0x1403B2614
 * Callers:
 *     HalAllocateCommonBufferDmaThinEx @ 0x1403B2580 (HalAllocateCommonBufferDmaThinEx.c)
 *     HalAllocateCommonBufferWithBoundsDmaThin @ 0x140515710 (HalAllocateCommonBufferWithBoundsDmaThin.c)
 *     HalAllocateDomainCommonBufferDmaThin @ 0x140515790 (HalAllocateDomainCommonBufferDmaThin.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x140213DA0 (MmFreeContiguousMemory.c)
 *     MiFreePagesFromMdl @ 0x140221A30 (MiFreePagesFromMdl.c)
 *     MmAllocatePagesForMdlEx @ 0x1402630A0 (MmAllocatePagesForMdlEx.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140264F60 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     HalpAllocateCommonBufferEntry @ 0x1403B27B8 (HalpAllocateCommonBufferEntry.c)
 *     MmAllocateContiguousMemoryEx @ 0x1403B28D0 (MmAllocateContiguousMemoryEx.c)
 *     HalpDmaReferenceDomainObject @ 0x1403B2A28 (HalpDmaReferenceDomainObject.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpDmaDereferenceDomainObject @ 0x140514E28 (HalpDmaDereferenceDomainObject.c)
 */

__int64 __fastcall HalpAllocateCommonBufferDmaThin(
        ULONG_PTR a1,
        PHYSICAL_ADDRESS *a2,
        PHYSICAL_ADDRESS *a3,
        int a4,
        char a5,
        MEMORY_CACHING_TYPE *a6,
        int a7,
        PHYSICAL_ADDRESS *a8,
        _QWORD *a9)
{
  PVOID v9; // r14
  SIZE_T v10; // r12
  struct _MDL *v12; // r15
  int v13; // esi
  __int64 v14; // rax
  PHYSICAL_ADDRESS v15; // rdi
  PHYSICAL_ADDRESS v16; // r8
  MEMORY_CACHING_TYPE CacheType; // esi
  __int64 v18; // r9
  PHYSICAL_ADDRESS PhysicalAddress; // rdi
  PHYSICAL_ADDRESS v20; // r9
  PVOID v21; // rdi
  unsigned int v23; // ecx
  PHYSICAL_ADDRESS v24; // rdx
  struct _MDL *v25; // rax
  __int64 v26; // rcx
  ULONG Flags; // [rsp+50h] [rbp-39h]
  PVOID BaseAddress; // [rsp+58h] [rbp-31h] BYREF
  PHYSICAL_ADDRESS v29; // [rsp+60h] [rbp-29h]
  int v30[2]; // [rsp+68h] [rbp-21h] BYREF
  __int128 v31; // [rsp+70h] [rbp-19h] BYREF
  int v32; // [rsp+80h] [rbp-9h]
  char v35; // [rsp+E8h] [rbp+5Fh]

  Flags = 5;
  v29.QuadPart = 0LL;
  v32 = 0;
  v9 = 0LL;
  v35 = 0;
  v31 = 0LL;
  BaseAddress = 0LL;
  v10 = (a4 + 4095) & 0xFFFFF000;
  v12 = 0LL;
  v13 = HalpDmaReferenceDomainObject();
  if ( v13 < 0 )
    return (unsigned int)v13;
  v14 = *(_QWORD *)(a1 + 56);
  if ( v14 )
    *(_BYTE *)(v14 + 516) = 1;
  v15.QuadPart = 0LL;
  if ( a2 && a2->QuadPart )
    v15 = *a2;
  v16 = *(PHYSICAL_ADDRESS *)(a1 + 16);
  if ( a3 && v16.QuadPart > (unsigned __int64)a3->QuadPart )
    v16 = *a3;
  if ( v15.QuadPart > (unsigned __int64)v16.QuadPart
    || (CacheType = MmCached, a6) && (CacheType = *a6, *a6 > (unsigned int)MmCached) )
  {
    v13 = -1073741811;
  }
  else
  {
    v18 = *(_QWORD *)(a1 + 24);
    if ( (a5 & 1) != 0 )
    {
      v23 = 1;
      v10 = ((_DWORD)v10 + 0x1FFFFF) & 0xFFE00000;
      do
      {
        if ( 1LL << v23 >= (unsigned __int64)(unsigned int)v10 )
          break;
        ++v23;
      }
      while ( v23 < 0x3F );
      Flags = 101;
      v18 = 1LL << v23;
    }
    *(_QWORD *)v30 = v10;
    if ( (int)MmAllocateContiguousMemoryEx(
                (int)v30,
                v15.LowPart,
                v16.LowPart,
                v18,
                a7,
                CacheType != MmNonCached ? 4 : 516,
                0LL,
                1147953480,
                *(_DWORD *)(a1 + 48) == 2,
                (__int64)&BaseAddress) >= 0 )
    {
      if ( *(_QWORD *)v30 == v10 )
        v9 = BaseAddress;
      else
        MmFreeContiguousMemory(BaseAddress);
      if ( v9 )
        goto LABEL_14;
    }
    if ( *(_DWORD *)(a1 + 48) == 2 )
    {
      v24 = *(PHYSICAL_ADDRESS *)(a1 + 16);
      v25 = a7 == 0x80000000
          ? MmAllocatePagesForMdlEx(v15, v24, 0LL, v10, CacheType, Flags)
          : (struct _MDL *)MmAllocatePartitionNodePagesForMdlEx(
                             v15.LowPart,
                             v24.LowPart,
                             0LL,
                             v10,
                             CacheType,
                             a7,
                             Flags,
                             0LL);
      v12 = v25;
      if ( v25 )
      {
        v9 = MmMapLockedPagesSpecifyCache(v25, 0, CacheType, 0LL, 0, 0x40000010u);
        if ( v9 )
        {
LABEL_14:
          PhysicalAddress = MmGetPhysicalAddress(v9);
          if ( v12 )
          {
            v26 = *(_QWORD *)(a1 + 40);
            *((_QWORD *)&v31 + 1) = v12;
            v13 = ((__int64 (__fastcall *)(__int64, __int64, __int128 *))qword_140C4BDA8)(v26, 3LL, &v31);
            if ( v13 < 0 )
              goto LABEL_24;
            PhysicalAddress = v29;
            v35 = 1;
          }
          LOBYTE(v20.LowPart) = 1;
          v13 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))HalpAllocateCommonBufferEntry)(
                  v12,
                  v9,
                  a1,
                  (PHYSICAL_ADDRESS)v20.QuadPart);
          *a8 = PhysicalAddress;
          v21 = a9;
          *a9 = v9;
          if ( v13 >= 0 )
            return (unsigned int)v13;
          if ( v35 )
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140C4BDB0)(
              *(_QWORD *)(a1 + 40),
              (PHYSICAL_ADDRESS)v29.QuadPart,
              v10 >> 12);
          goto LABEL_25;
        }
      }
    }
    v13 = -1073741670;
  }
LABEL_24:
  v21 = a9;
LABEL_25:
  HalpDmaDereferenceDomainObject(a1);
  if ( v9 )
  {
    if ( v12 )
    {
      MmUnmapLockedPages(v9, v12);
LABEL_46:
      MiFreePagesFromMdl((ULONG_PTR)v12, 0);
      return (unsigned int)v13;
    }
    MmFreeContiguousMemory(v21);
  }
  else if ( v12 )
  {
    goto LABEL_46;
  }
  return (unsigned int)v13;
}
