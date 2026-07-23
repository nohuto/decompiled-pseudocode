/*
 * XREFs of MmSecureVirtualMemory @ 0x140689A00
 * Callers:
 *     RtlFileMapMapView @ 0x1403BDA34 (RtlFileMapMapView.c)
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 * Callees:
 *     MmSecureVirtualMemoryEx @ 0x140689890 (MmSecureVirtualMemoryEx.c)
 */

HANDLE __stdcall MmSecureVirtualMemory(PVOID Address, SIZE_T Size, ULONG ProbeMode)
{
  int v4; // r8d

  v4 = 4;
  if ( ProbeMode == 2 )
    v4 = 2;
  return (HANDLE)MmSecureVirtualMemoryEx((unsigned __int64)Address, Size, v4, 0);
}
