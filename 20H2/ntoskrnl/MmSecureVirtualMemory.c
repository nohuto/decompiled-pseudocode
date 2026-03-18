/*
 * XREFs of MmSecureVirtualMemory @ 0x1406B3E10
 * Callers:
 *     RtlFileMapMapView @ 0x1403BCDB4 (RtlFileMapMapView.c)
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 * Callees:
 *     MmSecureVirtualMemoryEx @ 0x1406B3E40 (MmSecureVirtualMemoryEx.c)
 */

HANDLE __stdcall MmSecureVirtualMemory(PVOID Address, SIZE_T Size, ULONG ProbeMode)
{
  __int64 v4; // r8

  v4 = 4LL;
  if ( ProbeMode == 2 )
    v4 = 2LL;
  return (HANDLE)MmSecureVirtualMemoryEx(Address, Size, v4);
}
