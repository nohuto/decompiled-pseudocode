/*
 * XREFs of HalpInterruptSetProblemEx @ 0x1404D00B8
 * Callers:
 *     HalpInterruptGetHighestPriorityInterrupt @ 0x140311C90 (HalpInterruptGetHighestPriorityInterrupt.c)
 *     HalpInterruptSetLineState @ 0x1403A3238 (HalpInterruptSetLineState.c)
 *     HalpInterruptInitializeLocalUnit @ 0x1403A344C (HalpInterruptInitializeLocalUnit.c)
 *     HalpConnectThermalInterrupt @ 0x1404CFBE0 (HalpConnectThermalInterrupt.c)
 *     HalpInterruptUnmap @ 0x14075D048 (HalpInterruptUnmap.c)
 *     HalpInterruptMaskAcpi @ 0x14099B04C (HalpInterruptMaskAcpi.c)
 *     HalpInterruptStartProcessor @ 0x14099C9F4 (HalpInterruptStartProcessor.c)
 *     HalpDpReplayInterrupts @ 0x1409ABB20 (HalpDpReplayInterrupts.c)
 *     HalpInterruptSaveReplayState @ 0x1409ABD20 (HalpInterruptSaveReplayState.c)
 *     HalpInterruptUpdateLocalUnitIdentifier @ 0x1409AC0AC (HalpInterruptUpdateLocalUnitIdentifier.c)
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
