/*
 * XREFs of HalpInterruptModel @ 0x14037B354
 * Callers:
 *     HalpInterruptRemap @ 0x1403785E0 (HalpInterruptRemap.c)
 *     HalQueryMaximumProcessorCount @ 0x14037B300 (HalQueryMaximumProcessorCount.c)
 *     HalStartNextProcessor @ 0x1403A14A0 (HalStartNextProcessor.c)
 *     HalpTimerInitSystem @ 0x1403A85B0 (HalpTimerInitSystem.c)
 *     HalEnumerateProcessors @ 0x1403B4E80 (HalEnumerateProcessors.c)
 *     HalpMmReservePageTablePages @ 0x1403BB20C (HalpMmReservePageTablePages.c)
 *     HalpInitializeInterruptsBspLate @ 0x1403CDB2C (HalpInitializeInterruptsBspLate.c)
 *     HalpInterruptRegisterDynamicProcessor @ 0x1404BC3B8 (HalpInterruptRegisterDynamicProcessor.c)
 *     HalpPrepareForBugcheck @ 0x1404C2470 (HalpPrepareForBugcheck.c)
 *     HalpSaveAndDisableEnlightenment @ 0x1404C3150 (HalpSaveAndDisableEnlightenment.c)
 *     HalpInterruptUnmap @ 0x140761838 (HalpInterruptUnmap.c)
 *     HalpQueryAcpiResourceRequirements @ 0x1407B9344 (HalpQueryAcpiResourceRequirements.c)
 *     HaliAcpiMachineStateInit @ 0x1407CEB50 (HaliAcpiMachineStateInit.c)
 *     HalpInterruptQueryControllerInfo @ 0x1407D1E5C (HalpInterruptQueryControllerInfo.c)
 *     HalpGetAcpiStaticNumaTopology @ 0x1407D411C (HalpGetAcpiStaticNumaTopology.c)
 *     HalpPiix4Detect @ 0x14099A3E0 (HalpPiix4Detect.c)
 *     HalpInterruptInitSystem @ 0x14099B890 (HalpInterruptInitSystem.c)
 *     HalpWheaInitSystem @ 0x1409A01E0 (HalpWheaInitSystem.c)
 *     HalpDpInitSystem @ 0x1409A1560 (HalpDpInitSystem.c)
 *     HalpMiscGetParameters @ 0x140A6CF88 (HalpMiscGetParameters.c)
 *     HalpAcpiIBMExaMatch @ 0x140A8E0C0 (HalpAcpiIBMExaMatch.c)
 *     HalpAcpiIBMVigilMatch @ 0x140A8E100 (HalpAcpiIBMVigilMatch.c)
 * Callees:
 *     <none>
 */

__int64 HalpInterruptModel()
{
  __int64 result; // rax

  if ( !HalpInterruptController )
    return 1LL;
  result = 2LL;
  if ( *(_DWORD *)(HalpInterruptController + 216) == 2 )
    return 1LL;
  if ( *(_DWORD *)(HalpInterruptController + 216) != 3 )
  {
    if ( *(_DWORD *)(HalpInterruptController + 216) == 4 )
    {
      return 3LL;
    }
    else if ( *(_DWORD *)(HalpInterruptController + 216) == 6 )
    {
      return 4LL;
    }
    else
    {
      return 4096LL;
    }
  }
  return result;
}
