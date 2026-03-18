/*
 * XREFs of ExpTimerSetParametersAreValid @ 0x14027F538
 * Callers:
 *     ExSetTimer @ 0x140275960 (ExSetTimer.c)
 *     ExpSetTimerObject2 @ 0x14027ED1C (ExpSetTimerObject2.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpTimerSetParametersAreValid(__int64 a1)
{
  return !*(_DWORD *)a1 && *(__int64 *)(a1 + 8) >= -1;
}
