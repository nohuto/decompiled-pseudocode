/*
 * XREFs of HalpInterruptSetProblemEx @ 0x1404CC668
 * Callers:
 *     HalpInterruptGetHighestPriorityInterrupt @ 0x140304330 (HalpInterruptGetHighestPriorityInterrupt.c)
 *     HalpInterruptSetLineState @ 0x1403A05D8 (HalpInterruptSetLineState.c)
 *     HalpInterruptInitializeLocalUnit @ 0x1403A07EC (HalpInterruptInitializeLocalUnit.c)
 *     HalpInterruptUnmap @ 0x14074A048 (HalpInterruptUnmap.c)
 *     HalpInterruptMaskAcpi @ 0x1409938AC (HalpInterruptMaskAcpi.c)
 *     HalpInterruptStartProcessor @ 0x1409955E4 (HalpInterruptStartProcessor.c)
 *     HalpDpReplayInterrupts @ 0x1409A4D80 (HalpDpReplayInterrupts.c)
 *     HalpInterruptSaveReplayState @ 0x1409A4F80 (HalpInterruptSaveReplayState.c)
 *     HalpInterruptUpdateLocalUnitIdentifier @ 0x1409A530C (HalpInterruptUpdateLocalUnitIdentifier.c)
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
