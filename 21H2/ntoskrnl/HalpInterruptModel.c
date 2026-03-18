/*
 * XREFs of HalpInterruptModel @ 0x14036FA84
 * Callers:
 *     HalQueryMaximumProcessorCount @ 0x14036FA30 (HalQueryMaximumProcessorCount.c)
 *     HalStartNextProcessor @ 0x1403B2F30 (HalStartNextProcessor.c)
 *     HalpInitializeInterruptsBspLate @ 0x1403B91D4 (HalpInitializeInterruptsBspLate.c)
 *     HalpTimerInitSystem @ 0x1403BB0A0 (HalpTimerInitSystem.c)
 *     HalpMmReservePageTablePages @ 0x1403BEC78 (HalpMmReservePageTablePages.c)
 *     HalpInterruptRemap @ 0x1403D57DC (HalpInterruptRemap.c)
 *     HalEnumerateProcessors @ 0x1403DD110 (HalEnumerateProcessors.c)
 *     HalpInterruptRegisterDynamicProcessor @ 0x140508E38 (HalpInterruptRegisterDynamicProcessor.c)
 *     HalpPrepareForBugcheck @ 0x14050E8C0 (HalpPrepareForBugcheck.c)
 *     HalpSaveAndDisableEnlightenment @ 0x14050F570 (HalpSaveAndDisableEnlightenment.c)
 *     HalpInterruptQueryControllerInfo @ 0x140822DF0 (HalpInterruptQueryControllerInfo.c)
 *     HalpQueryAcpiResourceRequirements @ 0x140844658 (HalpQueryAcpiResourceRequirements.c)
 *     HaliAcpiMachineStateInit @ 0x14085E510 (HaliAcpiMachineStateInit.c)
 *     HalpGetAcpiStaticNumaTopology @ 0x140863EC8 (HalpGetAcpiStaticNumaTopology.c)
 *     HalpInterruptUnmap @ 0x140908918 (HalpInterruptUnmap.c)
 *     HalpPiix4Detect @ 0x140A53294 (HalpPiix4Detect.c)
 *     HalpInterruptInitSystem @ 0x140A54BA0 (HalpInterruptInitSystem.c)
 *     HalpWheaInitSystem @ 0x140A5B290 (HalpWheaInitSystem.c)
 *     HalpDpInitSystem @ 0x140A5B590 (HalpDpInitSystem.c)
 *     HalpMiscGetParameters @ 0x140B27364 (HalpMiscGetParameters.c)
 *     HalpAcpiIBMExaMatch @ 0x140B4D6A0 (HalpAcpiIBMExaMatch.c)
 *     HalpAcpiIBMVigilMatch @ 0x140B4D6E0 (HalpAcpiIBMVigilMatch.c)
 * Callees:
 *     <none>
 */

__int64 HalpInterruptModel()
{
  __int64 result; // rax

  if ( !HalpInterruptController )
    return 1LL;
  result = 2LL;
  if ( *(_DWORD *)(HalpInterruptController + 224) == 2 )
    return 1LL;
  if ( *(_DWORD *)(HalpInterruptController + 224) != 3 )
  {
    if ( *(_DWORD *)(HalpInterruptController + 224) == 4 )
    {
      return 3LL;
    }
    else if ( *(_DWORD *)(HalpInterruptController + 224) == 6 )
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
