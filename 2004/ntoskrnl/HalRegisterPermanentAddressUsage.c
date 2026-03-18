/*
 * XREFs of HalRegisterPermanentAddressUsage @ 0x1403AFA90
 * Callers:
 *     HalpSfiTimerDiscover @ 0x1403AE1AC (HalpSfiTimerDiscover.c)
 *     HalpApicDiscover @ 0x1403AE620 (HalpApicDiscover.c)
 *     HalpApicRegisterIoUnit @ 0x1403AE6D0 (HalpApicRegisterIoUnit.c)
 *     HalpHpetDiscover @ 0x1403AEE9C (HalpHpetDiscover.c)
 *     HalpIommuProcessIvhdEntry @ 0x1404DCAE8 (HalpIommuProcessIvhdEntry.c)
 *     HalpIvtProcessDrhdEntry @ 0x1404E233C (HalpIvtProcessDrhdEntry.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x1403B7E18 (HalpMmAllocateMemoryInternal.c)
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
