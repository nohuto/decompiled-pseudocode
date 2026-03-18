/*
 * XREFs of ACPIGpeEnableDisableEvents @ 0x1C0026370
 * Callers:
 *     ACPIEnableInitializeACPI @ 0x1C000FC80 (ACPIEnableInitializeACPI.c)
 *     ACPIGpeBuildEventMasks @ 0x1C0016F2C (ACPIGpeBuildEventMasks.c)
 *     ACPIGpeClearEventMasks @ 0x1C00259E0 (ACPIGpeClearEventMasks.c)
 *     ACPIInterruptServiceRoutine @ 0x1C0025C30 (ACPIInterruptServiceRoutine.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C0025E00 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIGpeHalEnableDisableEvents @ 0x1C0055DF0 (ACPIGpeHalEnableDisableEvents.c)
 *     ACPIVectorConnect @ 0x1C0060990 (ACPIVectorConnect.c)
 *     ACPIVectorDisable @ 0x1C0060B70 (ACPIVectorDisable.c)
 *     ACPIVectorDisconnect @ 0x1C0060C60 (ACPIVectorDisconnect.c)
 *     ACPIVectorEnable @ 0x1C0060DA0 (ACPIVectorEnable.c)
 *     ACPILoadProcessFADT @ 0x1C00BEB5C (ACPILoadProcessFADT.c)
 * Callees:
 *     ACPIWriteGpeEnableRegister @ 0x1C00263CC (ACPIWriteGpeEnableRegister.c)
 */

void *__fastcall ACPIGpeEnableDisableEvents(char a1, __int64 a2)
{
  void *result; // rax
  unsigned int i; // ebx

  result = AcpiInformation;
  for ( i = 0; i < *((unsigned __int16 *)AcpiInformation + 51); ++i )
  {
    LOBYTE(a2) = a1 != 0 ? *((_BYTE *)GpeCurEnable + i) : 0;
    ACPIWriteGpeEnableRegister(i, a2);
    result = AcpiInformation;
  }
  return result;
}
