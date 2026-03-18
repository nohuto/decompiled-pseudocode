/*
 * XREFs of KeSetMaximumCountPriQueue @ 0x14051F07C
 * Callers:
 *     ExpWorkQueueManagerThread @ 0x140797760 (ExpWorkQueueManagerThread.c)
 * Callees:
 *     <none>
 */

void __fastcall KeSetMaximumCountPriQueue(__int64 a1, int a2)
{
  if ( !a2 )
    a2 = KeNumberProcessors_0;
  *(_DWORD *)(a1 + 664) = a2;
}
