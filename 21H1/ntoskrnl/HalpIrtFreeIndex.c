/*
 * XREFs of HalpIrtFreeIndex @ 0x1408614C8
 * Callers:
 *     HalpInterruptRemap @ 0x1403753B0 (HalpInterruptRemap.c)
 *     HalpInterruptUnmap @ 0x14074A048 (HalpInterruptUnmap.c)
 * Callees:
 *     RtlClearBits @ 0x140244970 (RtlClearBits.c)
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     HalpIommuFreeRemappingTableEntry @ 0x1404BFF9C (HalpIommuFreeRemappingTableEntry.c)
 *     HalpIrtReleaseDeviceAperture @ 0x1408615F8 (HalpIrtReleaseDeviceAperture.c)
 */

__int64 __fastcall HalpIrtFreeIndex(unsigned int a1, ULONG a2, int a3)
{
  __int64 result; // rax
  ULONG v7; // edi
  unsigned int v8; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( HalpIrtTotalEntries )
  {
    v7 = a1 % HalpIrtEntriesPerRange;
    v8 = a1 / HalpIrtEntriesPerRange;
    ExAcquireFastMutex(&HalpIrtLock);
    RtlClearBits(&HalpIrtRanges + v8, v7, a2);
    KeReleaseGuardedMutex(&HalpIrtLock);
    if ( a3 == 3 && (HalpIrtAllocationFlags & 2) != 0 )
      HalpIommuFreeRemappingTableEntry(a1, a2);
    result = (unsigned int)HalpIrtAllocationFlags;
    if ( (HalpIrtAllocationFlags & 4) != 0 )
      return HalpIrtReleaseDeviceAperture(a1 / HalpIrtEntriesPerDeviceAperture, a2);
  }
  return result;
}
