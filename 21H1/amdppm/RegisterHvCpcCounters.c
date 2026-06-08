/*
 * XREFs of RegisterHvCpcCounters @ 0x1C0021740
 * Callers:
 *     <none>
 * Callees:
 *     InitCpcStatesInternal @ 0x1C002BE58 (InitCpcStatesInternal.c)
 */

__int64 __fastcall RegisterHvCpcCounters(__int64 a1)
{
  return InitCpcStatesInternal(a1, RegisterHvFeedbackCountersCallback);
}
