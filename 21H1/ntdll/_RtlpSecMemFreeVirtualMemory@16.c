/*
 * XREFs of _RtlpSecMemFreeVirtualMemory@16 @ 0x4B2AFA7A
 * Callers:
 *     @RtlpCreateLowFragHeap@4 @ 0x4B2AEF38 (@RtlpCreateLowFragHeap@4.c)
 *     _RtlpDeCommitFreeBlock@16 @ 0x4B2AF0D2 (_RtlpDeCommitFreeBlock@16.c)
 *     @RtlpDecommitBlock@8 @ 0x4B2AF71A (@RtlpDecommitBlock@8.c)
 *     _RtlDestroyHeap@4 @ 0x4B2AF870 (_RtlDestroyHeap@4.c)
 *     _RtlpDestroyHeapSegment@4 @ 0x4B2AFA04 (_RtlpDestroyHeapSegment@4.c)
 *     _RtlpExtendHeap@8 @ 0x4B2C0405 (_RtlpExtendHeap@8.c)
 *     _RtlCreateHeap@24 @ 0x4B2C0F40 (_RtlCreateHeap@24.c)
 *     @RtlpReAllocateHeap@16 @ 0x4B2C2870 (@RtlpReAllocateHeap@16.c)
 *     @RtlpFreeHeap@16 @ 0x4B2C3C10 (@RtlpFreeHeap@16.c)
 *     _RtlpHpAllocVirtBlockCommitFirst@16 @ 0x4B307828 (_RtlpHpAllocVirtBlockCommitFirst@16.c)
 *     _RtlValidateProcessHeaps@0 @ 0x4B3574F0 (_RtlValidateProcessHeaps@0.c)
 *     _RtlDebugDestroyHeap@4 @ 0x4B35F6BF (_RtlDebugDestroyHeap@4.c)
 *     _RtlpValidateHeap@8 @ 0x4B360697 (_RtlpValidateHeap@8.c)
 * Callees:
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 *     _RtlFlushSecureMemoryCache@8 @ 0x4B35E4D0 (_RtlFlushSecureMemoryCache@8.c)
 */

NTSTATUS __fastcall RtlpSecMemFreeVirtualMemory(int a1, PVOID *a2, ULONG_PTR *RegionSize, ULONG FreeType)
{
  NTSTATUS v5; // ebx
  SIZE_T v7; // [esp-4h] [ebp-14h]

  v5 = NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, a2, RegionSize, FreeType);
  if ( v5 == -1073741755 && (LODWORD(v7) = *(_DWORD *)RegionSize, RtlFlushSecureMemoryCache(*a2, v7)) )
    return NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, a2, RegionSize, FreeType);
  else
    return v5;
}
