/*
 * XREFs of KiCustomAccessRoutine0 @ 0x14040A430
 * Callers:
 *     ExpTimerDpcRoutine @ 0x14024C260 (ExpTimerDpcRoutine.c)
 *     FsRtlTruncateSmallMcb @ 0x1405BF8F0 (FsRtlTruncateSmallMcb.c)
 * Callees:
 *     KiCustomRecurseRoutine0 @ 0x14040A410 (KiCustomRecurseRoutine0.c)
 */

__int64 __fastcall KiCustomAccessRoutine0(unsigned int *a1)
{
  return KiCustomRecurseRoutine0(((unsigned __int8)a1 & 3u) + 1, a1);
}
