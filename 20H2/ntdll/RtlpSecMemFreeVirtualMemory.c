/*
 * XREFs of RtlpSecMemFreeVirtualMemory @ 0x180009AF4
 * Callers:
 *     RtlDestroyHeap @ 0x180009680 (RtlDestroyHeap.c)
 *     RtlpDestroyHeapSegment @ 0x1800098EC (RtlpDestroyHeapSegment.c)
 *     RtlCreateHeap @ 0x18000A8B0 (RtlCreateHeap.c)
 *     RtlpExtendHeap @ 0x18000E348 (RtlpExtendHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x18001E2D8 (RtlpDeCommitFreeBlock.c)
 *     RtlpDecommitBlock @ 0x1800208E8 (RtlpDecommitBlock.c)
 *     RtlpReAllocateHeap @ 0x1800219E4 (RtlpReAllocateHeap.c)
 *     RtlpFreeHeap @ 0x180025C00 (RtlpFreeHeap.c)
 *     RtlpCreateLowFragHeap @ 0x180044828 (RtlpCreateLowFragHeap.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x18009C898 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlValidateProcessHeaps @ 0x1800F34C0 (RtlValidateProcessHeaps.c)
 *     RtlDebugDestroyHeap @ 0x1800F9498 (RtlDebugDestroyHeap.c)
 *     RtlpValidateHeap @ 0x1800FA784 (RtlpValidateHeap.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009D470 (ZwFreeVirtualMemory.c)
 *     RtlFlushSecureMemoryCache @ 0x1800F7DE0 (RtlFlushSecureMemoryCache.c)
 */

NTSTATUS __fastcall RtlpSecMemFreeVirtualMemory(__int64 a1, PVOID *a2, ULONG_PTR *a3, ULONG a4)
{
  NTSTATUS v7; // esi

  v7 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a2, a3, a4);
  if ( v7 == -1073741755 && RtlFlushSecureMemoryCache(*a2, *a3) )
    return ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a2, a3, a4);
  else
    return v7;
}
