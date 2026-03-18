/*
 * XREFs of HalpInterruptModel @ 0x1403793D4
 * Callers:
 *     HalpInterruptRemap @ 0x1403761C0 (HalpInterruptRemap.c)
 *     HalQueryMaximumProcessorCount @ 0x140379380 (HalQueryMaximumProcessorCount.c)
 *     HalStartNextProcessor @ 0x14039E710 (HalStartNextProcessor.c)
 *     HalpTimerInitSystem @ 0x1403AC010 (HalpTimerInitSystem.c)
 *     HalEnumerateProcessors @ 0x1403B0ED0 (HalEnumerateProcessors.c)
 *     HalpMmReservePageTablePages @ 0x1403B7D6C (HalpMmReservePageTablePages.c)
 *     HalpInitializeInterruptsBspLate @ 0x1403CA50C (HalpInitializeInterruptsBspLate.c)
 *     HalpInterruptRegisterDynamicProcessor @ 0x1404B74D8 (HalpInterruptRegisterDynamicProcessor.c)
 *     HalpPrepareForBugcheck @ 0x1404BD580 (HalpPrepareForBugcheck.c)
 *     HalpSaveAndDisableEnlightenment @ 0x1404BE260 (HalpSaveAndDisableEnlightenment.c)
 *     HalpInterruptUnmap @ 0x14074E468 (HalpInterruptUnmap.c)
 *     HalpQueryAcpiResourceRequirements @ 0x1407A5594 (HalpQueryAcpiResourceRequirements.c)
 *     HaliAcpiMachineStateInit @ 0x1407BC000 (HaliAcpiMachineStateInit.c)
 *     HalpInterruptQueryControllerInfo @ 0x1407BF31C (HalpInterruptQueryControllerInfo.c)
 *     HalpGetAcpiStaticNumaTopology @ 0x1407C1528 (HalpGetAcpiStaticNumaTopology.c)
 *     HalpPiix4Detect @ 0x140996E20 (HalpPiix4Detect.c)
 *     HalpInterruptInitSystem @ 0x14099B470 (HalpInterruptInitSystem.c)
 *     HalpWheaInitSystem @ 0x14099C8C0 (HalpWheaInitSystem.c)
 *     HalpDpInitSystem @ 0x14099DC40 (HalpDpInitSystem.c)
 *     HalpMiscGetParameters @ 0x140A69688 (HalpMiscGetParameters.c)
 *     HalpAcpiIBMExaMatch @ 0x140A8B550 (HalpAcpiIBMExaMatch.c)
 *     HalpAcpiIBMVigilMatch @ 0x140A8B590 (HalpAcpiIBMVigilMatch.c)
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
