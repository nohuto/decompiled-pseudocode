/*
 * XREFs of HalpInterruptSetProblemEx @ 0x1404CCB18
 * Callers:
 *     HalpInterruptGetHighestPriorityInterrupt @ 0x140341100 (HalpInterruptGetHighestPriorityInterrupt.c)
 *     HalpInterruptSetLineState @ 0x1403A0D68 (HalpInterruptSetLineState.c)
 *     HalpInterruptInitializeLocalUnit @ 0x1403A0F7C (HalpInterruptInitializeLocalUnit.c)
 *     HalpInterruptUnmap @ 0x14074E468 (HalpInterruptUnmap.c)
 *     HalpInterruptMaskAcpi @ 0x140994EEC (HalpInterruptMaskAcpi.c)
 *     HalpInterruptStartProcessor @ 0x1409969B4 (HalpInterruptStartProcessor.c)
 *     HalpDpReplayInterrupts @ 0x1409A5BC0 (HalpDpReplayInterrupts.c)
 *     HalpInterruptSaveReplayState @ 0x1409A5DC0 (HalpInterruptSaveReplayState.c)
 *     HalpInterruptUpdateLocalUnitIdentifier @ 0x1409A614C (HalpInterruptUpdateLocalUnitIdentifier.c)
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
