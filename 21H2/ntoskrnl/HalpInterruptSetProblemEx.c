/*
 * XREFs of HalpInterruptSetProblemEx @ 0x1404D1CC8
 * Callers:
 *     HalpInterruptGetHighestPriorityInterrupt @ 0x1402329F0 (HalpInterruptGetHighestPriorityInterrupt.c)
 *     HalpInterruptSetLineState @ 0x1403A3C48 (HalpInterruptSetLineState.c)
 *     HalpInterruptInitializeLocalUnit @ 0x1403A3E5C (HalpInterruptInitializeLocalUnit.c)
 *     HalpConnectThermalInterrupt @ 0x1404D17F0 (HalpConnectThermalInterrupt.c)
 *     HalpInterruptUnmap @ 0x1407619F8 (HalpInterruptUnmap.c)
 *     HalpInterruptMaskAcpi @ 0x14099923C (HalpInterruptMaskAcpi.c)
 *     HalpInterruptStartProcessor @ 0x14099AF74 (HalpInterruptStartProcessor.c)
 *     HalpDpReplayInterrupts @ 0x1409A9920 (HalpDpReplayInterrupts.c)
 *     HalpInterruptSaveReplayState @ 0x1409A9B20 (HalpInterruptSaveReplayState.c)
 *     HalpInterruptUpdateLocalUnitIdentifier @ 0x1409A9EAC (HalpInterruptUpdateLocalUnitIdentifier.c)
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
