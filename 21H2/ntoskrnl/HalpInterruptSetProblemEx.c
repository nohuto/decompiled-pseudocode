/*
 * XREFs of HalpInterruptSetProblemEx @ 0x14051E038
 * Callers:
 *     HalpInterruptGetHighestPriorityInterrupt @ 0x140236500 (HalpInterruptGetHighestPriorityInterrupt.c)
 *     HalpInterruptSetDestination @ 0x140251DC0 (HalpInterruptSetDestination.c)
 *     HalpInterruptSetDestinationInternal @ 0x140251EA0 (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptSetLineStateInternal @ 0x140251FD8 (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptFindBestRouting @ 0x140252050 (HalpInterruptFindBestRouting.c)
 *     HalQueryMaximumProcessorCount @ 0x14036FA30 (HalQueryMaximumProcessorCount.c)
 *     HalpInterruptRestoreClock @ 0x1403915EC (HalpInterruptRestoreClock.c)
 *     HalDisableInterrupt @ 0x140396C30 (HalDisableInterrupt.c)
 *     HalpMaskInterrupt @ 0x140397D10 (HalpMaskInterrupt.c)
 *     HalpInterruptInitializeController @ 0x1403AE924 (HalpInterruptInitializeController.c)
 *     HalpAllocateKInterrupt @ 0x1403AF2D8 (HalpAllocateKInterrupt.c)
 *     HalGetMessageRoutingInfo @ 0x1403AFF80 (HalGetMessageRoutingInfo.c)
 *     HalEnableInterrupt @ 0x1403B02C0 (HalEnableInterrupt.c)
 *     HalpInterruptEnableNmi @ 0x1403B043C (HalpInterruptEnableNmi.c)
 *     HalpInterruptSetLineState @ 0x1403B07C8 (HalpInterruptSetLineState.c)
 *     HalpInterruptInitializeLocalUnit @ 0x1403B0A04 (HalpInterruptInitializeLocalUnit.c)
 *     HalpUnmaskInterrupt @ 0x1403B6180 (HalpUnmaskInterrupt.c)
 *     HalpInterruptParseAcpiTables @ 0x1403B85D0 (HalpInterruptParseAcpiTables.c)
 *     HalpInterruptParseMadt @ 0x1403B8644 (HalpInterruptParseMadt.c)
 *     HalpInterruptSelectController @ 0x1403B8DA0 (HalpInterruptSelectController.c)
 *     HalpInterruptRemapFixedLines @ 0x1403B9214 (HalpInterruptRemapFixedLines.c)
 *     HalpInterruptRemap @ 0x1403D57DC (HalpInterruptRemap.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x1403D59D4 (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpInterruptGenerateMessage @ 0x1403D5B40 (HalpInterruptGenerateMessage.c)
 *     HalGetInterruptTargetInformation @ 0x1403D8950 (HalGetInterruptTargetInformation.c)
 *     HalpInterruptFindControllerAndLineState @ 0x1405080D4 (HalpInterruptFindControllerAndLineState.c)
 *     HalpInterruptSetRemappedDestination @ 0x140508270 (HalpInterruptSetRemappedDestination.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x140508364 (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptSetRemappedLineState @ 0x14050850C (HalpInterruptSetRemappedLineState.c)
 *     HalpInterruptResetThisProcessor @ 0x140508F00 (HalpInterruptResetThisProcessor.c)
 *     HalpInterruptRequestInterrupt @ 0x1405091D0 (HalpInterruptRequestInterrupt.c)
 *     HalpConnectThermalInterrupt @ 0x14051DB60 (HalpConnectThermalInterrupt.c)
 *     HalpInterruptDpReplaceBegin @ 0x140523D5C (HalpInterruptDpReplaceBegin.c)
 *     HalpInterruptUnmap @ 0x140908918 (HalpInterruptUnmap.c)
 *     HalpInterruptMaskAcpi @ 0x140A521EC (HalpInterruptMaskAcpi.c)
 *     HalpInterruptStartProcessor @ 0x140A53F54 (HalpInterruptStartProcessor.c)
 *     HalpDpReplayInterrupts @ 0x140A62970 (HalpDpReplayInterrupts.c)
 *     HalpInterruptSaveReplayState @ 0x140A62B5C (HalpInterruptSaveReplayState.c)
 *     HalpInterruptUpdateLocalUnitIdentifier @ 0x140A62EE4 (HalpInterruptUpdateLocalUnitIdentifier.c)
 *     HalpInitializeInterrupts @ 0x140AF82A8 (HalpInitializeInterrupts.c)
 *     HalpPreAllocateKInterrupts @ 0x140AF866C (HalpPreAllocateKInterrupts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpInterruptSetProblemEx(__int64 a1, int a2, int a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax

  result = a5;
  HalpInterruptLastProblemLine = a5;
  HalpInterruptLastProblemController = a1;
  HalpInterruptLastProblem = a2;
  HalpInterruptLastProblemStatus = a3;
  HalpInterruptLastProblemFile = a4;
  if ( a1 )
  {
    *(_DWORD *)(a1 + 300) = a2;
    *(_DWORD *)(a1 + 304) = a3;
    *(_QWORD *)(a1 + 312) = a4;
    *(_DWORD *)(a1 + 320) = a5;
  }
  return result;
}
