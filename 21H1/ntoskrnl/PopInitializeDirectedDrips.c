/*
 * XREFs of PopInitializeDirectedDrips @ 0x140A3CBF0
 * Callers:
 *     PoInitSystem @ 0x140A3BEEC (PoInitSystem.c)
 * Callees:
 *     PopQueueDirectedDripsWork @ 0x1403776F8 (PopQueueDirectedDripsWork.c)
 *     PopDirectedDripsInitializePhase0 @ 0x140A3D12C (PopDirectedDripsInitializePhase0.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140A6A15C (PopDirectedDripsInitializePhase3.c)
 */

void __fastcall PopInitializeDirectedDrips(int a1)
{
  __int64 v1; // rcx

  if ( a1 )
  {
    if ( a1 == 3 && (int)PopDirectedDripsInitializePhase3() >= 0 )
      PopQueueDirectedDripsWork(v1, 2uLL);
  }
  else
  {
    PopDirectedDripsInitializePhase0();
  }
}
