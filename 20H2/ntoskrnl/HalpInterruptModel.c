/*
 * XREFs of HalpInterruptModel @ 0x14037B104
 * Callers:
 *     HalpInterruptRemap @ 0x140378150 (HalpInterruptRemap.c)
 *     HalQueryMaximumProcessorCount @ 0x14037B0B0 (HalQueryMaximumProcessorCount.c)
 *     HalStartNextProcessor @ 0x1403A0BE0 (HalStartNextProcessor.c)
 *     HalpTimerInitSystem @ 0x1403AE600 (HalpTimerInitSystem.c)
 *     HalEnumerateProcessors @ 0x1403B3840 (HalEnumerateProcessors.c)
 *     HalpMmReservePageTablePages @ 0x1403BA80C (HalpMmReservePageTablePages.c)
 *     HalpInitializeInterruptsBspLate @ 0x1403CD14C (HalpInitializeInterruptsBspLate.c)
 *     HalpInterruptRegisterDynamicProcessor @ 0x1404BA9F8 (HalpInterruptRegisterDynamicProcessor.c)
 *     HalpPrepareForBugcheck @ 0x1404C0AA0 (HalpPrepareForBugcheck.c)
 *     HalpSaveAndDisableEnlightenment @ 0x1404C1780 (HalpSaveAndDisableEnlightenment.c)
 *     HalpInterruptUnmap @ 0x14075D048 (HalpInterruptUnmap.c)
 *     HalpQueryAcpiResourceRequirements @ 0x1407B46E4 (HalpQueryAcpiResourceRequirements.c)
 *     HaliAcpiMachineStateInit @ 0x1407CA890 (HaliAcpiMachineStateInit.c)
 *     HalpInterruptQueryControllerInfo @ 0x1407CDBAC (HalpInterruptQueryControllerInfo.c)
 *     HalpGetAcpiStaticNumaTopology @ 0x1407CFD2C (HalpGetAcpiStaticNumaTopology.c)
 *     HalpPiix4Detect @ 0x14099CE60 (HalpPiix4Detect.c)
 *     HalpInterruptInitSystem @ 0x1409A1570 (HalpInterruptInitSystem.c)
 *     HalpWheaInitSystem @ 0x1409A29C0 (HalpWheaInitSystem.c)
 *     HalpDpInitSystem @ 0x1409A3D40 (HalpDpInitSystem.c)
 *     HalpMiscGetParameters @ 0x140A70008 (HalpMiscGetParameters.c)
 *     HalpAcpiIBMExaMatch @ 0x140A91260 (HalpAcpiIBMExaMatch.c)
 *     HalpAcpiIBMVigilMatch @ 0x140A912A0 (HalpAcpiIBMVigilMatch.c)
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
