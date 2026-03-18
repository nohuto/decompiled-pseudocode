/*
 * XREFs of KiCustomAccessRoutine0 @ 0x140400520
 * Callers:
 *     ExpTimerDpcRoutine @ 0x14031E020 (ExpTimerDpcRoutine.c)
 *     FsRtlTruncateSmallMcb @ 0x1405B99F0 (FsRtlTruncateSmallMcb.c)
 * Callees:
 *     KiCustomRecurseRoutine0 @ 0x140400500 (KiCustomRecurseRoutine0.c)
 */

__int64 __fastcall KiCustomAccessRoutine0(unsigned int *a1)
{
  return KiCustomRecurseRoutine0(((unsigned __int8)a1 & 3u) + 1, a1);
}
