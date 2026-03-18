/*
 * XREFs of HalpInterruptGsiToLine @ 0x140376B3C
 * Callers:
 *     HalEnableInterrupt @ 0x140375710 (HalEnableInterrupt.c)
 *     HalpInterruptRemap @ 0x1403761C0 (HalpInterruptRemap.c)
 *     HalpInterruptSetDestination @ 0x140376570 (HalpInterruptSetDestination.c)
 *     HalpTimerEnableHypervisorTimer @ 0x140383A70 (HalpTimerEnableHypervisorTimer.c)
 *     HalpTimerConfigureInterrupt @ 0x14039F7F4 (HalpTimerConfigureInterrupt.c)
 *     HalpInterruptEnableNmi @ 0x1403A09DC (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403A0C10 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403ABB84 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpInterruptParseMadt @ 0x1403AC664 (HalpInterruptParseMadt.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x1403EC92C (HalpInterruptSetLineSpecificOverride.c)
 *     HalpInterruptConnect @ 0x1404B6558 (HalpInterruptConnect.c)
 *     HalpInterruptFindControllerAndLineState @ 0x1404B6754 (HalpInterruptFindControllerAndLineState.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x1404B69E0 (HalpInterruptSetRemappedDestinationHv.c)
 *     ExtEnvSetVpptTarget @ 0x1404BA8B4 (ExtEnvSetVpptTarget.c)
 *     HalpTimerUnmapInterrupt @ 0x1404BB698 (HalpTimerUnmapInterrupt.c)
 *     HalpInterruptUnmap @ 0x14074E468 (HalpInterruptUnmap.c)
 *     HalpInterruptIsGsiValid @ 0x140861070 (HalpInterruptIsGsiValid.c)
 * Callees:
 *     HalpInterruptFindLinesForGsiRange @ 0x140376B88 (HalpInterruptFindLinesForGsiRange.c)
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
