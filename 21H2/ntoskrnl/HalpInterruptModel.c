/*
 * XREFs of HalpInterruptModel @ 0x14037AEA4
 * Callers:
 *     HalpInterruptRemap @ 0x140378130 (HalpInterruptRemap.c)
 *     HalQueryMaximumProcessorCount @ 0x14037AE50 (HalQueryMaximumProcessorCount.c)
 *     HalStartNextProcessor @ 0x1403A15F0 (HalStartNextProcessor.c)
 *     HalpTimerInitSystem @ 0x1403A9340 (HalpTimerInitSystem.c)
 *     HalEnumerateProcessors @ 0x1403B4FF0 (HalEnumerateProcessors.c)
 *     HalpMmReservePageTablePages @ 0x1403BB37C (HalpMmReservePageTablePages.c)
 *     HalpInitializeInterruptsBspLate @ 0x1403CDC9C (HalpInitializeInterruptsBspLate.c)
 *     HalpInterruptRegisterDynamicProcessor @ 0x1404BC5F8 (HalpInterruptRegisterDynamicProcessor.c)
 *     HalpPrepareForBugcheck @ 0x1404C26B0 (HalpPrepareForBugcheck.c)
 *     HalpSaveAndDisableEnlightenment @ 0x1404C3390 (HalpSaveAndDisableEnlightenment.c)
 *     HalpInterruptUnmap @ 0x1407619F8 (HalpInterruptUnmap.c)
 *     HalpQueryAcpiResourceRequirements @ 0x1407B9864 (HalpQueryAcpiResourceRequirements.c)
 *     HaliAcpiMachineStateInit @ 0x1407CECC0 (HaliAcpiMachineStateInit.c)
 *     HalpInterruptQueryControllerInfo @ 0x1407D1FCC (HalpInterruptQueryControllerInfo.c)
 *     HalpGetAcpiStaticNumaTopology @ 0x1407D428C (HalpGetAcpiStaticNumaTopology.c)
 *     HalpPiix4Detect @ 0x14099B3E0 (HalpPiix4Detect.c)
 *     HalpInterruptInitSystem @ 0x14099C890 (HalpInterruptInitSystem.c)
 *     HalpWheaInitSystem @ 0x1409A1110 (HalpWheaInitSystem.c)
 *     HalpDpInitSystem @ 0x1409A2490 (HalpDpInitSystem.c)
 *     HalpMiscGetParameters @ 0x140A6DF88 (HalpMiscGetParameters.c)
 *     HalpAcpiIBMExaMatch @ 0x140A8F0C0 (HalpAcpiIBMExaMatch.c)
 *     HalpAcpiIBMVigilMatch @ 0x140A8F100 (HalpAcpiIBMVigilMatch.c)
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
