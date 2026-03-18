/*
 * XREFs of KiCustomAccessRoutine0 @ 0x140407BB0
 * Callers:
 *     ExpTimerDpcRoutine @ 0x14032C670 (ExpTimerDpcRoutine.c)
 *     FsRtlTruncateSmallMcb @ 0x1405BDC70 (FsRtlTruncateSmallMcb.c)
 * Callees:
 *     KiCustomRecurseRoutine0 @ 0x140407B90 (KiCustomRecurseRoutine0.c)
 */

__int64 __fastcall KiCustomAccessRoutine0(unsigned int *a1)
{
  return KiCustomRecurseRoutine0(((unsigned __int8)a1 & 3u) + 1, a1);
}
