/*
 * XREFs of KiCustomAccessRoutine1 @ 0x140409D10
 * Callers:
 *     IopTimerDispatch @ 0x140501130 (IopTimerDispatch.c)
 * Callees:
 *     KiCustomRecurseRoutine1 @ 0x140409CF0 (KiCustomRecurseRoutine1.c)
 */

__int64 __fastcall KiCustomAccessRoutine1(unsigned int *a1)
{
  return KiCustomRecurseRoutine1(((unsigned __int8)a1 & 3u) + 1, a1);
}
