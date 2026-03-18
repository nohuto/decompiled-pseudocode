/*
 * XREFs of ExpTimerSetParametersAreValid @ 0x1402E1268
 * Callers:
 *     ExpSetTimerObject2 @ 0x1402E0A4C (ExpSetTimerObject2.c)
 *     ExSetTimer @ 0x14033C8D0 (ExSetTimer.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpTimerSetParametersAreValid(__int64 a1)
{
  return !*(_DWORD *)a1 && *(__int64 *)(a1 + 8) >= -1;
}
