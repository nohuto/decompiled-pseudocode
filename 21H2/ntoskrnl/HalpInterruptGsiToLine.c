/*
 * XREFs of HalpInterruptGsiToLine @ 0x140378AAC
 * Callers:
 *     HalEnableInterrupt @ 0x140377680 (HalEnableInterrupt.c)
 *     HalpInterruptRemap @ 0x140378130 (HalpInterruptRemap.c)
 *     HalpInterruptSetDestination @ 0x1403784E0 (HalpInterruptSetDestination.c)
 *     HalpTimerEnableHypervisorTimer @ 0x140386ADC (HalpTimerEnableHypervisorTimer.c)
 *     HalpTimerConfigureInterrupt @ 0x1403A26D4 (HalpTimerConfigureInterrupt.c)
 *     HalpInterruptEnableNmi @ 0x1403A38BC (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403A3AF0 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403A8E94 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpInterruptParseMadt @ 0x1403A9994 (HalpInterruptParseMadt.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x1403EFF34 (HalpInterruptSetLineSpecificOverride.c)
 *     HalpInterruptConnect @ 0x1404BB678 (HalpInterruptConnect.c)
 *     HalpInterruptFindControllerAndLineState @ 0x1404BB874 (HalpInterruptFindControllerAndLineState.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x1404BBB00 (HalpInterruptSetRemappedDestinationHv.c)
 *     ExtEnvSetVpptTarget @ 0x1404BF9E4 (ExtEnvSetVpptTarget.c)
 *     HalpTimerUnmapInterrupt @ 0x1404C07C8 (HalpTimerUnmapInterrupt.c)
 *     HalpInterruptUnmap @ 0x1407619F8 (HalpInterruptUnmap.c)
 *     HalpInterruptIsGsiValid @ 0x1408647F0 (HalpInterruptIsGsiValid.c)
 * Callees:
 *     HalpInterruptFindLinesForGsiRange @ 0x140378AF8 (HalpInterruptFindLinesForGsiRange.c)
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
