/*
 * XREFs of KiCustomAccessRoutine4 @ 0x1404075B0
 * Callers:
 *     CmpEnableLazyFlushDpcRoutine @ 0x14035B330 (CmpEnableLazyFlushDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine4 @ 0x140407590 (KiCustomRecurseRoutine4.c)
 */

__int64 __fastcall KiCustomAccessRoutine4(unsigned int *a1)
{
  return KiCustomRecurseRoutine4(((unsigned __int8)a1 & 3u) + 1, a1);
}
