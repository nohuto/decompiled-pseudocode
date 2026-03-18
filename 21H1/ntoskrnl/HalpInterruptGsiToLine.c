/*
 * XREFs of HalpInterruptGsiToLine @ 0x140375D2C
 * Callers:
 *     HalEnableInterrupt @ 0x140374900 (HalEnableInterrupt.c)
 *     HalpInterruptRemap @ 0x1403753B0 (HalpInterruptRemap.c)
 *     HalpInterruptSetDestination @ 0x140375760 (HalpInterruptSetDestination.c)
 *     HalpTimerEnableHypervisorTimer @ 0x140383120 (HalpTimerEnableHypervisorTimer.c)
 *     HalpTimerConfigureInterrupt @ 0x14039F064 (HalpTimerConfigureInterrupt.c)
 *     HalpInterruptEnableNmi @ 0x1403A024C (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403A0480 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403A4ABC (HalpTimerInitializeHypervisorTimer.c)
 *     HalpInterruptParseMadt @ 0x1403A55A4 (HalpInterruptParseMadt.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x1403EB984 (HalpInterruptSetLineSpecificOverride.c)
 *     HalpInterruptConnect @ 0x1404B5E78 (HalpInterruptConnect.c)
 *     HalpInterruptFindControllerAndLineState @ 0x1404B6074 (HalpInterruptFindControllerAndLineState.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x1404B6300 (HalpInterruptSetRemappedDestinationHv.c)
 *     ExtEnvSetVpptTarget @ 0x1404BA1D4 (ExtEnvSetVpptTarget.c)
 *     HalpTimerUnmapInterrupt @ 0x1404BAFB8 (HalpTimerUnmapInterrupt.c)
 *     HalpInterruptUnmap @ 0x14074A048 (HalpInterruptUnmap.c)
 *     HalpInterruptIsGsiValid @ 0x14085FD20 (HalpInterruptIsGsiValid.c)
 * Callees:
 *     HalpInterruptFindLinesForGsiRange @ 0x140375D78 (HalpInterruptFindLinesForGsiRange.c)
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
