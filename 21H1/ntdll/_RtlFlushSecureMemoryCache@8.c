/*
 * XREFs of _RtlFlushSecureMemoryCache@8 @ 0x4B35E4D0
 * Callers:
 *     _RtlpSecMemFreeVirtualMemory@16 @ 0x4B2AFA7A (_RtlpSecMemFreeVirtualMemory@16.c)
 *     _RtlComputeImportTableHash@12 @ 0x4B33E550 (_RtlComputeImportTableHash@12.c)
 * Callees:
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     _RtlpCallSecureMemoryCallbacks@8 @ 0x4B35E5B0 (_RtlpCallSecureMemoryCallbacks@8.c)
 */

BOOLEAN __cdecl RtlFlushSecureMemoryCache(PVOID MemoryCache, SIZE_T MemoryLength)
{
  PSIZE_T MemoryInformation[3]; // [esp+0h] [ebp-1Ch] BYREF

  if ( RtlpSecMemListHead == &RtlpSecMemListHead
    || !(_DWORD)MemoryLength
    && (NtQueryVirtualMemory(
          (HANDLE)0xFFFFFFFF,
          MemoryCache,
          MemoryRegionInformation,
          MemoryInformation,
          0x1CuLL,
          MemoryInformation[0]) < 0
     || MemoryInformation[2] == (PSIZE_T)0x10000) )
  {
    return 0;
  }
  else
  {
    return RtlpCallSecureMemoryCallbacks(MemoryCache);
  }
}
