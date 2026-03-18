/*
 * XREFs of ExpTimerSetParametersAreValid @ 0x140242E38
 * Callers:
 *     ExpSetTimerObject2 @ 0x14024261C (ExpSetTimerObject2.c)
 *     ExSetTimer @ 0x14035BB10 (ExSetTimer.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpTimerSetParametersAreValid(__int64 a1)
{
  return !*(_DWORD *)a1 && *(__int64 *)(a1 + 8) >= -1;
}
