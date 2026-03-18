/*
 * XREFs of PopInitializeDirectedDrips @ 0x140A3C848
 * Callers:
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     PopQueueDirectedDripsWork @ 0x140378508 (PopQueueDirectedDripsWork.c)
 *     PopDirectedDripsInitializePhase0 @ 0x140A3CD84 (PopDirectedDripsInitializePhase0.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140A6A3BC (PopDirectedDripsInitializePhase3.c)
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
