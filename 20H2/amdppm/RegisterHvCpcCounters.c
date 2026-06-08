/*
 * XREFs of RegisterHvCpcCounters @ 0x1C0022A80
 * Callers:
 *     <none>
 * Callees:
 *     InitCpcStatesInternal @ 0x1C002D198 (InitCpcStatesInternal.c)
 */

__int64 __fastcall RegisterHvCpcCounters(__int64 a1)
{
  return InitCpcStatesInternal(a1, RegisterHvFeedbackCountersCallback);
}
