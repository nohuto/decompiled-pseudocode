/*
 * XREFs of IcIsInterruptTypeSecondary @ 0x1C0099900
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1C0099330 (ProcessorpFindIdtEntriesApic.c)
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1C00995A0 (ProcessorpFindAffinitizedIdtEntries.c)
 *     IrqArbAddAllocation @ 0x1C0099940 (IrqArbAddAllocation.c)
 *     AcpiUpdateInterruptProperties @ 0x1C00AE1B0 (AcpiUpdateInterruptProperties.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C00B6D8C (IrqArbpFindSuitableRangeIsa.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

char __fastcall IcIsInterruptTypeSecondary(unsigned int a1)
{
  char result; // al

  result = 0;
  if ( a1 < 0xFFF00000 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))HalPrivateDispatchTable[62])(0LL, a1);
  return result;
}
