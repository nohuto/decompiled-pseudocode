/*
 * XREFs of ACPIGpeEnableDisableEvents @ 0x1C00200A4
 * Callers:
 *     ACPIGpeBuildEventMasks @ 0x1C001B8FC (ACPIGpeBuildEventMasks.c)
 *     ACPIGpeClearEventMasks @ 0x1C001FC84 (ACPIGpeClearEventMasks.c)
 *     ACPIEnableInitializeACPI @ 0x1C00244C0 (ACPIEnableInitializeACPI.c)
 *     ACPIGpeHalEnableDisableEvents @ 0x1C00564C0 (ACPIGpeHalEnableDisableEvents.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C0057880 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIInterruptServiceRoutine @ 0x1C0057E60 (ACPIInterruptServiceRoutine.c)
 *     ACPIVectorConnect @ 0x1C00618E0 (ACPIVectorConnect.c)
 *     ACPIVectorDisable @ 0x1C0061AC0 (ACPIVectorDisable.c)
 *     ACPIVectorDisconnect @ 0x1C0061BB0 (ACPIVectorDisconnect.c)
 *     ACPIVectorEnable @ 0x1C0061CF0 (ACPIVectorEnable.c)
 *     ACPILoadProcessFADT @ 0x1C00BEF88 (ACPILoadProcessFADT.c)
 * Callees:
 *     ACPIWriteGpeEnableRegister @ 0x1C0020100 (ACPIWriteGpeEnableRegister.c)
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
