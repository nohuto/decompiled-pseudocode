/*
 * XREFs of KiCustomAccessRoutine5 @ 0x140409B90
 * Callers:
 *     CmpLazyFlushDpcRoutine @ 0x1402CAE20 (CmpLazyFlushDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine5 @ 0x140409B70 (KiCustomRecurseRoutine5.c)
 */

__int64 __fastcall KiCustomAccessRoutine5(unsigned int *a1)
{
  return KiCustomRecurseRoutine5(((unsigned __int8)a1 & 3u) + 1, a1);
}
