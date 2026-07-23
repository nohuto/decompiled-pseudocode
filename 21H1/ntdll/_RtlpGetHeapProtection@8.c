/*
 * XREFs of _RtlpGetHeapProtection@8 @ 0x4B2AF0A0
 * Callers:
 *     _RtlProtectHeap@8 @ 0x4B2A9010 (_RtlProtectHeap@8.c)
 *     _RtlpFreeUserBlockToHeap@12 @ 0x4B2ADD03 (_RtlpFreeUserBlockToHeap@12.c)
 *     @RtlpExtendLowFragHeapSegment@12 @ 0x4B2AE2E8 (@RtlpExtendLowFragHeapSegment@12.c)
 *     @RtlpCreateLowFragHeap@4 @ 0x4B2AEF38 (@RtlpCreateLowFragHeap@4.c)
 *     _RtlpExtendHeap@8 @ 0x4B2C0405 (_RtlpExtendHeap@8.c)
 *     _RtlpInitializeHeapSegment@32 @ 0x4B2E1EBD (_RtlpInitializeHeapSegment@32.c)
 *     _RtlpFreeHeapInternal@20 @ 0x4B30705A (_RtlpFreeHeapInternal@20.c)
 *     _RtlpHpAllocVirtBlockCommitFirst@16 @ 0x4B307828 (_RtlpHpAllocVirtBlockCommitFirst@16.c)
 *     _RtlpLowFragHeapFlushCaches@4 @ 0x4B37172A (_RtlpLowFragHeapFlushCaches@4.c)
 * Callees:
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 */

int __fastcall RtlpGetHeapProtection(_DWORD *BaseAddress, int a2)
{
  int v3; // esi
  ULONG_PTR *v5; // [esp+0h] [ebp-28h]
  _DWORD *MemoryInformation; // [esp+Ch] [ebp-1Ch] BYREF
  int v7; // [esp+10h] [ebp-18h]

  v3 = (BaseAddress[16] & 0x40000) != 0 ? 64 : 4;
  if ( a2
    && (BaseAddress[16] & 0x40000) != 0
    && (NtQueryVirtualMemory((HANDLE)0xFFFFFFFF, BaseAddress, MemoryRegionInformation, &MemoryInformation, 0x1CuLL, v5) < 0
     || (v7 & 0x60) == 0
     || MemoryInformation != BaseAddress) )
  {
    RtlpLogHeapFailure(1, v7, 0, 0);
    return 4;
  }
  return v3;
}
