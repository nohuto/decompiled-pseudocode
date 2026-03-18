/*
 * XREFs of ExpDeleteMutant @ 0x140234B10
 * Callers:
 *     <none>
 * Callees:
 *     KeDeleteMutant @ 0x140234B28 (KeDeleteMutant.c)
 */

__int64 __fastcall ExpDeleteMutant(void *a1)
{
  return KeDeleteMutant(a1);
}
