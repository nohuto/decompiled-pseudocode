/*
 * XREFs of KiCustomAccessRoutine0 @ 0x14040A250
 * Callers:
 *     ExpTimerDpcRoutine @ 0x1402CDD60 (ExpTimerDpcRoutine.c)
 *     FsRtlTruncateSmallMcb @ 0x1405BF6C0 (FsRtlTruncateSmallMcb.c)
 * Callees:
 *     KiCustomRecurseRoutine0 @ 0x14040A230 (KiCustomRecurseRoutine0.c)
 */

__int64 __fastcall KiCustomAccessRoutine0(unsigned int *a1)
{
  return KiCustomRecurseRoutine0(((unsigned __int8)a1 & 3u) + 1, a1);
}
