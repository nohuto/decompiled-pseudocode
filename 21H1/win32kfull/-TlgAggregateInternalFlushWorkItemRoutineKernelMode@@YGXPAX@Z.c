/*
 * XREFs of ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YGXPAX@Z @ 0x27B2C2
 * Callers:
 *     <none>
 * Callees:
 *     TlgAggregateFlushTimerCallback @ 0x27B27B (TlgAggregateFlushTimerCallback.c)
 */

void __stdcall TlgAggregateInternalFlushWorkItemRoutineKernelMode(_DWORD *a1)
{
  TlgAggregateFlushTimerCallback((int)a1);
  if ( _InterlockedCompareExchange16((volatile signed __int16 *)(a1[34] + 32), 0, 1) == 2 )
    KeSetEvent((PRKEVENT)(a1[34] + 16), 0, 0);
}
