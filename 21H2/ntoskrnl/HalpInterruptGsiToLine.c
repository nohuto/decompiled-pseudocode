/*
 * XREFs of HalpInterruptGsiToLine @ 0x140252380
 * Callers:
 *     HalpInterruptSetDestination @ 0x140251DC0 (HalpInterruptSetDestination.c)
 *     HalpTimerEnableHypervisorTimer @ 0x1403916B0 (HalpTimerEnableHypervisorTimer.c)
 *     HalpTimerConfigureInterrupt @ 0x1403AEA08 (HalpTimerConfigureInterrupt.c)
 *     HalEnableInterrupt @ 0x1403B02C0 (HalEnableInterrupt.c)
 *     HalpInterruptEnableNmi @ 0x1403B043C (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403B0670 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptParseMadt @ 0x1403B8644 (HalpInterruptParseMadt.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403BACF8 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpInterruptRemap @ 0x1403D57DC (HalpInterruptRemap.c)
 *     HalpInterruptConnect @ 0x140507ED8 (HalpInterruptConnect.c)
 *     HalpInterruptFindControllerAndLineState @ 0x1405080D4 (HalpInterruptFindControllerAndLineState.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x140508364 (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x140509344 (HalpInterruptSetLineSpecificOverride.c)
 *     ExtEnvSetVpptTarget @ 0x14050C264 (ExtEnvSetVpptTarget.c)
 *     HalpTimerUnmapInterrupt @ 0x14050D048 (HalpTimerUnmapInterrupt.c)
 *     HalpInterruptIsGsiValid @ 0x1409088D0 (HalpInterruptIsGsiValid.c)
 *     HalpInterruptUnmap @ 0x140908918 (HalpInterruptUnmap.c)
 * Callees:
 *     HalpInterruptFindLinesForGsiRange @ 0x1402523CC (HalpInterruptFindLinesForGsiRange.c)
 */

__int64 __fastcall HalpInterruptGsiToLine(__int64 a1, _DWORD *a2)
{
  int v3; // ebx
  _DWORD *LinesForGsiRange; // rax

  v3 = a1;
  LinesForGsiRange = (_DWORD *)HalpInterruptFindLinesForGsiRange(a1, (unsigned int)(a1 + 1));
  if ( !LinesForGsiRange )
    return 3221226021LL;
  *a2 = LinesForGsiRange[4];
  a2[1] = v3 + LinesForGsiRange[5] - LinesForGsiRange[7];
  return 0LL;
}
