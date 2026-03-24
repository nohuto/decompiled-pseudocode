/*
 * XREFs of HalpInterruptSetProblemEx @ 0x1404D1A88
 * Callers:
 *     HalpInterruptGetHighestPriorityInterrupt @ 0x1402B4840 (HalpInterruptGetHighestPriorityInterrupt.c)
 *     HalpInterruptSetLineState @ 0x1403A3AF8 (HalpInterruptSetLineState.c)
 *     HalpInterruptInitializeLocalUnit @ 0x1403A3D0C (HalpInterruptInitializeLocalUnit.c)
 *     HalpConnectThermalInterrupt @ 0x1404D15B0 (HalpConnectThermalInterrupt.c)
 *     HalpInterruptUnmap @ 0x140761838 (HalpInterruptUnmap.c)
 *     HalpInterruptMaskAcpi @ 0x14099823C (HalpInterruptMaskAcpi.c)
 *     HalpInterruptStartProcessor @ 0x140999F74 (HalpInterruptStartProcessor.c)
 *     HalpDpReplayInterrupts @ 0x1409A89F0 (HalpDpReplayInterrupts.c)
 *     HalpInterruptSaveReplayState @ 0x1409A8BF0 (HalpInterruptSaveReplayState.c)
 *     HalpInterruptUpdateLocalUnitIdentifier @ 0x1409A8F7C (HalpInterruptUpdateLocalUnitIdentifier.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpInterruptSetProblemEx(__int64 a1, int a2, int a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax

  HalpInterruptLastProblem = a2;
  if ( a1 )
  {
    result = a5;
    *(_DWORD *)(a1 + 312) = a5;
    *(_DWORD *)(a1 + 292) = a2;
    *(_DWORD *)(a1 + 296) = a3;
    *(_QWORD *)(a1 + 304) = a4;
  }
  return result;
}
