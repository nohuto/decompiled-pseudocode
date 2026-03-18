/*
 * XREFs of ACPIGpeClearRegisters @ 0x1C00265D4
 * Callers:
 *     ACPIEnableInitializeACPI @ 0x1C000FC80 (ACPIEnableInitializeACPI.c)
 *     ACPIGpeClearEventMasks @ 0x1C00259E0 (ACPIGpeClearEventMasks.c)
 *     ACPILoadProcessFADT @ 0x1C00BEB5C (ACPILoadProcessFADT.c)
 * Callees:
 *     ACPIWriteGpeStatusRegister @ 0x1C0026630 (ACPIWriteGpeStatusRegister.c)
 *     ACPIReadGpeStatusRegister @ 0x1C00266A4 (ACPIReadGpeStatusRegister.c)
 */

void *ACPIGpeClearRegisters()
{
  void *result; // rax
  unsigned int i; // ebx

  result = AcpiInformation;
  for ( i = 0; i < *((unsigned __int16 *)AcpiInformation + 51); ++i )
  {
    ACPIReadGpeStatusRegister(i);
    ACPIWriteGpeStatusRegister(i);
    result = AcpiInformation;
  }
  return result;
}
