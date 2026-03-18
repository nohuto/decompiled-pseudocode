/*
 * XREFs of KiCustomAccessRoutine0 @ 0x14042C2D0
 * Callers:
 *     ExpTimerDpcRoutine @ 0x1402566A0 (ExpTimerDpcRoutine.c)
 *     FsRtlTruncateSmallMcb @ 0x1406481F0 (FsRtlTruncateSmallMcb.c)
 * Callees:
 *     KiCustomRecurseRoutine0 @ 0x14042C2B0 (KiCustomRecurseRoutine0.c)
 */

__int64 __fastcall KiCustomAccessRoutine0(unsigned int *a1)
{
  return KiCustomRecurseRoutine0(((unsigned __int8)a1 & 3u) + 1, a1);
}
