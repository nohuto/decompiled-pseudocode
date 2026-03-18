/*
 * XREFs of HalRegisterPermanentAddressUsage @ 0x1403B2080
 * Callers:
 *     HalpSfiTimerDiscover @ 0x1403B079C (HalpSfiTimerDiscover.c)
 *     HalpApicDiscover @ 0x1403B0C10 (HalpApicDiscover.c)
 *     HalpApicRegisterIoUnit @ 0x1403B0CC0 (HalpApicRegisterIoUnit.c)
 *     HalpHpetDiscover @ 0x1403B148C (HalpHpetDiscover.c)
 *     HalpIommuProcessIvhdEntry @ 0x1404E0078 (HalpIommuProcessIvhdEntry.c)
 *     HalpIvtProcessDrhdEntry @ 0x1404E58CC (HalpIvtProcessDrhdEntry.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x1403BA8B8 (HalpMmAllocateMemoryInternal.c)
 */

NTSTATUS __stdcall HalRegisterPermanentAddressUsage(LARGE_INTEGER PhysicalAddress, ULONG SizeInBytes)
{
  __int64 v3; // rdi
  __int64 MemoryInternal; // rax
  ULONG_PTR v5; // rcx
  NTSTATUS result; // eax

  v3 = SizeInBytes;
  if ( !HalpTimerRegistrationAllowed )
    return -1073741431;
  MemoryInternal = HalpMmAllocateMemoryInternal(45LL, 1LL);
  v5 = MemoryInternal;
  if ( !MemoryInternal )
    return -1073741801;
  *(_QWORD *)(MemoryInternal + 29) = 0LL;
  *(_QWORD *)(MemoryInternal + 37) = 0LL;
  *(_DWORD *)(MemoryInternal + 8) = 3;
  *(_BYTE *)(MemoryInternal + 12) = 33;
  *(LARGE_INTEGER *)(MemoryInternal + 13) = PhysicalAddress;
  *(_QWORD *)(MemoryInternal + 21) = v3;
  *(_QWORD *)MemoryInternal = HalpAddressUsageList;
  result = 0;
  HalpAddressUsageList = v5;
  return result;
}
