/*
 * XREFs of HalpInterruptGsiToLine @ 0x140378F5C
 * Callers:
 *     HalEnableInterrupt @ 0x140377B30 (HalEnableInterrupt.c)
 *     HalpInterruptRemap @ 0x1403785E0 (HalpInterruptRemap.c)
 *     HalpInterruptSetDestination @ 0x140378990 (HalpInterruptSetDestination.c)
 *     HalpTimerEnableHypervisorTimer @ 0x14038698C (HalpTimerEnableHypervisorTimer.c)
 *     HalpTimerConfigureInterrupt @ 0x1403A2584 (HalpTimerConfigureInterrupt.c)
 *     HalpInterruptEnableNmi @ 0x1403A376C (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403A39A0 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403A8104 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpInterruptParseMadt @ 0x1403A8C04 (HalpInterruptParseMadt.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x1403EFDC4 (HalpInterruptSetLineSpecificOverride.c)
 *     HalpInterruptConnect @ 0x1404BB438 (HalpInterruptConnect.c)
 *     HalpInterruptFindControllerAndLineState @ 0x1404BB634 (HalpInterruptFindControllerAndLineState.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x1404BB8C0 (HalpInterruptSetRemappedDestinationHv.c)
 *     ExtEnvSetVpptTarget @ 0x1404BF7A4 (ExtEnvSetVpptTarget.c)
 *     HalpTimerUnmapInterrupt @ 0x1404C0588 (HalpTimerUnmapInterrupt.c)
 *     HalpInterruptUnmap @ 0x140761838 (HalpInterruptUnmap.c)
 *     HalpInterruptIsGsiValid @ 0x140864690 (HalpInterruptIsGsiValid.c)
 * Callees:
 *     HalpInterruptFindLinesForGsiRange @ 0x140378FA8 (HalpInterruptFindLinesForGsiRange.c)
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
