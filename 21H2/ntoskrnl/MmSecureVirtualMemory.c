/*
 * XREFs of MmSecureVirtualMemory @ 0x1406A2410
 * Callers:
 *     RtlFileMapMapView @ 0x1403CB4C0 (RtlFileMapMapView.c)
 *     DifMmSecureVirtualMemoryWrapper @ 0x1406177B0 (DifMmSecureVirtualMemoryWrapper.c)
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 * Callees:
 *     MmSecureVirtualMemoryEx @ 0x1406A2440 (MmSecureVirtualMemoryEx.c)
 */

HANDLE __stdcall MmSecureVirtualMemory(PVOID Address, SIZE_T Size, ULONG ProbeMode)
{
  __int64 v4; // r8

  v4 = 4LL;
  if ( ProbeMode == 2 )
    v4 = 2LL;
  return (HANDLE)MmSecureVirtualMemoryEx(Address, Size, v4, 0LL);
}
