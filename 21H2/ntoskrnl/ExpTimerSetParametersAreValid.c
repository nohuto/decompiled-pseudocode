/*
 * XREFs of ExpTimerSetParametersAreValid @ 0x14026E548
 * Callers:
 *     ExSetTimer @ 0x14026E2B0 (ExSetTimer.c)
 *     ExpSetTimerObject2 @ 0x14026E4AC (ExpSetTimerObject2.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpTimerSetParametersAreValid(__int64 a1)
{
  return !*(_DWORD *)a1 && *(__int64 *)(a1 + 8) >= -1;
}
