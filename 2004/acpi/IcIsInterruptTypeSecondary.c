/*
 * XREFs of IcIsInterruptTypeSecondary @ 0x1C00931C8
 * Callers:
 *     IrqArbAddAllocation @ 0x1C0092500 (IrqArbAddAllocation.c)
 *     ProcessorpFindIdtEntriesApic @ 0x1C0092C10 (ProcessorpFindIdtEntriesApic.c)
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1C0092E50 (ProcessorpFindAffinitizedIdtEntries.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C0096BD8 (IrqArbpFindSuitableRangeIsa.c)
 *     AcpiUpdateInterruptProperties @ 0x1C00AF240 (AcpiUpdateInterruptProperties.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 */

char __fastcall IcIsInterruptTypeSecondary(unsigned int a1)
{
  char result; // al

  result = 0;
  if ( a1 < 0xFFF00000 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))HalPrivateDispatchTable[62])(0LL, a1);
  return result;
}
