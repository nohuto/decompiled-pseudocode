/*
 * XREFs of ESM_ShouldQueueWorkItem @ 0x1C0005910
 * Callers:
 *     ESM_RunStateMachine @ 0x1C000529C (ESM_RunStateMachine.c)
 *     ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C00057C8 (ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 * Callees:
 *     Controller_IsRunningWithIrqlRaisedAndTracked @ 0x1C00326B0 (Controller_IsRunningWithIrqlRaisedAndTracked.c)
 */

char __fastcall ESM_ShouldQueueWorkItem(__int64 a1, char a2)
{
  _QWORD *v2; // r14
  char v5; // bl

  v2 = *(_QWORD **)(a1 + 960);
  v5 = 0;
  if ( KeGetCurrentIrql()
    && (a2 || *(_BYTE *)(a1 + 1018) && !(unsigned __int8)Controller_IsRunningWithIrqlRaisedAndTracked(*v2)) )
  {
    return 1;
  }
  return v5;
}
