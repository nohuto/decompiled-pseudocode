/*
 * XREFs of RegisterHvPerfStatesCounters @ 0x1C0032340
 * Callers:
 *     <none>
 * Callees:
 *     InitPerfStatesInternal @ 0x1C0025BB0 (InitPerfStatesInternal.c)
 */

__int64 __fastcall RegisterHvPerfStatesCounters(__int64 a1)
{
  return InitPerfStatesInternal(a1, (int (__fastcall *)(char *, _QWORD))RegisterHvFeedbackCountersCallback);
}
