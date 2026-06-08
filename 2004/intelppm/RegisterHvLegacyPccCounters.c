/*
 * XREFs of RegisterHvLegacyPccCounters @ 0x1C0030670
 * Callers:
 *     <none>
 * Callees:
 *     InitLegacyPccInternal @ 0x1C000DF4C (InitLegacyPccInternal.c)
 */

__int64 __fastcall RegisterHvLegacyPccCounters(__int64 a1)
{
  return InitLegacyPccInternal(a1, (__int64 (__fastcall *)(_QWORD *, _QWORD))RegisterHvFeedbackCountersCallback);
}
