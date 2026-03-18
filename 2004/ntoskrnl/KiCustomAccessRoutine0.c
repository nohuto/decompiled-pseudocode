/*
 * XREFs of KiCustomAccessRoutine0 @ 0x1404017B0
 * Callers:
 *     ExpTimerDpcRoutine @ 0x14035BC10 (ExpTimerDpcRoutine.c)
 *     FsRtlTruncateSmallMcb @ 0x1405BA110 (FsRtlTruncateSmallMcb.c)
 * Callees:
 *     KiCustomRecurseRoutine0 @ 0x140401790 (KiCustomRecurseRoutine0.c)
 */

__int64 __fastcall KiCustomAccessRoutine0(unsigned int *a1)
{
  return KiCustomRecurseRoutine0(((unsigned __int8)a1 & 3u) + 1, a1);
}
