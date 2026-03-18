/*
 * XREFs of ExpTimerSetParametersAreValid @ 0x1402D59E8
 * Callers:
 *     ExSetTimer @ 0x1402D5750 (ExSetTimer.c)
 *     ExpSetTimerObject2 @ 0x1402D594C (ExpSetTimerObject2.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpTimerSetParametersAreValid(__int64 a1)
{
  return !*(_DWORD *)a1 && *(__int64 *)(a1 + 8) >= -1;
}
