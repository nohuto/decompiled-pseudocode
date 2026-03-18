/*
 * XREFs of KiCustomAccessRoutine4 @ 0x1404011B0
 * Callers:
 *     CmpEnableLazyFlushDpcRoutine @ 0x140328950 (CmpEnableLazyFlushDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine4 @ 0x140401190 (KiCustomRecurseRoutine4.c)
 */

__int64 __fastcall KiCustomAccessRoutine4(unsigned int *a1)
{
  return KiCustomRecurseRoutine4(((unsigned __int8)a1 & 3u) + 1, a1);
}
