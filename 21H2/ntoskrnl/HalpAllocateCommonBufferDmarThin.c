/*
 * XREFs of HalpAllocateCommonBufferDmarThin @ 0x1405164D0
 * Callers:
 *     HalAllocateCommonBufferDmarThinEx @ 0x140515D20 (HalAllocateCommonBufferDmarThinEx.c)
 *     HalAllocateCommonBufferWithBoundsDmarThin @ 0x140515DC0 (HalAllocateCommonBufferWithBoundsDmarThin.c)
 *     HalAllocateDomainCommonBufferDmarThin @ 0x140515E40 (HalAllocateDomainCommonBufferDmarThin.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140221A30 (MiFreePagesFromMdl.c)
 *     MmAllocatePagesForMdlEx @ 0x1402630A0 (MmAllocatePagesForMdlEx.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140264F60 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     HalpAllocateCommonBufferEntry @ 0x1403B27B8 (HalpAllocateCommonBufferEntry.c)
 *     HalpDmaReferenceDomainObject @ 0x1403B2A28 (HalpDmaReferenceDomainObject.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpDmaDereferenceDomainObject @ 0x140514E28 (HalpDmaDereferenceDomainObject.c)
 */

__int64 __fastcall HalpAllocateCommonBufferDmarThin(
        __int64 *BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        MEMORY_CACHING_TYPE *a6,
        unsigned int a7,
        _QWORD *a8,
        _QWORD *a9)
{
  SIZE_T v9; // r14
  PVOID v11; // rbp
  struct _MDL *v12; // rsi
  int CommonBufferEntry; // edi
  __int64 v14; // rax
  MEMORY_CACHING_TYPE CacheType; // edi
  PHYSICAL_ADDRESS v16; // rdx
  int Flags; // ecx
  struct _MDL *PagesForMdl; // rax
  __int64 v19; // rcx
  __int128 v21; // [rsp+48h] [rbp-30h] BYREF
  int v22; // [rsp+58h] [rbp-20h]

  v21 = 0LL;
  v22 = 0;
  v9 = (a4 + 4095) & 0xFFFFF000;
  v11 = 0LL;
  v12 = 0LL;
  CommonBufferEntry = HalpDmaReferenceDomainObject((__int64)BugCheckParameter3);
  if ( CommonBufferEntry >= 0 )
  {
    v14 = BugCheckParameter3[7];
    if ( v14 )
      *(_BYTE *)(v14 + 516) = 1;
    CacheType = MmCached;
    if ( a6 && (CacheType = *a6, *a6 > (unsigned int)MmCached) )
    {
      CommonBufferEntry = -1073741811;
    }
    else
    {
      if ( (a5 & 1) != 0 )
        v9 = ((_DWORD)v9 + 0x1FFFFF) & 0xFFE00000;
      v16.QuadPart = BugCheckParameter3[2];
      Flags = (a5 & 1) != 0 ? 101 : 21;
      if ( a7 == 0x80000000 )
        PagesForMdl = MmAllocatePagesForMdlEx(0LL, v16, 0LL, v9, CacheType, Flags);
      else
        PagesForMdl = (struct _MDL *)MmAllocatePartitionNodePagesForMdlEx(
                                       0,
                                       v16.LowPart,
                                       0LL,
                                       v9,
                                       CacheType,
                                       a7,
                                       Flags,
                                       0LL);
      v12 = PagesForMdl;
      if ( PagesForMdl && (v11 = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, CacheType, 0LL, 0, 0x40000010u)) != 0LL )
      {
        v19 = BugCheckParameter3[5];
        *((_QWORD *)&v21 + 1) = v12;
        CommonBufferEntry = ((__int64 (__fastcall *)(__int64, __int64, __int128 *))qword_140C4BDA8)(v19, 3LL, &v21);
        if ( CommonBufferEntry >= 0 )
        {
          CommonBufferEntry = HalpAllocateCommonBufferEntry(
                                (__int64)v12,
                                (unsigned __int64)v11,
                                (__int64)BugCheckParameter3,
                                1);
          if ( CommonBufferEntry >= 0 )
          {
            *a8 = 0LL;
            *a9 = v11;
            return (unsigned int)CommonBufferEntry;
          }
          ((void (__fastcall *)(__int64, _QWORD, SIZE_T))qword_140C4BDB0)(BugCheckParameter3[5], 0LL, v9 >> 12);
        }
      }
      else
      {
        CommonBufferEntry = -1073741670;
      }
    }
    HalpDmaDereferenceDomainObject(BugCheckParameter3);
    if ( v11 )
      MmUnmapLockedPages(v11, v12);
    if ( v12 )
      MiFreePagesFromMdl((ULONG_PTR)v12, 0);
  }
  return (unsigned int)CommonBufferEntry;
}
