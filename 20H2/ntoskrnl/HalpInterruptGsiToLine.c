/*
 * XREFs of HalpInterruptGsiToLine @ 0x140378ACC
 * Callers:
 *     HalEnableInterrupt @ 0x1403776A0 (HalEnableInterrupt.c)
 *     HalpInterruptRemap @ 0x140378150 (HalpInterruptRemap.c)
 *     HalpInterruptSetDestination @ 0x140378500 (HalpInterruptSetDestination.c)
 *     HalpTimerEnableHypervisorTimer @ 0x140385B9C (HalpTimerEnableHypervisorTimer.c)
 *     HalpTimerConfigureInterrupt @ 0x1403A1CC4 (HalpTimerConfigureInterrupt.c)
 *     HalpInterruptEnableNmi @ 0x1403A2EAC (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403A30E0 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403AE154 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpInterruptParseMadt @ 0x1403AEC54 (HalpInterruptParseMadt.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x1403EF454 (HalpInterruptSetLineSpecificOverride.c)
 *     HalpInterruptConnect @ 0x1404B9A78 (HalpInterruptConnect.c)
 *     HalpInterruptFindControllerAndLineState @ 0x1404B9C74 (HalpInterruptFindControllerAndLineState.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x1404B9F00 (HalpInterruptSetRemappedDestinationHv.c)
 *     ExtEnvSetVpptTarget @ 0x1404BDDD4 (ExtEnvSetVpptTarget.c)
 *     HalpTimerUnmapInterrupt @ 0x1404BEBB8 (HalpTimerUnmapInterrupt.c)
 *     HalpInterruptUnmap @ 0x14075D048 (HalpInterruptUnmap.c)
 *     HalpInterruptIsGsiValid @ 0x140866A90 (HalpInterruptIsGsiValid.c)
 * Callees:
 *     HalpInterruptFindLinesForGsiRange @ 0x140378B18 (HalpInterruptFindLinesForGsiRange.c)
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
