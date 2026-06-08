/*
 * XREFs of RegisterHvPerfStatesCounters @ 0x1C00250C0
 * Callers:
 *     <none>
 * Callees:
 *     InitPerfStatesInternal @ 0x1C002F820 (InitPerfStatesInternal.c)
 */

__int64 __fastcall RegisterHvPerfStatesCounters(__int64 a1)
{
  return InitPerfStatesInternal(a1, RegisterHvFeedbackCountersCallback);
}
