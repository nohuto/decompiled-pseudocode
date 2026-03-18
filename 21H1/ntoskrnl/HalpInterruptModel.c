/*
 * XREFs of HalpInterruptModel @ 0x140378614
 * Callers:
 *     HalpInterruptRemap @ 0x1403753B0 (HalpInterruptRemap.c)
 *     HalQueryMaximumProcessorCount @ 0x1403785C0 (HalQueryMaximumProcessorCount.c)
 *     HalStartNextProcessor @ 0x14039DF80 (HalStartNextProcessor.c)
 *     HalpTimerInitSystem @ 0x1403A4F50 (HalpTimerInitSystem.c)
 *     HalEnumerateProcessors @ 0x1403AB250 (HalEnumerateProcessors.c)
 *     HalpMmReservePageTablePages @ 0x1403B6F3C (HalpMmReservePageTablePages.c)
 *     HalpInitializeInterruptsBspLate @ 0x1403C974C (HalpInitializeInterruptsBspLate.c)
 *     HalpInterruptRegisterDynamicProcessor @ 0x1404B6DF8 (HalpInterruptRegisterDynamicProcessor.c)
 *     HalpPrepareForBugcheck @ 0x1404BCEA0 (HalpPrepareForBugcheck.c)
 *     HalpSaveAndDisableEnlightenment @ 0x1404BDB80 (HalpSaveAndDisableEnlightenment.c)
 *     HalpInterruptUnmap @ 0x14074A048 (HalpInterruptUnmap.c)
 *     HalpQueryAcpiResourceRequirements @ 0x1407A2D44 (HalpQueryAcpiResourceRequirements.c)
 *     HaliAcpiMachineStateInit @ 0x1407B8E90 (HaliAcpiMachineStateInit.c)
 *     HalpInterruptQueryControllerInfo @ 0x1407BC1AC (HalpInterruptQueryControllerInfo.c)
 *     HalpGetAcpiStaticNumaTopology @ 0x1407BE27C (HalpGetAcpiStaticNumaTopology.c)
 *     HalpPiix4Detect @ 0x140995A50 (HalpPiix4Detect.c)
 *     HalpInterruptInitSystem @ 0x140996F00 (HalpInterruptInitSystem.c)
 *     HalpWheaInitSystem @ 0x14099B120 (HalpWheaInitSystem.c)
 *     HalpDpInitSystem @ 0x14099C4A0 (HalpDpInitSystem.c)
 *     HalpMiscGetParameters @ 0x140A69208 (HalpMiscGetParameters.c)
 *     HalpAcpiIBMExaMatch @ 0x140A8BFC0 (HalpAcpiIBMExaMatch.c)
 *     HalpAcpiIBMVigilMatch @ 0x140A8C000 (HalpAcpiIBMVigilMatch.c)
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
